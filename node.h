#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;
class Node 
{
	friend class Trie;
private:
	char c;
	bool word; 
	Node* child[128]; 
	Node();
	~Node() {}
	void setWord(int boo) {this->word = boo;} 
	bool isWord() {return this->word;}
	void setChar(char ch) {this->c = ch;}
	char getChar() const {return this->c;}
};

#endif