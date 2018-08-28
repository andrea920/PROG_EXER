#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string FN,MI,LN,bd,bm,by,add,em;
    float num;
    cout <<"ENTER YOUR NAME:";
    cin >>FN>>MI>>LN;
    cout <<"ENTER YOUR BIRTHDATE: (mm/dd/yyyy)";
    cin >>bm>>bd>>by;
    cout <<"ENTER YOUR ADDRESS:";
    cin >>add;
    cout <<"ENTER YOUR PHONE NUMBER:";
    cin >>num;
    cout <<"ENTER YOUR EMAIL:";
    cin >>em;
    cout <<"\n\nYour profile:\n" <<LN<<"," <<FN <<MI <<"\n" <<bm <<bd <<by <<"\n" <<add <<"\n" <<num<<"\n" <<em<<"\n";
    
    return 0;
}