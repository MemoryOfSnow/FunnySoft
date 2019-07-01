#include <Windows.h>  
#include <iostream>   
#include <string> 

using namespace std;
string GetProgramDir()
{
	char exeFullPath[MAX_PATH]; // Full path
	string strPath = "";

	GetModuleFileName(NULL, exeFullPath, MAX_PATH);
	strPath = (string)exeFullPath;    // Get full path of the file
	int pos = strPath.find_last_of('\\', strPath.length());
	return strPath.substr(0, pos);  // Return the directory without the file name
}
string&   replace_all(string&   str, const   string&   old_value, const   string&   new_value)
{
	while (true) {
		string::size_type   pos(0);
		if ((pos = str.find(old_value)) != string::npos)
			str.replace(pos, old_value.length(), new_value);
		else   break;
	}
	return   str;
}
string&   replace_all_distinct(string&   str, const   string&   old_value, const   string&   new_value)
{
	for (string::size_type pos(0); pos != string::npos; pos += new_value.length()) {
		if ((pos = str.find(old_value, pos)) != string::npos)
			str.replace(pos, old_value.length(), new_value);
		else   break;
	}
	return   str;
}
int main() {
	string str = "",str1="",str2="";
	str = GetProgramDir();
	
	str ="\""+ str + "/*.*"+"\"";
	system("@echo off");
	str = replace_all(str, "\\", "/");
	//cout << str << endl;
	str1 = "@attrib +s +a +h +r " + str + " /s /d";
	//cout << str1 << endl;
	system(str1.c_str());
	cout << "您的文件已经被我加密" << endl;
	Sleep(10000);
	str2 = "@attrib -s -a -h -r " + str + "/s /d";
	cout << "骗你的啦";
	system(str2.c_str());
	return 0;

	}