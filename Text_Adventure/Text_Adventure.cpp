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

int health = 100;
int win = 0;
int lose = 0;
string user_i;

int main()
{
	srand(time(NULL));
	bool rabies = true;
	bool hep_b = true;
	cout << "You stand at the edge of a clearing overlooking a large hillside covered in faded yellow grass" << endl;
	cout << "The landscape repeats itself as far as you can see, with large limestone-like towers arching, twisting and piercing the sky" << endl; 
	cout << "Beyond the coulds above you can make out what appears to be a solid wall smothering the sky above. A natural sunlight still manages to sweep the seemingly specific landscape" << endl;
	cout << "You see a collection of dome like strucutres sitting at the bottom of the hill to your left?" << endl;
	cout << "To your right you see a large rusted tunnel which vanishes into the hillside.(Please enter: left or right)"<< endl;
	cin >> user_i;
	
	if (user_i == "left")
	{
		cout << "You enter a village, the populace thinks you're stupid. Stay the night or leave the village? (stay, leave)" << endl;
		cin >> user_i;
		if (user_i == "stay")
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
					cout << "Your skin begins to lose its yellow color. As the itchiness of your skin begins to diminish" << endl;
					cout << "You slowly realise that you have been suffering from Hepatitis B, and this dog has infact cured you!" << endl;
					win = 1;
				}
				else if (user_i == "no")
				{
					cout << "You scream at the dog and it runs away with its tail between its legs" << endl;
					win = 1;
				}
				else
				{
					cout << "I don't understand your input" << endl;
				}

			}
			else if (num > 5)
			{
				cout << "It nibbles your arm which starts tingling. A few days later you foam at the mouth and horrify your family" << endl;
				cout << "At least, that is the last thing you remember, if you remember anything at all now" << endl;
				lose = 1;
			}
		}
		else
		{
			cout << "I don't understand your input moron" << endl;
		}
	}

	else if (user_i == "right")
	{
		cout << "You make your way to the pipe which takes longer than you expected. The pipe is much much larger than you first thought" << endl;
		cout << "As you enter the huge tunnel, rusted shards fall down and hit your shoulders and neck. They amazingly bounce off your body, but chipping away at your torso" << endl;
		cout << "Upon closer inspection you notice your bidepal body is made up of a hard stone material. You deduce it is the same material as the arching structures from the landscape before" << endl;
		health = 98;
		cout << "Health: " << health << "%" << endl;
		cout << "You take a moment to decide whether or not to continue down the rusting tunnel or venture toward the dome village: (continue, village)" << endl;
		cin >> user_i;

		if (user_i == "continue")
		{
			cout << "As soon as you begin to move, confident in your decision to advance, the rusted crumpled footing gives way and you fall down a large metallic caver" << endl;
			cout << "At least, that is the last thing you remember, if you remember anything at all now" << endl;
			lose = 1;
		}
		else if (user_i == "village")
		{
			cout << "You enter a village, the populace thinks you're stupid. Stay the night or leave the village? (stay, leave)" << endl;
			cin >> user_i;
			if (user_i == "stay")
			{
				cout << "You sleep in a nearby inn. You are murdered in your sleep" << endl;
				lose = 1;
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
				else if (num > 5)
				{
					cout << "It nibbles your arm, which starts tingling. A few days later you foam at the mouth and horrify your family" << endl;
					lose = 1;
				}
			}
			else
			{
				cout << "I don't understand your input moron" << endl;
			}
		}
		else
		{
			cout << "I don't understand your input" << endl;
		}
	}

	else if (user_i == "killself")
	{
		cout << "You find a knife on your possession. You place it directly under your chin and force the blade into your skull" << endl;
		cout << "At least, that is the last thing you remember, if you remember anything at all now" << endl;
	}

	else
	{
		cout << "I don't understand your input moron" << endl;
	}

	if (win = 1)
	{
		cout << "YOU WON!" << endl;
	}

	else if (lose = 1)
	{
		cout << "GAME OVAH!" << endl;
	}
	return 0;
}

