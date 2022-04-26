//Jose Gil Santaella Colon cecs 2203-21
//Patient Bill project
//This is a program that computes a patient's bill for a hospital stay.

#include <iostream>
#include <cstring>
#include "SurgeryClass.h"
#include "PatientAccount.h"
#include "Pharmacy.h"
#include <iomanip>


using namespace std;


int main()
{
    char another;//to hold loop exit variable
    int choice, days;

    string line;
	line.assign(50, '-'); //To print 50 line char to divide the menu

    PatientAccount bill;//Patient Account object

   //Loop for outputting menu info for different patients
    do {

        cout << "Hospital Menu" << endl;
		cout << line << endl;
		cout << "Select the type of surgery" << endl;
		cout << "1. Arm Surgery" << endl;
		cout << "2. Hip Surgery" << endl;
		cout << "3. LowerBack Surgery" << endl;
		cout << "4. Ankles Surgery" << endl;
		cout << "5. Head Surgery" << endl;
		cin >> choice;

		bill.setSurgeryCharge(choice);

    //Nested loop for outputting the medications menu
		do
		{
		    cout << line << endl;
			cout << "Which medications did the patient take? (enter 9 to exit)" << endl;
			cout << "1. Cannabis Treatment" << endl;
			cout << "2. Pain Killers" << endl;
			cout << "3. Blood transfusion" << endl;
			cout << "4. Vitamins " << endl;
			cout << "5. IV" << endl;
			cin >> choice;

			bill.setPharmacyCharge(choice); //object to set the choice of medications

		} while (choice != 9);//sentinel

        cout << line << endl;
		cout << "For how many days will the patient be at the hospital? ";
		cin >> days;
		bill.setDays(days);//object to set the amount of days in hospital stay



		cout << endl << "Report" << endl;
		cout << line << endl;
		cout << setprecision(2) << fixed <<endl;
		cout << "Total days at the hospital: " << bill.getDays() << endl;//object to get the amount of days
		cout << "Hospital daily rate: $" << bill.getDailyRate() << endl;//object to get the daily rate for hospital stay
		cout << "Total amount after check out: $" << bill.getCost() << endl;

		bill.setCharges(0);//object to reset the charges for another patient check-out

		cout << "Do you want to try with another patient? (Y/N) ";
		cin >> another;
		cout << endl << endl;

    } while (another == 'Y' || another == 'y'); //Asks user if it wants to repeat the process



    return 0;
}

