#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main (){
	//Perminte vocabulário português
	setlocale (LC_ALL, "portuguese");
	
	//Variáveis
	int hora, quanthoras;
	double salbruto, descontoIR, INSS, FGTS, totaldesc, salliquido;
	
	//Solicita ao Usuário informações sobre seu trabalho
	cout << "Informe o valor da sua hora: ";
	cin >> hora;
	cout << "\nInforme a quantidade de horas trabalhadas no mês: ";
	cin >> quanthoras;
	
	//Cálculo Salário Bruto
	salbruto = hora * quanthoras;
	
	//Cálculo Imposto de Renda
	if (salbruto <= 900){
		descontoIR = 0;
	}else if (salbruto <= 1500){
		descontoIR = salbruto * 0.05;
	}else if (salbruto <= 2500){
		descontoIR = salbruto * 0.10;
	}else if (salbruto > 2500){
		descontoIR = salbruto * 0.2;
	}
	
	//Cálculo INSS
	INSS = salbruto * 0.1;
	 
	//Cálculo FGTS
	FGTS = salbruto * 0.11;
	
	//Cálculo Total de Descontos
	totaldesc = descontoIR + INSS;
	
	//Cálculo Salário Líquido
	salliquido = salbruto - totaldesc;
	
	//Impressão
	cout << "\n";
	cout << "\n" << "Salário Bruto: " << hora << "*" << quanthoras << ": R$" << fixed << setprecision(2) << salbruto;
	cout << "\n" << "(-) IR (5%)         : R$" << fixed << setprecision(2) << descontoIR;
	cout << "\n" << "INSS (10%)          : R$" << fixed << setprecision(2) << INSS;
	cout << "\n" << "FGTS (11%)          : R$" << fixed << setprecision(2) << FGTS;
	cout << "\n" << "Total de descontos  : R$" << fixed << setprecision(2) << totaldesc;
	cout << "\n" << "Salário Líquido     : R$" << fixed << setprecision(2) << salliquido; 
	
return 0;	
}
