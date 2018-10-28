// CS 1337.003 Project 4 <sxk170832> <Siang Swee Kong>
//This is a program that represents vehicles in a parking lot. Users can add vehicles to the parking lot and remove vehicles from the parking lot by providing the make and model of the vehicles.
//This program can also return the number of vehicles in the parking lot and print out a list of vehicles in the parking lot.



//class specification file that stores class declaration for Vehicle class
#ifndef VEHICLE_H_ //This directive tells the preprocessor to see if a constant named VEHICLE_H_ has not been previously created  with a #define directive.
#define VEHICLE_H_ //If the VEHICLE_H_ constant has not been defined, the rest of the file is included. If the constant has been defined, everything between the #ifndef and #endif is skipped.

#include <string> //need to include this header file to work with string data type

using namespace std; //declares that the program will be accessing entities whose names are part of the namespace called std


//Create an abstract data type that represents a vehicle
class Vehicle{
//making the member variables private to protect critical data from being accidentally modified, they cannot be accessed by statements outside the class
private:
	string make; //attribute of of a vehicle
	string model; //attribute of of a vehicle
public://public access specifier is used for member functions which means that they can be called from statements outside the class.
	Vehicle(); //create a default constructor that takes no arguments
	Vehicle(string,string); //create a constructor that has two parameters for the make and model of a vehicle
	~Vehicle();  //create a destructor that perform shutdown procedures when the object is destroyed.

	void set(string,string); //a function to set the values for make and model of a vehicle
	string getMake () const; //a function to retrieve the value of make as a string
	string getModel () const; //a function to retrieve the value of model as a string
};



#endif //Needed to end the #ifndef statement
