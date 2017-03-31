// Text_Adventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;


int main()
{
	srand(time(NULL));
	bool rabies = true;
	bool hep_b = true;
	string user_i;
	cout << "Go left or right? (left, right)" << endl;
	cin >> user_i;
	if (user_i == "left")
	{
		cout << "You enter a village, the populace thinks you're stupid. Stay the night or leave the village? (stay, leave)" << endl;
		cin >> user_i;
		if (user_i == "stay the night")
		{
			cout << "You sleep in a nearby inn. You are murdered in your sleep" << endl;
		}
		else if (user_i == "leave")
		{
			cout << "You left the village and run into a stray with the name Jacob shaved into its side. The dog lunges at you" << endl;
			int num = rand() % 10 + 1;
			if (num < 5)
			{
				rabies = false;
				cout << "The dog, so called \"Jacob\", release yellow fluid of justice on your leg. Do you hit Jacob? (yes, no)" << endl;
				cin >> user_i;
				if (user_i == "yes")
				{
					hep_b = false;
					cout << "You punch Jacob mouth, and its teeth dig into your hand" << endl;
					cout << "Your skin begins to lose its yellow color. As the itchiness of your skin begins to diminish, and you slowly realise that this is a magical dog" << endl;
				}
				else if (user_i == "no")
				{
					cout << "You scream at the dog and it runs away with its tail between its legs" << endl;
				}
				else
				{
					cout << "I don't understand your input" << endl;
				}
				
			}
			else
			{
				cout << "It nibbles your arm, which start tingling. A few days you foam at the mouth and horrify your family" << endl;
			}

		}
		else
		{
			cout << "I don't understand your input moron" << endl;
		}
	}
	else if (user_i == "right")
	{
		cout << "You enter a dungeon. You died" << endl;
	}
	else
	{
		cout << "I don't understand your input moron" << endl;
	}
    return 0;
}

