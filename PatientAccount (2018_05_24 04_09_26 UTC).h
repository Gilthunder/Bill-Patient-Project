//Jose Gil Santaella Colon cecs 2203-21
//Patient Bill project

#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
#include "SurgeryClass.h"// To update surgery charges
#include "Pharmacy.h" //To update pharmacy charges



class PatientAccount
{
    private:
        int days;
        double dailyrate;
        double charges;
        Pharmacy charge1;//Pharmacy object variable
        SurgeryClass charge2;//Surgery object variable

    public:
        PatientAccount();
        PatientAccount(int, double, double);
        void setDays(int);
        void setDailyRate(double);
        void setCharges(double);
        void setPharmacyCharge(int);
        void setSurgeryCharge(int);

        int getDays();
        double getDailyRate()const;
        double getCharges();
        double getCost();


};

#endif // PATIENTACCOUNT_H
