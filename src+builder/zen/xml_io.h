// **************************************************************************
// * This file is part of the FreeFileSync project. It is distributed under *
// * GNU General Public License: http://www.gnu.org/licenses/gpl-3.0        *
// * Copyright (C) Zenju (zenju AT gmx DOT de) - All Rights Reserved        *
// **************************************************************************

#ifndef XML_IO_H_8914759321263879
#define XML_IO_H_8914759321263879

#include <zenxml/xml.h>
#include "file_error.h"

//combine zen::Xml and zen file i/o
//-> loadXmlDocument vs loadStream:
//1. better error reporting
//2. quick exit if (potentially large) input file is not an XML

namespace zen
{
XmlDoc loadXmlDocument(const Zstring& filepath); //throw FileError
void checkForMappingErrors(const XmlIn& xmlInput, const Zstring& filepath); //throw FileError

void saveXmlDocument(const XmlDoc& doc, const Zstring& filepath); //throw FileError
}

#endif //XML_IO_H_8914759321263879
