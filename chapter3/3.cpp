// 3.2.2
/* 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << s2 << endl;
    return 0;
} 
*/

// demo of getline 
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    string city;
    cout << "Please enter your name: ";
    //cin >> name;
    getline(cin, name);
    cout << "Enter the city you live in: ";
    //cin >> city;
    getline(cin, city);
    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;
    return 0;
} 
*/

// prictice 3.2
/* 
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string word;
    while(getline(cin, word))
        cout << word << endl;
    // while(cin >> word)
    //     cout << word << endl;
    return 0;
}
*/

// prictice 3.3
/* 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    cout << "select a mode to reading string: " << endl;
    cout << "1. read word by word" << endl;
    cout << "2. read line by line" << endl;
    string ch;
    getline(cin, ch);
    if(ch == "1"){
        cout << "please enter a string: '   Welcome to C++ world    '" << endl;
        cin >> word;
        cout << "the valid string read by the system is: " << endl;
        cout << word << endl;
        return 0;
    }
    // clear buffer
    // cin.clear();
    // cin.sync();
    if(ch == "2"){
        cout << "please enter a string: '   Welcome to C++ world    '" << endl;
        //getchar();
        getline(cin, word);

        cout << "the valid string read by the system is: " << endl;
        cout << word << endl;
        return 0;
    }
    else{
        cout << "error enter" << endl;
        return -1;
    }
} 
*/

// prictice 3.4 compare two strings
/* 
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string string1, string2;
    cout << "please enter two strings:" << endl;
    cin >> string1 >> string2;
    
    // compare strings size

    // if(string1 == string2)
    //     cout << "same strings: " << string1 << endl; 
    // else if(string1 < string2)
    //     cout << string2 << " is the large string" << endl;
    // else
    //     cout << string1 << " is the large string" << endl;

    // compare strings lengths
    auto length1 = string1.size();
    auto length2 = string2.size();
    if(length1 == length2)
        cout << "same lengths strings" << endl;
    else if(length1 < length2)
        cout << string2 << " is longer than " << string1 << endl;
    else
        cout << string1 << " is longer than " << string2 << endl;
    return 0;
} 
*/

// prictice 3.5 splicing and delimiting strings
/* 
#include<string>
#include<iostream>
using namespace std;
int main()
{

    // simple implementation

    // string strings;
    // cout << "please enter some strings" << endl;
    // while(cin >> strings)
    //     cout << strings << " ";
    // return 0;

    // splicing reference

    // char cont = 'y';
    // string s, result;
    // cout << "please enter the first string:" << endl;
    // while(cin >> s){
    //     result += s;
    //     cout << "continue (y/n)?" << endl;
    //     cin >> cont;
    //     if(cont == 'y' || cont == 'Y')
    //         cout << "please enter the next string:" << endl;
    //     else 
    //         break;
    // } 
    // cout << "this is the splicing string:\n" << result << endl;
    // return 0;

    // delimiting reference

    char cont = 'y';
    string s, result;
    cout << "please enter the first strings:" << endl;
    while(cin >> s){
        if(!result.size())
            result += s;
        else
            result = result + " " + s;
        cout << "continue (y/n)?" << endl;
        cin >> cont;
        if(cont == 'y' || cont == 'Y')
            cout << "please enter the next string:" << endl;
        else 
            break;
    } 
    cout << "this is the delimting string:\n" << result << endl;
    return 0;
} 
*/

// demo of dealing strings
/* 
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s("hello, world!!!");

    // count the number of punctuation //

    // decltype(s.size()) punct_cnt = 0;
    // for(auto c : s){
    //     if(ispunct(c))
    //         ++punct_cnt;
    // }
    // cout << punct_cnt << " punctuation characters in " << s << endl;

    // string to uppercase //

    for(auto &c : s)
        c = toupper(c);
    cout << s << endl;
    return 0;
}
*/

// Use subscript random access
/* 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    const string hexdigits = "0123456789ABCDEF";
    string result;
    string::size_type n;
    while(cin >> n)
        if(n < hexdigits.size())
            result += hexdigits[n];
    cout << result << endl;
    return 0;
} 
*/

// prictice 3.6 replace all characters with 'X'
/* 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string chr;
    cin >> chr;
    for(auto &c : chr)
        c = 'X';
    cout << chr << endl;
    return 0;
}
*/

// prictice 3.8
/* 
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string result;
    string::size_type n=0;
    getline(cin, result);

    // using while //

    // while(n < result.size()){
    //     result[n] = 'X';
    //     n++;
    // }

    // using for //

    for(; n < result.size(); n++)
        result[n] = 'X';
    cout << result << endl;
    return 0;

}
*/

// delete punctuation in the string
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string result;
    string::size_type n;
    getline(cin, result);
    for(n=0; n<result.size(); n++){
        if(ispunct(result[n]))
            result[n] = ' ';
    }
    cout << result << endl;
    return 0;
}
*/

// prictice 3.14/15
/* 
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{

    // put the integer in vector

    // vector<int> vInt;
    // int i;
    // char cont = 'y';
    // while(cin >> i){
    //     vInt.push_back(i);
    //     cout << "continue (y/n)?" << endl;
    //     cin >> cont;
    //     if(cont != 'y' && cont != 'Y')
    //         break;    
    // }
    // for(auto mem : vInt)
    //     cout << mem << " " << endl;
    // return 0;

    // put the char in vector

    vector<string> vChr;
    string chr;
    char cont = 'y';
    while(cin >> chr){
        vChr.push_back(chr);
        cout << "continue(y/n)?" << endl;
        cin >> cont;
        if(cont != 'y' && cont != 'Y')
            break;
    }
    for(auto c : vChr)
        cout << c << " " << endl;
    return 0;
} 
*/


// vector opration

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for(auto &i : v)
        i *= i;
    for(auto i : v)
        cout << i << " " << endl;
    return 0;
}
