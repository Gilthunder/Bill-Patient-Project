//Jose Gil Santaella Colon cecs 2203-21
//Patient Bill project
#include "Pharmacy.h"

//constructor
Pharmacy::Pharmacy()
{
    treatment = 5000.00;
    painkillers = 99.99;
    blood = 998.98;
    vitamins = 300.00;
    iv = 499.99;

};
//Getter Member Functions
double Pharmacy::getTreatment()
{
	return treatment;
};
double Pharmacy::getPainkillers()
{
	return painkillers;
};
double Pharmacy::getBlood()
{
	return blood;
};
double Pharmacy::getVitamins()
{
	return vitamins;
};
double Pharmacy::getIV()
{
	return iv;
};
