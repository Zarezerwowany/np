#include <iostream>
use namespacing std;

int wylicz(int a, int b){
    return a+b;
}
int main(){
    cout << "Funkcja obliczeniowa.";
    int a,b;
    a = 5;
    b = 8;
    wylicz(a,b);
    return 0;
}
