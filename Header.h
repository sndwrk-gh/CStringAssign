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


struct CPersistentVtbl
{
	/*void* (__fastcall* __vecDelDtor)(unsigned int);
	void(__fastcall* Write)(CWriter*);
	void(__fastcall* WriteMembers)(CWriter*);
	void(__fastcall* Read)(CReader*);
	void(__fastcall* ReadMember)(CReader*, int);
	void(__fastcall* InitPostRead)(CString*, int, int);
	void(__fastcall* InitPostRead)();*/
};

struct CPersistent
{
	CPersistentVtbl* vfptr;
	int _TypeToken;
};

struct CCommand : CPersistent
{
	bool _bLogged;
	int _nCommandSender; 
	unsigned int _nRecipient; 
	unsigned __int16 _nRecipientPort;
	unsigned __int16 _nTickStamp;
	bool _bTargetedAsynchronous;
	bool _bMayBeRemoved;
	unsigned int _nIdentity;
};



struct CAddPlayerCommand : CCommand
{
	CString* _User; //hoi
	CString* _Name;
	//DWORD UNKNOWN;
	int _nMachineId;
	bool _bHotjoin;
	__int64 Social;
};
