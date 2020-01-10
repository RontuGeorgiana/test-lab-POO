#include <iostream>
#include <string.h>
#include "IF.h"
#include "ID.h"
#include "IF2.h"
#include "ID2.h"
#include <vector>

using namespace std;


int main()
{
    int contor_IF, contor_ID, contor_IF2, contor_ID2,opt,opt2,i;
    float nr_loc_IF, procent=0.1, nr_loc_ID;
    IF a;
    ID b;
    IF2 c;
    ID2 d;
    vector<IF> cand_IF;
    vector<ID> cand_ID;
    vector<IF2> cand_IF2;
    vector<ID2> cand_ID2;
    cout<<"Introduceti numarul de locuri pentru:\n";
    cout<<"IF : ";
    cin>>nr_loc_IF;
    cout<<"ID : ";
    cin>>nr_loc_ID;
    do
    {
        cout<<"Alegeti optiunea dorita:\n1-Introduceti candidat\n2-Afisati listele\n";
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<"Introduceti candidat pentru :\n1-IF\n2-ID\n3-IF a doua facultate\n4-ID a doua facultate";
            cin>>opt2;
            switch(opt2)
                {
                case 1:
                    {
                        citire(a, contor_IF);
                        a.nota_admitere();
                        cand_IF.push_back(a);
                    }
                case 2:
                    {
                        citire(b, contor_IF);
                        b.nota_admitere();
                        cand_ID.push_back(b);
                    }
                case 3:
                    {
                        citire(c, contor_IF);
                        c.nota_admitere();
                        cand_IF2.push_back(c);
                    }
                case 4:
                    {
                        citire(d, contor_IF);
                        d.nota_admitere();
                        cand_ID2.push_back(d);
                    }
                }
                ///Afisarea listelor (lipseste sortarea si supraincarcarea op de afisare in clase)
                /*case 2:
                    {
                        cout<<"IF\n";
                        for(i=0; i<nr_loc_IF; i++)
                            cout<<i<<". "<<cand_IF[i]<<endl;
                        cout<<"IF2\n";
                        for(i=0; i<nr_loc_IF*procent; i++)
                            cout<<i<<". "<<cand_IF2[i]<<endl;
                        cout<<"ID\n";
                        for(i=0; i<nr_loc_ID; i++)
                            cout<<i<<". "<<cand_ID[i]<<endl;
                        cout<<"ID2\n";
                        for(i=0; i<nr_loc_ID*procent; i++)
                            cout<<i<<". "<<cand_ID2[i]<<endl;
                    }*/

        }
    }while(opt!=3);
    return 0;
}
