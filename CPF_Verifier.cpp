#include <iostream>
#include <locale>
 
using namespace std;


int main(){
	string cpf = "";
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite seu CPF (formato 000.000.000-00): ";
	cin >> cpf;
	if (cpf.length() != 14){
  	cout << "CPF inv�lido. Certifique-se de digitar no formato 000.000.000-00" << endl;
	}


	string str = cpf.substr(0,3);
	str = str + cpf.substr(4,3);
	str = str + cpf.substr(8,3);
	
	int verif1 = cpf[12]-'0';
	int verif2 = cpf[13]-'0';
	
	
	// 1ª Verificação
	int mult = 10;
	int soma = 0;
	
	for(int i=0; i<str.length(); i++){
		soma += (mult*(str[i]-'0'));	
		mult--;
	}
	
	int resto1 = (soma*10)%11;
	
	// 2ª Verificação
	mult = 11;
	soma = 0;
	for(int i=0; i<str.length()+1; i++){
		if(mult == 2){
			soma += (mult*(cpf[12]-'0'));
		}else{
		soma += (mult*(str[i]-'0'));	
	}
		mult--;	
	}
	
	int resto2 = (soma*10)%11;
	
	//Validador de CPF
	bool valido = true;
	if(resto1 == verif1 && resto2 == verif2){
		cout << "CPF V�LIDO" << endl;
		valido = true;
	}else{
		cout << "CPF INV�LIDO" << endl;
		valido = false;
	}
 
 	//Localidade do CPF
 	if(valido == true){
		 
	 	int locDig = cpf[10]-'0';
	 	cout << "A localidade do CPF �: ";
		switch(locDig){
			case 0 : 
				cout << "Rio Grande do Sul";
				break;
			case 1 :
				cout << "Distrito Federal, Goi�s, Mato Grosso, Mato Grosso do Sul e Tocantins";
				break;
			case 2 :
				cout << "Amazonas, Par�, Roraima, Amap�, Acre e Rond�nia";
				break;
			case 3:
				cout << "Cear�, Maranh�o e Piau�";
				break;
			case 4:
				cout << "Para�ba, Pernambuco, Alagoas e Rio Grande do Norte";
				break;
			case 5: 
				cout << "Bahia e Sergipe";
				break;
			case 6:
				cout << "Minas Gerais";
				break;
			case 7: 
				cout << "Rio de Janeiro e Esp�rito Santo";
				break;
			case 8: 
				cout << "S�o Paulo";
				break;
			case 9:
				cout << "Paran� e Santa Catarina";
				break;
			default: 
				cout << "Localiza��o n�o encontrada";
		}
	}else{
		cout << "IMPOSS�VEL LOCALIZAR CPF INV�LIDO";
	}
}
