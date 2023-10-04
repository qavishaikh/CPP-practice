// This program illustrates how explicit type conversion works.
#include <iostream>
using namespace std;
int main()
{
cout << "static_cast<int>(7.9) = "
<< static_cast<int>(7.9)
<< endl;
cout << "static_cast<int>(3.3) = "
<< static_cast<int>(3.3)
<< endl;
cout << "static_cast<double>(230) = "
<< static_cast<double>(230)
<< endl;
cout << "static_cast<double>(5 + 3) = "
<< static_cast<double>(9 + 3)
<< endl;
cout << "static_cast<double>(15) / 2 = "
<< static_cast<int>(15) / 2
<< endl;
cout << "static_cast<double>(29 / 3) = "
<< static_cast<double>(29 / 3)
<< endl;
cout << "static_cast<int>(7.8 + static_cast<double>(15) / 2) = "
<< static_cast<int>(7.8 + static_cast<double>(15) / 2)
<< endl;
cout << "static_cast<int>(9.8 + static_cast<double>(15 / 3)) = "
<< static_cast<int>(9.8 + static_cast<double>(15 / 3))
<< endl;
return 0;
}
