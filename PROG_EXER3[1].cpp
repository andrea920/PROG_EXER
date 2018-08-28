// Ma. Andrea G. Perido
#include <iostream>
using namespace std;
int main ()
{
    float m1,m2,d,k,F;
    k= 0.0000000667;
    F= k*((m1*m2)/(d*d));
    
    cout << "m1=";
    cin >> m1;
    cout << "m2=";
    cin >> m2;
    cout << "d=";
    cin >> d;
    cout << "F=" <<F;
    return 0;
}