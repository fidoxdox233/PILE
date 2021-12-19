#include "PILE.h"
#include <assert.h>
#include <iostream>

using namespace std;

pile::pile()
{
    this->sommet = nullptr;
}

void pile::push(int d)
{
    Node* A = new Node(d);
    A->lier(this->sommet);
    this->sommet =A;
}

void pile::pop()
{
    assert(!this->PileVide());
    Node* a = this->sommet;
    this->sommet = this->sommet->suivant();
    delete a;

}

bool pile::PileVide() const
{
    if (this->sommet == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pile::afficherPile()
{
    while (!this->PileVide()) {
        cout << this->sommetval() << endl;
        this->pop();
    }
}
int pile::sommetval() const
{
    int b = this->sommet->donnee();
    return b;
}