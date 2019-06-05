// CSCI 3300
// Assignment: 3B
// Author:     Evan Walsh
// File:       pqueue.cpp
// Tab stops:  8

#include <cstdio>
#include "pqueue.h"
//#define DEBUG
//int detrak = 0;

struct PQCell
{
	PQItemType item;
	PQPriorityType priority;
	PQCell* next;

	PQCell(PQItemType itm, PQPriorityType prior, PQCell* nex)
	{
		item = itm;
		priority = prior;
		next = nex;
	} 
};

//=============================================================
//			isEmpty
//=============================================================
// isEmpty tests to see if the Priority Queue, q, is empty or not and
//returns true if it is and false if it is not. 
//=============================================================

bool isEmpty(const PriorityQueue& q)
{
 if(q.linkedL == NULL )
	{
		return true;
	}
return false; 
}

//=============================================================
//			insertCell
//=============================================================
//A helper function that inserts item x with priority p into
//the linked list pointed to by p.
//=============================================================

void insertCell(PQCell*& q, const PQItemType& x, PQPriorityType p)
{
  PQCell* pq = new PQCell(x, p, NULL);
   
	 if(p <= q->priority)
   {  
     PQCell* hold = q;
     q = pq;
     pq -> next = hold;       
   }
   else if (q -> next == NULL)
   {
    q -> next = pq;
   }
   else
   {
    insertCell(q -> next, x, p);
   }
}
//=============================================================
//			insert
//=============================================================
//This function inserts item type x, into the priorityqueue q with
// a priority of p.
//=============================================================

void insert(PriorityQueue& q, const PQItemType& x, PQPriorityType p)
{  
	if(isEmpty(q))
	{    
	#ifdef DEBUG
	if (detrak > 0)
	{
		printf("The set is empty.\n");
		printf("The varaiable %i will now be inserted.\n", x);
	}
		#endif      
		PQCell* pq = new PQCell(x, p, NULL);
		q.linkedL  = pq;    
		#ifdef DEBUG
	if(detrak > 0)
	{
		printf("The list now contains %i \n", x);
	}     
	#endif     
 	}
	else
	{    
	#ifdef DEBUG
	if (detrak > 0)
	{
		printf("The priority queue now contains %i.\n", q);
	}
	#endif      
	insertCell(*&q.linkedL, x, p);      
	#ifdef DEBUG
	if (detrak > 0)
  {
	printf("The priority queue now contains q\n");
	}
	#endif
	}
}



//=============================================================
//			remove
//=============================================================
//Removes the item from q that has the smallest priority then stores 
//the item into variable x and store the priority into variable p. 
//=============================================================

void remove(PriorityQueue& q, PQItemType& x, PQPriorityType& p)
{
		if(!isEmpty(q))
		{
		#ifdef DEBUG
			if (detrak > 0)
			{
				printf("The item %i has the lowest priority and will be deleted.\n", q);
			}
			#endif        
			PQCell* hold = q.linkedL;
			q.linkedL = q.linkedL -> next;
			x = hold->item;
			p = hold->priority;
			delete hold;
		}   
}


