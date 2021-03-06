/**
* -----------------------------------------------------
* File			rsa.h
* Authors		David <popoklopsi> Ordnung, Impact
* License		GPLv3
* Web			http://popoklopsi.de, http://gugyclan.eu
* -----------------------------------------------------
*
* Originally provided for CallAdmin by Popoklopsi and Impact
*
* Copyright (C) 2014-2015 David <popoklopsi> Ordnung, Impact
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>
*/

#ifndef _INCLUDE_BASE64_H_
#define _INCLUDE_BASE64_H_

#include <string>

std::string base64_encode(unsigned char const*, unsigned int len);
std::string base64_decode(std::string const& s);

#endif