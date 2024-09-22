#include "main.h"

//HELPER functions
void setDRIVE(int left, int right);

void resetDriveEncoders();
double averageDriveEncoderValue();
//declaring functions

void setDriveMotors();

//autonomous sections
void translate(int units, int voltage); //coordinate plane system
