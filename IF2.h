#include <string.h>


using namespace std;

class IF2
{
	string nume;
	string CNP;
	int nr_inregistrare;
	float nota_abs,nota_oral;
	float medie_admitere=0;


	public:
	IF2();
	IF2(const IF2&);
	~IF2();
	friend std::istream & operator >> (std::istream&, IF2 &);
	float nota_admitere();
	friend std::ostream & operator >> (std::ostream&, IF2 &);
	friend void citire (IF2 &a, int &b);
};