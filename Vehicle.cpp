// CS 1337.003 Project 4 <sxk170832> <Siang Swee Kong>
//class implementation file that stores the member function definitions for Vehicle class
#include "Vehicle.h" //Needed to use Vehicle class. " "indicates the file is located in the current project directory.

//Define the default constructor that initialize the attributes of Vehicle class
Vehicle::Vehicle(){
	make = "None"; //set the default value for make
	model = "None"; //set the default value for model
}

//Define the constructor for Vehicle class that takes two arguments of string variable
Vehicle::Vehicle(string _make, string _model){
	set(_make, _model); //call the set function to set the values of make and model
}

Vehicle::~Vehicle() //create a destructor that perform shutdown procedures when the object is destroyed.
{
	//does nothing
}

//Define the set function that has two parameters to set the values of make and model of a vehicle
void Vehicle::set(string _make, string _model){
	make = _make; //assign the first parameter to make variable
	model = _model; //assign the second parameter to model variable
}

//Define the getMake function that returns the value stored in the make member variable.
string Vehicle::getMake () const{
	return make;
}

//Define the getModel function that returns the value stored in the model member variable.
string Vehicle::getModel () const{
	return model;
}
