#include "dom_7_vector_new1.h"
#include <iostream>
#include <cmath>
using namespace std;

Vector::Vector(const Vector& obj)
{
    this->Length = new double; // выдел€ет в куче пам€ть дл€ double и прописывает туда значение *obj.Diam (этот указатель указывает на эту область пам€ти)
    *Length = *obj.Length;
    this->x = obj.x;
    this->y = obj.y;
    this->Cos_x = obj.Cos_x;
    this->Cos_y = obj.Cos_y;
    cout << endl << "¬ызван конструктор копировани€" << endl;
    cout << "Length указывает на адрес  " << Length << endl;
    cout << "«начение длины равно " << *Length;//<< endl
}

void  Vector::LenPtr()
{
    if (Length == NULL)
    {
        Length = new double;
        *Length = sqrt(pow(x, 2) + pow(y, 2));
        cout << "¬ызван конструктор с одним или двум€ параметрами " << endl;//<< endl
        cout << "Length указывает на адрес  " << Length << endl;
        cout << "«начение длины равно " << *Length;//<< endl
    }

}

double Vector::Ln()
{
    if (Length != NULL)
    {
        return  *Length;
    }
    else
    {
        Length = new double;
        *Length = sqrt(pow(x, 2) + pow(y, 2));
        return  *Length;
    }

}

double Vector::Cosx()
{
    Cos_x = x / sqrt(pow(x, 2) + pow(y, 2));
    return Cos_x;
}

double Vector::Cosy()
{
    Cos_y = y / sqrt(pow(x, 2) + pow(y, 2));
    return Cos_y;
}

void Vector::PrintKoord()
{
    cout << endl << " оординаты вектора равны { " << x << " , " << y << " }" << endl;
}