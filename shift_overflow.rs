fn main() {
    let mut uc:u8 = 0x00;
    
    uc = 0x01 << 7;
    println!("uc << 7= {}", uc);

    uc = 0x01 << 8;
    println!("uc << 8 = {}", uc);
    
}