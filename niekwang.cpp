#include<stdio.h>

//struct A1 {
//    virtual ~A1() {}
//};
//struct A2 {
//    virtual ~A2() {}
//};
//struct B1 : A1, A2 {};
//int main()
//{
//    B1 d;
//    A1* pb1 = &d;
//    A2* pb2 = dynamic_cast<A2*>(pb1);  //L1
//    A2* pb22 = static_cast<A2*>(pb1);  //L2
//    return 0;
//}
int Fibonacci(int n) {
    int i = 1;
    int j = 1;
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
    }
}

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int ret = Fibonacci(n);
    printf("%d\n", ret);
    return 0;
}