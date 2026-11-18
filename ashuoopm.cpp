// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

class bank
{
    public:
    void withdraw()
    {
        cout<<"withdraw money\n";
    }
};
class saving_account:public bank
{ 
    public:
        void deposit()
        {
    cout<<" deposit money\n";
        }
};
class current_account:public bank
{
    public:
    void check_balance()
    {
        cout<<"your balance\n";
    }
};
int main(){
    saving_account s;
    current_account c;
    s.withdraw();
    s.deposit();
    c.withdraw();
    c.check_balance();
return 0;
}   
