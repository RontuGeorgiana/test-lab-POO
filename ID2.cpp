#include <iostream>
#include <string.h>
#include "ID2.h"


using namespace std;

ID2::ID2()
{

}

ID2::ID2(const ID2& a)
{
	nume = a.nume;
	CNP=a.CNP;
	nr_inregistrare = a.nr_inregistrare;
	nota_abs = a.nota_abs;
	nota_oral = a.nota_oral;
}

ID2::~ID2()
{

}

istream& operator >> (istream & in, ID2 &a)
{
	getline(cin,a.nume);
	cin>>a.CNP;
	cin>>a.nota_abs;
	cin>>a.nota_oral;
}

void citire (ID2 &a, int &b)
{
	cin>>a;
	a.nr_inregistrare=b;
	b++;
}

float ID2::nota_admitere()
{
	this->medie_admitere = (0.6 * this->nota_oral) + (0.4 * this->nota_abs);
}

ostream& operator >> (ostream & in, ID2 &a)
{
	cout<<"Numar inregistrare : "<<a.nr_inregistrare<<endl;
	cout<<"Nume si prenume : "<<a.nume<<endl;
	cout<<"CNP : "<<a.CNP<<endl;
	cout<<"Nota de absolvire a primei facultati: "<<a.nota_abs<<endl;
	cout<<"Nota probei orale : "<<a.nota_oral<<endl;
	cout<<"Media de admitere : "<<a.medie_admitere<<endl;
}
