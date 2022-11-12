#include <iostream>

using namespace std;

struct SP
{
    double real;
    double img;
};
SP SetSP(double real, double img);
SP AddSP(SP C1, SP C2);
SP SubSP(SP C1, SP C2);
void DisplaySP(SP C);
int main(void)
{
    SP C1, C2, C3, C4;
    C1 = SetSP(1.0, 2.0);
    C2 = SetSP(-3.0, 4.0);
    cout << "\nSo phuc thu nhat:";
    DisplaySP(C1);
    cout << "\nSo phuc thu hai:";
    DisplaySP(C2);
    C3 = AddSP(C1, C2);
    C4 = SubSP(C1, C2);
    cout << "\nTong hai so phuc nay:";
    DisplaySP(C3);
    cout << "\nHieu hai so phuc nay:";
    DisplaySP(C4);
    return 0;
}

SP SetSP(double real, double img)
{
    SP tmp;
    tmp.real = real;
    tmp.img = img;
    return tmp;
}
SP AddSP(SP C1, SP C2)
{
    SP tmp;
    tmp.real = C1.real + C2.real;
    tmp.img = C1.img + C2.img;
    return tmp;
}
SP SubSP(SP C1, SP C2)
{
    SP tmp;
    tmp.real = C1.real - C2.real;
    tmp.img = C1.img - C2.img;
    return tmp;
}
void DisplaySP(SP C)
{
    cout << C.real << " i " << C.img;
}