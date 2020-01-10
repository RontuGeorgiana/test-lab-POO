#include <iostream>
#include <string.h>
#include "ID.h"


using namespace std;

ID::ID()
{

}

ID::ID(const ID& a)
{
	nume = a.nume;
	CNP=a.CNP;
	nr_inregistrare = a.nr_inregistrare;
	nota_mate = a.nota_mate;
	nota_oral = a.nota_oral;
}

ID::~ID()
{

}

istream& operator >> (istream & in, ID &a)
{
	getline(cin,a.nume);
	cin>>a.CNP;
	cin>>a.nota_mate;
	cin>>a.nota_oral;
}

void citire (ID &a, int &b)
{
	cin>>a;
	a.nr_inregistrare=b;
	b++;
}

float ID::nota_admitere()
{
	this->medie_admitere = (0.6 * this->nota_oral) + (0.4 * this->nota_mate);
}

ostream& operator >> (ostream & in, ID &a)
{
	cout<<"Numar inregistrare : "<<a.nr_inregistrare<<endl;
	cout<<"Nume si prenume : "<<a.nume<<endl;
	cout<<"CNP : "<<a.CNP<<endl;
	cout<<"Nota probei de matematica la BAC : "<<a.nota_mate<<endl;
	cout<<"Nota probei orale : "<<a.nota_oral<<endl;
	cout<<"Media de admitere : "<<a.medie_admitere<<endl;
}
