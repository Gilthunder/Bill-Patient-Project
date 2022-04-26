//Jose Gil Santaella Colon cecs 2203-21
//Patient Bill project
#include "SurgeryClass.h"
#include <iostream>

using namespace std;

//Constructor
SurgeryClass::SurgeryClass()
{
    arm = 4075.00,
    hip = 3225.00,
    LowerBack = 5991.99,
    ankles = 2500.25,
    head = 9999.99;
}
//Getter Member Functions

double SurgeryClass::getArm()
{
	return arm;
}
double SurgeryClass::getHip()
{
	return hip;
}
double SurgeryClass::getLowerBack()
{
	return LowerBack;
}
double SurgeryClass::getAnkles()
{
	return ankles;
}
double SurgeryClass::getHead()
{
	return head;
}
