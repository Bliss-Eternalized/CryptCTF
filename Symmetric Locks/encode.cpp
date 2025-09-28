#include <iostream>
#include <string.h>

using namespace std;

void encode(char* input, unsigned int length, char key)
{
    for (int i = 0; i < length; i += 1)
    {
        input[i] = input[i] ^ key;
    }
}

int main(int argc, char *argv[])
{
    const char* trueFlag = argv[1];
    char encodedFlag[28];
    strcpy(encodedFlag, trueFlag);
    encode(encodedFlag, 27, 'c');
    printf("%s", encodedFlag);
    for (int i = 0; i < 28; i += 1)
    {
        cout << (int) encodedFlag[i] << " ";
    }
    return 0;
}