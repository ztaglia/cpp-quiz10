int main()
{
    // no conversion needed. this is simply initializing variable a as an int with the value 5 using braced initialization syntax.
    // braced initialization is a form of uniform initialization different from copy initialization (int a = 5) and direct initialization (int a(5)).
    // braced is better because it prevents narrowing conversions by flagging them at compiile time.
    int a { 5 }; // 1a

    // numeric conversion from char to int. the character 'a' has an ASCII value of 97, 
    // so variable be will be initialized with the value of 97.
    // ANSWER: this is a numeric promotion because it is a conversion from a smaller to a larger integral type.
    int b { 'a' }; // 1b

    // this is a narrowing conversion, i think. 
    // there will be precision loss. 5.4 will be truncated to 5. 
    // i don't think an error will be thrown, the compiler will just lop off the decimal part. 
    // i do think that in some cases an error will be thrown, like if add to your command line arguments that treat narrowing conversions as compile errors. 
    int c { 5.4 }; // 1c

    // this is a bool to int conversion. a standard numeric conversion. 
    // d will be initialized with the value of 1 since true is converted to 1 in an integer context.
    // ANSWER: numeric promotion. char to int and bool to int are numeric promotions.
    int d { true }; // 1d

    // this is a narrowing conversion, but it is explicitly allowed by the use of static_cast, 
    // which typecasts the double literal 5.4 to an int 5. 
    // it becomes a numeric conversion.
    int e { static_cast<int>(5.4) }; // 1e

    // this is a floating-point to double conversion, which is a numeric promotion. 
    double f { 5.0f }; // 1f

    // this is not narrowing conversion, the double variable g would just get a .0 tacked on
    // the integer literal 5 is implicitly converted to a double
    // integer literals like 5 are integers by default, but they can be numerically converted into doubles
    // numeric conversion
    double g { 5 }; // 1g

    // Extra credit section

    // i believe this is a numeric promotion.
    // ANSWER: this is a numeric conversion, because it is a conversion of one integral type to another. 
    long h { 5 }; // 1h

    // lossy conversion from double to float, though no data will be lost in this specific case since 5.0 can be represented as a float.
    // ANSWER: narrowing conversion, because the double variable is being converted to a float.
    float i { f }; // 1i (uses previously defined variable f)

    // this is a narrowing conversion. 
    // ANSWER: this is a numeric conversion since 5.0 is constexpr ???
    float j { 5.0 }; // 1j

}