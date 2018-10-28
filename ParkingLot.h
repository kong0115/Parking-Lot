// CS 1337.003 Project 4 <sxk170832> <Siang Swee Kong>
//class specification file that stores class declaration for ParkingLot class

#ifndef PARKINGLOT_H_ //This directive tells the preprocessor to see if a constant named PARKINGLOT_H_ has not been previously created  with a #define directive.
#define PARKINGLOT_H_ //If the PARKINGLOT_H_ constant has not been defined, the rest of the file is included.

#include "Vehicle.h" //Needed to use Vehicle class.
#include <vector>  //Need to include this header file to work with vector

//Create an abstract data type that represents a parking lot
class ParkingLot{
//making the member variables private to protect critical data from being accidentally modified, they cannot be accessed by statements outside the class
private:
	//create a vector of Vehicle (abstract data type) that will contain the vehicles currently in the parking lot.
	vector<Vehicle> pVehicles; //automatically adds space as more is needed
	unsigned int count = 0; // a variable to store the number of vehicles in the parking lot

public://public access specifier is used for member functions so that they can be called from statements outside the class.
	ParkingLot();//create a default constructor that takes no arguments
	~ParkingLot(); //create a destructor that perform shutdown procedures when the object is destroyed.
	void add(string _make, string _model); // Add a Vehicle to the Parking Lot. This function takes two arguments that are used to initialize the make and model of the vehicle.
	void add(const Vehicle& vehicle); // Add a Vehicle to the Parking Lot. This function takes one argument of constant vehicle data type and pass by reference.
	void removeByMake(string _make);// Remove a Vehicle from the Parking Lot with the matching Make.
	//Throw an exception consisting of a string describing the error if no Vehicle with the requested Make exists in the Parking Lot
	void removeByModel(string _model);// Remove a Vehicle from the Parking Lot with the matching Model.
	//Throw an exception with a string describing the error if no Vehicle with the requested Model exists in the Parking Lot
	long long unsigned getSize() const;// Return the number of Vehicles in the Parking Lot
	const Vehicle& vehicleAt(unsigned position) const; //Return the Vehicle at the specified index in the Parking Lot.
	//Use a zero-based index and ensure there are no gaps in where the vehicles are stored. In other words, valid positions range from 0 to getSize()-1.
	//If the requested position is greater than the number of Vehicles in the Parking Lot or the position is otherwise invalid, throw an exception with a string describing the error.

};

#endif //Needed to end the #ifndef statement

