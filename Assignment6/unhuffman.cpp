// CSCI 3300
// Assignment: 6b
// Author:     Evan Walsh
// File:       unhuffman.cpp
// Tab stops:  8

#include <cstdio>
#include "pqueue.h"
#include "binary.h"

using namespace std;

//===================================================================
//				makeTree()
//===================================================================
//makeTree creates the tree based on the input file.
//===================================================================

Node* makeTree(BFILE* file)
{
	Node* t;
	if(readBit(file) == 1)
	{
		t = new Node(readByte(file));
	}
	else
	{
		t = new Node(makeTree(file), makeTree(file));
	}
	return t;
}

//===================================================================
//				uncompress()
//===================================================================
//Writes ones and zeros to a file.
//===================================================================

void uncompress(Node* t, Node* c, BFILE* file, FILE* bfile)
{
	if(t -> kind == nonleaf)
	{
		int res = readBit(file);
		
		if(res == 0)
		{
			uncompress(t -> left, c, file, bfile);
		}
		else if(res == 1)
		{
			uncompress(t -> right, c, file, bfile);	
		}
	}
	else
	{
		fputc(t -> ch, bfile);
		uncompress(c, c, file, bfile);
	}
}

//===================================================================
//				main()
//===================================================================

int main(int argc, char* argv[])
{
  BFILE* bfile = openBinaryFileRead(argv[1]);
  FILE* file = fopen(argv[2], "w");

	Node* t = makeTree(bfile);
	Node* copy = t;
	uncompress(t, copy, bfile, file);	
	fclose(file);
	closeBinaryFileWrite(bfile);
	return 0;
}







