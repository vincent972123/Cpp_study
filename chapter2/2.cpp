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

#include<iostream>
int main()
{
    int i = 5;
    int &r1 = i;
    const int &r2 = i;
    r1 = 10;
    std::cout << r2 << std::endl;
    return 0;
}
