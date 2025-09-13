//GameEntry Class declaration section
//Programmer: Maria Psomas :)
#ifndef GAMEENTRY_H
#define GAMEENTRY_H
#include <string> //this is for using string type
class GameEntry
{
	private:
		string name;
		int score;
	public:
		GameEntry(); //default constructor
		~GameEntry();
		string getName()const;//To get the name
		int getScore();//To get the score
};

#endif
