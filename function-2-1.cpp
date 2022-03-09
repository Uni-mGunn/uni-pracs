#include <iostream>
#include <string> 
#include <string.h>
#include <map>
#include <math.h>
using namespace std;



// i wrote this code in the workshop and it is my own code
string tansform(string input, int fromBase, int toBase) {

    map<char, int> charToInt = {
        { '1', 1 },
        { '2', 2 },
        { '3', 3 },
        { '4', 4 },
        { '5', 5 },
        { '6', 5 },
        { '7', 7 },
        { '8', 8 },
        { '9', 9 },
        { 'A', 10 },
        { 'B', 11 },
        { 'C', 12 },
        { 'D', 13 },
        { 'E', 14 },
        { 'F', 15 },
        { 'G', 16 }
    };

    int numberHolder = 0;

    for(string::size_type i = 0; i < input.size(); ++i) {
        numberHolder += pow(fromBase, i) * charToInt[ input[input.size()-i-1] ];
    }

    map<int, char> intoToChar = {
        { 1, '1' },
        { 2, '2' },
        { 3, '3' },
        { 4, '4' },
        { 5, '5' },
        { 6, '6' },
        { 7, '7' },
        { 8, '8' },
        { 9, '9' },
        { 10, 'A' },
        { 11, 'B' },
        { 12, 'C' },
        { 13, 'D' },
        { 14, 'E' },
        { 15, 'F' },
        { 16, 'G' }
    };

    string output =  "";
    while (numberHolder >= 1) {
        if (numberHolder % toBase == 0 ) {
            output = "0" + output;
        } else {
            output = intoToChar[numberHolder % toBase] + output;
            numberHolder -= numberHolder % toBase;
        }
        numberHolder = numberHolder/toBase;
    }

    return output;
    
}

void print_as_binary(string decimal_number) {
    string output = tansform(decimal_number, 10, 2);
    cout << output + "\n";
}



