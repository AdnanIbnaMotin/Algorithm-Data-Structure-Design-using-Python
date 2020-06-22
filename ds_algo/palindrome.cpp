#include <iostream>
using std::cout;
using std::endl;
using std::string;

void palindrome(string str)
{
   int strLen = str.size();

   for (int i=0; i<strLen/2; i++){
       if (str[i] != str[strLen-1-i]){
           cout << "No a palindrome" << endl;
           break;
       }
   }
   cout << "Palindrome" << endl;

}
