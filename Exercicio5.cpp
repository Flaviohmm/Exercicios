#include <iostream>

using namespace std;

int main()
{
	
	float CustoFabrica,CustoFinal;
	
	cout << "Informe o custo de fabrica do veiculo: \n";
	cin >> CustoFabrica;
	
	
	CustoFinal = CustoFabrica+(0.12*CustoFabrica)+(0.45*CustoFabrica);
	
	
	cout << "O custo para o consumidor final e' de: "<<CustoFinal;
	
	return 0;
}
