#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int a,b,factorial;

    cout << "Este programa calculara el factorial del numero entero que ingrese \nPor favor ingrese su numero " <<endl;
    cin >> a;
    factorial=1;
    for (b=1 ; b<=a ; b++)
    {
         factorial=b*factorial;
    }
    
    cout << "El factorial del numero ingresado es " <<factorial<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
