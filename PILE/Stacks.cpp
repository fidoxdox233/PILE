#include <iostream>
#include "PILE.h"
#include "Node.h"
using namespace std;
int main()
{
	pile a;
	for (int i = 0; i<10; i++)
	{
	a.push(i);
	}
	cout << "le sommet est :" << a.sommetval() << endl << endl;
	a.pop();
	cout<<"le nouveau sommet apres appel de pop est :"<< a.sommetval() << endl << endl;
	if (a.PileVide()) cout << "la pile est vide" << endl;
	else cout << "la pile est non vide" << endl<<endl;
	cout << "pile :" << "\n";
	a.afficherPile();
}

