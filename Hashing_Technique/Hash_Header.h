//Hashing technique In C++
/*===============================================================
	Owner of File:- Samir Mastekar
=================================================================
File Description:-
		1. Initilize the table size to some integrer value
		2. Create the structure hahtableEntry to declare key "Key" and "Value"
		3. Create a class hashMapTable
		4. Create constructor hashMapTable to create the table
		5. Create a hash_Function() function which return hashed key
		6. Create the function Insert() function which insert element at key
		7. Create function Remove() to remove the element at a key
		8. Create functiom search() to search element at a key
		9. Call a destructor hashMapTable to destroy the objects created by the constructor.
		10.In main, perform switch operation and enter input as per choice.
		11.To insert key and values, call insert().
		12.To search element, call SearchKey().
		13.To remove element, call Remove().
=================================================================*/
#ifndef  HASH_HEADER_HXX
#define HASH_HEADER_HXX
class HashTableEntry
{
public:
	int key;
	int value;

	/*parameterized Constructor*/
	HashTableEntry(int k, int v)
	{
		this->key = k;
		this->value = v;
	}
};

#endif H/*ASH_HEADER_HXX*/

