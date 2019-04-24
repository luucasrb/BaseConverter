/*
Algoritmo de mudança de bases (C++):

*O algoritmo não verifica os valores de entrada, CERTIFIQUE-SE DE QUE
A ENTRADA SEJA VÁLIDA (símbolos de sua devida base e valores positivos).
**O algoritmo também não é eficiente em termos de custo, pois utiliza
a base 10 como padrão de transformação, ignorando metodos mais eficientes,
porém resolve situações básicas.
***Valores altos podem resultar uma resposta em formato exponencial ou 
arredondamentos, dependendo do compilador usado.
****Feito e testado no Sistema Operacional Windows 8.1 Industry Pro.

Input:  int BASE_ENTRADA {2,...,35}
		string VALUE
		int BASE_SAIDA; {2,...,35}
Output: string FINAL;

Inicio: 06/04/2017- 21:15
Finalização: 08/04/2017- 19:51
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std; 

//função de conversão//
void converte(int in, int out, string value){
	string final; 
	int q, resto; 
	double total=0; //double para maior precisão da função pow()//
	
	//passar o numero de qualquer base (in) para a base 10//
	if (in != 10){
		for (int i=value.size()-1, j=0; i>=0, j<=value.size()-1; i--, j++){
			if (value[i]== '0')
				total+= 0;
			else if (value[i]== '1')
				total += (1 * pow (in, j));
			else if (value[i]== '2')
				total += (2 * pow (in, j));
			else if (value[i]== '3')
				total += (3 * pow (in, j));
			else if (value[i]== '4')
				total += (4 * pow (in, j));
			else if (value[i]== '5')
				total += (5 * pow (in, j));
			else if (value[i]== '6')
				total += (6 * pow (in, j));
			else if (value[i]== '7')
				total += (7 * pow (in, j));
			else if (value[i]== '8')
				total += (8 * pow (in, j));
			else if (value[i]== '9')
				total += (9 * pow (in, j));
			else if (value[i]== 'A')
				total += (10 * pow(in, j));
			else if (value[i]== 'B')
				total += (11 * pow(in, j));
			else if (value[i]== 'C')
				total += (12 * pow(in, j));
			else if (value[i]== 'D')
				total += (13 * pow(in, j));
			else if (value[i]== 'E')
				total += (14 * pow(in, j));
			else if (value[i]== 'F')
				total += (15 * pow(in, j));
			else if (value[i]== 'G')
				total += (16 * pow (in, j));
			else if (value[i]== 'H')
				total += (17 * pow (in, j));
			else if (value[i]== 'I')
				total += (18 * pow (in, j));
			else if (value[i]== 'J')
				total += (19 * pow (in, j));
			else if (value[i]== 'K')
				total += (20 * pow (in, j));
			else if (value[i]== 'L')
				total += (21 * pow (in, j));
			else if (value[i]== 'M')
				total += (22 * pow (in, j));
			else if (value[i]== 'N')
				total += (23 * pow (in, j));
			else if (value[i]== 'O')
				total += (24 * pow (in, j));
			else if (value[i]== 'P')
				total += (25 * pow (in, j));
			else if (value[i]== 'Q')
				total += (26 * pow (in, j));
			else if (value[i]== 'R')
				total += (27 * pow (in, j));
			else if (value[i]== 'S')
				total += (28 * pow (in, j));
			else if (value[i]== 'T')
				total += (29 * pow (in, j));
			else if (value[i]== 'U')
				total += (30 * pow (in, j));
			else if (value[i]== 'V')
				total += (31 * pow (in, j));
			else if (value[i]== 'W')
				total += (32 * pow (in, j));
			else if (value[i]== 'X')
				total += (33 * pow (in, j));
			else if (value[i]== 'Y')
				total += (34 * pow (in, j));
			else if (value[i]== 'Z')
				total += (35 * pow (in, j));
		}
	}
	//se a entrada ja esta em base 10, nao é necessario a conversão inicial//
	//atoi: trata uma cadeia de caracteres como um inteiro//
	else if (in == 10)
		total = atoi(value.c_str());
		
	cout <<endl;
	//passar o numero da base 10 para qualquer outra base (out)//
	if (out != 10){
		do{
			q= total / out;
			resto= (int)total % out; 
			total /= out;
			
			if (resto == 0)
				final += '0';
			else if (resto == 1)
				final += '1';
			else if (resto == 2)
				final += '2';
			else if (resto == 3)
				final += '3';
			else if (resto == 4)
				final += '4';
			else if (resto ==5)
				final += '5';
			else if (resto ==6)
				final += '6';
			else if (resto ==7)
				final += '7';
			else if (resto == 8)
				final += '8';
			else if (resto == 9)
				final += '9';
			else if (resto == 10)
				final += 'A';
			else if (resto == 11)
				final += 'B';
			else if (resto == 12)
				final += 'C';
			else if (resto == 13)
				final += 'D';
			else if (resto == 14)
				final += 'E';
			else if (resto == 15)
				final += 'F';
			else if (resto == 16)
				final += 'G';
			else if (resto == 17)
				final += 'H';
			else if (resto == 18)
				final += 'I';
			else if (resto == 19)
				final += 'J';
			else if (resto == 20)
				final += 'K';
			else if (resto == 21)
				final += 'L';
			else if (resto == 22)
				final += 'M';
			else if (resto == 23)
				final += 'N';
			else if (resto == 24)
				final += 'O';
			else if (resto == 25)
				final += 'P';
			else if (resto == 26)
				final += 'Q';
			else if (resto == 27)
				final += 'R';
			else if (resto == 28)
				final += 'S';
			else if (resto == 29)
				final += 'T';
			else if (resto == 30)
				final += 'U';
			else if (resto == 31)
				final += 'V';
			else if (resto == 32)
				final += 'W';
			else if (resto == 33)
				final += 'X';
			else if (resto == 34)
				final += 'Y';
			else if (resto == 35)
				final += 'Z';
		}while (q !=0);	
		
		//inverter a string e mostrar//
		final = string (final.rbegin(), final.rend());
		cout << "Resultado--> "<<final <<endl;
		cout << "--------------------------------------";
	}
	//se a saida é em base 10, nao é necessario a segunda conversão//
	else if (out == 10){
		cout << "Resultado--> "<< total <<endl;
		cout << "--------------------------------------";
	}
}

int main(){
	int tipo_in, tipo_out;
	string entrada;
	
	cout << "ALGORITMO DE MUDANCA DE BASES\n";
	cout << "--------------------------------------"<<endl;
	cout << "Por favor, apenas entradas VALIDAS\n";
	cout << "Utilizar letras MAIUSCULAS\n";
	cout << "Bases entrada/saida 0 para encerrar.\n";
	cout << "--------------------------------------"<<endl;
	while (true){
		cout << "Base Entrada (2-35): ";
		cin >> tipo_in; 
		if (tipo_in == 0) //entrando com base 0 o programa encerra//
			break;
		cout << "VALOR: ";
		cin >> entrada;
		cout << "Base Saida (2-35): ";
		cin >> tipo_out;
		if (tipo_out == 0) //saindo com base 0 o programa encerra//
			break;
		converte (tipo_in, tipo_out, entrada);
		cout <<endl;
	}
	return 0;
}
