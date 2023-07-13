#include <iostream>
#include <string>
#include <fstream>
#include "trie.h"
#include "node.h"
using namespace std;
int main(int argc, char const *argv[])
{
	string data;
	fstream dictionary;
	Trie complete_query;

	dictionary.open("dictionary.txt", fstream::in); 
	if (dictionary.is_open())
	{	
		while (dictionary)
		{
			dictionary >> data;
			complete_query.insert(data);
		}
	}	
	else
	{
		cout << "error:  file not open." << endl;
		return -1;
	}
	dictionary.close();
	data.clear(); 
	cout << "enter search query:" << endl;
	getline(cin, data); 
	complete_query.is_space(data); 
	cout << "your search options are:  " << endl;
	if (complete_query.getSpace() == true) 
	{
		complete_query.remove_prefix(data);
		complete_query.search(complete_query.break_string(data));
	}
	else
		complete_query.search(data);
	return 0;
} 	
