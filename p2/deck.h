/*
Algorithms 9/28/18
Project #2 deck.h file
Flipcard Game
Rebekah Davis, Andrea Matellian, and Nathan Newbury
Group ID: DAVMATNEW
*/
#include "card.h"
#include <cstdlib>
#include <stdlib.h>
#include <random>
#include <algorithm>

using namespace std;

#ifndef DECK_H
#define DECK_H
class deck
{
    public:
      deck(); //constructor creates the empty linked list

      void shuffle();

      friend ostream& operator<< (ostream &ostr, const deck& d); //printDeck

      ~deck();

    private:
      node<card> *front;
      node<card> *nodeValue;
      node<card> *next;
      node<card> *current;
};
#endif
// ***********************************************************
//      deck class implementation
// ***********************************************************
deck::deck()
{
  //create a deck of cards
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
	node<card>*four;
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



/*
void deck::shuffle()
{
  for(int i = 0; i < 26; i++)
  {
    int index = rand() % 52;
    for (int j = 0; j < index-1; j++)
    {
      //nodeValue = nodeValue->next;

      tmp2 = current->nextNode;
      tmp1->nextNode = tmp2->nextNode;
      tmp2->prev = tmp1->item; //item = head?
      tmp2->item = d.front;
    }
  }
}
*/

ostream & operator<<(ostream & os, const deck & d)
{
  node <card> *nodeValue;
  node <card> *next;
  for(nodeValue = d.front; nodeValue != NULL; nodeValue = nodeValue->next)
  {
     os << nodeValue->nodeValue;
  }
  return os;
}

deck::~deck()
{
  node <card>* current = front;
  while( current != 0 )
  {
    node<card>* next = current->next;
    delete current;
    current = next;
  }
  front = 0;
  cout << "Deck destroyed\n";
}
