// Find_Element_in_List.cpp : A function that checks whether an element occurs in a list.
//

#include "stdafx.h"
#include<iostream>
#include<list>
#include<string>
//#include<algorithm>
#include<vector>

int main()
{
	int Counter = 0;
	std::string Sentence;
	std::vector <std::string> temp;

	//std::list <std::string> Sentence{};

	std::cout << "Give me a sentence:\n";
	std::getline(std::cin, Sentence);

	for (int i = 0; i < Sentence.size(); i++)
	{
		if (Sentence[i] == *"e")
			//std::vector<std::string> temp.push_back(Sentence[i]);
		/*Sentence.push_back(".");*/
			Counter++;
	}
	std::cout << Counter << "\n";

	return 0;
}

