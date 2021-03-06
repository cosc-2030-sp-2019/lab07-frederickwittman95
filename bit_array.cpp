// Fred Wittman
// Dr. Hill
// COSC 2030-01
// 08 April 2019

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void print_set(vector<int> set) {
	cout << "The set is:" << endl;
	for (int i = 0; i < set.size(); i++) {
		if (set[i] != 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void add_elements(vector<int> &set) {
	int num_elements;
	cout << "How many numbers would you like to add to the set?";
	cin >> num_elements;
	int tmp;
	for (int i = 0; i < num_elements; i++) {
		cin >> tmp;
		set[tmp] = 1;
	}
}

void set_union(vector<int> &set1, vector<int> &set2) {

	cout << "Set union:" << endl;
	for (int i = 0; i < 1000000; i++) {
		if (set1[i] == 1 || set2[i] == 1) {
			cout << i << " ";
		}
	}

}

void set_difference(vector<int> &set1, vector<int> &set2) {

	cout << "Set difference:" << endl;
	for (int i = 0; i < 1000000; i++) {
		if (set1[i] && !set2[i]) {
			cout << i << " ";
		}
	}
}

void set_intersection(vector<int> &set1, vector<int> &set2) {
	int size = 1000000;
	cout << "Intersection: ";
	for (int i = 0; i < 1000000; i++) {
		if (set1[i] && set2[i]) {
			cout << i << " ";
		}
	}
}

void add_elements_list(vector<int> &list) {
	int num_elements;
	cout << "How many numbers would you like to add to the list?";
	cin >> num_elements;
	int tmp;
	for (int i = 0; i < num_elements; i++) {
		cin >> tmp;
		list[tmp] = list[tmp] + 1;
	}
}

void print_list(vector<int> list) {
	cout << "The list is:" << endl;
	for (int i = 0; i < list.size(); i++) {
		if (list[i] != 0) {
			for (int j = list[i]; j > 0; j--) {

				cout << i << " ";

			}
		}
	}
	cout << endl;
}

int main() {

	int tmp;
	int array_max_size = 1000000;
	// Declare two sets and a list
	vector<int> set1(array_max_size, 0);
	vector<int> set2(array_max_size, 0);
	vector<int> list(array_max_size, 0);
	// Add elements to a list and print it
	add_elements_list(list);
	cout << endl;
	print_list(list);
	cout << endl;
	// Add elements to each set
	add_elements(set1);
	cout << endl;
	add_elements(set2);
	cout << endl;
	print_set(set1);
	cout << endl;
	print_set(set2);
	cout << endl;
	// Print the set intersection
	set_intersection(set1, set2);
	cout << endl << endl;
	// Print the set union
	set_union(set1, set2);
	cout << endl << endl;
	// Print the set difference
	set_difference(set1, set2);
	cout << endl;

	return 0;
}

