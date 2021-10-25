#include <bits/stdc++.h>
using namespace std;

int main() {
    string shaped_q,raw_q,str3,str4;
    
    int count = 0;

    cin >> raw_q;

    shaped_q = raw_q;
for (size_t i = 0; i < shaped_q.size(); i++)
{
    if (shaped_q.at(i) == raw_q.at(0))
    {
        cout << "shaped_q:.at(" << i << ") ==" << shaped_q.at(i) << endl;

        for (size_t i = 0; i < raw_q.size(); i++)
        {
            str3 = raw_q.at(i); 

                if (str3.find(raw_q) == raw_q.size())
                {
                    str4 = str3.find(raw_q);
                    count++;
                }
        }
        
        
 
    }
        
    
}

if (cout == 0)
{
    cout << "no match." << endl;
}else
{
    cout << "str3:" << str3 << endl;
    cout << "str4:" << str4 << endl;

    cout << "count:" << count << endl;
}

}