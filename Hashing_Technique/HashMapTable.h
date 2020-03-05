#pragma once
#include "Hash_Header.h"
const int hashKey = 100;
class HashMapTable
{
private:
	HashTableEntry  **temp;
public:
	//Default Constructor
	HashMapTable()
	{
		temp = new HashTableEntry*[hashKey];
		for (int i = 0; i < hashKey; i++)
		{
			temp[i] = nullptr;
		}
	}

	//This function will return hash key
	int Hash_function(int key)
	{
		return key % hashKey;
	}

	//Insert the element at particular key
	void Insert(int key, int value)
	{
		int hash = Hash_function(key);
		while (temp[hash] != nullptr && temp[hash]->key != key)
		{
			hash = Hash_function(hash + 1);
		}
		if (temp[hash] != nullptr)
			delete temp[hash];
		temp[hash] = new HashTableEntry(key, value);
	}

	//Search the value by key of hash
	int Search(int key)
	{
		int hash = Hash_function(key);
		while (temp[hash] != nullptr && temp[hash]->key != key)
		{
			hash = Hash_function(hash + 1);
		}
		if (temp[hash] == nullptr)
		{
			return -1;
		}
		else
		{
			return temp[hash]->value;
		}
	}

	void Remove(int key)
	{
		int hash = Hash_function(key);
		while (temp[hash] != nullptr)
		{
			if (temp[hash]->key == key)
				break;
			hash = Hash_function(hash + 1);
		}
		if (temp[hash] == nullptr)
		{
			std::cout << "No element at key found " << key << std::endl;
		}
		else
		{
			delete temp[hash];
		}
		std::cout << "Element deleted at key " << key << std::endl;
	}

	//Destructor
	~HashMapTable()
	{
		for (int i = 0; i < hashKey; i++)
		{
			if (temp[i] != nullptr)
			{
				delete  temp[i];
				delete[]temp;
			}
		}
	}
};