#include <iostream>

using namespace std;

int main()
{
	
	float C,F;
	
	cout << "\n\tPrograma de conversao de temperatura: ";
	
	cout << "\nLeia a temperatura em Celsius: ";
	cin >> C;
	
    F = (9*C+160)/5;
    
    cout << "\nO valor em Fahrenheit e': "<<F;
    
    return 0;
	
}
