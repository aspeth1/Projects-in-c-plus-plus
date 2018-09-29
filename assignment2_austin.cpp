#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

//scoped enumeration for the kinds of shapes
enum class ShapeKind {
    CIRCLE = 1, SQUARE, RECTANGLE
};

//Structure used for shape math
struct Shape {
    ShapeKind kind;
    double length;
    double width;
};

//Prototype function to calculate area
double area(Shape s);

//Prototype function to calculate perimeter
double perimeter(Shape s);

//Prototype function to return a string of the shape's kind
string kind(Shape s);

//Prototype function to prompt user for input
void promptFor(Shape& shape);

//Constant variable for circle use
const double pi = 3.14;

int main() {

    Shape circle = {ShapeKind::CIRCLE, 0.0, 0.0};
    Shape square = {ShapeKind::SQUARE, 0.0, 0.0};
    Shape rectangle = {ShapeKind::RECTANGLE, 0.0, 0.0};

    promptFor(circle);
    promptFor(square);
    promptFor(rectangle);

    if(rectangle.width == rectangle.length){
        rectangle.kind = square.kind;
    }

    cout.precision(4);

    cout << setw(1) << "SHAPE" << setw(10) << "WIDTH" << setw(8) << "HEIGHT" << setw(10) << "PERIMETER" << setw(5)
        << "AREA"<< endl;
    cout << kind(circle) << setw(9) << circle.length << setw(8) << circle.length << setw(9) << perimeter(circle) << setw(6)
        << area(circle) << endl;
    cout << kind(square) << setw(9) << square.length << setw(8) << square.length << setw(9) << perimeter(square) << setw(6)
        << area(square) << endl;
    cout << kind(rectangle) << setw(9) << rectangle.length << setw(8) << rectangle.width << setw(9) << perimeter(rectangle)
    << setw(6) << area(rectangle) << endl;

    return 0;
}

//function to calculate area of shape
double perimeter(Shape s) {

    switch(s.kind){
        case ShapeKind::CIRCLE:
            return pi * s.length;

        case ShapeKind::SQUARE:
            return s.length + s.length + s.length + s.length;

        case ShapeKind::RECTANGLE:
            return s.length + s.width + s.length + s.width;
    }
}

//function to calculate shape perimeter
double area(Shape s){

    switch(s.kind){
        case ShapeKind::CIRCLE:
            return pi * ((s.length /2) * (s.length / 2));
        case ShapeKind::SQUARE:
            return s.length * s.length;
        case ShapeKind::RECTANGLE:
            return s.length * s.width;
    }

}

//Function for returning the string for the shape
string kind(Shape s){
    switch(s.kind){
        case ShapeKind::CIRCLE:
            return "Circle";
        case ShapeKind::SQUARE:
            return "Square";
        case ShapeKind::RECTANGLE:
            return "Rectangle";
        default: return "";
    }
}

//Function for prompting user input
void promptFor(Shape& shape){

    switch (shape.kind){
        case ShapeKind::CIRCLE:
            cout << "Enter the diameter of a circle: ";
            cin >> shape.length;
            break;
        case ShapeKind::SQUARE:
            cout << "Enter the length of the square: ";
            cin >> shape.length;
            break;
        case ShapeKind::RECTANGLE:
            cout << "Enter the length and width of a rectangle: ";
            cin >> shape.length >> shape.width;
            break;
    }

}
