#include <iostream>
#include <vector>
#include <string>

using namespace std;


void message(const string & s)
{
    cout << s << endl << flush;
}


void disp_vector(const vector<string> & v)
{
    cout << "vector size: " << v.size() << endl;
    if(v.size())
    {
        for(auto s : v)
        {
            cout << "[" << s << "]";
        }
        cout << endl;
    }
    cout << flush;
}


template <typename T>
void swap(T &a, T &b)
{
    message("swap()");
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}


int main(int argc, char ** argv)
{
    vector<string> v1 {"one", "two", "three", "four", "five"};
    vector<string> v2 {"six", "seven", "eight", "nine", "ten"};

    message("v1");
    disp_vector(v1);
    message("v2");
    disp_vector(v2);

    // Without the resolution scope operator it will call std::swap instead of my own define function
    ::swap(v1, v2);

    message("v1");
    disp_vector(v1);
    message("v2");
    disp_vector(v2);

    return 0;
}
