#include <iostream>

using namespace std;

int main()
{
	
	int n1,n2,n3,n4,media;
	
	cout << "\n\tMedia de 4 numeros inteiros \n";
	
	cout << "\nDigite o primeiro numero: ";
	cin >> n1;
	
	cout << "\nDigite o segundo numero: ";
	cin >> n2;
	
	cout << "\nDigite o terceiro numero: ";
	cin >> n3;
	
	cout << "\nDigite o quarto numero: ";
	cin >> n4;
	
	media = (n1+n2+n3+n4)/4;
	  
	cout << "\n\tA media dos 4 numeros inteiros e' de: "<<media;
	
	return 0;
}
