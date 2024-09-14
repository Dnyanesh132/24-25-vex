#include "main.h"

//setting up motors-

/*
PLEASE KEEP IN MIND FOR THE FUTURE THAT I NEED TO CHANGE THE VALUES FOR BOTH CARTRIDGES AND  direction
Also I need to learn pnuematics...

*/

pros::Motor intake(1, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS); 
//(+- Port , Gearset (rpm), backwards/forwards, encoder units (a.k.a counting stuff))

pros::Motor belt(2, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);

//left drive
pros::Motor driveLeftFront(3, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftBack(4, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftBackTop(5, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);

//right drive
pros::Motor driveRightFront(6, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightBack(7, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightBackTop(8, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);

//controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//pnuematics
//NEED TO CHECK LATER I HAVE NO CLUE!!!
pros::ADIDigitalOut piston('A'); //A is like the port it should be plugged into...? idk
    

//sensors 
// pros::ADIDigitalIn autonSelector(autonSelectorPort); AUTON SELECTOR
// pros::Imu imuObj(imuPort);   IMU FOR AUTON
//MAY LATER IMPLEMENT TRACKING WHEELS
