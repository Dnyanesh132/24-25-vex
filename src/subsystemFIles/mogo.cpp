#include "main.h"

//helper function
//void setIntake(int power) { //intake power (I need to figure out how to reverse and forward)
    //Need to only do one motor and let it reverse ofc
    //figuring out like the triggers 
    //in globals: true is negative and false is positive
  //  intake = power;
   // belt = power;


////TBH IM COPYING THE FORMAT FOR INTAKE I HAVE NO CLUE WHAT IM DONG//////

void setMogo(bool extend) {
    piston = extend;
}

void setMogoSolenoids(bool extend) {
    
    bool extendPiston = false;
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
        extendPiston = !extendPiston;
    }
    setMogo(extendPiston);
    pros.delay(20);
    
}



