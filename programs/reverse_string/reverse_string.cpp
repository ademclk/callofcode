#include <iostream>
#include <string.h>

using namespace std;


string reverString(string str) {
    
    int len;
    char temp;
    len = str.length(); // to get the lenght of the string

    for (int i = 0; i < len / 2; i++) {
        
        
        temp = str.at(i);      // str.at() returns char at index in a string 
        str.at(i) =str.at(len - i - 1);
        str[len - i - 1] = temp;
    }
    return str;
}
int main()
{
    string str ;
    cout <<"Enter a String : ";
    cin >> str;
    cout<< "\n string reversed : " << reverString(str);
    return 0;
}