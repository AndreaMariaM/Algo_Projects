#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;
#include "card.h"
#include "deck.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;
//card constructors

card::card()
{

}

card::card(int val, string su)
{
	value = val;
	suit = su;
}
void card::setValue(int val)
{
	val = value;
}

void card::setSuit(string su)
{
	suit = su;
}
int card::getValue()
{
	return value;
}
string card::getSuit()
{
	return suit;
}
//output king and queen and jack for face cards
ostream& operator<<(ostream& os, const card& cd)
{
	if (cd.value <= 10)
	{
		os << "card value: " << cd.value << "  ";
	}
	if (cd.value == 11)
	{
		os << "card value: " << "Jack" << "  ";
	}
	if (cd.value == 12)
	{
		os << "card value: " << "Queen" << "  ";
	}
	if (cd.value == 13)
	{
		os << "card value: " << "King" << "  ";
	}
	if (cd.value == 14)
	{
		os << "card value: " << "Ace" << "  ";
	}
	os << "suit: " << cd.suit << endl;
	return os;
}
