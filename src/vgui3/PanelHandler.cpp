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

#include "Panel.hpp"

namespace vgui3
{

CPanelHandler::CPanelHandler() = default;
CPanelHandler::~CPanelHandler() = default;

void CPanelHandler::Init(VPANEL vguiPanel, IClientPanel *panel)
{
};

void CPanelHandler::SetPos(VPANEL vguiPanel, int x, int y)
{
};

void CPanelHandler::GetPos(VPANEL vguiPanel, int &x, int &y)
{
};

void CPanelHandler::SetSize(VPANEL vguiPanel, int wide, int tall)
{
};

void CPanelHandler::GetSize(VPANEL vguiPanel, int &wide, int &tall)
{
};

void CPanelHandler::SetMinimumSize(VPANEL vguiPanel, int wide, int tall)
{
};

void CPanelHandler::GetMinimumSize(VPANEL vguiPanel, int &wide, int &tall)
{
};

void CPanelHandler::SetZPos(VPANEL vguiPanel, int z)
{
};

int CPanelHandler::GetZPos(VPANEL vguiPanel)
{
	return 0;
};

void CPanelHandler::GetAbsPos(VPANEL vguiPanel, int &x, int &y)
{
};

void CPanelHandler::GetClipRect(VPANEL vguiPanel, int &x0, int &y0, int &x1, int &y1)
{
};

void CPanelHandler::SetInset(VPANEL vguiPanel, int left, int top, int right, int bottom)
{
};

void CPanelHandler::GetInset(VPANEL vguiPanel, int &left, int &top, int &right, int &bottom)
{
};

void CPanelHandler::SetVisible(VPANEL vguiPanel, bool state)
{
};

bool CPanelHandler::IsVisible(VPANEL vguiPanel)
{
	return false;
};

void CPanelHandler::SetParent(VPANEL vguiPanel, VPANEL newParent)
{
};

int CPanelHandler::GetChildCount(VPANEL vguiPanel)
{
	return 0;
};

VPANEL CPanelHandler::GetChild(VPANEL vguiPanel, int index)
{
	return 0;
};

VPANEL CPanelHandler::GetParent(VPANEL vguiPanel)
{
	return 0;
};

void CPanelHandler::MoveToFront(VPANEL vguiPanel)
{
};

void CPanelHandler::MoveToBack(VPANEL vguiPanel)
{
};

bool CPanelHandler::HasParent(VPANEL vguiPanel, VPANEL potentialParent)
{
	return false;
};

bool CPanelHandler::IsPopup(VPANEL vguiPanel)
{
	return false;
};

void CPanelHandler::SetPopup(VPANEL vguiPanel, bool state)
{
};

bool CPanelHandler::Render_GetPopupVisible(VPANEL vguiPanel)
{
	return false;
};

void CPanelHandler::Render_SetPopupVisible(VPANEL vguiPanel, bool state)
{
};

HScheme CPanelHandler::GetScheme(VPANEL vguiPanel)
{
	return 0;
};

bool CPanelHandler::IsProportional(VPANEL vguiPanel)
{
	return false;
};

bool CPanelHandler::IsAutoDeleteSet(VPANEL vguiPanel)
{
	return false;
};

void CPanelHandler::DeletePanel(VPANEL vguiPanel)
{
};

void CPanelHandler::SetKeyBoardInputEnabled(VPANEL vguiPanel, bool state)
{
};

void CPanelHandler::SetMouseInputEnabled(VPANEL vguiPanel, bool state)
{
};

bool CPanelHandler::IsKeyBoardInputEnabled(VPANEL vguiPanel)
{
	return false;
};

bool CPanelHandler::IsMouseInputEnabled(VPANEL vguiPanel)
{
	return false;
};

void CPanelHandler::Solve(VPANEL vguiPanel)
{
};

const char *CPanelHandler::GetName(VPANEL vguiPanel)
{
	return "";
};

const char *CPanelHandler::GetClassName(VPANEL vguiPanel)
{
	return "";
};

void CPanelHandler::SendMessage(VPANEL vguiPanel, KeyValues *params, VPANEL ifromPanel)
{
};

void CPanelHandler::Think(VPANEL vguiPanel)
{
};

void CPanelHandler::PerformApplySchemeSettings(VPANEL vguiPanel)
{
};

void CPanelHandler::PaintTraverse(VPANEL vguiPanel, bool forceRepaint, bool allowForce)
{
};

void CPanelHandler::Repaint(VPANEL vguiPanel)
{
};

VPANEL CPanelHandler::IsWithinTraverse(VPANEL vguiPanel, int x, int y, bool traversePopups)
{
	return 0;
};

void CPanelHandler::OnChildAdded(VPANEL vguiPanel, VPANEL child)
{
};

void CPanelHandler::OnSizeChanged(VPANEL vguiPanel, int newWide, int newTall)
{
};

void CPanelHandler::InternalFocusChanged(VPANEL vguiPanel, bool lost)
{
};

bool CPanelHandler::RequestInfo(VPANEL vguiPanel, KeyValues *outputData)
{
	return false;
};

void CPanelHandler::RequestFocus(VPANEL vguiPanel, int direction)
{
};

bool CPanelHandler::RequestFocusPrev(VPANEL vguiPanel, VPANEL existingPanel)
{
	return false;
};

bool CPanelHandler::RequestFocusNext(VPANEL vguiPanel, VPANEL existingPanel)
{
	return false;
};

VPANEL CPanelHandler::GetCurrentKeyFocus(VPANEL vguiPanel)
{
	return 0;
};

int CPanelHandler::GetTabPosition(VPANEL vguiPanel)
{
	return 0;
};

SurfacePlat *CPanelHandler::Plat(VPANEL vguiPanel)
{
	return nullptr;
};

void CPanelHandler::SetPlat(VPANEL vguiPanel, SurfacePlat *Plat)
{
};

Panel *CPanelHandler::GetPanel(VPANEL vguiPanel, const char *destinationModule)
{
	return nullptr;
};

bool CPanelHandler::IsEnabled(VPANEL vguiPanel)
{
	return false;
};

void CPanelHandler::SetEnabled(VPANEL vguiPanel, bool state)
{
};

void *CPanelHandler::Client(VPANEL vguiPanel)
{
	return nullptr;
};

const char *CPanelHandler::GetModuleName(VPANEL vguiPanel)
{
	return "";
};

}; // namespace vgui3