/*
#include <iostream>

using namespace  std;

* 
// ATIVIDADE 01
*
int main() {
	
	int n1, n2;
	cout << "Um numero: ";
	cin >> n1;

	cout << "Um outro numero: ";
	cin >> n2;

		if (n1 > n2) {
			cout << "o primeiro numero e maior";
	}

		else if (n1 < n2) {
			cout << "o segundo número e maior";
	}

		else {
			cout << "Eles sao iguais!";
	}
}
*/

/**
* //ATIVIDADE 02
* 
* 
#include <iostream>

using namespace std;

int main() {
	int estoque;

	cout << "Quantos produtos temos no estoque? ";
	cin >> estoque;

	cout << "\n===============================\n";
	cout << "Situacao do Estoque:\n";

	if (estoque >= 100) {
		cout << "Quantidade suficiente no estoque.\n";
	}
	else if (estoque >= 50) {
		cout << "Atencao ao estoque. Estoque abaixo de 100 unidades.\n";
	}
	else {
		cout << "Faca um novo pedido e reabasteca o estoque.\n";
	}

	cout << "===============================\n";

	return 0;
}
*/

// ATIVIDADE 03

#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "Diga um numero: ";
	cin >> n;

	if (n > 0) {
		cout << "O " << n << " e positivo";
	}

	else if (n < 0) {
		cout << "O " << n << " e negativo";
	}

	else {
		cout << "O numero e igual a zero";
	}

}
