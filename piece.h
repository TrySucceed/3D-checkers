//Matthew Julio
//10-20-2020
//This is the checkers class for a 3d checkers pice

#include <iostream>

class piece{
protected:
	int pieceNumber, positionX, positionY, positionZ;
	bool black, alive;
public:
//constructors
	piece::piece();
	piece::piece(int, int, int, int, bool, bool);
//getters
	int getPieceNuber();
	int getPositionX();
	int getPositionY();
	int getPositionZ();
	bool getBlack();
	bool getAlive();
//setters
	void setPiceNumber (int);
	void setPositionX (int);
	void setPositionY (int);
	void setPositionZ (int);
	void setBlack (bool);
	void setAlive (bool);
//general functions
	void die (void);
};
