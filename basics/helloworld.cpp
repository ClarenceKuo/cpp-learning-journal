#include <iostream>
#include <vector>
#include <string>

// Formatting
#include <iomanip>

//File I/O
#include <fstream>

//String Stream
#include <sstream>

using namespace std;

int main()
{
    cout<< "Hello world, I am ready for C++" << endl;
    // const variable
    const int var0 = 1;

    // typeof, sizeof
    cout<<"int size = "<<sizeof(typeof(var0))<< endl;
    cout<<"bool size = "<<sizeof(bool)<<"\n";
    cout<<"double size = "<<sizeof(double)<<"\n";

    //enum
    enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    MONTH thisMonth = Jan;
    cout << "this month is "<< thisMonth << endl;

    //iomanip: std output formatting
    cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";

    //File IO
    ofstream myfile;
    myfile.open("myfile");
    if (myfile.is_open())
    {
        myfile << "I am line1.\n";
        myfile << "I am line2.\n";
        myfile.close();
    }
    else cout << "Unable to open file for writing";

    ifstream myfileO ("myfile");
    string line;
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    //cin
    int year;
    cin >> year;
    cout<< year << endl;

    //string stream 
    string str = "133.4";
    float length;
    stringstream(str) >> length;
    cout << length << endl;

    return 0;
}