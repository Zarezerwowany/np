#include <iostream>
use namespacing std;

int dodaj(int a, int b){
    return a+b;
}
int main(){
    cout << "Funkcja obliczeniowa.";
    int a,b;
    cin >> a;
    cin >> b;
    dodaj(a,b);
    return 0;
}
