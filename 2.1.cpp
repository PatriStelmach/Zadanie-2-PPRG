#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    int ostatni_el = 0;

    cout << "Podaj ostatni element szeregu: " << endl;
    cin >> ostatni_el; 
	
	cout << "-----------------------------------------------------------" << endl;

    for (int i = 1; i <= ostatni_el; i++) {
        suma += i;
    }
    cout << "Suma wszystkich elementów szeregu wynosi: " << suma << endl;
    return 0;
}