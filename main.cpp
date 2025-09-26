#include <fstream>
// #include <ios>
#include <iostream>
using namespace std;

auto main() -> int {
    /*
    ofstream data("data.txt",ios::out);
    if(data.is_open()){
        data << "Here is some text.";
    } else {
        cout << "failed to open the file";
    }
    */

    ifstream file("data.txt");
    string line{};
    while(getline(file,line)){
        cout << line << endl;
    }
}
