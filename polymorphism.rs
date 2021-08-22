trait Shape {
    fn print_type(&self);
    fn calc_area(&self) -> f32;
}

struct Circle {
    r: f32,
}

impl Shape for Circle {
    fn print_type(&self) {
        println!("This is circle."); 
    }

    fn calc_area(&self) -> f32 {
        self.r * self.r * 3.14
    }
    
}

struct Triangle {
    base: f32,
    height: f32,
}

impl Shape for Triangle {
    fn print_type(&self) {
        println!("This is triangle."); 
    }

    fn calc_area(&self) -> f32 {
        (self.base * self.height) / 2.0
    }
    
}


struct Square {
    side: f32,
}

impl Shape for Square {
    fn print_type(&self) {
        println!("This is square."); 
    }

    fn calc_area(&self) -> f32 {
        self.side * self.side
    }
    
}


fn main() {
    let circle = Circle { r: 1.2 };
    let triangle = Triangle { base: 2.5, height: 2.0 };
    let square = Square { side: 1.3 };

    circle.print_type();
    println!("circle area = {}", circle.calc_area()); 

    triangle.print_type();
    println!("triangle area = {}", triangle.calc_area()); 

    square.print_type();
    println!("square area = {}", square.calc_area()); 

}