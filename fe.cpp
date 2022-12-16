#include <iostream>
#include <string.h>
using namespace std;
class Token
{
public:
    int token(string x)
    {
        int count = 0;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == '{' or x[i] == '[' or x[i] == '(' or
                x[i] == '}' or x[i] == ']' or x[i] == ')' or
                x[i] == '"' or x[i] == "'' or x[i] == ')' or)
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Token t;
    string g;
    cin>>g;

    if (t.token(g) == 0)
    {
        cout << "No Token Found\n";
    }
    else
    {
        cout << t.token(g);
    }
}