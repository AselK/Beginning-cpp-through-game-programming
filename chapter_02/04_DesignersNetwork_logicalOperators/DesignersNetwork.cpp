#include <iostream>

using namespace std;

int main()
{
	string username;
	string password;
	bool success;
	cout << "Game Designer's Network" << endl;
	do
	{
		cout << "Username: " << endl;
		cin >> username;
		cout << "Password: " << endl;
		cin >> password;
		if (username == "S.Meier" && password == "civilization")
		{
			cout << "Hey, Sid." << endl;
			success = true;
		}
		else if (username == "S.Miyamoto" && password == "mariobros")
		{
			cout << "What's up. Shigeru?" << endl;
			success = true;
		}
		else if (username == "W.Wright" && password == "thesims")
		{
			cout << "How goes it, Will?" << endl;
			success = true;
		}
		else if (username == "guest" || password == "guest")
		{
			cout << "Welcome, guest." << endl;
			success = true;
		}
		else
		{
			cout << "Your login failed." << endl;
			success = false;
		}
	} 
	while (!success);
}
