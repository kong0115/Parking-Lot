// CS 1337.003 Project 4 <sxk170832> <Siang Swee Kong>
//class implementation file that stores the member function definitions for ParkingLot class
#include "ParkingLot.h" //Needed to use ParkingLot class. " "indicates the file is located in the current project directory.

//create a default constructor that takes no arguments
ParkingLot::ParkingLot(){
//does nothing, no member variables to initialize
}

//create a destructor that perform shutdown procedures when the object is destroyed.
ParkingLot::~ParkingLot(){

}

// a function to add a Vehicle to the Parking Lot. This function takes two arguments that are used to initialize the make and model of the vehicle.
void ParkingLot::add(string _make, string _model){
	pVehicles.push_back(Vehicle(_make,_model)); //create an instance of Vehicle that passes two arguments to the constructor and add it to the vector
	count++;//increment count by 1, used to keep track of how many vehicles in the vector, also used as a subscript to access the vector elements
}

//another way to add a Vehicle to the Parking Lot. This function takes one argument of constant vehicle data type, and it is passed by reference.
void ParkingLot::add(const Vehicle& vehicle){
	pVehicles.push_back(vehicle); //add a vehicle to the vector
	count++;//increment count by 1
}

//a function to remove a Vehicle from the Parking Lot with the matching Make.
//this function throws an exception consisting of a string describing the error if no Vehicle in the Parking Lot match the requested make.
void ParkingLot::removeByMake(string _make){
	unsigned int index = 0; //used as a subscript to search through the vector
	bool found = true; //flag to indicate if the value was found
	while(index <= count && found)
	{
		//if the requested make match any vehicles in the parking lot
		if (_make == pVehicles[index].getMake()){
			pVehicles.erase(pVehicles.begin() + index); //remove the vehicle from the vector with the matching make
			count--;//decrement count by 1 since the total number of vehicles is reduced by one after removing a vehicle
			found = false;  //set the flag to false so the loop with terminate
		}

		//if the subscript is the same as the count, that means the loop reaches the end of the vector and has not found a vehicle with matching make
		else if (index == count){
			//throws an exception consisting of a string describing the error that no requested make is found in the parking lot.
			string exception = "Cannot find a Vehicle in the Parking Lot with Make: " + _make;
			throw exception;
		}

		//otherwise, go to the next element
		else
			index++;
		}
}

//a function to remove a Vehicle from the Parking Lot with the matching Model.
//this function throws an exception consisting of a string describing the error if no Vehicle in the Parking Lot match the requested model.
void ParkingLot::removeByModel(string _model){
	unsigned int index = 0; //used as a subscript to search through the vector
	bool found = true; //flag to indicate if the value was found
	while(index <= count && found)
	{
		//if the requested model match any vehicles in the parking lot
		if (_model == pVehicles[index].getModel()){
			pVehicles.erase(pVehicles.begin() + index); //remove the vehicle from the vector with the matching model
			count--; //decrement count by 1 since the total number of vehicles is reduced by one after removing a vehicle
			found = false; //set the flag to false so the loop with terminate
		}

		//if the subscript is the same as the count, that means the loop reaches the end of the vector and has not found a vehicle with matching model
		else if (index == count){
			//throws an exception consisting of a string describing the error that no requested model is found in the parking lot.
			string exception = "Cannot find a Vehicle in the Parking Lot with Model: " + _model;
			throw exception;
		}

		//otherwise, go to the next element
		else
			index++;
	}
}

//a function to return the number of Vehicles in the Parking Lot as a long long unsigned variable
long long unsigned ParkingLot::getSize() const{
	return count;
}

//a function to return the Vehicle at the specified index in the Parking Lot.
const Vehicle& ParkingLot::vehicleAt(unsigned position) const
{
	//if the requested position is less than the number of vehicles
	if (position < count)
	{
		const Vehicle& tempVehicle = pVehicles[position]; //assign the vehicle at requested position in the vector to a temporary variable of constant Vehicle data type
		return tempVehicle; //return the Vehicle at the specified index
	}

	//if vector is empty which means that there is no vehicle in the parking lot
	else if (pVehicles.empty())
	{
		//throw an exception with a string that indicates the parking lot is empty.
		string exception = "Cannot retrieve the specified vehicle. The parking lot is empty.";
		throw exception;
	}

	//if the requested position is equal or greater than the number of Vehicles in the Parking Lot
	else if (position >= count)
	{
		string location = to_string(position); //convert position to a string variable
		string maxRange = to_string(getSize()-1); //convert the (getSize function - 1) to a string variable
		//throws an exception with a string that indicates no vehicle is found at current location and inform the users about the valid locations range.
		string exception = "Cannot retrieve a vehicle at location " + location + ". Valid locations range from 0 to " + maxRange;
		throw exception;
	}

	//otherwise, throws an exception with a string that indicates invalid location.
	else
	{
		string exception = "This is an invalid input for location.";
		throw exception;
	}
}
