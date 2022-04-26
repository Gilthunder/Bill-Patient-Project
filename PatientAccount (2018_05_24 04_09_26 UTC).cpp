//Jose Gil Santaella Colon cecs 2203-21
//Patient Bill project
#include "PatientAccount.h"
#include <string>
#include <iostream>
using namespace std;
//constructor
PatientAccount::PatientAccount()
{

    days = 1;   //Days hospitalized
    dailyrate = 299.99; //Daily Rate for stay
    charges = 0.0;
};
PatientAccount::PatientAccount(int dy, double dr,double price)
{
    days = dy;
	dailyrate = dr;
	charges = price;

}

//Setter Function Members
void PatientAccount::setSurgeryCharge(int choice)
{
	if (choice == 1)
		charges += charge2.getArm();
	else if (choice == 2)
		charges += charge2.getHip();
	else if (choice == 3)
		charges += charge2.getLowerBack();
	else if (choice == 4)
		charges += charge2.getAnkles();
	else if (choice == 5)
		charges += charge2.getHead();
}
void PatientAccount::setPharmacyCharge(int choice)
{
	if (choice == 1)
		charges += charge1.getTreatment();
	else if (choice == 2)
		charges += charge1.getPainkillers();
	else if (choice == 3)
		charges += charge1.getBlood();
	else if (choice == 4)
		charges += charge1.getVitamins();
	else if (choice == 5)
		charges += charge1.getIV();
}

void PatientAccount::setDays(int dy)
{

    days = dy;

}

void PatientAccount::setDailyRate(double dr)
{
     dailyrate = dr;
}

void PatientAccount::setCharges(double amount)
{
    charges = amount;
}

//Getter Function Members


int PatientAccount::getDays()
{
    return days;
}
double PatientAccount::getDailyRate()const
{
    return dailyrate;
}

double PatientAccount::getCharges()
{
    return charges;
}
double PatientAccount::getCost()
{
	return dailyrate * days + charges;
}
