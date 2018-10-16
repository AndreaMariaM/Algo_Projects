/*
Algorithms 9/28/18
Project #2 Part A deck.h file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/
#include "card.h"
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <utility>
#include <random>

using namespace std;

#ifndef DECK_H
#define DECK_H
class deck
{
    public:
      node<card> *front;

      deck(); //constructor creates the linked list 52 nodes

      deck(int size); //creates list of 24 cards

      void shuffle();

      friend ostream& operator<< (ostream &ostr, const deck& d); //printDeck

      //returns the top card of the deck and is then removed
      card deal();

      void replace(card c);

      ~deck();

    private:
      int size;
      node<card> *current;
      node<card> *next;
      node<card> *back;
};
#endif
// ***********************************************************
//      deck class implementation
// ***********************************************************

deck::deck(int size)
{
  front=NULL;
  back=NULL;
}


deck::deck()
{
  //create a deck of 52 cards
  card first(1, "Clubs");
  front = new node<card>(first);

  for (int i = 2; i <= 13; i++)
  {
    card c(i, "Clubs");
    front = new node<card>(c, front);
  }

  for (int i = 1; i <= 13; i++)
  {
    card c(i, "Spades");
    front = new node<card>(c, front);
  }

  for (int i = 1; i <= 13; i++)
  {
    card c(i, "Hearts");
    front = new node<card>(c, front);
  }

  for (int i = 1; i <= 13; i++)
  {
    card c(i, "Diamonds");
    front = new node<card>(c, front);
  }
}

void deck::shuffle()
{
	node<card> *one;
	node<card> *two;
	node<card> *three;
	node<card> *four;
	node<card> *temp;
	node<card> *second;
	temp = front->next;
	one = front->next;
	second = front->next;
	int x = (rand() % 48)+1;

	//traverse the linked list to a random spot
	for (int i = 0; i < x; i++)
	{
		temp = one;
		one = one->next;
	}
	//swap two items and swap one item with the first
	front->next = one;
	temp->next = front;
	front = second;
	two = one->next;
	three = two->next;
	four = three->next;
	one->next = three;
	two->next = four;
	three->next = two;

}

ostream & operator<<(ostream & os, const deck & d)
{
  node <card> *current;
  node <card> *next;
  for(current = d.front; current != NULL; current = current->next)
  {
     os << current->nodeValue;
  }
  return os;
}

card deck::deal()
{ //returns top card in deck and then deletes it
  node<card> *top_card;
  top_card = front;
  front = front->next;

  return top_card->nodeValue;
  delete top_card;
}

void deck::replace(card c)
{

	node<card> *last;
  last = front;
  if (front == NULL)
  {
    front = new node<card>(c);
    back = front;
  }
  else
  {
	  while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new node<card>(c);
  back = last->next;
  }
}





deck::~deck()
{
    cout << "Deck destroyed\n";
}
