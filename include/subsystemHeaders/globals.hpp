//global going to hold motors/controllers (stuff you want global access to)
//here we JUST DECLARE and initialize in cpp file
#include "main.h"


//Setting up our motors

extern pros::Motor intake;  //extern = (across files) --> declaring that there is a intake motor
                            //which will later be used in our cpp file (defined)
extern pros::Motor belt;


/// HELPEHEEPLELPE
//LMFAO HOW DO U DO PNUEMATICS!?!?
extern pros::ADIDigitalOut pneumaticOne;
extern pros::ADIDigitalOut pneumaticTwo;

//leftside drive
extern pros::Motor driveLeftBackTop;
extern pros::Motor driveLeftBack;
extern pros::Motor driveLeftFront;

//right ride drive
extern pros::Motor driveRightBackTop;
extern pros::Motor driveRightBack;
extern pros::Motor driveRightFront;

//controller
extern pros::Controller controller;

//miscellaneous
//extern pros::ADIGyro gyro;
extern pros::Imu imu_sensor;
