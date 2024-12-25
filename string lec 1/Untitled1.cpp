//string is a class of oabject
// jab apan string bnate hai  tb automatic terminater lag jata hai string kw bad aur agar apni stringki langth 4 hai to apne ko 5
//dena hoga maylab size se 1 badake likhna hoga
// ye # main file ko code me marge krta hia ye hase #...


//2 tarha ke function fote hai.....
//1.predefine
//2.userdefine
//namespace ka matlab 2 same name ki chieje ko  alag alag likh sake
//:: funcion specifire hia jo batata hia ki bus y function leke ana hai matlab call kra hia 
// C++ Program to demonstrate use of
// std::string::capacity
// std::string::size
// std::string::length
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// empty str
	string str;
	cout << "str is : " << str << "\n";
	cout << "size: " << str.size()
		<< " length: " << str.length()
		<< " capacity: " << str.capacity() << "\n";

	// H - only one character
	str = "H";
	cout << "str is : " << str << "\n";
	cout << "size: " << str.size()
		<< " length: " << str.length()
		<< " capacity: " << str.capacity() << "\n";

	// Hello
	str = "Hello";
	cout << "str is : " << str << "\n";
	cout << "size: " << str.size()
		<< " length: " << str.length()
		<< " capacity: " << str.capacity() << "\n";

	// Hello with space added
	str = "Hello ";
	cout << "str is : " << str << "\n";
	cout << "size: " << str.size()
		<< " length: " << str.length()
		<< " capacity: " << str.capacity() << "\n";

	// one more modification
	str = "Hello GFG Reader";
	cout << "str is : " << str << "\n";
	cout << "size: " << str.size()
		<< " length: " << str.length()
		<< " capacity: " << str.capacity() << "\n";

	// Back to Hello
	str = "Hello";
	cout << "str is : " << str << "\n";
	cout << "size: " << str.size()
		<< " length: " << str.length()
		<< " capacity: " << str.capacity() << "\n";

	// reserve is basically request to compiler to change
	// the capacity decrease capacity
	str.reserve(7);
	cout << "str is : " << str << "\n";
	cout << "size: " << str.size()
		<< " length: " << str.length()
		<< " capacity: " << str.capacity() << "\n";

	// increase capacity
	str.reserve(35);
	cout << "str is : " << str << "\n";
	cout << "size: " << str.size()
		<< " length: " << str.length()
		<< " capacity: " << str.capacity() << "\n";

	return 0;
}


