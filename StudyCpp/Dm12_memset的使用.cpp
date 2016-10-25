#include <iostream>
#include <string.h>
#include <stdio.h>
#include <memory.h>

using namespace std;

int main()
{
	char buffer[] = "Hello world\n";
	printf("Buffer before memset: %s\n", buffer);
	memset(buffer, '*', strlen(buffer));
	printf("Buffer after memset: %s\n", buffer);
	
	system("pause");
	return 0;
}