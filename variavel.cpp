#include <iostream>

using namespace std; //conteudo padrao da biblioteca 

int  main()
{
	
	// cout -> imprime um conteudo na tela 
	// cin  -> ler o que eu digitei 
	//enl ou \n ->  pula linha 
	//tipo mome; 
	//tipo nome = valor;
	
	
	int vidas=0; // 10, 25
	char letra = 'B'; //'B'
	double decimal = 5.2; //2.49999
	float decimal2 =5.2; //2.5 
	bool vivo = true; //true = verdadeiro / false = falso (bool variavel boleana para teste)
	string nome = "Bruno"; //"burno"
		
		cout << "Digite o numero de vidas: ";
		cin >> vidas;
		
		cout << "Digite uma letra: ";
		cin >>letra;
		
		cout <<"Dinheiro: ";
		cin >>decimal;
		
		cout <<"Digite o seu nome: ";
		cin >> nome;
		
		cout << vidas << "\n";
		cout << letra << "\n";
		cout << decimal << "\n";
		cout << vivo << "\n";
		cout << nome << "\n";
	
	system ("pause");
	return 0;
}
