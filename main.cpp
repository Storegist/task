#include <cstring>
#include <iostream>
#include <string>

using namespace std;

void print_string(int buff_size, string s);
void print_string_flush(int buff_size, string s);

/*1.Creating a class, with class field: buffer.
and class methods: resize buffer, clear buffer, read buffer.

Buffer memory is allocated in the constructor.
In the destructor, the buffer is deleted from memory.
 */

class A {
 public:
  A(int buff_size) { cout << "Constructor invoked" << endl; }

 public:  // Access specifier
  void change_buff() {
    // Method/function defined inside the class

    // altering buffer size
    int size;
    cout << "change the buffersize" << endl;
    cin >> size;

    int buff_size = size;

    char *buffer = new char[buff_size];
    buffer[buff_size] = '\0';

    cout << "Enter something into the allocated buffer: " << endl;
    cin >> buffer;
    cout << "the content of buffer: " << buffer << endl;

    string s;
    cout << "enter a string" << endl;
    cin >> s;

    print_string(buff_size, s);
    print_string_flush(buff_size, s);

    delete buffer;
  }

  ~A() { cout << "Destructor invoked" << endl; }
};

/*
3.The print (String s) method takes a string
and appends it to the end of the buffer.
When the buffer is full, it is displayed.
*/

void print_string(int buff_size, string s) {
  char *buff = new char[buff_size];

  int a = 0;
  // int b=s.length();

  cout << "displaying the result of print_string method" << endl;
  while (buff_size >= a) {
    if (buff_size - a < s.length()) {
      break;
    }

    strcat(buff, s.c_str());

    a += s.length();
  }

  cout << buff << endl;

  delete[] buff;
}

/*4. The flush () method forcibly displays
the contents of the buffer without waiting for it to be full.*/
void print_string_flush(int buff_size, string s) {
  char *buff = new char[buff_size];

  int a = 0;
  // int b=s.length();

  cout << "displaying the result of print_string_flush() method" << endl;
  while (buff_size >= a) {
    if (buff_size - a < s.length()) {
      break;
    }

    strcat(buff, s.c_str());

    a += s.length();

    cout << buff << flush;
    cout << endl;
  }

  delete[] buff;
}

int main() {
  // 2.When creating a class object, the user specifies the size of the buffer.
  int buff_size;
  cout << "Specify buffer size: " << endl;
  cin >> buff_size;

  A a1 = A(buff_size);

  a1.change_buff();

  return 0;
}
