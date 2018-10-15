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
  return  0;
}
