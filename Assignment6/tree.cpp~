// CSCI 3300
// Assignment: 3B
// Author:     Evan Walsh
// File:       tree.cpp
// Tab stops:  8

//==============================================================
//			Node
//==============================================================

#include "tree.h"
#include <cstdio>

void printHelper (int i)
{
	if (i == '\t')
	{
		printf("Tab");
	}
	else if (i == '\n')
	{
		printf("New Line");
	}
	else if (i == ' ')
	{
		printf("Space");
	}
	else 
	{
		printf("\"%c\"", i);
	}
}

//===================================================================
//			printTree
//===================================================================

void printTree(Node* t)
{
	if(t != NULL)
	{
		printf("%i\n", t -> ch);
		printTree(t -> left);
		printTree(t -> right);
	}
}
