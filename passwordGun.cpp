#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{

	char test[] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e',
		'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 
		'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q',
		'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w',
		'X', 'x', 'y', 'Y', 'y', '0', '1', '2',	'3', '4', '5', '6',
		'7', '8', '9'};

unsigned short Password, Characters, size = sizeof(test) / sizeof(test[0]);
srand(time(0));

cout << "Кол-во паролей: ";
cin >> Password;

cout << "Кол-во символов в пароле: ";

cin >> Characters;

const unsigned short SaveCharacters = Characters;

ofstream outFile("PassGet.txt");
	for(; Password > 0; Password--)
	{
		for(; Characters > 0; Characters--)
		{
			outFile << test[rand() % size];
		}

		if (Characters == 0)
		{
			Characters == SaveCharacters;
			outFile << endl;
		}
	}
	outFile.close();
	cout << "Пароли сохранены в файл PassGen.txt\n";

	return 0;
}
