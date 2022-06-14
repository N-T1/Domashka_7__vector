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

    Vector()  // ����������� �� ���������
    {
        Length = NULL;
        x = 0;
        y = 0;
        Cos_x = 0;
        Cos_y = 0;
        cout << endl << "������ ����������� �� ��������� " << endl;
        cout << "Length ��������� �� �����  " << Length << endl;
        cout << "�������� ����� ����� " << (int)Length;//<< endl // ���������� �����
    }

    Vector(double x, double y) :x(x), y(y) // ����������� ����������������
    {
        LenPtr();
    }

    Vector(double x)  // �����������  � �����������
    {
        this->x = x;
        y = 0;
        Cos_x = 1;
        Cos_y = 0;
        LenPtr();
    }

    Vector(const Vector& obj); // �����������  �����������

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
        cout << endl << "������ ���������� " << endl;
        cout << "Length ��������� �� �����  " << Length << endl;
        if (Length != NULL)
        {
            cout << "�������� ����� ����� " << *Length << endl;
        }
    };
};


#endif
