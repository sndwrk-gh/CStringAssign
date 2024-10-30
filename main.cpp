#include <iostream>
#include <windows.h>
#include "Header.h"

typedef CAddPlayerCommand* (__fastcall* GetCAddPlayerCommand)(void* pThis, CString* User, CString* Name, DWORD* unknown, int nMachineId, bool bHotjoin, __int64 a7);
GetCAddPlayerCommand CAddPlayerCommandHook;
GetCAddPlayerCommand CAddPlayerCommandTramp;

DWORD* gUknown;
__int64 gA7;


void* __fastcall CCommandFunc(size_t Size) {
	size_t i;
	void* result;
	

	for (i = Size; ; Size = i) {
		result = _malloc_base(Size);
		if (result) {
			break;
		}
		if (!_callnewh(i)) {
			if (i != -1i64) {
				//printm("Bad Allocation");
			}
			//printm("Bad Array Length");
		}
	}
	return result;
}

//Hook and Code Example

int main() {
    
    //Own Code Implementation
    
    const char* Name = "Name"; 
    // Name Array will be [5] 
    // so in visual studio to get the length manually
    // you can just hover over the "" and get the [] number
    // and minus 1 from it to get the length.
    
    int NameLen = strlen(Name);
    
    //CString User = new CString;
    CString* User;
    CString* empty  = new CString;
    //User.assign(Name, strlen(Name));
    User.assign(Name, NameLen);

    CAddPlayerCommand* pThis = (CAddPlayerCommand*)CCommandFunc(200 /*Magic Number*/);
    
    pThis = CAddPlayerCommandTramp(pThis, User, empty, gUnknown, 50, 0, gA7); 

    //Too lazy to fake sessionpost function, just imagine whatever it would look like :)
    CSessionPostTramp(pCSession, pThis, true);
    return 0;
}


 // Hook Method
//These arent the proper Variables!
CAddPlayerCommand* hkAddPlayerHook(void* pThis, CString* User, CString* Name, DWORD* unknown, int nMachineId, bool bHotjoin, __int64 a7 ){
    
    const char* NewName = "Hi";
    User.assign(NewName, strlen(NewName));

    gA7 = a7;
    gUnknown = unknown;
    
    return CAddPlayerCommandTramp(pThis, User, Name, unknown, nMachineID, bHotjoin, a7); 
}


