/*
Algorithms 9/28/18
Project #2 Part A main.cpp file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/

#include "deck.h"

using namespace std;

int main()
{
  deck mainDeck;
  cout<<mainDeck;
  mainDeck.shuffle();
  cout<<mainDeck;

  return  0;
}
