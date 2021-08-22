enum Shape {
    Circle,
    Triangle,
    Square
}

fn print_shape(shape: Shape) {
    match shape {
        Shape::Circle => println!("shape is circle"),
        Shape::Triangle => println!("shape is triangle"),
        Shape::Square => println!("shape is square"),
    }
}

fn main() {
    print_shape(Shape::Circle);
    print_shape(Shape::Triangle);
    print_shape(Shape::Square);
}