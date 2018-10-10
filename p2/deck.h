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
#include <random>
/*
#include "d_except.h"
#include "d_node.h"
#include <algorithm>
#include <utility>
*/
using namespace std;

class deck
{
    public:
      deck(); //constructor creates the empty linked list

      //deck(deck &obj); //copy constructor

      void shuffle();

      //void playFlip(deck d); //starts the game

      friend ostream& operator<< (ostream &ostr, const deck& d); //printDeck

      //prints the entire deck
      //void printDeck(const deck& d);

      ~deck();

    private:
      struct Node *next;
      struct Node *head;
};

// ***********************************************************
//      deck class implementation
// ***********************************************************
deck::deck()
{
  //create the linked list EMPTY (NULL) with 52 OR 24 nodes
  //create a deck of cards
  //deck properties
  length = 52;
  suits = 13;
  clubs = "clubs";
  spades = "spades";
  hearts = "hearts";
  diamonds = "diamonds";

  card card;
  card.setValue(1);
  card.setSuit("test");
  current->nodeValue = card;
  current = current->next;
}



  /*//club suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit("clubs");  //set the suit
      card.setValue(i);     //set the value
      game_deck->nodeValue = card;
      game_deck->next = next;

      set first card
      if (i == 1)
      {
          card_deck->nodeValue = card;
      }

      set next card
      if (i == 2)
      {
          card_deck->nodeValue = card;
          card_deck->next = next;
      //}
  }*/

/*
  //spades suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit(spades);
      card.setValue(i);
      game_deck->nodeValue = card;
  }

  //hearts suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit(hearts);
      card.setValue(i);
      game_deck->nodeValue = card;
  }

  //diamonds suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit(diamonds);
      card.setValue(i);
      game_deck->nodeValue = card;

      try
      {
          game_deck->nodeValue = card;
      }
      catch (rangeError &ex)
      {
          cout << "exception error: ";
          cerr << ex.what() << endl;
      }
  }
}//END*/

/*
deck::deck(deck &obj)
{
    length = 52;
    suits = 13;
    clubs = "clubs";
    spades = "spades";
    hearts = "hearts";
    diamonds = "diamonds";

    //club suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(clubs);
        card.setValue(i);
        game_deck->nodeValue = card;

        //set first card
        if (i == 1)
        {
            card_deck->nodeValue = card;
        }

        //set next card
        if (i == 2)
        {
            card_deck->nodeValue = card;
            card_deck->next = next;
        }
    }
}

    //spades suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(spades);
        card.setValue(i);
        game_deck->nodeValue = card;
    }

    //hearts suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(hearts);
        card.setValue(i);
        game_deck->nodeValue = card;
    }

    //diamonds suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(diamonds);
        card.setValue(i);
        game_deck->nodeValue = card;
    }
}//END
*/

void deck::shuffle()
{
  int index;
  for(int i = 0; i < 52; i++)
  {
    index = rand() % 52;
    for (int i = 0; i < index-1; i++)
    {
      current = front->next;
    }
    front = current -> next;
  }
}

ostream & operator<<(ostream & os, const deck & d)
{
  node <card> *current;
  node <card> *next;
  cout<<"here"<<endl;
  for(current = d.front; current != NULL; current = current->next)
  {
     os << current->nodeValue;
  }
  return os;
}

/*
void deck::playFlip(deck d)
{
    cout << "Cards to be shuffled.\n";
    printDeck(d);
    cout << "Shuffling first time.\n";

    shuffle();
    std::cout << "cards after first shuffle.\n";
    printDeck(d);
    std::cout << "Shuffing second time.\n";

    shuffle();
    std::cout << "Cards after second shuffle.\n";
    printDeck(d);
    std::cout << "Shuffling third time.\n";

    shuffle();
    std::cout << "Cards after third shuffle.\n";
    printDeck(d);
    std::cout << "Done shuffling.\n\n";
}
*/
deck::~deck()
{
    cout << "Deck destroyed\n";
}


/* Right now i don't know where this goes, but it
doesn't go in the constructor

for (int i = 1; i < 14; i++)
  {
    *card(i, "club");
    *card(i, "diamond");
    *card(i, "heart");
    *card(i, "spade");

  }
}

deck::shuffle(deck)
{
  
}
