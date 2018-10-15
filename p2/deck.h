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
//#include <random>

using namespace std;

#ifndef DECK_H
#define DECK_H
class deck
{
    public:
      deck(); //constructor creates the empty linked list
      void swap(card *a, card *b);
      void shuffle();
	  void replace(card c);
	  void test(int y);
      friend ostream& operator<< (ostream &ostr, const deck& d); //printDeck

      ~deck();

    private:
      node<card> *front;
      node<card> *current;
      node<card> *next;
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
void deck::swap(card *a, card *b)
{
    card temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void deck::shuffle()
{
  node <card> *tmp1 = front;
  node <card> *tmp2;

  for(int i = 0; i < 26; i++)
  {
    int index = rand() % 52;
    for (int i = 0; i < index-1; i++)
    {
      tmp2 = current;
      swap(&tmp1->nodeValue, &tmp2->nodeValue);
    }
    current = current->next;
  }
}
*/

ostream & operator<<(ostream & os, const deck & d)
{
  node <card> *current;
  for(current = d.front; current != NULL; current = current->next)
  {
     os << current->nodeValue;
  }
  return os;
}

deck::~deck()
{
    cout << "Deck destroyed\n";
}

void deck::replace(card c)
{
	cout<<"here2"<<endl;
	node <card> *last;
	node <card> *temp;
	node<card> *target;
	node<card> *nex;
	node<card> *previous;
	last = front;
	//move to the end
	while (last->next != NULL)
	{	
		cout<< last->nodeValue<<endl;
		if (last->next->nodeValue == c)
		{
			previous = last;
			target = last->next;
			nex = target->next;
		}
		last = last->next;
	}
	//set temp node node to the card
	cout<< "done"<<endl;
	cout<< "last:  "<<last->nodeValue<<endl;
	cout<<"target: "<<target->nodeValue<<endl;
	target->next = NULL;
	last->next = target;
	previous->next = nex;
}      
