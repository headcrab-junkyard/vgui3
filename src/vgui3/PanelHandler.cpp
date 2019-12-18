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

#include "PanelHandler.hpp"

namespace vgui3
{

CPanelHandler::CPanelHandler() = default;
CPanelHandler::~CPanelHandler() = default;

void CPanelHandler::Init(VPANEL vguiPanel, IClientPanel *panel)
{
	ToCPanel(vguiPanel)->Init(panel);
};

void CPanelHandler::SetPos(VPANEL vguiPanel, int x, int y)
{
	ToCPanel(vguiPanel)->SetPos(x, y);
};

void CPanelHandler::GetPos(VPANEL vguiPanel, int &x, int &y)
{
	ToCPanel(vguiPanel)->GetPos(x, y);
};

void CPanelHandler::SetSize(VPANEL vguiPanel, int wide, int tall)
{
	ToCPanel(vguiPanel)->SetSize(wide, tall);
};

void CPanelHandler::GetSize(VPANEL vguiPanel, int &wide, int &tall)
{
	ToCPanel(vguiPanel)->GetSize(wide, tall);
};

void CPanelHandler::SetMinimumSize(VPANEL vguiPanel, int wide, int tall)
{
	ToCPanel(vguiPanel)->SetMinimumSize(wide, tall);
};

void CPanelHandler::GetMinimumSize(VPANEL vguiPanel, int &wide, int &tall)
{
	ToCPanel(vguiPanel)->GetMinimumSize(wide, tall);
};

void CPanelHandler::SetZPos(VPANEL vguiPanel, int z)
{
	ToCPanel(vguiPanel)->SetZPos(z);
};

int CPanelHandler::GetZPos(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetZPos();
};

void CPanelHandler::GetAbsPos(VPANEL vguiPanel, int &x, int &y)
{
	ToCPanel(vguiPanel)->GetAbsPos(x, y);
};

void CPanelHandler::GetClipRect(VPANEL vguiPanel, int &x0, int &y0, int &x1, int &y1)
{
	ToCPanel(vguiPanel)->GetClipRect(x0, y0, x1, y1);
};

void CPanelHandler::SetInset(VPANEL vguiPanel, int left, int top, int right, int bottom)
{
	ToCPanel(vguiPanel)->SetInset(left, top, right, bottom);
};

void CPanelHandler::GetInset(VPANEL vguiPanel, int &left, int &top, int &right, int &bottom)
{
	ToCPanel(vguiPanel)->GetInset(left, top, right, bottom);
};

void CPanelHandler::SetVisible(VPANEL vguiPanel, bool abState)
{
	ToCPanel(vguiPanel)->SetVisible(abState);
};

bool CPanelHandler::IsVisible(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->IsVisible();
};

void CPanelHandler::SetParent(VPANEL vguiPanel, VPANEL newParent)
{
	ToCPanel(vguiPanel)->SetParent(newParent);
};

int CPanelHandler::GetChildCount(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetChildCount();
};

VPANEL CPanelHandler::GetChild(VPANEL vguiPanel, int anIndex)
{
	return ToCPanel(vguiPanel)->GetChild(anIndex);
};

VPANEL CPanelHandler::GetParent(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetParent();
};

void CPanelHandler::MoveToFront(VPANEL vguiPanel)
{
	ToCPanel(vguiPanel)->MoveToFront();
};

void CPanelHandler::MoveToBack(VPANEL vguiPanel)
{
	ToCPanel(vguiPanel)->MoveToBack();
};

bool CPanelHandler::HasParent(VPANEL vguiPanel, VPANEL potentialParent)
{
	return ToCPanel(vguiPanel)->HasParent(potentialParent);
};

bool CPanelHandler::IsPopup(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->IsPopup();
};

void CPanelHandler::SetPopup(VPANEL vguiPanel, bool abState)
{
	ToCPanel(vguiPanel)->SetPopup(abState)
};

bool CPanelHandler::Render_GetPopupVisible(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->Render_GetPopupVisible();
};

void CPanelHandler::Render_SetPopupVisible(VPANEL vguiPanel, bool abState)
{
	ToCPanel(vguiPanel)->Render_SetPopupVisible(abState);
};

HScheme CPanelHandler::GetScheme(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetScheme();
};

bool CPanelHandler::IsProportional(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->IsProportional();
};

bool CPanelHandler::IsAutoDeleteSet(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->IsAutoDeleteSet();
};

void CPanelHandler::DeletePanel(VPANEL vguiPanel)
{
	ToCPanel(vguiPanel)->DeletePanel();
};

void CPanelHandler::SetKeyBoardInputEnabled(VPANEL vguiPanel, bool abState)
{
	ToCPanel(vguiPanel)->SetKeyBoardInputEnabled(abState);
};

void CPanelHandler::SetMouseInputEnabled(VPANEL vguiPanel, bool abState)
{
	ToCPanel(vguiPanel)->SetMouseInputEnabled(abState);
};

bool CPanelHandler::IsKeyBoardInputEnabled(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->IsKeyBoardInputEnabled();
};

bool CPanelHandler::IsMouseInputEnabled(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->IsMouseInputEnabled();
};

void CPanelHandler::Solve(VPANEL vguiPanel)
{
	ToCPanel(vguiPanel)->Solve();
};

const char *CPanelHandler::GetName(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetName();
};

const char *CPanelHandler::GetClassName(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetClassName();
};

void CPanelHandler::SendMessage(VPANEL vguiPanel, KeyValues *params, VPANEL ifromPanel)
{
	ToCPanel(vguiPanel)->SendMessage(params, ifromPanel);
};

void CPanelHandler::Think(VPANEL vguiPanel)
{
	ToCPanel(vguiPanel)->Think();
};

void CPanelHandler::PerformApplySchemeSettings(VPANEL vguiPanel)
{
	ToCPanel(vguiPanel)->PerformApplySchemeSettings();
};

void CPanelHandler::PaintTraverse(VPANEL vguiPanel, bool forceRepaint, bool allowForce)
{
	ToCPanel(vguiPanel)->PaintTraverse(forceRepaint, allowForce);
};

void CPanelHandler::Repaint(VPANEL vguiPanel)
{
	ToCPanel(vguiPanel)->Repaint();
};

VPANEL CPanelHandler::IsWithinTraverse(VPANEL vguiPanel, int x, int y, bool traversePopups)
{
	return ToCPanel(vguiPanel)->IsWithinTraverse(x, y, traversePopups);
};

void CPanelHandler::OnChildAdded(VPANEL vguiPanel, VPANEL child)
{
	ToCPanel(vguiPanel)->OnChildAdded(child);
};

void CPanelHandler::OnSizeChanged(VPANEL vguiPanel, int anNewWide, int anNewTall)
{
	ToCPanel(vguiPanel)->OnSizeChanged(anNewWidth, anNewHeight);
};

void CPanelHandler::InternalFocusChanged(VPANEL vguiPanel, bool lost)
{
	ToCPanel(vguiPanel)->InternalFocusChanged(lost);
};

bool CPanelHandler::RequestInfo(VPANEL vguiPanel, KeyValues *outputData)
{
	return ToCPanel(vguiPanel)->RequestInfo(outputData);
};

void CPanelHandler::RequestFocus(VPANEL vguiPanel, int direction)
{
	ToCPanel(vguiPanel)->RequestFocus(direction);
};

bool CPanelHandler::RequestFocusPrev(VPANEL vguiPanel, VPANEL existingPanel)
{
	return ToCPanel(vguiPanel)->RequestFocusPrev(existingPanel);
};

bool CPanelHandler::RequestFocusNext(VPANEL vguiPanel, VPANEL existingPanel)
{
	return ToCPanel(vguiPanel)->RequestFocusNext(existingPanel);
};

VPANEL CPanelHandler::GetCurrentKeyFocus(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetCurrentKeyFocus();
};

int CPanelHandler::GetTabPosition(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetTabPosition();
};

SurfacePlat *CPanelHandler::Plat(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetPlat();
};

void CPanelHandler::SetPlat(VPANEL vguiPanel, SurfacePlat *Plat)
{
	ToCPanel(vguiPanel)->SetPlat(Plat)
};

Panel *CPanelHandler::GetPanel(VPANEL vguiPanel, const char *asDestModule)
{
	return ToCPanel(vguiPanel)->GetPanel(asDestModule);
};

bool CPanelHandler::IsEnabled(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->IsEnabled();
};

void CPanelHandler::SetEnabled(VPANEL vguiPanel, bool abState)
{
	ToCPanel(vguiPanel)->SetEnabled(abState);
};

void *CPanelHandler::Client(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetClient();
};

const char *CPanelHandler::GetModuleName(VPANEL vguiPanel)
{
	return ToCPanel(vguiPanel)->GetModuleName();
};

}; // namespace vgui3