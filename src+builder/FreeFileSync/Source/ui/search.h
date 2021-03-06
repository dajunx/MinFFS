// **************************************************************************
// * This file is part of the FreeFileSync project. It is distributed under *
// * GNU General Public License: http://www.gnu.org/licenses/gpl-3.0        *
// * Copyright (C) Zenju (zenju AT gmx DOT de) - All Rights Reserved        *
// **************************************************************************

#ifndef SEARCH_H_423905762345342526587
#define SEARCH_H_423905762345342526587

#include <wx+/grid.h>

namespace zen
{
std::pair<const Grid*, ptrdiff_t> findGridMatch(const Grid& grid1, const Grid& grid2, const wxString& searchString, bool respectCase);
//returns (grid/row) where the value was found, (nullptr, -1) if not found
}

#endif //SEARCH_H_423905762345342526587
