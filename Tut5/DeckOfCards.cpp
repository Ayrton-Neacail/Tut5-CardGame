#include <iostream>
#include <string>
#include "DeckOfCards.h"
#include <cstdlib>


#include <ctime>

using namespace std;


DeckOfCards::DeckOfCards()
{
	Total = 20;
	Ptr = new Card[Total];

	for (int i = 0; i < 10; i++)
	{
		Ptr[i] = Card(i + 1, "Red");

		Ptr[10 + i] = Card(i + 1, "Black");
	}
}


DeckOfCards::~DeckOfCards()
{
	delete[] Ptr;
}

DeckOfCards DeckOfCards::reset()
{
	return DeckOfCards();
}

void DeckOfCards::shuffle()
{
	int rndm1;
	int rndm2;
	Card temp;
	srand(time(0));
	if (Total >= 2)
	{
		for (int i = 0; i < 50; i++)
		{
			rndm1 = rand() % Total;
			rndm2 = rand() % Total;

			temp = Ptr[rndm1];
			Ptr[rndm1] = Ptr[rndm2];
			Ptr[rndm2] = temp;
		}
	}
}

Card DeckOfCards::draw()
{
	Card  temp;
	temp = Ptr[Total - 1];
	Total--;
	return temp;
	delete &temp;

}

void DeckOfCards::peek()
{

}

void DeckOfCards::numberOfCards()
{

}

