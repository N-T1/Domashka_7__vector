#include "dom_7_vector_new1.h"
#include <iostream>
#include <cmath>
using namespace std;

Vector::Vector(const Vector& obj)
{
    this->Length = new double; // �������� � ���� ������ ��� double � ����������� ���� �������� *obj.Diam (���� ��������� ��������� �� ��� ������� ������)
    *Length = *obj.Length;
    this->x = obj.x;
    this->y = obj.y;
    this->Cos_x = obj.Cos_x;
    this->Cos_y = obj.Cos_y;
    cout << endl << "������ ����������� �����������" << endl;
    cout << "Length ��������� �� �����  " << Length << endl;
    cout << "�������� ����� ����� " << *Length;//<< endl
}

void  Vector::LenPtr()
{
    if (Length == NULL)
    {
        Length = new double;
        *Length = sqrt(pow(x, 2) + pow(y, 2));
        cout << "������ ����������� � ����� ��� ����� ����������� " << endl;//<< endl
        cout << "Length ��������� �� �����  " << Length << endl;
        cout << "�������� ����� ����� " << *Length;//<< endl
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
    cout << endl << "���������� ������� ����� { " << x << " , " << y << " }" << endl;
}