/*
Algorithms 9/28/18
Project #2 Part A main.cpp file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/

#include "deck.h"

using namespace std;

void playFlip()
{
    int size = 24;
    deck main_deck; //initialize the main deck 52 cards
    deck deck24(size);  //initialize the 24 card deck - empty

    cout << "\n\nCards to be shuffled.\n\n";
    cout << main_deck;

    cout << "\n\nShuffling first time.";

    for(int i = 0; i<100; i++)
      main_deck.shuffle();
    cout << "\n\n\n";
    cout << main_deck;

    std::cout << "\n\nShuffing second time.";

    for(int i = 0; i<100; i++)
      main_deck.shuffle();
    cout << "\n\n\n";
    cout << main_deck;

    std::cout << "\n\nShuffling third time.";

    for(int i = 0; i<100; i++)
      main_deck.shuffle();
    cout << "\n\n\n";
    cout << main_deck;

    std::cout << "\n\nDone shuffling.\n\n";

    bool game = true;

    cout << "The game has started.\n\n"
    while (game == true)
    {
      int points = 0;

      main_deck.deal();
      cout << "Card dealt.\n\n";
      card current_card;
      //replace(current_card);
      //current_card = (main_deck.getValue(current_card), main_deck.getSuit(current_card));

      if ((current_card.getSuit(current_card) == "Hearts"))
      {
        points +=1;
      }

      else if (current_card.getValue(current_card) == 1)
      {
        points += 10;
      }

      else if ((current_card.getValue(current_card) == 11) ||
               (current_card.getValue(current_card) == 12) ||
               (current_card.getValue(current_card) == 13))
      {
        points += 5;
      }

      else if (current_card.getValue(current_card) == 7)
      {
        points /= 2;
      }

      else if ((current_card.getValue(current_card) == 2) ||
               (current_card.getValue(current_card) == 3) ||
               (current_card.getValue(current_card) == 4) ||
               (current_card.getValue(current_card) == 5) ||
               (current_card.getValue(current_card) == 6))
      {
        points = 0;
      }

    }
}


int main()
{
  playFlip();

  return  0;
}
