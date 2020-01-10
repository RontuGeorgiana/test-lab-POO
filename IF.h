#include <string.h>


using namespace std;

class IF
{
	string nume;
	string CNP;
	int nr_inregistrare;
	float medie_bac,nota_scris;
	float medie_admitere=0;


	public:
	IF();
	IF(const IF&);
	~IF();
	friend std::istream & operator >> (std::istream&, IF &);
	float nota_admitere();
	friend std::ostream & operator >> (std::ostream&, IF &);
	friend void citire (IF &a, int &b);
};
