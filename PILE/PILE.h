#include"Node.h"
#pragma once
class pile
{
private:
	Node* sommet;
public:
	pile();
	void push(int d);
	void pop();
	bool PileVide()const;
	void afficherPile();
	int sommetval()const;
};
