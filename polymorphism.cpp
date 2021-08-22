#include <iostream>
#include <cstdlib>

class Shape {
public:
    virtual void print_type() = 0;
    virtual float calc_area() = 0;
};

class Circle : public Shape {
private:
    float r;
public:
    Circle(float r) { this->r = r;}
    ~Circle() { }
        
    void print_type() {
        std::cout << "This is circle." << std::endl;
    }
    
    float calc_area() {
        return this->r * this->r * 3.14;
    }
};

class Triangle : public Shape {
private:
    float base;
    float height;
public:
    Triangle(float base, float height) {this->base = base; this->height = height;}
    ~Triangle() { }
        
    void print_type() {
        std::cout << "This is triangle." << std::endl;
    }
    
    float calc_area() {
        return (this->base * this->height) / 2.0;
    }
};

class Square : public Shape {
private:
    float side;
public:
    Square(float side) {this->side = side;}
    ~Square() { }
        
    void print_type() {
        std::cout << "This is square." << std::endl;
    }
    
    float calc_area() {
        return this->side * this->side;
    }
};


int main()
{
    Shape* circle = new Circle(1.2);
    Shape* triangle = new Triangle(2.5, 2.0);
    Shape* square = new Square(1.3);

    circle->print_type();
    std::cout << "circle area = " << circle->calc_area() << std::endl;
    
    triangle->print_type();
    std::cout << "triangle area = " << triangle->calc_area() << std::endl;

    square->print_type();
    std::cout << "square area = " << square->calc_area() << std::endl;
}
