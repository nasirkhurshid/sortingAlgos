#include "Header.h";

void swap(int& n1, int& n2) {							//function for swapping
	int temp = n1;										//swapping elements using temporary variables
	n1 = n2;
	n2 = temp;
}

void selectionWrong(int a[], int n) {					//function for wrong selection sort
	for (int i = n - 1; i >= 1; i--) {					//loop for selecting element of array that needs to be compared
		for (int j = i - 1; j >= 0; j--) {				//loop for comparing elements
			if (a[i] < a[j]) {							//checking whether elements are in correct order or not
				swap(a[i], a[j]);						//swapping elements if they are not in correct order
			}
		}
	}
}

void selectionRight(int a[], int n) {					//function for right selection sort
	int max;											//variable for storing greatest value
	for (int i = n - 1; i >= 1; i--) {					//loop for selecting element of array that needs to be compared
		max = i;										//assigning the value at i index to max
		for (int j = i - 1; j >= 0; j--) {				//loop for comparing elements
			if (a[j] > a[max]) {						//checking whether elements are in correct order or not
				max = j;								//assigning value at index j to max if it is greatest for current loop
			}
		}
		if (max != i) {									//checking whether the value in max and at i index are same
			swap(a[max], a[i]);							//if not, then swapping both the elements
		}
	}
}

void bubbleUnflagged(int a[], int n) {					//function for unflagged bubble sort
	int top = 1;										//variable for keeping record of top index
	while (top < n - 1) {								//loop for checking elements from top to bottom
		for (int i = n - 1; i > top; i--) {				//loop for selecting element of array that needs to be compared
			if (a[i] < a[i - 1]) {						//checking whether elements are in correct order or not
				swap(a[i], a[i - 1]);					//swapping elements if they are not in correct order					
			}
		}
		top++;											//incrementing top index
	}
}

void bubbleFlagged(int a[], int n) {					//function for flagged bubble sort
	int bottom = n - 1;									//variable for keeping record of bottom index								
	bool swapped = true;								//variable for checking whether swapping is performed or not (flag)
	while (swapped) {									//if swapping is performed then keep the loop running
		swapped = false;								
		for (int j = 0; j < bottom; j++) {				//loop for selecting element of array that needs to be compared
			if (a[j] > a[j + 1]) {						//checking whether elements are in correct order or not
				swap(a[j], a[j + 1]);					//swapping elements if they are not in correct order
				swapped = true;							//making swapped true if swapping is performedj
			}
		}
		bottom--;										//decrementing bottom index
	}
	/*swapped variable is first set to true and loop is started, after entering the loop swapped is set to false,
	because if any swapping is not performed then loop is terminated and if any swapping is performed then swapped
	is again set to true for continuing the loop*/
}

void insertion(int a[], int n) {					//function for insertion sort
	for (int i = n - 2; i >= 0; i--) {				//loop for selecting element of array that needs to be inserted			
		int tp = a[i];								//tp variable stores the value that needs to be inserted
		int j = i + 1;								//variable with whose value, to be inserted value is compared
		while (j<n && tp>a[j]) {					//entering the loop if variable being compared is within the array and greater than the value to be inserted
			a[j - 1] = j;							//overwriting the value being compared at its previous location
			j++;
		}
		a[j - 1] = tp;								//inserting the to be inserted value at its correct position
	}
}
void display(int a[], int n) {						//function for displaying values
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

void unsortedSelectionWrong() {						//function for implementing wrong selection sort for random data
	int n = 100000;	
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	srand(time(0));									//function that is used with rand() to store random data				
	for (int i = 0; i < n; i++) {
		array[i] = (rand() % n) + 1;				//storing random data in array using rand() function
	}
	selectionWrong(array, n);						//sorting data using wrong selection sort
	delete[] array;									//deleting pointer to array
}

void sortedSelectionWrong() {						//functiton for implementing wrong selection sort for sorted data
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	for (int i = 0; i < n; i++) {
		array[i] = i + 1;							//storing sorted data in array
	}
	selectionWrong(array, n);						//sorting data using wrong selection sort
	delete[] array;									//deleting pointer to array
}

void unsortedSelectionRight() {						//functiton for implementing right selection sort for random data
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	srand(time(0));									//function that is used with rand() to store random data									//function that is used with rand() to store random data
	for (int i = 0; i < n; i++) {
		array[i] = (rand() % n) + 1;				//storing random data in array using rand() function
	}
	selectionRight(array, n);						//sorting data using right selection sort
	delete[] array;									//deleting pointer to array
}

void sortedSelectionRight() {						//functiton for implementing right selection sort for sorted data
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	for (int i = 0; i < n; i++) {
		array[i] = i + 1;							//storing sorted data in array
	}
	selectionRight(array, n);						//sorting data using right selection sort
	delete[] array;									//deleting pointer to array
}

void unsortedBubbleUnflagged() {					//functiton for implementing unflagged bubble sort for random data
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	srand(time(0));									//function that is used with rand() to store random data
	for (int i = 0; i < n; i++) {
		array[i] = (rand() % n) + 1;				//storing random data in array using rand() function
	}
	bubbleUnflagged(array, n);						//sorting data using unflagged bubble sort
	delete[] array;									//deleting pointer to array
}

void sortedBubbleUnflagged() {						//functiton for implementing unflagged bubble sort for sorted data
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	for (int i = 0; i < n; i++) {
		array[i] = i + 1;							//storing sorted data in array
	}
	bubbleUnflagged(array, n);						//sorting data using unflagged bubble sort
	delete[] array;									//deleting pointer to array
}

void unsortedBubbleFlagged() {						//functiton for implementing flagged bubble sort for random data
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	srand(time(0));									//function that is used with rand() to store random data
	for (int i = 0; i < n; i++) {
		array[i] = (rand() % n) + 1;				//storing random data in array using rand() function
	}
	bubbleFlagged(array, n);						//sorting data using flagged bubble sort
	delete[] array;									//deleting pointer to array
}

void sortedBubbleFlagged() {						//functiton for implementing flagged bubble sort for sorted data
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	for (int i = 0; i < n; i++) {
		array[i] = i + 1;							//storing sorted data in array
	}
	bubbleFlagged(array, n);						//sorting data using flagged bubble sort
	delete[] array;									//deleting pointer to array
}

void unsortedInsertion() {							//functiton for implementing insertion sort for random data
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	srand(time(0));									//function that is used with rand() to store random data
	for (int i = 0; i < n; i++) {
		array[i] = (rand() % n) + 1;				//storing random data in array using rand() function
	}
	insertion(array, n);							//sorting data using insertion sort
	delete[] array;									//deleting pointer to array
}

void sortedInsertion() {							//functiton for implementing insertion sort for sorted data	
	int n = 100000;
	int* array;
	array = new int[n];								//storing array of size n to pointer to array (*array)
	for (int i = 0; i < n; i++) {
		array[i] = i + 1;							//storing sorted data in array
	}
	insertion(array, n);							//sorting data using insertion sort
	delete[] array;									//deleting pointer to array
}

int measureTime(int f) {							//function for returning time taken by a sort
	auto t1 = chrono::high_resolution_clock::now();	//using chrono to get current time
	switch (f) {									//switch statement for calling different functions depending upon choice
	case 1: unsortedSelectionWrong(); break;
	case 2: sortedSelectionWrong(); break;
	case 3: unsortedSelectionRight(); break;
	case 4: sortedSelectionRight(); break;
	case 5: unsortedBubbleUnflagged(); break;
	case 6: sortedBubbleUnflagged(); break;
	case 7: unsortedBubbleFlagged(); break;
	case 8: sortedBubbleFlagged(); break;
	case 9: unsortedInsertion(); break;
	case 10: sortedInsertion(); break;
	default: cout << "Wrong choice entered!\n"; exit(1);
	}
	auto t2 = chrono::high_resolution_clock::now();	//using chrono to get current time
	auto duration = chrono::duration_cast<chrono::milliseconds>(t2 - t1).count();	//saving time taken by sort in duration variable
	return duration;								//returning time taken
}

double averageTime(int f) {						//function for returning average time taken by a sort
	double sum = 0, avg;						//variables for getting average time
	for (int i = 0; i < 10; i++) {
		sum += measureTime(f);					//adding all the times returned by measureTime()
	}
	avg = sum / 10;								//getting average time in milliseconds
	avg /= 1000;								//converting milliseconds to seconds
	return avg;									//returning average time
}
