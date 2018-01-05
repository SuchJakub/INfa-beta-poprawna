#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
string imie; int liczba; int proby ;
int main()
{
 int populacja=1;  int godzin=0;

 while (populacja<=1000000000)
 {
     godzin++;
     populacja=populacja*2;
     cout<<"Minelo godzin:"<<godzin;
     cout<<" Populacja wynosi:"<<populacja<<endl;

 }






    return 0;
}
