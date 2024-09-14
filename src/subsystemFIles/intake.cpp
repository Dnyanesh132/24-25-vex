#include "main.h"

//helper function
void setIntake(int power) { //intake power (I need to figure out how to reverse and forward)
    //Need to only do one motor and let it reverse ofc
    //figuring out like the triggers 
    //in globals: true is negative and false is positive
    intake = power;
    belt = power;
}

//driver controller functions
void setIntakeMotors(int power) {
    //bottom trigger intakes and top trigger outtakes
    //link belt to the same thigies

    int intakePower = 127*(controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) -
     controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));  
     //maybe fix l1/l2 later..
     //also this code acts like 127* ( 1 - 0) = 127 OR 127*(0-1) = -127 (max speds)
    setIntake(intakePower);
    /*
    if(controller.get.digital(pros::E_CONTROLLER_DIGITAL_L2)) 
        intakePower = -127; //negative max sped
    else if (controller.get.digital(pros::E_CONTROLLER_DIGITAL_L1)) 
        intakePower = 127; //positive max sped
    setIntake(intakePower);

    INEFFICIENT CODE
    */


} //only one motor wil be set
