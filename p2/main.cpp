/*
Algorithms 9/28/18
Project #2 main.cpp file
Flipcard Game
Rebekah Davis, Andrea Matellian, and Nathan Newbury
Group ID: DAVMATNEW
*/

#include "deck.h"
#include <vector>

using namespace std;

int main()
{
  /*verify the copy constructor works
  card c1(4, "hearts");
  card c2(5, "diamonds");
  card c3(c2);
  card c4(c1);
  cout<<c3;
  cout<<c4;
  */
  deck d;
  d.playFlip(d);
  return  0;
/*
	int x;
  deck mainDeck;
  cout<<mainDeck;
  card c1(2, "Clubs");
  mainDeck.replace(c1);
  cout<<"replaced!:  "<<endl;
  cout<< "shuffled" << endl;
  for(int i = 0; i<100; i++)
    mainDeck.shuffle();
  cout<<mainDeck;
  cout << mainDeck;
  cin >> x;

  */
}
