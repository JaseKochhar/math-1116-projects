#include <iostream>
#include "Array_PreLab.h"

#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define RESET   "\033[0m"

using namespace std;

void test_check_size_1();
void test_check_size_2();
void test_init_1(); 
void test_init_2();
void test_init_3();
void test_sum_1();
void test_sum_2();
void test_min_1();
void test_min_2();
void test_max_1();
void test_max_2();

int main() {
    cout << "Running test_check_size_1..." << endl;
    test_check_size_1();
    cout << "Running test_check_size_2..." << endl;
    test_check_size_2();
    cout << "Running test_init_1..." << endl;
    test_init_1();
    cout << "Running test_init_2..." << endl;
    test_init_2();
    cout << "Running test_init_3..." << endl;
    test_init_3();
    cout << "Running test_sum_1..." << endl;
    test_sum_1();
    cout << "Running test_sum_2..." << endl;
    test_sum_2();
    cout << "Running test_min_1..." << endl;
    test_min_1();
    cout << "Running test_min_2..." << endl;
    test_min_2();
    cout << "Running test_max_1..." << endl;
    test_max_1();
    cout << "Running test_max_2..." << endl;
    test_max_2();
}

// Tests whether an input size is valid
void test_check_size_1() {
    int size = 5;
    if (check_size(size)) {
        cout << "\t" << GREEN << "PASS: " << RESET << size << " is a valid list size" << endl;
    } else {
        cout << "\t" << RED << "FAIL: " << RESET << size << "is not a valid list size" << endl;
    }
}

// Tests whether an input size is valid
void test_check_size_2() {
    int size = -1;
    if (!check_size(size)) {
        cout << "\t" << GREEN << "PASS: " << RESET  << size << " is not a valid list size" << endl;
    } else {
        cout << "\t" << RED << "FAIL: " << RESET << size << " is a valid list size" << endl;
    }
}

// Tests initialization of array of size 5
void test_init_1(){
    // Create a list
    int size = 5;
    if (!check_size(size)){
        cout << "\tFAIL: " << size << " is a valid list size" << endl;
        return;
    }
    int list[size];
    init_array(list, size);
    // Define the expected sizes
    int expSize = size*sizeof(int); // Expected size will be size*4 bytes (4 bytes per int)
    int actSize = sizeof(list); // Actual size
    if (actSize != expSize) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected list of size " << expSize << " instead got " << actSize << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected list of size " << expSize << " got " << actSize << endl;
    }
}

// Test initializtion of array of size 1000
void test_init_2(){
    // Create a list
    int size = 1000;
    if (!check_size(size)){
        cout << "\tFAIL: " << size << " is a valid list size" << endl;
        return;
    }
    int list[size];
    init_array(list, size);
    // Define the expected sizes
    int expSize = size*sizeof(int); // Expected size will be size*4 bytes (4 bytes per int)
    int actSize = sizeof(list); // Actual size
    if (actSize != expSize) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected list of size " << expSize << " instead got " << actSize << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected list of size " << expSize << " got " << actSize << endl;
    }
}

// Test initializtion of array of size -1
void test_init_3(){
    // Create a list
    int size = -1;
    if (!check_size(size)){
        cout << "\t" << GREEN << "PASS: " << RESET << size << " is a valid list size" << endl;
        return;
    }
    int list[size];
    init_array(list, size);
    // Define the expected sizes
    int expSize = size*sizeof(int); // Expected size will be size*4 bytes (4 bytes per int)
    int actSize = sizeof(list); // Actual size
    if (actSize != expSize) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected list of size " << expSize << " instead got " << actSize << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected list of size " << expSize << " got " << actSize << endl;
    }
}

// Tests sum array
void test_sum_1(){
    // Create a list
    int size = 5;
    int list[size];
    init_array(list, size);
    // Set values of array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    list[4] = 5;
    // Set actual and expected sum vals
    int expSum = 15;
    int actSum = sum_array(list, size);
    // Check expected
    if (actSum != expSum) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected sum of " << expSum << " instead got " << actSum << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected sum of " << expSum << " got " << actSum << endl;
    }
}

// Tests sum array for negative numbers
void test_sum_2(){
    // Create a list
    int size = 5;
    int list[size];
    init_array(list, size);
    // Set values of array
    list[0] = -1;
    list[1] = -2;
    list[2] = -3;
    list[3] = -4;
    list[4] = -5;
    // Set actual and expected sum vals
    int expSum = -15;
    int actSum = sum_array(list, size);
    // Check expected
    if (actSum != expSum) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected sum of " << expSum << " instead got " << actSum << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected sum of " << expSum << " got " << actSum << endl;
    }
}

// Tests find_small function
void test_min_1(){
    // Create a list
    int size = 5;
    int list[size];
    init_array(list, size);
    // Set values of array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    list[4] = 5;
    // Set actual and expected sum vals
    int expMin = 1;
    int actMin = find_small(list, size);
    // Check expected
    if (expMin != actMin) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected min of " << expMin << " instead got " << actMin << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected min of " << expMin << " got " << actMin << endl;
    }
}

// Tests find_small function
void test_min_2(){
    // Create a list
    int size = 5;
    int list[size];
    init_array(list, size);
    // Set values of array
    list[0] = 1;
    list[1] = 2;
    list[2] = -30;
    list[3] = 4;
    list[4] = -5;
    // Set actual and expected sum vals
    int expMin = -30;
    int actMin = find_small(list, size);
    // Check expected
    if (expMin != actMin) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected min of " << expMin << " instead got " << actMin << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected min of " << expMin << " got " << actMin << endl;
    }
}

// Tests find_small function
void test_max_1(){
    // Create a list
    int size = 5;
    int list[size];
    init_array(list, size);
    // Set values of array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    list[4] = 5;
    // Set actual and expected sum vals
    int expMin = 5;
    int actMin = find_large(list, size);
    // Check expected
    if (expMin != actMin) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected min of " << expMin << " instead got " << actMin << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected min of " << expMin << " got " << actMin << endl;
    }
}

// Tests find_small function
void test_max_2(){
    // Create a list
    int size = 5;
    int list[size];
    init_array(list, size);
    // Set values of array
    list[0] = 1;
    list[1] = 2;
    list[2] = -30;
    list[3] = 4000;
    list[4] = -5;
    // Set actual and expected sum vals
    int expMin = 4000;
    int actMin = find_large(list, size);
    // Check expected
    if (expMin != actMin) {
        cout << "\t" << RED << "FAIL: " << RESET << "expected min of " << expMin << " instead got " << actMin << endl;
    } else {
        cout << "\t" << GREEN << "PASS: " << RESET << "expected min of " << expMin << " got " << actMin << endl;
    }
}
