//Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.
//
//Write a function which takes a list of strings and returns each line prepended by the correct number.
//
//The numbering starts at 1. The format is n : string.Notice the colon and space in between.
//
//Examples : (Input-- > Output)
//
//[] -- > []
//["a", "b", "c"] -- > ["1: a", "2: b", "3: c"]


#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> number(const vector<string>& lines)
{
    vector<string> line = lines;
    for (size_t i = 0; i != line.size(); ++i)
        line[i] = to_string(i+1) + ": " + line[i];
    return line;
}

int main()
{
    vector<string> lines = { "a","b","c" };
    for (auto str : number(lines))
        cout << str << " ";
}
