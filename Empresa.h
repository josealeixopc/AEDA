/*
 * Empresa.h
 *
 *  Created on: 27/10/2015
 *      Author: ASUS
 */

#ifndef SRC_EMPRESA_H_
#define SRC_EMPRESA_H_


#include "Servico.h"

using namespace std;

class Empresa
{private:
	vector <Servico*> servicos;
public:
	//Construtor
	Empresa();

	//Destrutor
	~Empresa(){};

	//Retorna um vetor com todos os servi�os disponibilizados pela empresa
	vector<Servico*> getServicos() const;

	//Adiciona um sevi�o ao vetor de servi�os
	void adicionaServico(Servico *s1);

	//Apaga um servi�o do vetor de servi�os, criando uma exce��o se o servi�o que se quer apagar n�o existir
	void retiraServico (Servico *s1);

	//Imprime no ecr� os clientes que est�o a usar os servi�os
	void readServicos() const;

	//Retorna um vetor com os servi�os atualmente usados por um ou mais clientes
	vector< Servico*> returnAtivos();

	//Retorna um vetor com os servi�os que n�o est�o a ser usados
	vector< Servico*> returnInativos();

	//Imprime no monitor os pre�os e nomes dos servi�os, ordenando-os de forma crescente de pre�o
	void printServicos(vector< Servico*> s1);

	//Procura os servi�os utilizados por um cliente
	vector< Servico*> servicoCliente(string nome, unsigned int nif);

	//Guarda a informa��o da empresa num ficheiro
	void saveEmpresa();
};




#endif /* SRC_EMPRESA_H_ */