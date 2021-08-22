fn main() {
    const C_A: u8 = 12;
    let mut ptr_a : *u8 = &C_A as *u8;
    
    unsafe {
//        *ptr_a = 34;
        
        println!("*ptr_a = {}", *ptr_a);
    }
}