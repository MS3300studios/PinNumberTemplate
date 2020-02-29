#include <iostream>
#include <windows.h>

void Pin();
std::string PIN = "1234";

int main()
{
	Pin();
}


void Pin()
{
	std::string user_input;
	int counter = 2;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Please enter the PIN number: ";
		std::cin >> user_input; 
		if (user_input == PIN)
		{
			system("cls");
			system("color 2");
			std::cout << "Correct PIN!!!"<<std::endl;
			system("pause");
			system("cls");
			system("color 7");
			break;
		}
		else
		{
			system("cls");
			system("color 4");
			std::cout << "inorrect PIN, try again. Attempts left: "<<counter<<std::endl;
			system("pause"); 
			system("cls");
			system("color 7");
		}
		counter--;
	}
}

