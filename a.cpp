#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;
struct a {
	int a;
	void alo()
    {
        printf("alo\n");
    }

};

int main(int argc, char const *argv[])
{
    std::ifstream  a(".gitignore");
    std::string b;
    getline(a, b);
    if (a.eof())
        cout << "hello\n";
    return 0;
}
