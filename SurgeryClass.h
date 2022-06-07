//Jose Gil Santaella Colon cecs 2203-21
//Patient Bill project
#ifndef SURGERYCLASS_H
#define SURGERYCLASS_H


class SurgeryClass
{
    private:
        double arm,
               hip,
               LowerBack,
               ankles,
               head;


    public:
        SurgeryClass();

        double getArm();
        double getHip();
        double getLowerBack();
        double getAnkles();
        double getHead();


};

#endif // SURGERYCLASS_H
