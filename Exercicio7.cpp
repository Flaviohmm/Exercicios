#include <iostream>

using namespace std;

int main()
{
	string nome_vend;
	float num_carros,valor_total,Salario_vend;
	
	cout << "\n\tCalculo do salario do vendedor ";
	
	cout << "\nNome do Vendedor: ";
	cin >> nome_vend;
	
	cout << "\nNumero de Carros: ";
	cin >> num_carros;
	
	cout << "\nValor total de Vendas: ";
	cin >> valor_total;
	
	Salario_vend = 500 + 50*num_carros + 0.05*valor_total;
	
	cout << "\nO vendedor ganhou R$: "<< Salario_vend;
	
	return 0;
}
