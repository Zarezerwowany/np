#include <iostream>
use namespacing std;

int wylicz(int a, int b){
    return a+b;
}
int main(){
    cout << "Funkcja obliczeniowa.";
    int a,b;
    cin >> a;
    cin >> b;
    wylicz(a,b);
    return 0;
}
