#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    int num = 0;
    unordered_map<char, int> rom;
        rom['I'] = 1;
        rom['V'] = 5;
        rom['X'] = 10;
        rom['L'] = 50;
        rom['C'] = 100;
        rom['D'] = 500;
        rom['M'] = 1000;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
        {

            if (s[i + 1] == 'V'){
                num += 4;
                i++;
            }

            else{
                num += 9;
                i++;
            }
        }        

        else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
        {
            if (s[i + 1] == 'L'){
                num += 40;
                i++;
            }
            else if (s[i + 1] == 'C'){
                num += 90;
                i++;
            }

        }

        else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
        {
            if (s[i + 1] == 'D'){
                num += 400;
                i++;
            }
            else if (s[i + 1] == 'M'){
                num += 900;
                i++;
            }
                
        }


        else{
        

            auto it = rom.find(s[i]);

            if (it != rom.end())
                num += (*it).second;
        }
        
    }
    return num;
}

int main()
{
    string s;
    cin >> s;

    cout << romanToInt(s);

    return 0;
}