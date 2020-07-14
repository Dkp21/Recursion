#include <iostream>
#include <cmath>

using namespace std;


int numDigitInNumber(int n)
{
    int digits = 0;

    while(n)
    {
        ++digits;

        n = n/10;
    }

    return digits;
}

bool numIsPalindrome(int num, int digits)
{
    if(digits <= 1)
    {
        return true;
    }

    int power = pow(10, digits -1);
    int first_digit = num/power;
    int last_digit = num%10;

    if(first_digit != last_digit)
    {
        return false;
    }

    num = num%power;

    num = num/10;

    return numIsPalindrome(num, digits - 2);
}

int main(int argc, char **argv)
{
    cout << "Enter Number : ";
    int num;

    cin >> num;

    int digits = numDigitInNumber(num);

    cout << num << " is palindrome - " << (numIsPalindrome(num, digits)?"true":"false") << endl;

    return 0;
}
