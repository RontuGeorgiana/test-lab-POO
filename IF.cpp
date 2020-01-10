#include <iostream>
#include <string.h>
#include "IF.h"


using namespace std;

IF::IF()
{

}

IF::IF(const IF& a)
{
	nume = a.nume;
	CNP=a.CNP;
	nr_inregistrare = a.nr_inregistrare;
	medie_bac = a.medie_bac;
	nota_scris = a.nota_scris;
}

IF::~IF()
{

}

istream& operator >> (istream & in, IF &a)
{
	getline(cin,a.nume);
	cin>>a.CNP;
	cin>>a.medie_bac;
	cin>>a.nota_scris;
}

void citire (IF &a, int &b)
{
	cin>>a;
	a.nr_inregistrare=b;
	b++;
}

float IF::nota_admitere()
{
	this->medie_admitere = (0.8 * this->nota_scris) + (0.2 * this->medie_bac);
}

ostream& operator >> (ostream & in, IF &a)
{
	cout<<"Numar inregistrare : "<<a.nr_inregistrare<<endl;
	cout<<"Nume si prenume : "<<a.nume<<endl;
	cout<<"CNP : "<<a.CNP<<endl;
	cout<<"Media examenului de Bacalaureat : "<<a.medie_bac<<endl;
	cout<<"Nota examenului scris : "<<a.nota_scris<<endl;
	cout<<"Media de admitere : "<<a.medie_admitere<<endl;
}
