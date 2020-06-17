#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//This function finds the number of occurances of combinations of the dice
int findSumFrequencyOfCombinations(int sidesOfDice, int numberOfDice);

//Validation
void sumFrequencyOfCombinationsIsAccurate(int sidesOfDice, int numberOfDice, int FrequencyToValidate);

int setNumberOfDice();

int setNumberOfSides();


int main()
{
	int numberOfDice,
		numberOfSides,
		totalSumFrequency;

	numberOfDice = setNumberOfDice();
	numberOfSides = setNumberOfSides();
	
	totalSumFrequency = findSumFrequencyOfCombinations(numberOfSides, numberOfDice);

	sumFrequencyOfCombinationsIsAccurate(numberOfSides, numberOfDice, totalSumFrequency);

	system("PAUSE");
}





//This function finds the number of occurances of combinations of the dice
int findSumFrequencyOfCombinations(int sidesOfDice, int numberOfDice)
{



}





//Validation
void sumFrequencyOfCombinationsIsAccurate(int sidesOfDice, int numberOfDice, int FrequencyToValidate)
{



}





int setNumberOfDice()
{
	int numberOfDice;

	printf("Enter number of dice: ");
	scanf_s("%d", &numberOfDice);

	return numberOfDice;
}





int setNumberOfSides()
{
	int numberOfSides;

	printf("Enter number of sides: ");
	scanf_s("%d", &numberOfSides);

	return numberOfSides;
}

