#pragma once
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <time.h>
#include "Card.h"


class DeckOfCards{
private:

	int Total = 20;
	Card *Ptr = NULL;





public:

	DeckOfcards();       //default constructor
	~DeckOfCards();     // default destructor
	DeckOfCards reset();
	void shuffle();
	Card draw();
	void peek();
	int numberOfcards()


};