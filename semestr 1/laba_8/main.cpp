#include <iostream>
#include <string>
#include <fstream>

//Var 4, eexample 2


char toLower(char c) 
{
	if ('A' <= c && c <= 'Z') c += 32;
	return c;
}

std::string toLowerCase(std::string s) 
{
	for(int i = 0; i < s.length(); i++)
		if ('A' <= s[i] && s[i] <= 'Z') s[i] += 32;
	return s;
}

bool Read(int& n, std::string words[5120])
{
	std::ifstream in("input.txt");
	if(!in.is_open())
	{
		std::cout << "File not opened";
		return false;
	}
	n = 0;
	while(!in.eof()) 
	{
		in >> words[n];
		n++;
	}
	return true;

}

void Write(int& n, std::string words[5120]) 
{
	for(int i = 0; i < n; i++)
		std::cout << "<" << words[i] << ">" << std::endl;
}

bool isConsonant(char c) 
{
	c = toLower(c);
	std::string vowels = "aeiouy";
	if(vowels.find(toLower(c)) != std::string::npos)
		return false;
	return true;
}


void RemoveEqual(std::string& s) 
{
	for(int j =0; j < s.length(); j++)
		if(!isConsonant(s[j]))
		{
			s.erase(j, 1);
			j--; 
		}
}

bool isNotMore3Consonant(const std::string& s) 
{
	int cnt = 0;
	for(int i = 0; i < s.length(); i++)
		if(isConsonant(s[i]))
			cnt++;
	return cnt >= 3;
}

void DublicateConsonant(std::string& s) 
{
	for(int i = 0; i < s.length(); i++)
		if(isConsonant(s[i]))
		{
			s.insert(i, 1, s[i]);
			i++;
		}
}


void Sort(int& n, std::string words[5120])
{
	for(int i = 0; i < n-1; i++)
		if(isNotMore3Consonant(words[i])) 
		{ 
			for(int j = i+1; j < n; j++)
				if(toLowerCase(words[i]) > toLowerCase(words[j]))
					std::swap(words[i], words[j]);
		}
}

int main()
{	
	int n;
	std::string words[5120];
	Read(n, words);
	for(int i = 0; i < n; i++) 
	{ 
		if (!isNotMore3Consonant(words[i]))
		{
			Sort(n, words);
		}
		else {
			DublicateConsonant(words[i]);
			RemoveEqual(words[i]);
		}
	}
	Write(n, words);
	return 0;
}