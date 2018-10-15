#ifndef CARD_H
#define CARD_H
//card class declaration
class card
{
public:
	void setValue(int val);
	void setSuit(string suit);
	int getValue();
	string getSuit();
	card();
	card(int val, string su);
	friend ostream& operator <<(ostream& os, const card& cd);

private:
	int value;
	string suit;
};
//nodes
template <typename T>
class node
{
public:
	T nodeValue;
	node<T>* next;
	node() : next(NULL) {}
	node(const T& item, node<T> *nextNode = NULL) :
		nodeValue(item), next(nextNode) {}
};

#endif
