#include <iostream>

using namespace std;

// Function to calculate the area of a square
double calculateSquareArea() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    return 0.5 * base * height;
}

int main() {
    int choice = 0;

    // Loop until the user selects option 4
    while (choice != 4) {
        // Display the menu
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl << endl;
        cout << "Enter selection: ";

        cin >> choice;

        if (choice == 1) {
            double area = calculateSquareArea();
            cout << "The area of the square is: " << area << endl << endl;
        } 
        else if (choice == 2) {
            double area = calculateRectangleArea();
            cout << "The area of the rectangle is: " << area << endl << endl;
        } 
        else if (choice == 3) {
            double area = calculateTriangleArea();
            cout << "The area of the triangle is: " << area << endl << endl;
        } 
        else if (choice == 4) {
            cout << "Exiting program. Goodbye!" << endl;
        } 
        else {
            // Error message for numbers outside 1-4
            cout << "Your input was: " << choice << " which is an invalid input" << endl;
            cout << "Please enter a valid input!!!" << endl << endl;
        }
    }

    return 0;
}