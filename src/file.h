/*
Copyright(C)2018 by Peter C. Gramenides

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions :

The above copyright notice and this permission notice shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef FILE_H
#define FILE_H

#include <string>
#include "dllExports.h"

using namespace std;

class CTable;

class HUSKYDB_API CFile
{
public:
	CFile(string _fname, string _path, size_t _priority, CTable* _pParent);
	~CFile();

	void					SetPriority(size_t _priority);
	size_t					GetPriority();

	string					GetPath();
	void					SetPath(string _path);

	CTable*					GetParent();
	void					SetParent(CTable* _parent);

	string					GetName();
	void					SetName(string _name);

	bool					IsChild(CTable* _parent);

private:
	string					m_FileName;
	string					m_FilePath;
	size_t					m_Priority;
	CTable*					m_pParent;

};

#endif