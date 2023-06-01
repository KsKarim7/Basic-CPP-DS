#include <bits/stdc++.h>
using namespace std;

namespace Ks
{
    int age = 24;
    void hello()
    {
        cout << "Hello from Moon namespaces" << endl;
    }

}
namespace Ksk
{
    int age2 = 24;
    void hello2()
    {
        cout << "Hello from Sun namespaces" << endl;
    }

}

using namespace Ks;
using namespace Ksk;
int main()
{
    // cout << Ks::age << endl;
    // cout << Ksk::age2 << endl;
    // if you use "using namespace Ks"  -- this line then you dont need to write line above two lines
    cout << age << endl;
    hello();
    hello2();
    Ksk ::hello2();
    cout << age2 << endl;
    return 0;
}