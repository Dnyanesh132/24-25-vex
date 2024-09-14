#include "main.h"

void opcontrol() {
    while (true) {
        killtask();
        //kill previoustask at start
        // PLEASE ADD //
        //I ADDED THIS JUST TO SEE HOW GIT CHANGES//

    //some code to control drive-
    setDriveMotors();

    //some code to control intake/belt-
    setIntakeMotors();

    //some code to control mogo
    //NEED TO CHECK OVER MY CODE HERE
    // HOW DO YOU DO PNUEMATICS!!!
    setMogoSolenoids();

    pros::delay(10); //good to add delay becuz..
    }
}