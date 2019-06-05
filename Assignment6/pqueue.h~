// CSCI 3300
// Assignment: 3A
// Author:     Evan Walsh
// File:       pqueue.h
// Tab stops:  8

#include "tree.h"
struct Node;
typedef Node* PQItemType;
typedef int   PQPriorityType;

struct PQCell;

struct PriorityQueue
{
	PQCell* linkedL;
	PriorityQueue()
	{
		linkedL = NULL;
	}
};

bool isEmpty(const PriorityQueue& q);

void insert(PriorityQueue& q, const PQItemType& x, PQPriorityType p);

void remove(PriorityQueue& q, PQItemType& x, PQPriorityType& p);


