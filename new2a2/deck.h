#ifndef DECK_H
#define DECK_H
// creating the deck class
class deck
{
public:
	node<card> *first;
	deck();
	void shuffle();
	friend ostream& operator <<(ostream& os, const deck& dk);
};
#endif

