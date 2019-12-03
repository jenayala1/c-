// Chapter 16, Programming Challenge 7: TestScores class
//ITSE 2331-003--Jennifer Ayala--10/02/2019--Lab # 16-7 PG: 1027
// Assignment Description--spc16-7.cpp
// Use a loop to copy the elements from the old to the new array

#include <iostream>
#include "TestScores.h"
#include "NegativeScore.h"
using namespace std;

int main()
{
    // Constant for the number of test scores
    const int NUM_SCORES = 5;
    
	try
	{
		// Create an array of valid scores.
		int myScores[NUM_SCORES] = { 88, 90, 93, 87, 99 };

		// Create a TestScores object.
		//TestScores myTestScores(myScores, NUM_SCORES); // optional constructor
		TestScores myTestScores(myScores);

		// Display the average.
		cout << "The average score is ";
		cout << myTestScores.getAverage() << endl;

		// Create an array with an invalid score.
		int badScores[NUM_SCORES] = { 88, 90, -99, 87, 99 };

		// Create a TestScores object.
		//TestScores badTestScores(badScores, NUM_SCORES); // optional constructor
        TestScores badTestScores(badScores);

		// Display the average.
		cout << "The average score is ";
		cout << badTestScores.getAverage() << endl;
	}
	catch(NegativeScore e)
	{
		cout << "An invalid score was found. The "
			 << "invalid score is ";
        // display invalid score from exception
	}

	return 0;
}
