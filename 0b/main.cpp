#include "Module1.h"

int main(int argc, char** argv)
{
	string str = { '\0' };
	list <string> file_str;
	int n = 0;

	ifstream fin("input.txt");
	while (!fin.eof())
	{
		getline(fin, str);
		file_str.push_back(str);
	}

	using namespace Module1;
	sort_strings(file_str);

	for (string i : file_str)
	{
		cout << i << endl;
	}

	return 0;
}