#include "Empresa.h"
#include "Camiao.h"
#include "Frota.h"
#include "Servico.h"
#include "Interface.h"

#include <iostream>

int main()
{
	Empresa empresa = firstScreen();

	menuPrincipal(empresa);

	return 0;
}

int a()

{
	//criar empresa
	Empresa empresa("empresa");

	empresa.loadEmpresa();

	empresa.printServicos();

	char c;
	cin >> c;

	/*Cliente* cliente1 = new Cliente ("Jose Gomes", 15511);
	Cliente* cliente2 = new Cliente ("Antonio Martins", 18882);

	Camiao* camiao1 = new Camiao (1, 1000, true);
	Camiao* camiao2 = new Camiao (2, 2000, false);

	Frota frota;
	frota.adicionaCamiao(camiao1);
	frota.adicionaCamiao(camiao2);

	frota.readCamioes();

	Servico*  servico1 = new Servico(1, 20);
	Servico*  servico2 = new Servico(2, 20);
	Servico*  servico3 = new Servico(3, 50);

	empresa.setFrota(frota);

	empresa.adicionaServico(servico1);
	empresa.adicionaServico(servico2);
	empresa.adicionaServico(servico3);

	empresa.printServicos();

	servico1->adicionaCliente(cliente1);
	servico1->adicionaCliente(cliente2);

	servico2->adicionaCliente(cliente2);

	servico1->readClientes();
	servico2->readClientes();
	servico3->readClientes();

	empresa.saveEmpresa();*/


	return 0;
}
