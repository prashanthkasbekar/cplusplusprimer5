//Exercise 1.2
#include <iostream>

/*int main()
{
    cout << "Hello World " << endl;
}*/
//Output
//sd1.cpp: In function ‘int main()’:
//sd1.cpp:5:5: error: ‘cout’ was not declared in this scope
//     cout << "Hello World " << endl;
//     ^
//sd1.cpp:5:5: note: suggested alternative:
//In file included from sd1.cpp:1:0:
///usr/include/c++/4.8/iostream:61:18: note:   ‘std::cout’
//   extern ostream cout;  /// Linked to standard output
//                  ^
//sd1.cpp:5:31: error: ‘endl’ was not declared in this scope
//     cout << "Hello World " << endl;
//                               ^
//sd1.cpp:5:31: note: suggested alternative:
//In file included from /usr/include/c++/4.8/iostream:39:0,
//                 from sd1.cpp:1:
///usr/include/c++/4.8/ostream:564:5: note:   ‘std::endl’
//     endl(basic_ostream<_CharT, _Traits>& __os)
// Also no error on missing return statement

int main()
{
    std::cout << "Hello, World" << std::endl;
    return 0;
}
