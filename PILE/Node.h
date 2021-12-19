#pragma once
class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d = 0);
	void lier(Node* C);
	int donnee();
	Node* suivant();
};

