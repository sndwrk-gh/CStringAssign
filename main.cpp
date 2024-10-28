#include <iostream>
#include <windows.h>
#include "Header.h"
// Header Example Start (USED IN HEADERS)
//const struct CString
//{
//	std::basic_string<char, std::char_traits<char>, std::allocator<char>> _str;
//};
//
//template<class InputIterator>
//inline std::string& CString::assign(InputIterator first, InputIterator last)
//{
//    _str.assign(first, last); 
//    return _str;              
//};
//
// Header Example End



//Hook and Code Example

int main() {
    
    //Own Code Implementation
    
    const char* Name = "Name";
    int NameLen = strlen(Name);
    
    
    //CString User = new CString;
    CString User;
    
    //User.assign(Name, strlen(Name));
    User.assign(Name, NameLen);
    
    
    
    
    // Hook Method
    //AddPlayerHook(CString* Name){
    //    
    //const char* NewName = "Hi";
    //Name.assign(NewName, strlen(NewName));
    //
    //return AddPlayerFunc(Name) 
    //}
    return 0;
}
