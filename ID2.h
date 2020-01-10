#include <string.h>


using namespace std;

class ID2
{
	string nume;
	string CNP;
	int nr_inregistrare;
	float nota_abs,nota_oral;
	float medie_admitere=0;


	public:
	ID2();
	ID2(const ID2&);
	~ID2();
	friend std::istream & operator >> (std::istream&, ID2 &);
	float nota_admitere();
	friend std::ostream & operator >> (std::ostream&, ID2 &);
	friend void citire (ID2 &a, int &b);
};
