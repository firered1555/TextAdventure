//Author: Daniel Saviet
//Date: 10/8/2016

#include <iostream> 
#include <vector> 
#include <string>
#include <fstream> 
#include <cstdlib>
#include <Windows.h>
#include <ctime>
using namespace std;

//function declarations
void Dialogue1(string &name);
void playername();
void gameover();
void dialogue2(string &name);
void dialoguesword(string &name);
void dialogueshield(string &name);
void win();
void dialoguesword2(string &name);
void RATFIGHT(string &name, double &h, int &d);
void drank(bool &ddrank, string &name);
void prank(bool &vdrank, string &name);


//main
int main()
{
	string name;
	cout << "Let's Begin" << endl;
	playername();
	system("pause");
}

//gets input for player name
void playername()
{

	string name;
	cout << "INPUT THE NAME OF YOUR CHARACTER" << endl;
	cin >> name; // has the player input a name
	system("pause");
	Dialogue1(name);

}

//Outputs the first set of dialogue
void Dialogue1(string &name)
{

	cout << name << " awakes in a rusting cell." << endl; // cout outputs dialogue
	cout << name << " appears to be in an old decrepit castle" << endl;
	cout << name << " has no memory of the events that led to this castle" << endl;
	cout << "The door is open." << endl;
	cout << "What should be done?" << endl;
	system("pause");
	int x;                                   //integer x represents the player's decision
	cout << "please input the number that corresponds with your choice" << endl;
	cout << "1: step out of the cell" << endl;
	cout << "2: stay in cell." << endl;
	cin >> x;
	system("pause");
	switch (x) // a switch gives the player choices
	{
	case 1:
		cout << name << " steps out of the cell." << endl;
		system("pause");
		dialogue2(name);
		break;
	case 2:
		cout << name << " dies of starvation in the cell." << endl;
		system("pause");
		gameover(); // This will take you to the game over screen function
		break;
	}
}

//Outputs the second set of dialogue and takes choice
void dialogue2(string &name)
{
	srand(time(0));
	int adjective = rand() % 4; // this generates a pseudorandom number
	int adverb = rand() % 4;
	//  these arrays store multiple values under one variable, but  the variable can only
	// represent one value at a time
	string ADV[5] = { "disgustingly","seductively", "destructively", "hideously", "disturbingly" };
	string ADJ[5] = { "abominable","ravenous", "rabies-infested", "giant", "liberal" };
	cout << "There are three paths." << endl;
	cout << "Straight, Left, and right" << endl;
	cout << name << " notices that a shield is mounted on the wall in the right passage." << endl;
	cout << name << " also notices that a decorative suit of armor holds a sword" << endl;
	cout << "in the left corridor" << endl;
	system("pause");
	cout << "A " << ADV[adverb] << " " << ADJ[adjective] << " RAT MONSTER BARRELS DOWN THE CENTER PATH SHRIEKING" << endl;
	system("pause");// these cout statements use the arrays to output pseudorandom adverbs and aadjectives
	cout << "Which path do you take" << endl;
	cout << "1: dodge to the left  to get the sword" << endl;
	cout << "2: dodge  to the right to get  the shield" << endl;
	cout << "3: RUN TOWARD THE " << ADV[adverb] << " " << ADJ[adjective] << "RAT MONSTER!!!" << endl; // more choices
	int choice;
	cin >> choice;
	system("pause");
	switch (choice)                                                                                     // another switch
	{
	case 1:
		cout << name << " runs to the left, and grabs the sword from the suit of armor" << endl;
		cout << "It is sharp enough for the deed at hand" << endl;
		cout << " The Monster slams against the cells" << endl;
		cout << " It recovers quickly and charges after " << name << endl;
		system("pause");
		dialoguesword(name);
		break;
	case 2:
		cout << name << " dodges to the right and grabs the antique shield from the wall" << endl; // different possible story lines
		cout << " It has battle scars, but it seems functional" << endl;
		cout << " The Monster slams against the cells" << endl;
		cout << " It recovers quickly and charges after " << name << endl;
		system("pause");



		dialogueshield(name);
		break;
	case 3:
		cout << name << " is devoured by the rat in horribly gruesome fashion" << endl; // or just death
		gameover();
		break;
	}


}
//outputs dialogue when player chooses sword
void dialoguesword(string &name)
{
	cout << "the rat is closing in!" << endl;
	cout << name << " finds the body of a guard likely devoured by the rat in past meals" << endl;
	system("pause");
	cout << "You scavenge off the body and find a set of keys" << endl;
	cout << "You find the nearest door and pray that it opens" << endl;
	cout << "luck is on your side and as the key turns, the door opens" << endl;
	cout << " the door opens into a stairway" << endl;
	cout << " Under the stairway is a little girl hiding from " << name << "'s " << "pursuer" << endl;
	system("pause");
	cout << " The girl sees you and explains that she knows a way out of the castle if " << endl; // more dialogue
	cout << name << " can defend her from the rat on the way" << endl;
	cout << name << " hears the rat breaking down the door" << endl;
	cout << name << " runs up the stairs with the girl in tow as the rat chrashes through the door" << endl;
	system("pause");

	dialoguesword2(name);
}

//ouputs dialogue for strength potion
void drank(bool &ddrank, string &name)
{
	if (ddrank == true)
	{
		cout << name << " can feel the power of the potion" << endl;
		cout << name << " can feel the new strength of his strikes" << endl;
		cout << "Even a monster cannot withstand these blows unphased" << endl; //if statements and stitsches
		cout << name << " won't go down without a fight" << endl;
		system("pause");
	}
}
//outputs dialogue for health potion
void prank(bool &vdrank, string &name)
{
	if (vdrank == true)
	{
		cout << name << " can feel the power of the potion" << endl;
		cout << name << "'s fatigue is gone and " << name << " feels more battle ready than ever" << endl;
		cout << name << " won't go down without a fight" << endl;
		system("pause");
	}
}

//outputs second set of dialogue once sword is chosen
void dialoguesword2(string &name)
{
	int lol;
	double health = 10.0;
	int damage = 2;
	bool vdrank = false;
	bool ddrank = false;
	cout << "The girl says she can make a potion that amplifies strength" << endl;
	cout << ",or a potion that amplifies vitality" << endl;
	cout << "however she can only make one to help " << name << " defeat the rat" << endl; //this potion determines your stats
	cout << "Which should " << name << " take?" << endl;
	system("pause");
	cout << "1.strength boost" << endl;
	cout << "2.vitality boost" << endl;
	cout << "3.NEITHER, SHE IS GONNA POISON " << name << endl;
	cin >> lol;
	switch (lol)
	{
	case 1:
		cout << name << " feels stronger" << endl;
		damage = damage++;

		if (lol = 1)
		{
			ddrank = true;
		}
		break;
	case 2:
		cout << name << " is no longer fatigued" << endl;
		health = health + 5;
		if (lol = 2)
		{
			vdrank = true;
		}
		break;
	case 3:
		cout << "this girl cannot be trusted" << endl;
		health = 8;
		break;

	}
	if (lol = 1)
	{
		drank(ddrank, name);
	}
	if (lol = 2)
	{
		prank(vdrank, name);
	}
	RATFIGHT(name, health, damage);
	if (vdrank == false && ddrank == false)
	{
		cout << name << " is fatigued and feels weak" << endl;
		system("pause");
	}
}
//handles boss fight
void RATFIGHT(string &name, double &h, int &d) //passed variables
{
	int rh;
	int c;
	int k;
	int j;
	rh = 20;
	cout << name << " runs down the hallway" << endl;
	cout << "the girl says the exit is close" << endl;
	cout << "But so is the rat!" << endl;
	cout << name << " sees the door in the distance" << endl;
	cout << name << " GRABS THE DOOR AND PULLS WITH ALL POSSIBLE MIGHT" << endl;
	system("pause");
	cout << "It's locked" << endl;
	cout << name << " turns to face the Monster that has finally cornered its prey" << endl; // battle time



	do
	{
		int ra = rand() % 2;
		if (ra == 1)
		{
			cout << "the rat is ready to slash at " << name << endl;
			cout << " what should " << name << " do?" << endl;//rat battle system
			cout << "1.slash" << endl;
			cout << "2.block" << endl;
			cout << "3.counter" << endl;
			cin >> c;
			system("pause");

			switch (c)
			{
			case 1:
				cout << "The rat and " << name << " slash each other" << endl;
				cout << "both take damage" << endl;
				system("pause");
				h = h - 2;// damage taken
				rh = rh - d * 2;//damage to rat
				break;
			case 2:
				cout << name << " blocked the rats attack and gets time to recover" << endl;
				system("pause");
				h = h - 2;
				h = h + 4;
				break;
			case 3:
				cout << name << " takes some damage deflecting the attack, but " << endl;
				cout << "gets a powerful counter strike" << endl;
				system("pause");
				h = h - 2;
				h = h + 1;
				rh = rh - d * 3;
				break;
			}
		}

		if (ra == 2)
		{
			cout << "the rat spits acid at " << name << endl;
			cout << " what should " << name << " do?" << endl;
			cout << "1.slash" << endl;
			cout << "2.block" << endl;
			cout << "3.counter" << endl;
			cin >> k;

			switch (k)
			{
			case 1:
				cout << "The rat and " << name << " attack each other" << endl;
				cout << "both take damage" << endl;
				system("pause");
				h = h - 4;
				rh = rh - d * 2;
				break;
			case 2:
				cout << name << " can't block all the acid and takes some damage" << endl;
				system("pause");
				h = h - 4;
				h = h + 2;
				break;
			case 3:

				cout << name << " Acid cannot be countered " << endl;
				cout << "you are covered in acid" << endl;
				system("pause");
				h = h - 4;
				rh = rh + 1;
				break;
			}
		}


		if (ra == 0)
		{
			cout << "the rat is ready to lash out at " << name << endl;
			cout << "with a powerful strike" << endl;
			cout << " what should " << name << " do?" << endl;
			cout << "1.slash" << endl;
			cout << "2.block" << endl;
			cout << "3.counter" << endl;
			cin >> j;
			// neeed explaination comments
			switch (j)
			{
			case 1:
				cout << "The rat and " << name << " attack each other" << endl;
				cout << "both take damage" << endl;
				system("pause");
				h = h - 5;
				rh = rh - d * 2;
				break;
			case 2:
				cout << name << " blocked the rats attack and gets time to recover" << endl;
				system("pause");
				h = h - 2;
				h = h + 4;
				break;
			case 3:
				cout << name << " takes full damage deflecting the attack, but " << endl;
				cout << "gets a powerful counter strike" << endl;
				system("pause");
				h = h - 5;
				h = h + 1;
				rh = rh - d * 3;
				break;
			}
		}
		cout << "DAMAGE REPORT" << endl;
		cout << name << "has " << h << "hp remaining" << endl;
		cout << "The rat has " << rh << "hp remaining" << endl;
		system("pause");

	} while (h>0 && rh>0);
	if (rh <= 0)
	{
		cout << "The rat is dead" << endl;
		win();

	}
	if (h <= 0)
	{
		cout << name << " is dead" << endl;
		gameover();
	}


}
//handle dialogue when shield is chosen
void dialogueshield(string &name)
{
	int d;
	int life;
	int bruh;
	life = 4;
	d = 0;
	cout << name << "sprints down the corridor " << endl;
	cout << name << "finds the end of the corridor" << endl;
	cout << "THE RAT IS COMING" << endl;
	system("pause");
	cout << name << "puts up his guard. he won't go down without a fight" << endl;
	cout << "The rat lets out a furious shriek" << endl;
	cout << "the shriek causes the floor of this decrepit castle to fall away behind the rat" << endl;
	system("pause");
	cout << "If " << name << " can push the monster into that hole the rat will not return" << endl;
	cout << "It's time to take down this beast!" << endl;
	system("pause");
	do
	{
		if (d == 4)
		{
			cout << "The rat is 1 steps from the hole" << endl;
			cout << "The rat looks ready to lash out in desperation " << endl;
			cout << "what will " << name << " do?" << endl;
			cout << "1. Charge" << endl;
			cout << "2. kick" << endl;
			cout << "3. block" << endl;
			cin >> bruh;
			system("pause");
			switch (bruh)
			{
			case 1: cout << name << " charges into the rat" << endl;
				cout << "The rat lashes out with claw and tooth, rending flesh" << endl;
				cout << name << " takes heavy damage" << endl;
				cout << "The rat steps foward" << endl;
				system("pause");
				--d;
				life = life - 2;
				break;
			case 2:
				cout << name << " exclaims THIS IS SPARTA  as the rat plunges into the abyss" << endl;
				cout << name << " will not be troubled by this ravenous foe again" << endl;
				cout << "The beast has been defeated" << endl;
				system("pause");
				++d;
				break;
			case 3:
				cout << name << " blocked" << endl;
				cout << "The shield could not block all the blows as the rat pushed " << name << "further from the hole" << endl;
				system("pause");
				--d;
				--life;
				break;
			}
		}
		if (d == 3)
		{
			cout << "The rat is 2 steps from the hole" << endl;
			cout << "The rat shoves " << name << " away" << endl;
			cout << "The rat looks ready to charge" << endl;
			cout << "what will " << name << " do?" << endl;
			cout << "1. Push the rat toward the hole" << endl;
			cout << "2. shield bash" << endl;
			cout << "3. block" << endl;
			cin >> bruh;
			system("pause");
			switch (bruh)
			{
			case 1: cout << "The rat charges and bites you before you can push him" << endl;
				system("pause");
				--d;
				--life;
				break;
			case 2:
				cout << "It doesn't stop the rat's charge, but " << name << " avoided damage" << endl;
				cout << " The beast is farther from the hole" << endl;
				system("pause");
				--d;
				break;
			case 3:
				cout << name << " blocked" << endl;
				cout << "no damage was received, but the rat pushed " << name << "further from the hole" << endl;
				system("pause");
				--d;
				break;

			}
		}

		if (d == 2)
		{
			cout << "The rat is 3 steps from the hole" << endl;
			cout << "The rat looks ready to slash at " << name << endl;
			cout << "what will " << name << " do?" << endl;
			cout << "1. Charge" << endl;
			cout << "2. shield bash" << endl;
			cout << "3. block" << endl;
			cin >> bruh;
			system("pause");
			switch (bruh)
			{
			case 1: cout << name << " charges into the rat" << endl;
				cout << "The wind is blown out of rat" << endl;
				cout << "The beast takes a step back" << endl;
				cout << "The rat moves ever closer to the hole" << endl;
				system("pause");
				d = d + 2;
				break;
			case 2:
				cout << name << "is slashed by the rat's claws before he can attack" << endl;
				cout << " The beast advances as " << name << " reels from the blow" << endl;
				cout << " The beast is farther from the hole" << endl;
				system("pause");
				d = d - 2;
				break;
			case 3:
				cout << name << " blocked" << endl;
				cout << "no damage was received, but the rat pushed " << name << "further from the hole" << endl;
				system("pause");
				--d;
				break;
			}
		}
		if (d == 1)
		{
			cout << "The rat is 4 steps from the hole" << endl;
			cout << "The rat shoves " << name << " away" << endl;
			cout << "The rat looks ready to charge" << endl;
			cout << "what will " << name << " do?" << endl;
			cout << "1. Push the rat toward the hole" << endl;
			cout << "2. shield bash" << endl;
			cout << "3. block" << endl;
			cin >> bruh;
			system("pause");
			switch (bruh)
			{
			case 1: cout << "The rat charges and bites you before you can push him" << endl;
				system("pause");
				--d;
				--life;
				break;
			case 2:
				cout << "It doesn't stop the rat's charge, but " << name << " avoided damage" << endl;
				cout << " The beast is farther from the hole" << endl;
				system("pause");
				--d;
				break;
			case 3:
				cout << name << " blocked" << endl;
				cout << "no damage was received, but the rat pushed " << name << "further from the hole" << endl;
				system("pause");
				--d;
				break;

			}
		}

		if (d == 0)
		{
			cout << "The rat is 5 steps from the hole" << endl;
			cout << "The beast stands up on its hind legs" << endl;
			cout << "It towers over " << name << endl;
			cout << "what will " << name << " do?" << endl;
			cout << "1. Push the rat toward the hole" << endl;
			cout << "2. shield bash" << endl;
			cout << "3. do nothing" << endl;
			cin >> bruh;
			system("pause");
			switch (bruh)
			{
			case 1: cout << "The rat lets out a mighty screech as you push it closer to the hole" << endl;
				system("pause");
				++d;
				break;
			case 2:
				cout << "The rat stumbles back" << endl;
				cout << " he is closer to the hole" << endl;
				system("pause");
				d = d + 2;
				break;
			case 3:
				cout << name << " did nothing" << endl;
				system("pause");
				break;
			}

			if (life == 4) {
				cout << name << " is lightly wounded" << endl;
				system("pause");
			}
			if (life == 3) {
				cout << name << " is wounded" << endl;
				system("pause");
			}
			if (life == 2) {
				cout << name << " is heavily wounded" << endl;
				system("pause");
			}
			if (life == 1) {
				cout << name << " is heavily wounded" << endl;
				system("pause");
			}


		}


		if (d == 5)
		{
			win();
		}
		if (life == 0)
		{
			gameover();
		}
	} while (d != 5 && life != 0);
}
//ouputs game over
void gameover()
{
	cout << "YOU DIED" << endl;
	system("pause");


}


//outputs victory screen
void win()
{
	cout << "YOU WIN" << endl;
	system("pause");

}





