#include <iostream> 
using namespace std; 
  
// strings at index 0 is not used, it is to make array 
// indexing simple 
string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen " }; 
  
// strings at index 0 and 1 are not used, they is to 
// make array indexing simple 
string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
                 "fifty ", "sixty ", "seventy ", "eighty ", 
                 "ninety " }; 
  
// n is 1- or 2-digit number 
string numToWords(int n, string s) 
{ 
    string str = ""; 
    // if n is more than 19, divide it 
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    // if n is non-zero 
    if (n) 
        str += s; 
  
    return str; 
} 
  
// Function to print a given number in words 
string convertToWords(long n) 
{ 
    string out; 
    // millions places (if any) 
    out += numToWords((n / 10000000), "crore "); 
    // millions places (if any) 
    out += numToWords(((n / 100000) % 100), "lakh "); 
    // places (if any) 
    out += numToWords(((n / 1000) % 100), "thousand "); 
    // handles digit at hundreds places (if any) 
    out += numToWords(((n / 100) % 10), "hundred "); 
    if (n > 100 && n % 100) 
        out += "and "; 
    // handles digits at ones and tens places (if any) 
    out += numToWords((n % 100), "");  
    return out; 
} 

int main() 
{ 
    long n; 
    cout<<"enter the number: ";
    cin>>n;
    cout << convertToWords(n) << endl; 
    return 0; 
} 