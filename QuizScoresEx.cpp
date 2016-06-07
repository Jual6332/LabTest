// Write a program to read in 4 quiz scores from the user.
// stores in to an array, then loop through to calculate the avg quiz score.
#include <iostream>
using namespace std;
int main()
{
	const int NUM_SCORES = 4;
	int scores[NUM_SCORES];
	for (int i=0; i<NUM_SCORES; i++)
	{
		cout << "Enter score: ";
		cin >> scores[i];
	}
	int sum = 0;
	for (int i=0; i<NUM_SCORES; i++)
	{
		sum += scores[i];
	}
	cout << "Average: " << ((float) sum / NUM_SCORES) << endl;
	return 0;
}

//screencast.com and ging to capture videos
