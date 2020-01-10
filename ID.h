#include <string.h>


using namespace std;

class ID
{
	string nume;
	string CNP;
	int nr_inregistrare;
	float nota_mate,nota_oral;
	float medie_admitere=0;


	public:
	ID();
	ID(const ID&);
	~ID();
	friend std::istream & operator >> (std::istream&, ID &);
	float nota_admitere();
	friend std::ostream & operator >> (std::ostream&, ID &);
	friend void citire (ID &a, int &b);
};
