/*
 * This file is part of Magenta Engine
 *
 * Copyright (C) 2018-2019 BlackPhrase
 *
 * Magenta Engine is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Magenta Engine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Magenta Engine. If not, see <http://www.gnu.org/licenses/>.
*/

/// @file

#pragma once

#include "VGUI.hpp"
#include "Color.h"

namespace vgui3
{

struct IImage
{
	virtual void Paint() = 0;
	virtual void SetPos(int x, int y) = 0;
	virtual void GetContentSize(int &wide, int &tall) = 0;
	virtual void GetSize(int &wide, int &tall) = 0;
	virtual void SetSize(int wide, int tall) = 0;
	virtual void SetColor(Color color) = 0;
};

}; // namespace vgui3