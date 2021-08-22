※ソースコード拡張子 Rust: rs, C: c

■あいまいな動作
1. 整数型オーバーフロー: val_overflow.*
2. 未初期化変数の参照: uninitialized_val.*
3. ゼロ割り: div_by_zero.*
4. 配列要素外アクセス: array_index_err.*
5. シフトオーバーフロー: shift_overflow.*
6. シフト負の数: shift_negative.*

【Rustのモダンなコードを体験】
1.enum, switch: enum_switch.*
2. 多態: polymorphism.*


1.enum, switch: enum_switch.*
●switch・match文の条件を削除する
C：warning出るも実行する。
Rust：error

●print_shape(Circle);の引数Circleを0に変更して実行する
C：実行する。
Rust：error

Cのenumは整数値に置き換え可能。
Rustは整数値に置き換えできない。
　Rustのenumはメソッドを定義することのも可能。


2. 多態: polymorphism.*
C++: 図形クラスを親クラス。円、三角、正方形を子クラス。
Rust: trait、構造体で多態を実現した。


///// 
■整数型オーバーフロー: val_overflow.*
●C： warningで127を表示。
●Rust: error

■未初期化変数の参照: uninitialized_val.*
●C： warningで0を表示。
●Rust: error

3. ゼロ割り: div_by_zero.*
●C： warningで実行時エラー。
●Rust: error

4. 配列要素外アクセス: array_index_err.*
●C： 普通に実行
●Rust: 実行時エラー。

5. シフトオーバーフロー: shift_overflow.*
●C： warningで発生も実行可能。
●Rust: error。

6. シフト負の数: shift_negative.*
●C： warningで発生も実行可能。
●Rust: error。


