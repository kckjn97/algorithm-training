#include <iostream>

using namespace std;

std::string replace_all(std::string &str, const std::string& from, const std::string& to){
    size_t start_pos = 0; 
    while((start_pos = str.find(from, start_pos)) != std::string::npos)  
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); 
    }
    return str;
}

int main() {
	string str;
	cin >> str;

	str = replace_all(str, "c=", "1");
	str = replace_all(str, "c-", "2");
	str = replace_all(str, "dz=", "3");
	str = replace_all(str, "d-", "4");
	str = replace_all(str, "lj", "5");
	str = replace_all(str, "nj", "6");
	str = replace_all(str, "s=", "7");
	str = replace_all(str, "z=", "8");
	
	cout << str.size() << endl;
}
