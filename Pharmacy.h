//Jose Gil Santaella Colon cecs 2203-21
//Patient Bill project
#ifndef PHARMACY_H
#define PHARMACY_H


class Pharmacy
{
    private:
        double treatment,painkillers,blood,vitamins,iv;


    public:
        Pharmacy();
        double getTreatment();
		double getVitamins();
		double getPainkillers();
		double getBlood();
		double getIV();


};

#endif // PHARMACY_H
