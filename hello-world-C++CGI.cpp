/** hello-world-C++CGI.cpp

    Demonstrates a C++ program that generates an HTML file.
    The executable can then be used as a CGI program.

    Dir : SW > Applications > Samples > C++Samples > Introductory > CGI > hello-world-C++CGI
*/

#include <iostream>
#include <string>

using namespace std;

void print(string s);


int main()
{
   print("Content-Type: text/html\n");

   print("<html>");
   print("<head>");
   print("<title>Hello world - C++ CGI!</title>");
   print("</head>");

   print("<body>");
   print("<h1>Hello world - C++ CGI!</h1>");
   print("</body>");
   print("</html>");
}


void print(string s)
{
   cout << s << endl;
}
