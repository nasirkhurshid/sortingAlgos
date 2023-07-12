#include "Header.h";

int main()
{
	fstream file("data.csv", ios::out);				//opening csv file for writing data
	file << "Algorithm,Array Size,Array Type,Number Of Runs,Average Time Taken (s)\n";			//writing
	file << "Wrong Selection Sort,100000,Unsorted,10," << averageTime(1) << endl;				//data
	file << "Wrong Selection Sort,100000,Sorted,10," << averageTime(2) << endl;					//to
	file << "Right Selection Sort,100000,Unsorted,10," << averageTime(3) << endl;				//the
	file << "Right Selection Sort,100000,Sorted,10," << averageTime(4) << endl;					//file
	file << "Unflagged Bubble Sort,100000,Unsorted,10," << averageTime(5) << endl;				//one
	file << "Unflagged Bubble Sort,100000,Sorted,10," << averageTime(6) << endl;				//by
	file << "Flagged Bubble Sort,100000,Unsorted,10," << averageTime(7) << endl;				//one
	file << "Flagged Bubble Sort,100000,Sorted,10," << averageTime(8) << endl;					//using
	file << "Insertion Sort,100000,Unsorted,10," << averageTime(9) << endl;						//insertion
	file << "Insertion Sort,100000,Sorted,10," << averageTime(10) << endl;						//operators
	file.close();									//closing file after writing data
	return 0;
}
