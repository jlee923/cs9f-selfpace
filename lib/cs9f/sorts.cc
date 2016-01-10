#include <iostream.h>
#include "/home/dd/cs9f/lib/vectors.h"

void SelectionSort (Vector<int> &values) {
    for (int k=0; k<values.length(); k++) {
	// replace element k by the smallest element
	// in values[k] ... values[values.length()-1].
	int smallestIndex = k;
	for (int j=k+1; j<values.length(); j++) {
	    if (values[smallestIndex] > values[j]) {
		smallestIndex = j;
	    }
	}
	int temp = values[k];
	values[k] = values[smallestIndex];
	values[smallestIndex] = temp;
    }
}

void InsertionSort (Vector<int> &values) {
    for (int k=1; k<values.length(); k++) {
	// insert element k into the appropriate position
	// in values[0] ... values[k-1].
	int j, temp = values[k];
	for (j=k-1; j>=0 && temp<values[j]; j--) {
	    values[j+1] = values[j];
	}
	values[j+1] = temp;
    }
}

int main () {
    Vector<int> values(5);
    char c;
    int k;
    while (cin >> c) {
	for (k=0; k<5; k++) {
	    cin >> values[k];
	}
	for (k=0; k<5; k++) {
	    cout << values[k];
	}
	cout << endl;
	if (c=='s') {
	    SelectionSort (values);
	} else if (c=='i') {
	    InsertionSort (values);
	} else {
	    cerr << "I don't know what sort this is." << endl;
	}
	for (k=0; k<5; k++) {
	    cout << values[k];
	}
	cout << endl;
    }
}
