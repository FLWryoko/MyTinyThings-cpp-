#include <bits/stdc++.h>
using namespace std;

int main() {
    string shaped_q,raw_q,matched;
    
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
            matched += raw_q.at(i); 

                if (matched == shaped_q)
                {
                    
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
    
    cout << "matched:" << count << endl;
}

}