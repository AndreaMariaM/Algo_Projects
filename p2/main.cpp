/*
Algorithms 9/28/18
Project #2 main.cpp file
Flipcard Game
Rebekah Davis, Andrea Matellian, and Nathan Newbury
Group ID: DAVMATNEW
*/

#include "deck.h"

using namespace std;

int main()
{
  /* //verify the copy constructor works
  card c1(4, "hearts");
  card c2(5, "diamonds");
  card c3(c1);
  card c4(c2);
  cout<<c3;
  cout<<c4;
  */


  deck mainDeck;
  cout<<mainDeck;
  for(int i = 0; i<100; i++)
    mainDeck.shuffle();
  cout<<"\n\n\n";
  cout<<mainDeck;


  return  0;
}
