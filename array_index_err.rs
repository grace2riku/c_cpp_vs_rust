fn main() {
    let a: [u8; 3] = [0, 1, 2];
    
    for i in 0..5 {
        println!("a[i] = {}", a[i]);
    }    

    // イテレータを使えば配列要素外アクセスは防げる
//    for element in a.iter() {
//        println!("a[i] = {}", element);
//    }    
    
}
