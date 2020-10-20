#incldue "piece.h"

//cosntructors
//Default
pice::pice(){
	piceceNumber=0;
	positionX=0;
	positionY=0;
	positionZ=0;
	black=true;
	alive=true;
	}

//peramiterized
pice::pice (int newNumber, int newX, int newY, int newZ, bool newBlack, bool newAlive){
	if (newNumber)
	{
		throw "invalid piece nubmer error";
	}
	if (newX<0||newX>8)
	{
		throw "invalid x value";
	}
	if (newY<0||newY>8)
	{
		throw "invalid y value";
	}
	if (newZ<0||newZ>8)
	{
		throw "invalid z value";
	}
	nubmer=newNumber;
	positionX=newX;
	positionY=newY;
	positionZ=newz;
	black=newBlack;
	alive=newAlive;
}

//getters
int pice::getPieceNuber()
{
	return pieceNumber;
}

int pice::getPositionX()
{
	return positionX;
}

int pice::getPositionY()
{
	return positionY;
}

int pice::getPositionZ()
{
	return positionZ;
}

bool pice::getBlack()
{
	return black;
}

bool pice::getAlive()
{
	return alive;
}

//setters
void pice::setPiceNumber (int temp)
{
	if(temp<0)
	{
		throw "Invalid piece nubmer error";
	}
	pieceNumber=temp;
}

void pice::setPositionX (int)
{
	if (temp<0 || temp>8)
	{
		throw "invlalid X position";
	}
	postionX=number;
}

void pice::setPositionY (int)
{
	if (temp<0 || temp>8)
	{
		throw "invlalid Y position";
	}
	postionY=number;
}

void pice::setPositionZ (int)
{
	if (temp<0 || temp>8)
	{
		throw "invlalid Z position";
	}
	postiony=number;
}

void pice::setBlack (bool temp)
{
	balck=temp;
}

void pice::setAlive (bool temp)
{
	alive=temp;
}

//general functions
void pice::die (void)
{
	alive=false;
	if (black==true)
	{
	cout << "Black ";
	}
	else
	{
	cout << "Red ";
	}
	
	cout << "number " << number << " has been removed." << endl;

}
	cout << 
}
