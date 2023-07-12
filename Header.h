#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <chrono>
using namespace std;

void swap(int&, int&);							//function for swapping
void selectionWrong(int[], int);				//function for wrong selection sort
void selectionRight(int[], int);				//function for right selection sort
void bubbleUnflagged(int[], int);				//function for unflagged bubble sort
void bubbleFlagged(int[], int);					//function for flagged bubble sort
void insertion(int[], int);						//function for insertion sort
void display(int [], int);						//function for displaying data
void unsortedSelectionWrong();					//functiton for implementing wrong selection sort for random data
void sortedSelectionWrong();					//functiton for implementing wrong selection sort for sorted data
void unsortedSelectionRight();					//functiton for implementing right selection sort for random data
void sortedSelectionRight();					//functiton for implementing right selection sort for sorted data
void unsortedBubbleUnflagged();					//functiton for implementing unflagged bubble sort for random data
void sortedBubbleUnflagged();					//functiton for implementing unflagged bubble sort for sorted data
void unsortedBubbleFlagged();					//functiton for implementing flagged bubble sort for random data
void unsortedBubbleFlagged();					//functiton for implementing flagged bubble sort for sorted data
void unsortedInsertion();						//functiton for implementing insertion sort for random data
void sortedInsertion();							//functiton for implementing insertion sort for sorted data						
int measureTime(int);							//function for returning time taken by a sort
double averageTime(int);						//function for returning average time taken by a sort