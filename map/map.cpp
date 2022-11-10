#include <iostream>
#include <map>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	multimap <string, string> mp{
		{"always","завжди"},
		{"work","робота"},
		{"never","нiколи"},
		{"sometimes","деколи"},
		{"maybe","можливо"},
		{"wear","одягати"},
		{"cheap","дешевий"},
		{"rock","камiнь"},
		{"pen","ручка"},
		{"pencil","олiвець"}
	};

	for ( auto i : mp)
	{
		cout << i.first << " " << i.second << endl;
	}

}
