#include <iostream>
#include "Hash_Header.h"
#include "HashMapTable.h"
using namespace std;


int main()
{
	HashMapTable hash;
	int key, value;
	int slection;
	while (1) {
		cout << "1.Insert element into the table" << endl;
		cout << "2.Search element from the key" << endl;
		cout << "3.Delete element at a key" << endl;
		cout << "4.Exit" << endl;
		cout << "Enter your choice: ";
		cin >> slection;
		switch (slection)
		{
		case 1:
			cout << "Enter element to be inserted: ";
			cin >> value;
			cout << "Enter key at which element to be inserted: ";
			cin >> key;
			hash.Insert(key, value);
			break;
		case 2:
			cout << "Enter key of the element to be searched: ";
			cin >> key;
			if (hash.Search(key) == -1) {
				cout << "No element found at key " << key << endl;
				continue;
			}
			else {
				cout << "Element at key " << key << " : ";
				cout << hash.Search(key) << endl;
			}
			break;
		case 3:
			cout << "Enter key of the element to be deleted: ";
			cin >> key;
			hash.Remove(key);
			break;
		case 4:
			exit(1);
		default:
			cout << "\nEnter correct option\n";
		}
	}
	return 0;
}