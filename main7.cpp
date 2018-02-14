#include <iostream>

using namespace std;
int menu,a,b,c;

int main()
{
    cout << "Program by Bartosz: v0.1" << endl;
    cout << "Kolejna linijka kodu :)" << endl;
    cout << "Another line of code :) " << endl;
    cout << "Wybierz opcje: " << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cin>> menu;
    switch(menu)
    {
        case 1: cout<<"Wpisz pierwsza liczbe a po spacji druga, kazda potwierdzaj enterem." ;cin>> a; cin >>b; c=a+b; cout<<c; break;

        case 2: cout<<"Wpisz pierwsza liczbe a po spacji druga, kazda potwierdzaj enterem.";cin>> a; cin >> b; c=a-b; cout<<c; break;

    }
    return 0;
}
