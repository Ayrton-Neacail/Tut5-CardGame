#pragma once
#include <iostream>
#include <string>

using namespace std;



class Card{
private:
	int Cnum; 
 string	 Ccol;


public:
	Card();      //default constructor
	int number(int Cnum);
	string colour(string Ccol);
	void print(int Cnum, string Ccol);



	~Card(){
	
	
	
	
	
	};  //default destructor


};



Card::Card(){  //initialising default values to card and colours
	Cnum = 0;
	Ccol = "NULL";

};



int Card::number(int n){
	n = rand() % 10+1; //generate random card when called in the range of 1 to 10


	return n;  //returns the number generated


}


string Card::colour(string c){

	c = rand() % 1;

	if (bool c = 0){
		c = "Red";
	}
	else{
		c = "Black";
	
	}

	return c;


}

void Card::print(int Cnum, string Ccol){

	cout << "Colour is :"<< Ccol << "Number is : " << Cnum << endl;


}