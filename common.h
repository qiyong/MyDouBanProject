#include<string>
#include<iostream>
#include<fstream>
#include<list>

using std::string;
using std::fstream;
using std::ios;
using std::list;
using std::wstring;


BOOL GetJSON(CString &strPageFile, CString  strKey,  int nType=SEARCH_KEY, int nStart=0);
void ApiWriteLog(string strlog, bool bAppend=TURE);
int ApiSplitToArray(CStringArray &strArray, const CString &strInput, string strkey, BOOL bClear, int iNum);
CString ApiGetDetailTime();

