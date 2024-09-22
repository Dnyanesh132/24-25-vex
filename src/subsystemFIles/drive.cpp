#include "main.h"

pros::ADIGyro gyro('C', 1)  //USING THE IMU FIX PORT LATER 
//FIX LATER/// WHAT THE HELL IS OUR GRYO SCALE? gyro(port, scale)
//scale it up so for the gyro thingy it returns ur angle * 10, some gryos are weird..

//using those functions

//Helper functions (SO WE DONT GOTTA COPY AND PASTE ALL THE TIME)
void setDrive(int left, int right) {
    //left side
    driveLeftFront = left;
    driveLeftBack = left;
    driveLeftBackTop = left;

    //right side
    driveRightFront = right;
    driveRightBack = right;
    driveRightBackTop = right;
}

//VVV being used in auton
void resetDriveEncoders() {
    driveLeftBack.tare_position();
    driveLeftFront.tare_position();
    driveRightBack.tare_position();
    driveRightFront.tare_position();
}

void setDriveMotors() {
   int leftJoyStick = controller.get.analong(pros::E_Controller_ANALOG_LEFT_Y);
   int rightJoyStick = controller.get.analong(pros::E_Controller_ANALOG_RIGHT_Y);
   //analong for joysticks and digital for buttons
   //voltage to set motors is -127 to 127
   //and inputs from joystick is also -127 to 127

   //making a controller deadzone (within this area nothing happens) --> ask driver later for input
   if (abs(leftJoystick) < 10) {
    leftJoyStick = 0;
   }

   if (abs(rightJoystick) < 10) {
    rightJoyStick = 0;
   }

   setDrive(leftJoystick, rightJoystick); //defining function

   

   
   /*
    //setDrive(0,0);//left sidedriveLeftFront = 0; driveLeftBack = 0;driveLeftBackTop = 0;//right sidedriveRightFront = 0;driveRightBack = 0;driveRightBackTop = 0;
    */
}

//averages everything
double averageDriveEncoderValue() {
    return (fabs(driveLeftFront.get_position()) + fabs(driveLeftBack.get_position()) + 
    fabs(driveRightFront.get_position()) + fabs(driveRightBack.get_position())) / 4;
}

//autonomous
void translate(int units, int voltage) {
    //defines a direction depending on units provided
    int direction = abs(units) / units; //either -1 or 1
    
    //reset motor encoder- reset to 0 and then go more
    resetDriveEncodeers();
    gyro.reset();

    //drive forward until units are reached
    while(averageDriveEncoderValue < final(units)) { 
        setDrive(voltage * direction + gyro.get_value(), voltage * direction - gyro.get_value());
        //using gyro to like adjust in case we hit something.... I could possibly divide if overcorrecting..
        pros::delay(10);
    }

    //brief brake
    setDrive(-10 * direction,-10 * direction);
    pros::delay(50); // (this can vary depending on heavy our bot is..)
    //set drive back to nuetral
    setDrive(0,0);

}