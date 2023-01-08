using namespace std;
#include <iostream>
#include <string>
#include <stack>
#include <cstring> 

string isPalindrom(string word)
{
    stack<char> charsStack;

    for (int i = 0; i < word.length(); i++)
    {
        charsStack.push(word[i]);
    }

    for (int k = 0; (charsStack.size() != 0); k++)
    {
        char charHolder = charsStack.top();
        charsStack.pop();

        if (charHolder != word[k])
            return "Not Palindrome";
    }

    return "Palindrome";
}

int main()
{
    cout << "\t\tPalindrome Algorithm\n\n\n";


    cout << "Test \"dad\" : " << isPalindrom("dad") << "\n";

    cout << "Test \"madam\" : " << isPalindrom("madam") << "\n";

    cout << "Test \"sees\" : " << isPalindrom("sees") << "\n";
    
    cout << "Test \"hello\" : " << isPalindrom("hello") << "\n";
}