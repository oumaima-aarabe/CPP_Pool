#include <stdio.h>
#include <iostream>

struct a {
	int a;
	void alo()
    {
        printf("alo\n");
    }

};

int main(int argc, char const *argv[])
{
    struct a b;
    b.alo();
    return 0;
}
