fn main() {
    let mut uc:u8 = 0x00;
    
    uc = 0x01 >> 1;
    println!("uc >> 1= {}", uc);

    uc = 0x01;
    println!("uc = {}", uc);

    uc = 0x01 >> -1;
    println!("uc >> -1 = {}", uc);
    
}