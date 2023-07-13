# Phone-book
A simple phone-book implemented using trie data structure in C++

-> A trie, also known as a prefix tree or digital tree, is a tree-based data structure that is commonly used for efficient string matching and retrieval operations. The term "trie" comes from the word "retrieval."
-> The main purpose of a trie is to provide a fast way to search for a given string or a set of strings with a common prefix. It excels in applications that involve dictionary operations or autocomplete functionality. Tries are particularly useful when dealing with large sets of strings, such as words in a dictionary, IP addresses, or phone numbers.
-> In a trie, each node represents a single character or a part of a string. The root node represents an empty string, and the descendants of each node represent possible characters that can follow the prefix represented by the path from the root to that node. Each node may have multiple children, each corresponding to a specific character.
-> One of the key advantages of a trie is its efficiency in searching for a string or finding all strings with a common prefix. These operations typically have a time complexity proportional to the length of the string being searched, rather than the size of the entire data set. This makes tries very efficient for searching and retrieving strings.

 A node class in implemented in the header file node.h and a trie class is implemented in the trie.h header file, trie.cpp implements some basic method for the trie data structure and search .cpp implement the searching using everything.
The dictionary.txt can be edited but by default it contains some standard dictionary words.

USES:
1) Autocomplete and predictive text: Tries are commonly used in text editors, search engines, and messaging applications to provide autocomplete suggestions and predictive text. By traversing the trie based on user input, the system can quickly suggest words or phrases that match the entered prefix.

2) Spell checking: Tries are helpful in spell checking algorithms. By storing a dictionary of valid words in a trie, it becomes efficient to check if a given word is spelled correctly or to suggest alternative words based on the entered word's prefix.

3) IP routing: In computer networking, tries can be used to store and efficiently search for IP addresses. Tries can represent the hierarchical structure of IP addresses, allowing for fast routing decisions based on the longest matching prefix.

4) Prefix matching: Tries are useful in systems that need to find strings or words that have a common prefix. This can be applied in various scenarios such as searching for contact names in a phonebook, searching for words starting with a specific letter combination, or filtering words based on a given prefix.

5) Word games and puzzles: Tries are commonly employed in word games and puzzles, such as crossword solvers or word search applications. They help in finding valid words by traversing the trie based on the available letters and their positions on the game board.

6) Data compression: Tries can be utilized in compression algorithms, such as Huffman coding or Lempel-Ziv-Welch (LZW) compression. Tries help in building efficient encoding and decoding dictionaries by representing frequently occurring patterns or sequences of characters.

7) Genome analysis: Tries can be used to efficiently store and search DNA sequences. They enable quick searches for specific patterns or motifs within a large genome dataset.


ADVANTAGES: 
1) Fast string search
2) Prefix matching
4) Efficient for ordered traversal
5) Natural support for string operations
6) Simple implementation

DISADVANTAGES: 
1) High space complexity.
2) Slow Insertion and deletion.
3) Don't support approximate string searching.
4) Not suitable for large words.



Command to compile: g++ search.cpp node.cpp trie.cpp -o output.exe (windows)
                     g++ search.cpp node.cpp trie.cpp -o output.sh (linux/mac)

 
