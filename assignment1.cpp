/**
91.201 Assignment1
main.cpp
Purpose:Output circle with certain features and ask user for input of values that are used for Circle's locations.

@author Jonathan Vasquez
@version 1.0 9/18/15
*/
#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;



int main()
{
  int *xCoordinatesArray=NULL;
  int *yCoordinatesArray=NULL;
  int  xCoordinates;
  int  yCoordinates;
  
  /////////////////
  int numLocations;
  cout<<"How may locations would you like to enter for the Circle:";
  cin>>numLocations;
  xCoordinatesArray=new int[numLocations];
  yCoordinatesArray=new int[numLocations];
  /**
     Allocation of memory of both x and y arrays
     
   */
for(int i=0;i<numLocations;i++)
    {
      xCoordinatesArray[i]=0;
      yCoordinatesArray[i]=0;
    }
  /////////////////////////////////////
/**
The for loop asks the user for different locations based on their previous input of number of locations. setPosition then sets coordinates based off user and later ouputs the Circle based on the user's x and y coordinates
 */
  

	      for(int i=0;i<numLocations;i++)
	      {
		
		cout<<"Enter x coordinate for location of Circle:";
		cin>>xCoordinatesArray[i];
  
		cout<<"Enter y coordinate for location of Circle:";
		cin>>yCoordinatesArray[i];
	
	        sf::RenderWindow window(sf::VideoMode(900, 700), "Jonathan Vasquez");
		while(window.isOpen())
		 {
		   sf::Event event;
		   while (window.pollEvent(event))
		     {
		       if (event.type == sf::Event::Closed)
			 window.close();
		     }
		sf::CircleShape shape(100.f);
		shape.setFillColor(sf::Color::Red);
		shape.setPosition(xCoordinatesArray[i],yCoordinatesArray[i]);
		window.clear();
		window.draw(shape);
		window.display();
	        
	         }
        
         
	     
	  }
	      delete[] xCoordinatesArray;
	      delete []yCoordinatesArray;
	     
}

