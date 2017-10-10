#include "Module1.h"

int main(int argc, char** argv)
{
	string str = { '\0' };
	list <string> file_str;

	if ((argc > 3) || (argc < 3))
	{
		cout << "Incorrect number of arguments. Try again";
	}
	
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);

	if (!fin.is_open())
	{
		cout << "File couldn't be opened. Try again";
		return 0;
	}

	while (!fin.eof())
	{
		getline(fin, str);
		file_str.push_back(str);
	}

	using namespace Module1;
	sort_strings(file_str);

	for (string i : file_str)
	{
		fout << i << endl;
	}

	return 0;
}
