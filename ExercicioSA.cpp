#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main (){
	//Perminte vocabul�rio portugu�s
	setlocale (LC_ALL, "portuguese");
	
	//Vari�veis
	int hora, quanthoras;
	double salbruto, descontoIR, INSS, FGTS, totaldesc, salliquido;
	
	//Solicita ao Usu�rio informa��es sobre seu trabalho
	cout << "Informe o valor da sua hora: ";
	cin >> hora;
	cout << "\nInforme a quantidade de horas trabalhadas no m�s: ";
	cin >> quanthoras;
	
	//C�lculo Sal�rio Bruto
	salbruto = hora * quanthoras;
	
	//C�lculo Imposto de Renda
	if (salbruto <= 900){
		descontoIR = 0;
	}else if (salbruto <= 1500){
		descontoIR = salbruto * 0.05;
	}else if (salbruto <= 2500){
		descontoIR = salbruto * 0.10;
	}else if (salbruto > 2500){
		descontoIR = salbruto * 0.2;
	}
	
	//C�lculo INSS
	INSS = salbruto * 0.1;
	 
	//C�lculo FGTS
	FGTS = salbruto * 0.11;
	
	//C�lculo Total de Descontos
	totaldesc = descontoIR + INSS;
	
	//C�lculo Sal�rio L�quido
	salliquido = salbruto - totaldesc;
	
	//Impress�o
	cout << "\n";
	cout << "\n" << "Sal�rio Bruto: " << hora << "*" << quanthoras << ": R$" << fixed << setprecision(2) << salbruto;
	cout << "\n" << "(-) IR (5%)         : R$" << fixed << setprecision(2) << descontoIR;
	cout << "\n" << "INSS (10%)          : R$" << fixed << setprecision(2) << INSS;
	cout << "\n" << "FGTS (11%)          : R$" << fixed << setprecision(2) << FGTS;
	cout << "\n" << "Total de descontos  : R$" << fixed << setprecision(2) << totaldesc;
	cout << "\n" << "Sal�rio L�quido     : R$" << fixed << setprecision(2) << salliquido; 
	
return 0;	
}
