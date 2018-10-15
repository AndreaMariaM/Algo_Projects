/*
Algorithms 9/28/18
Project #2 Part A card.h file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/

#include <stdlib.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#ifndef CARD_H
#define CARD_H
class card
{
    public:
      card();
      card(int v, string s); //value and suit
      void setValue(int);
      void setSuit(string);
      int getValue(card c);
      string getSuit(card c);
      friend ostream& operator<< (ostream &ostr, const card& c);

    private:
      int value;
      string suit;
};

template <typename T>
class node
{
public:
	T nodeValue;
	node<T>* next;
	node() : next(NULL) {}
	node(const T& item, node<T> *nextNode = NULL) :
		nodeValue(item), next(nextNode) {}
};
#endif
// ***********************************************************
//      card class implementation
// ***********************************************************
card::card()
{

}

card::card(int v, string s): value(v), suit(s)
{
  setValue(v);
  setSuit(s);
}

ostream & operator<<(ostream & os, const card & c)
{
  if(c.value == 1)
    os << "card value: " << "Ace" << "  ";
  else if(c.value <= 10)
    os << "card value: " << c.value << "  ";
  else if(c.value == 11)
    os << "card value: " << "Jack" << "  ";
  else if(c.value == 12)
    os << "card value: " << "Queen" << "  ";
  else if(c.value == 13)
    os << "card value: " << "King" << "  ";
  os << "suit: " << c.suit << endl;
	return os;
}

void card::setValue(int v)
{
  value = v;
}

void card::setSuit(string s)
{
  suit = s;
}

int card::getValue(card c)
{
  return c.value;
}

string card::getSuit(card c)
{
  return c.suit;
}
