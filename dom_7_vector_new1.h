#ifndef DOM_7_VECTOR_NEW1_H
#define DOM_7_VECTOR_NEW1_H
#include <iostream>
using namespace std;

class Vector
{
    //private:
    double* Length;
    double x;
    double y;
    double Cos_x;
    double Cos_y;

    void LenPtr();
public:

    Vector()  // конструктор по умолчанию
    {
        Length = NULL;
        x = 0;
        y = 0;
        Cos_x = 0;
        Cos_y = 0;
        cout << endl << "¬ызван конструктор по умолчанию " << endl;
        cout << "Length указывает на адрес  " << Length << endl;
        cout << "«начение длины равно " << (int)Length;//<< endl // приведение типов
    }

    Vector(double x, double y) :x(x), y(y) // конструктор инициализирующий
    {
        LenPtr();
    }

    Vector(double x)  // конструктор  с параметрами
    {
        this->x = x;
        y = 0;
        Cos_x = 1;
        Cos_y = 0;
        LenPtr();
    }

    Vector(const Vector& obj); // конструктор  копировани€

    double Ln();
    double Cosx();
    double Cosy();
    void PrintKoord();

    ~Vector()
    {
        if (Length != NULL)
        {
            delete Length;
        }
        cout << endl << "¬ызван деструктор " << endl;
        cout << "Length указывает на адрес  " << Length << endl;
        if (Length != NULL)
        {
            cout << "«начение длины равно " << *Length << endl;
        }
    };
};


#endif
