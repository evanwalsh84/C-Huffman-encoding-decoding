// CSCI 3300
// Assignment: 3B
// Author:     Evan Walsh
// File:       tree.h
// Tab stops:  8

enum NodeKind {leaf, nonleaf};

struct Node 
{
  NodeKind kind;
  char     ch;
  Node*    left;
  Node*    right;

  Node(char c)
  {
    kind = leaf;
    ch   = c;
  }

  Node(Node* L, Node *R)
  {
    kind  = nonleaf;
    left  = L;
    right = R;
  }      
};

void printTree(Node* t);

void printHelper(int i);



