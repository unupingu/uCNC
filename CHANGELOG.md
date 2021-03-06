![GitHub Logo](https://github.com/Paciente8159/uCNC/blob/master/docs/logo.png?raw=true)

# µCNC
µCNC - A universal CNC firmware for microcontrollers

# Changelog

## [1.1.1] - Unreleased

### Changed
  - improved laser mode to be compliant to Grbl's laser mode. Laser mode also has auto shutdown feature when motion stops #29
  - checks if DSS setting value is valid #30
  - improved fast math functions (more stability) and added new fast math pow2 function #33

### Fixed
  - coolant/mist on/off functions and overrides #28
  - fixed parser active modal groups report #28
  - fixed active tools report #28
  - fixed DSS oversampling that was not reseted after motion end #30
  - fixed probing ISR tripping at startup by forcing probe_isr_disable after mcu_init #32


## [1.1.0] - 2020-08-09

Version 1.1.0 comes with many added features and improvements over the previous version. It also fixes many of the bugs and limitations of the previous implementation. These are:

### Added
  - new planner mode (linear actuator driven) that can be enabled via config file. This plans acceleration and deceleration based on the motion change in the linear actuators and not the cartesian axis. This should be advantageous on mechanically heavy machines. Also an option to enforce cold start motions (if any linear actuator starts at velocity 0 all other go to a full stop when ending the previous move - hybrid G61 and G61.1) (#23)
  - new backlash compensation (enabled via config file) with configurable via parameters `$140´(X), `$141´(Y), `$142´(Z), `$143´(A), `$144´(B) and `$145´ (C) (#23)
  - new axis skew compensation (enabled via config file)  with configurable via parameters `$37´(XY), `$38´(XZ) and `$39´(YZ) (#23)
  - new DSS (dynamic step spread) algorithm (similar to Grbl's AMASS (enabled via config file). This distributes step execution at lower step rates so that the vibration noise produced is reduced. (#22) (#18)
  - new STM32F10x HAL (#15). Although not all features are available it is usable. Boardmap for blue pill board available.

### Changed
  - modified distribution of main (to follow #15)
  - improved C99 standard compliance of code
  - new completely redesigned parser/gcode interpreter (easier to debug). A single functions is called to read and execute both gcode and grbl commands. (#21)
  - complete active modal codes report (#20)
  - improved separation of comment message processing and command echo (debug purposes only)

### Fixed
  - fixed AVR HAL pwm generation was not working for all channels. Also analog reading is now available. (#25) 
  - fixed overflow serial error that occur if 128 bytes (Grbl's limit) were sent to the buffer.
  - fixed several compilation errors with other configurations
  - fixed avr mapfile for grbl

## [1.0.0] - 2020-07-30

### Changed
  - modified makefile and instructions for AVR
  - improved soft polling of input limits and control pins (#11)
  - improved HAL design for future microcontrollers (#13)

### Fixed
  - fixed parsing error in check mode (planner position not updated after linear motions)
  - fixed feed override caused feed to go to 0 above 180% feed override value
  - change macro and library dependencies so that the option for fast Sqrt function works (AVR problem only)
  - fixed feed issue while G20(inches) was active that made the internal feed state value to always be converted from inches to mm even if not explicitly declared in the gcode command. This caused the feed rate to decay to 0. (#16)
  - fixed jog state that was permanently on after a finished (not aborted) jog motion. New jog commands were also not accepted while in this state (#19)
  - fixed parsing of reset commands ($RST=) that accepted non regular/incomplete forms of the command (#14)
  - fixed README
  - fixed devCpp project file (compilation errors) 

## [1.0.0-rc] - 2020-07-11

### Added
  - added possibility of changing values og G28 and G30 commands via G10 L2 P28 and G10 L2 P30.
  - added configuration for using software pulling input limit/control pins

### Changed
  - configuration now simplified (choose board only and the mcu is selected to match the board)

### Fixed
  - fixed code without probe
  - fixed code without spindle
  - compliance to strict-prototype functions

## [1.0.0-beta.2] - 2020-02-09

### Added
  - added AVR support by adding external interrupt pins to the limits and control pins range
  - new dual drive axis support with self squaring homing motion and locking of one stepper in the interpolator stage with the addition of two mirror step pins (with minimal performance loss)
  - added initial laser mode support
  - new filter to limits ISR to support dual drive auto squaring with IO overlapping (shared limit switches)

### Changed
  - complete HAL redesigned to allow independent function pins
  - new generic AVR HAL implementation
  - modified system exec_flags to prevent unnecessary locks
  - modified cartesian kinematics (configurable) to fit several types of machines (without the need to code a full kinematics)
  - separated the mcu and board now have individual configuration files
  - updated README.md to reflect changes of beta.2

### Fixed
  - fixed bug introduced in the beta patch to the homing motion (no limit_flag)
  - minor modification of mc_arc to prevent error on non existent axis
  - adapted protocol to send a minimum of 3 axis coordinates (yield error on interface with OpenCNCPilot and probably other software too)
  - fixed probe enable and disable functions (now use direct IO on AVR)

## [1.0.0-beta] - 2020-02-04

### Added
  - added initial TLO (tool length offset)
  - added support for new motion modes (G61.1 and G64)
  - added initial laser mode support
  - added CHANGELOG.md

### Changed
  - modified parser coordinate calculation and non modal gcodes handling so the remaining code executes as it should after these commands
  - redesigned parameters now loaded directly from eeprom and reduced ram usage (about 10% on Arduino UNO)
  - planner now holds up to 15 motions (stable no memory overflow)
  - redesigned spindle control to modify pwm according to motion (used in laser mode)
  - simplified step ISR functions (faster execution times - under 23ms for 3 stepper motors)
  - cleaned cnc_doevents() and some real-time commands functions handling

### Fixed
  - fixed settings version compare operation that caused eeprom reset at power up

## 1.0.0-alpha.3 - 2020-02-01

### Added
  - initial versioning system (Semantic Versioning)
  - can now process custom messages on comments and echo them (as explained in RS274NGC)
  - added dummy user transformation functions to kinematics
  - motion control probing (G38.x commands)
  - new mcu erase eeprom function
  - added startup blocks functionalities
  - new build version info file
  - added state "Check" to status report
  - spindle delays after start/stop on hold state and motion exact stop mode on spindle speed change

### Changed
  - redesigned the real-time commands response system
  - several modifications to serial functions (new ISR read char, new EOL char and overflow error detection mechanics). Also char to upper and other char processing stages moved from ISR to make it more slim
  - more optimizations on the serial ISR functions
  - interpolator blocks are no longer monitored (they are overwritten on the fly when computing new planner block)
  - changed mc_dwell resolution to 0.1s (less interrupts on the stepper ISR)
  - redesigned settings with crc checksum on all cnc and parser parameters
  - redesigned command echo with char indication parser error
  - added several escapes in loops with cnc_doevent() (avoid locks and exit loops on system abort)
  - interpolator buffer management optimizations
  - new strategy to handle startup blocks by serial read functions redirection
  - small planner buffer optimizations
  - several small optimizations regarding volatile variables

### Fixed
  - parser fixed by repositioning the commands discard function from the main loop to the parser internals and running only when needed (this would cause elimination of a hole line of unprocessed g-code after a line with error had been completely read by parser)
  - arc motion control generator (G2, G3 commands) had several errors caused by bad ABS macro math function definition (utils.h) and the incremental error compensation stage
  - planner forces motions with dwells to start with zero speed (so stop motion previous to dwell is executed)
  - improved stability that randomly caused locks
  - fixed serial extended ascii problem
  - fixed bug on feed overrides that had no effect if a single line was on the interpolator/planner buffer
  - fixed spindle pwm (MAX speed set output to 0)
  - fixed planner acceleration (error on angle factor calculation between vectors)
  - fixed gcode lines parsing error on Hold (they would return error)
  - fixed VERY STUPID bug that caused no error on virtual mcu but made avr mcu eeprom function not work properly
  - fixed EXEC_FLAGS to fix locked state behavior

## 1.0.0-alpha.2 - 2020-01-25

### Added
  - initial versioning system (Semantic Versioning)

### Changed
  - more modifications to the mcu functions file for AVR/atmega family devices

## 0.01a - (this should be 1.0.0-alpha) - 2020-01-25

### Added
  - initial mcumap for Arduino Mega - Rambo board

### Changed
  - modified mcumap for generic pins
  - modified mcu functions file for AVR to be more compatible with the atmega family devices

### Fixed
  - coolant/Mist turn on/off

## 0.01 - Pre-release version - 2020-01-23

### Initial release

[1.1.1]: https://github.com/Paciente8159/uCNC/releases/tag/v1.1.1
[1.1.0]: https://github.com/Paciente8159/uCNC/releases/tag/v1.1.0
[1.0.0]: https://github.com/Paciente8159/uCNC/releases/tag/v1.0.0
[1.0.0-rc]: https://github.com/Paciente8159/uCNC/releases/tag/v1.0.0-rc
[1.0.0-beta.2]: https://github.com/Paciente8159/uCNC/releases/tag/v1.0.0-beta.2
[1.0.0-beta]: https://github.com/Paciente8159/uCNC/releases/tag/v1.0.0-beta
