// CS 1337.003 Project 4 <sxk170832> <Siang Swee Kong>
//This is a program that represents vehicles in a parking lot. Users can add vehicles to the parking lot and remove vehicles from the parking lot by providing the make and model of the vehicles.
//This program can also return the number of vehicles in the parking lot and print out a list of vehicles in the parking lot.


// CS 1337 Project 4 Test Driver
//
// This exercises the Vehicle and Parking Lot classes. It is an example
// of how you  might exercise and test your submission. You should extend
// this test driver with additional tests to thoroughly test your classes.

#include <iostream>
#include <string>

#include "ParkingLot.h"
#include "vehicle.h"

using namespace std;

int main(void) {
	ParkingLot parkingLot = ParkingLot();
	Vehicle vehicle;

	try {
		//Attempt to retrieve the first vehicle in the parking lot
		cout << "Retrieve vehicle at position 0" << endl;
		vehicle = parkingLot.vehicleAt(0);
		cout << "Vehicle has make '" << vehicle.getMake() <<
				"' with model '" << vehicle.getModel() << "'" << endl;
	}
	catch (string &s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	try {
		// Add a vehicle
		cout << "Adding a Lexus" << endl;
		parkingLot.add("Lexus", "RX 350");

		// Add a second vehicle
		cout << "Adding a Ford" << endl;
		vehicle = Vehicle("Ford", "RX 350");
		parkingLot.add(vehicle);

		// Add several vehicles of the same make and model
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");

		cout << "There are " << parkingLot.getSize() <<
				" vehicles in the parking lot" << endl;
	}
	catch (string &s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	try {
		// Add another couple vehicles
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");
		cout << "Adding a Toyota" << endl;
		parkingLot.add("Toyota", "Tundra");


		cout << "There are " << parkingLot.getSize() <<
				" vehicles in the parking lot" << endl;
	}
	catch (string &s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}


	try {
		// Remove a vehicle
		cout << "Remove model RX 350" << endl;
		parkingLot.removeByModel("RX 350");

		cout << "There are " << parkingLot.getSize() <<
				" vehicles in the parking lot" << endl;
	}
	catch (string &s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	try {
		// Remove a vehicle
		cout << "Remove a Lexus" << endl;
		parkingLot.removeByMake("Lexus");

		cout << "There are " << parkingLot.getSize() <<
				" vehicles in the parking lot" << endl;
	}
	catch (string &s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}


 	try {
		// Remove several vehicle
		cout << "Remove a Toyota" << endl;
		parkingLot.removeByMake("Toyota");
		cout << "Remove a Toyota" << endl;
		parkingLot.removeByMake("Toyota");
		cout << "Remove a Toyota" << endl;
		parkingLot.removeByMake("Toyota");
		cout << "Remove a Toyota" << endl;
		parkingLot.removeByMake("Toyota");
		cout << "Remove a Toyota" << endl;
		parkingLot.removeByMake("Toyota");

		cout << "There are " << parkingLot.getSize() <<
				" vehicles in the parking lot" << endl;
	}
	catch (string &s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	try {
		// dump the parking lot
		cout << endl;
		cout << "There are " << parkingLot.getSize() <<
				" vehicles in the parking lot" << endl;
		cout << "The parking lot contains the following vehicles " <<
				"(the order does not matter):" << endl;

		// for each vehicle in the parking lot...
		for (unsigned currentBook = 0; currentBook <= parkingLot.getSize();
				++currentBook) {
			cout << "Vehicle has make '" <<
					parkingLot.vehicleAt(currentBook).getMake() <<
					"' with model '" <<
					parkingLot.vehicleAt(currentBook).getModel() <<
					"'" << endl;
		}
	}
	catch (string &s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}



	return 0;
}



