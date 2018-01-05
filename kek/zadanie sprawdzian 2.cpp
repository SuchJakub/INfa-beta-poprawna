#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int liczba;
int main()
{
    srand(time(NULL));
liczba=rand()%40+10;
cout<<liczba<<endl;
if (liczba%2==1 && liczba>=0){
    cout<<"Nieparzysta liczba calkowita dodatnia";
} else cout<<"To nie jest  nieparzysta liczba calkowita dodatnia";








    return 0;
}
