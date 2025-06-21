#include <iostream>
using namespace std;

struct number{
    int a;
    int b;
};

number sum(const number& a1, const number& b1){
    int a=a1.a+b1.a;
    int b=a1.b+b1.b;
    number result{a, b};
    return result;
}

number difference(const number& a1, const number& b1){
    int a=a1.a-b1.a;
    int b=a1.b-b1.b;
    number result{a, b};
    return result;
}

number multiplication(const number& a1, const number& b1){
    int a=a1.a * b1.a - a1.b*b1.b;
    int b= a1.a*b1.b + a1.b*b1.a;
    number result{a, b};
    return result;
}

number division(const number& a1,const number& b1){
    int a=(a1.a*b1.a + a1.b*b1.b)/(b1.a*b1.a + b1.b*b1.b);
    int b=(a1.b*b1.a - a1.a*b1.b)/(b1.a*b1.a + b1.b*b1.b);
    number result{a, b};
    return result;
}

int main() {
    number z1{3, 4};
    number z2{1, -2};

    number result_sum = sum(z1, z2);
    number result_diff = difference(z1, z2);
    number result_mul = multiplication(z1, z2);
    number result_div = division(z1, z2);
    
    cout << result_sum.a << " " << result_sum.b << endl;
    cout << result_diff.a << " " << result_diff.b << endl;
    cout << result_mul.a << " " << result_mul.b << endl;
    cout << result_div.a << " " << result_diff.b << endl;
    
    return 0;
}
