#include "Node.h"

Node::Node(int d)
{
	this->data = d;
	this->next = nullptr;
}

void Node::lier(Node* C)
{
	this->next = C;
}

int Node::donnee()
{
	return this->data;
}

Node* Node::suivant()
{
	return this->next;
}

