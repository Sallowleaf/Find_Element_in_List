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
	std::string Sentence;
	std::vector <std::string> temp;

	//std::list <std::string> Sentence{};

	std::cout << "Give me a sentence:\n";
	std::getline(std::cin, Sentence);

	for (int i = 0; i < Sentence.size(); i++)
	{
		if (Sentence[i] == *"e")
			temp.push_back(Sentence[i]);
		/*Sentence.push_back(".");*/
	}
	std::cout << temp.size() << "\n";

	return 0;
}

