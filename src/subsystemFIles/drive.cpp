#include "main.h"

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