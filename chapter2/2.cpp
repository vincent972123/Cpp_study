// prictice 2.3
/* 
#include<iostream>
int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    return 0;
}
*/

// prictice 2.8
/* 
#include<iostream>
int main()
{
    std::cout << "2\x4d\012" << std::endl;
    std::cout << "2\tM\n" << std::endl;
}
*/

/* prictice 2.18 Write code to change the value of a pointer. 
                 Write code to change the value to which the pointer points.
*/

/* 
#include<iostream>
int main()
{
    int i = 5, j =10;
    int *p = &i;
    std::cout << p << " and " << *p << std::endl;
    p = &j;
    std::cout << p << " and " << *p << std::endl;
    std::cout << p << " and " << *p << std::endl;
    std::cout << i << " and " << j << std::endl;
    *p = 20;
    std::cout << p << " and " << *p << std::endl;
    std::cout << i << " and " << j << std::endl;
    return 0;
}  
*/

// prictice 2.20
/* 
#include<iostream>
int main()
{
    int i = 42;
    int *p = &i;
    *p = *p * *p;
    std::cout << *p << std::endl;
    return 0;
}
*/

// demo of pointer to pointer
/* 
#include<iostream>
int main()
{
    int i = 1024, *p = &i, **pi = &p;
    std::cout << i << " " << *p << " " << **pi << std::endl;
    return 0;
}
*/

// demo of a reference to a pointer
/* 
#include<iostream>
int main()
{
    int i = 100;
    int *p = &i;
    int *&r = p;
    *r = 50;
    std::cout << i << std::endl;
    return 0;
}
*/

// test code
/* #include<iostream>
#include<typeinfo>
int main()
{
    int i = 0, &r = i;
    auto a = r; // int
    const int ci = i, &cr = ci;
    auto b = ci; // int
    auto c = cr; // const int
    auto d = &i; // Pi
    auto e = &ci; // Pki
    const auto f = ci; // const int 
    auto &g = ci; // int const reference
    //auto &h = 42; 
    const auto &j = 42;
    auto k = ci, &l = i; //int, int reference
    
    //const int &m = ci, *p = &ci;
    auto &m = ci, *p = &ci; // int const reference, point int const pointer
    
    //auto &n = i, *p2 = &ci; 
    //std::cout << typeid(c).name() << std::endl;
    //std::cout << typeid(d).name() << std::endl;
    //std::cout << typeid(m).name() << std::endl;
    //std::cout << typeid(p).name() << std::endl;
    //std::cout << p <<std::endl;
    //std::cout << *p <<std::endl; 

    a = 42;
    b = 42;
    c = 42;
    d = 42;
    e = 42;
    f = 42;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    return 0;

}
*/



// prictice 2.35
/* 
#include<iostream>
#include<typeinfo>
int main()
{
    const int i = 42; // const int 
    auto j = i; // int
    const auto &k = i; // const int
    auto *p = &i; // pointer to const int
    const auto j2 = i, &k2 = i; // int
    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;
    return 0;
} 
*/

// decltype
#include<typeinfo>
#include<iostream>
int main()
{
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    std::cout << typeid(x).name() << std::endl;
    std::cout << y << std::endl;

    return 0;
}