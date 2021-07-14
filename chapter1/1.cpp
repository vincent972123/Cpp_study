/* 1.1
int main()
{
    return 0;
}
*/

//demo
/*
#include<iostream>
int main()
{
    std::cout << "enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    
    //std::cin << v1 << v2; // wrong cin >>
    
    std::cin >> v1 >> v2;
    std::cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
*/

// prictice 1.3 print helloworld
/* 
#include<iostream>
int main()
{
    std::cout << "hello world" << std::endl;
    return 0;
}
*/

// prictice 1.4 product of two numbers
/* 
#include<iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "the product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
    return 0;
} 
*/

// prictice 1.5 print in a separate statement 
/* 
#include<iostream>
int main()
{
    std::cout << "enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "the product of ";
    std::cout << v1 ;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2 << std::endl;
    return 0;
}
*/

// prictice 1.8 determine the valid comment character

// #include<iostream>
// int main()
// {
//     //std::cout << "/*" << std::endl;
//     //std::cout << "*/" << std::endl;
//     //std::cout << /* "*/" */ ;
//     std::cout << /* "*/" /* "/*" */ <<std::endl; 
//     return 0;
// }


// 1.4.1 while 
//demo: sum of 1 to 10
/* 
#include<iostream>
int main()
{
    int sum = 0, val = 1;
    while(val <= 10){
        sum = sum + val; // sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 incluive is " << sum << std::endl;
    return 0; 
}
*/

// prictice 1.9 sum of 50 to 100
/* 
#include<iostream>
int main()
{
    int sum = 0, val = 50;
    while(val <= 100){
        sum += val;
        ++val;
    }
    std::cout << "the sum is " << sum << std::endl;
    return 0;
}
*/

// prictice 1.10 demo of decrement operator
/* 
#include<iostream>
int main()
{
    int num = 10;
    while(num > 0){ // "==" is differernt from "="
        std::cout << num << std::endl;
        --num;
    } 
    return 0;
}
*/

// prictice 1.11 output all integers between two integers
/* 
#include<iostream>
int main()
{
    std::cout << "please enter two integers:" << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    std::cout << "there are all the integers between these two integers:" << std::endl;
    if(num1 > num2){
        while(num1 >= num2){
            std::cout << num1 << std::endl;
            --num1;        
        }        
    }
    else{
        while(num1 <= num2){
            std::cout << num1 << std::endl;
            ++num1;
        }
    }
}
*/

// 1.4.2 demo of for statement 
// sum of 1 to 10
/* 
#include<iostream>
int main()
{
    int sum = 0; 
    for(int val = 1; val <= 10; ++val) // (init-statement; condition; expression)
        sum += val;
    std::cout << "The sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;       
}
*/

// prictice 1.13

// sum of 50 to 100
/* 
#include<iostream>
int main()
{
    int sum = 0;
    for(int val = 50; val <= 100; ++val)
        sum += val;
    std::cout << "The sum of 50 to 100 is " << sum << std::endl;
    return 0;
}
*/

// demo of decrement operator
/* 
#include<iostream>
int main()
{
    for(int num = 10; num >= 0; --num)
        std::cout << num << std::endl;
}
*/

// output all integers between two integers
/* 
#include<iostream>
int main()
{
    std::cout << "please enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "there are all the integers between these two integers:" << std::endl;
    if(v1 >= v2){
        for(;v1 >= v2; --v1)
        std::cout << v1;
    }
    else{
        for(;v1 <= v2; ++v1)
        std::cout << v1 << std::endl;
    }
    return 0;
} 
*/

// 1.4.3 Read an indefinite amount of input data
/* 
#include<iostream>
int main()
{
    int sum = 0, val = 0;
    while(std::cin >> val){
        sum += val;
    }
    std::cout << "The sum is : " << sum << std::endl;
    return 0;
}
*/

// prictice 1.16 Read an indefinite amount of input data
/* 
#include<iostream>
int main()
{
    int sum = 0, val = 0;
    std::cout << "please enter some integers, according to the end of 'control+d' "
        << std::endl;
    for(;std::cin >> val;){
        sum += val;
    }
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
} 
*/

// 1.4.4 demo of if statement 
/* 
#include<iostream>
int main()
{
    int currVal = 0, val = 0;
    if(std::cin >> currVal){
        int cnt = 1;
        while(std::cin >> val){
            if(val == currVal){
                ++cnt;
            }
            else{
                std::cout << currVal << " occurs: " << cnt << std::endl;
                currVal = val;
                cnt = 1; // reset counter
            }
        }
        std::cout << currVal << " occurs: " << cnt << std::endl;
    }
    return 0;
} 
*/

// 1.5.1 class "Sales_item" read and write
/* 
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}
*/

// 1.5.1 class "Sales_item" add
/* 
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}
*/

// prictice 1.20
/* 
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item book;
    //std::cin >> book;
    //std::cout << book << std::endl;
    std::cout << "please enter sales recard: " << std::endl;
    while(std::cin >> book){
        std::cout << "ISBN, sales number, sales, average sales price: "
        << book << std::endl;
    }
    return 0;
}
*/

// prictice 1.21
/* 
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item trans1, trans2;
    std::cout << "Please enter 2 sales records: " << std::endl;
    std::cin >> trans1 >> trans2;
    if (compareIsbn(trans1, trans2)){
        std::cout << "aggregate information: ISBN, sales numbers, sales and average sales price: "
        << trans1 + trans2 << std::endl;
    }
    else{
        std::cout << "The two sales records have different ISBN." << std::endl;
    }
    return 0;
}
*/

// prictice 1.22
/* 
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item total, trans;
    std::cout << "Please enter sales records with same ISBN: " << std::endl;
    if(std::cin >> total){
        while (std::cin >> trans){
            if(compareIsbn(total,trans)){
                //std::cout << "The sum of all records is :";
                total += trans;
                //std::cout << total << std::endl; 
            }
            else{
                std::cout << "Different ISBN.";
                return -1;
            }
        std::cout << "aggregate information: ISBN, sales numbers, sales and average sales price: "
        << total << std::endl;
        }
    }
    else{
        std::cout << "No data" << std::endl;
        return -1;
    }
    return 0;
} 
*/

// 1.5.2 member function
/* 
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if(item1.isbn() == item2.isbn()){
        std::cout << item1 + item2 << std::endl;
        return 0;
    }
    else{
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1; 
    }
}
*/

// prictic 1.23
/* 
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item trans1, trans2;
    if(std::cin >> trans1){
        int num = 1;
        while(std::cin >> trans2){
            if(compareIsbn(trans1, trans2)){
                num++;
            }
            else{
                std::cout << trans1.isbn() << " has " << num << " records " << std::endl;
                trans1 = trans2;
            }
        }
        std::cout << trans1.isbn() << " has " << num << " records " << std::endl;
    }
    else{
        std::cout << "No data" << std::endl;
        return -1;
    }
    return 0;
} 
*/

// 1.6 book store
/* 
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item total;
    if(std::cin >> total){
        Sales_item trans;
        while(std::cin >> trans){
            if(total.isbn() == trans.isbn()){
                total += trans;
            }
            else{
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else{
        std::cerr << "No data" << std::endl;
        return -1;
    }
    return 0;
}
*/






