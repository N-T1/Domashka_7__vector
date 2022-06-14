#include <iostream>
#include <cmath>
#include "dom_7_vector_new1.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    Vector V1(2, 3);
    V1.PrintKoord();

    Vector V2(7);
    V2.PrintKoord();
 
    Vector V3;
    V3.PrintKoord();

    Vector V4(V1);
    V4.PrintKoord();
  
}