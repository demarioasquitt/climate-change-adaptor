// Freshman Year CS Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

double SeaRise(double currYear) {
	const int baseYear = 2019;
	const double seaRisePerYear = 2.12;
	double seaLevelRise;

	seaLevelRise = (currYear - baseYear) * seaRisePerYear;
	return seaLevelRise;
}

int main()
{
	int currYears;
	//APPROXIMATE SEA LEVEL RISE
	cout << "This program will calculate the approximate sea level rise after 2019." << endl << endl;
	cout << "Please enter a year after 2019: ";
	cin >> currYears;
	

	cout << "The predicted sea level rise will be approximately " << SeaRise(currYears) << " cm." << endl << endl;

	
	

	//SEA RISE

	const double volumeLost = 16400;
	double countryArea;
	double heightSubmerged;
	string country;
	int meterEquivalent;
	int feetEquivalent;

	cout << "Enter Jamaica, Gambia, Bangladesh, or DC to see the equivalent amount of water added to the ocean by polar ice melt: " << endl;
	cin >> country;

	if (country == "Jamaica") {

		countryArea = 10000;
		heightSubmerged = volumeLost / countryArea;
		meterEquivalent = heightSubmerged * 1000;
		feetEquivalent = meterEquivalent * 3;

		cout << "Enough polar ice melts in a year to submerge " << meterEquivalent << " m or " << feetEquivalent << " ft of land in " << country << "." << endl;
	}
	else if (country == "Bangladesh") {

		countryArea = 150000;
		heightSubmerged = volumeLost / countryArea;
		meterEquivalent = heightSubmerged * 1000;
		feetEquivalent = meterEquivalent * 3;

		cout << "Enough polar ice melts in a year to submerge " << meterEquivalent << " m or " << feetEquivalent << " ft of land in " << country << "." << endl;
	}
	else if (country == "Gambia") {

		countryArea = 11000;
		heightSubmerged = volumeLost / countryArea;
		meterEquivalent = heightSubmerged * 1000;
		feetEquivalent = meterEquivalent * 3;

		cout << "Enough polar ice melts in a year to submerge " << meterEquivalent << " m or " << feetEquivalent << " ft of land in " << country << "." << endl;
	}
	else if (country == "DC") {

		countryArea = 180;
		heightSubmerged = volumeLost / countryArea;
		meterEquivalent = heightSubmerged * 1000;
		feetEquivalent = meterEquivalent * 3;

		cout << "\nEnough polar ice melts in a year to submerge " << meterEquivalent << " m or " << feetEquivalent << " ft of land in " << country << "." << endl;
	}
	
	vector<int> countryAreas(4);
	countryAreas.at(0) = 150000; //Bangladesh Area
	countryAreas.at(1) = 10000; //Jamaica Area
	countryAreas.at(2) = 11000; //Gambia Area
	countryAreas.at(3) = 180;  //DC Area

	countryAreas.pop_back();			//Remove DC area
	countryAreas.push_back(10000000);	//Add USA area

	int sumVal = 0;

	for (int i = 0; i < 4; ++i) {
		sumVal = sumVal + countryAreas.at(i);
	}
	cout << "The combined area of all the countries is: " << sumVal << " squared kilometers. \n\n";


	const double volumeLost1 = 16400;
	double heightSubmerged1 = volumeLost1 / sumVal;
	double meterEquivalent1 = heightSubmerged1 * 1000;
	double feetEquivalent1 = meterEquivalent1 * 3;


	cout << "The amount of ice that melts each year due to global warming is enough to cover " 
		<< meterEquivalent1 << " m or " << feetEquivalent1 << " ft of the combined country areas.\n\n";
	

	int currYear1; 

	cout << "Enter year to find which islands might be submerged: \n";
	cin >> currYear1;
	while ((currYear1 >= 2000) && (currYear1 <= 2100)) {
		if (currYear1 < 2030) {
			cout << "Solomon Islands, Maldives and Palau will be partially or fully submerged.\n\n";
		}
		else if (currYear1 < 2060) {
			cout << "Solomon Islands, Maldives, Micronesia, Fiji, Tuvalu, Seychelles and Kiribati will be partially or fully submerged.\n\n";
		}
		else if (currYear1 <= 2100) {
			cout << "Solomon Islands, Maldives, Fiji, Tuvalu, Seychelles, Palau, Kiribati, The Cook Islands, French Polynesia and The Marshall Islands will be partially or fully submerged.\n\n";
		}
		cin >> currYear1;
		
	}
	system("pause");
	return 0;
		
}




 