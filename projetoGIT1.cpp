#include <iostream>
#include<string>
using namespace std;


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
    int qtdletras=0, i, qtd;
	qtd=nome_length();
    for(i=0;i<qtd;i++)
    {

		if(texto[i]==letra)
		{
			qtdletras++;
		}
	}
	return qtdletras;
}
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
string substituirLetra(char letra1,char letra2, string texto)
{
    int qtd, i;
	qtd=nome.length();
	for(i=0;i<qtd;i++)
	{
		if(texto[i]==letra1)
		{
			texto[i]='letra2';
		}
		return texto;
   }
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{


}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
string substituirPalavras(string palavra1, string palavra2, string texto)
{


}

int main()
{

	cout << "Entre com o texto para fazer o teste:";
    return 0;
}
