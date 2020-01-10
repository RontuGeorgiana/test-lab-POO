#include <iostream>
#include <string.h>
#include "IF2.h"


using namespace std;

IF2::IF2()
{

}

IF2::IF2(const IF2& a)
{
	nume = a.nume;
	CNP=a.CNP;
	nr_inregistrare = a.nr_inregistrare;
	nota_abs = a.nota_abs;
	nota_oral = a.nota_oral;
}

IF2::~IF2()
{

}

istream& operator >> (istream & in, IF2 &a)
{
	getline(cin,a.nume);
	cin>>a.CNP;
	cin>>a.nota_abs;
	cin>>a.nota_oral;
}

void citire (IF2 &a, int &b)
{
	cin>>a;
	a.nr_inregistrare=b;
	b++;
}

float IF2::nota_admitere()
{
	this->medie_admitere = (0.6 * this->nota_oral) + (0.4 * this->nota_abs);
}

ostream& operator >> (ostream & in, IF2 &a)
{
	cout<<"Numar inregistrare : "<<a.nr_inregistrare<<endl;
	cout<<"Nume si prenume : "<<a.nume<<endl;
	cout<<"CNP : "<<a.CNP<<endl;
	cout<<"Nota de absolvire a primei facultati: "<<a.nota_abs<<endl;
	cout<<"Nota probei orale : "<<a.nota_oral<<endl;
	cout<<"Media de admitere : "<<a.medie_admitere<<endl;
}
