#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cout << "\t\tWelcome to your GameList!\n\n";

	vector<string>list; //list of games
	vector<string>::iterator iter;
	char choise; // user's choise
	string name; // a name of the current game

	cout << "What do you want to do?\n";
	cout << "1 - show list\n";
	cout << "2 - add new game to list\n";
	cout << "3 - remove game from list\n";
	cout << "If you want to quit enter \"q\"\n";

	cin >> choise;

	while (choise != 'q')
	{
		if (choise == '1')
		{
			if (list.empty()) //check if list is empty
			{
				cout << "\nYour list is empty.\n";
				cout << "Do you want to do something else?\n";
				cin >> choise;
			}
			else // show list
			{
				cout << endl;

				for (iter = list.begin(); iter != list.end(); ++iter)
				{
					cout << *iter << endl;
				}

				cout << "\nDo you want to do something else?\n";
				cin >> choise;
			}
		}

		else if (choise == '2') //add new game
		{
			cout << "\nWrite a name of the game:\n";
			cin >> name;
			list.push_back(name);
			cout << "\nDone!\n";
			cout << "\nDo you want to do something else?\n";
			cin >> choise;
		}

		else if (choise == '3') //delete the game
		{
			if (list.empty())
			{
				cout << "\nList have been already empty.";
			}

			else
			{
				cout << "\nWrite a name of the game:\n";
				cin >> name;
			}

			for (iter = list.begin(); iter != list.end(); ++iter)
			{
				if (*iter == name)
				{
					list.erase(iter);
					cout << "Done!";
					break;
				}

				else if (iter == list.end())
				{
					cout << "The list doesn't include this game.";
				}
			}

			cout << "\nDo you want to do something else?\n";
			cin >> choise;
		}

		else
		{
			cout << "You entered incorrect command. Please, try again:\n";
			cin >> choise;
		}
	}

	return(0);
}