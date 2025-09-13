//Scores Class declaration section
//Programmer: Badtothebunny
#ifndef SCORES_H
#define SCORES_H
#include "GameEntry.h" //Including parent class here
class Scores
{
	private:
		int maxEntries;
		int numEntries;
		GameEntry: *entries;
	public:
		Scores (int maxEnt = 10);
		~Scores();
		void add(const GameEntry&);
		GameEntry remove (int i)throw(IndexOutOfBounds);
		void printAll();
		void printIndex(int indx)throw(IndexOutOfBounds);
};

#endif

