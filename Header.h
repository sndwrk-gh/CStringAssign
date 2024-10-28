#include <iostream>

const struct CString
{
	std::basic_string<char, std::char_traits<char>, std::allocator<char>> _str;
};

template<class InputIterator>
inline std::string& CString::assign(InputIterator first, InputIterator last)
{
    _str.assign(first, last); 
    return _str;              
};
