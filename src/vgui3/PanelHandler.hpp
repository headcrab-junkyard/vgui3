/*
 * This file is part of Magenta Engine
 *
 * Copyright (C) 2016-2019 BlackPhrase
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

#include "vgui3/IPanel.hpp"

namespace vgui3
{

class CPanel;

class CPanelHandler : public IPanel
{
public:
	CPanelHandler();
	~CPanelHandler();
	
	void Init(VPANEL vguiPanel, IClientPanel *apPanel) override;

	void SetPos(VPANEL vguiPanel, int x, int y) override;
	void GetPos(VPANEL vguiPanel, int &x, int &y) override;

	void SetSize(VPANEL vguiPanel, int wide, int tall) override;
	void GetSize(VPANEL vguiPanel, int &wide, int &tall) override;

	void SetMinimumSize(VPANEL vguiPanel, int wide, int tall) override;
	void GetMinimumSize(VPANEL vguiPanel, int &wide, int &tall) override;

	void SetZPos(VPANEL vguiPanel, int z) override;
	int GetZPos(VPANEL vguiPanel) override;

	void GetAbsPos(VPANEL vguiPanel, int &x, int &y) override;

	void GetClipRect(VPANEL vguiPanel, int &x0, int &y0, int &x1, int &y1) override;

	void SetInset(VPANEL vguiPanel, int left, int top, int right, int bottom) override;
	void GetInset(VPANEL vguiPanel, int &left, int &top, int &right, int &bottom) override;

	void SetVisible(VPANEL vguiPanel, bool abState) override;
	bool IsVisible(VPANEL vguiPanel) override;

	void SetParent(VPANEL vguiPanel, VPANEL newParent) override;

	int GetChildCount(VPANEL vguiPanel) override;

	VPANEL GetChild(VPANEL vguiPanel, int anIndex) override;
	VPANEL GetParent(VPANEL vguiPanel) override;

	void MoveToFront(VPANEL vguiPanel) override;
	void MoveToBack(VPANEL vguiPanel) override;

	bool HasParent(VPANEL vguiPanel, VPANEL potentialParent) override;

	bool IsPopup(VPANEL vguiPanel) override;
	void SetPopup(VPANEL vguiPanel, bool abState) override;

	bool Render_GetPopupVisible(VPANEL vguiPanel) override;
	void Render_SetPopupVisible(VPANEL vguiPanel, bool abState) override;

	HScheme GetScheme(VPANEL vguiPanel) override;

	bool IsProportional(VPANEL vguiPanel) override;
	bool IsAutoDeleteSet(VPANEL vguiPanel) override;

	void DeletePanel(VPANEL vguiPanel) override;

	void SetKeyBoardInputEnabled(VPANEL vguiPanel, bool abState) override;
	void SetMouseInputEnabled(VPANEL vguiPanel, bool abState) override;

	bool IsKeyBoardInputEnabled(VPANEL vguiPanel) override;
	bool IsMouseInputEnabled(VPANEL vguiPanel) override;

	void Solve(VPANEL vguiPanel) override;

	const char *GetName(VPANEL vguiPanel) override;
	const char *GetClassName(VPANEL vguiPanel) override;

	void SendMessage(VPANEL vguiPanel, KeyValues *params, VPANEL ifromPanel) override;

	void Think(VPANEL vguiPanel) override;

	void PerformApplySchemeSettings(VPANEL vguiPanel) override;

	void PaintTraverse(VPANEL vguiPanel, bool forceRepaint, bool allowForce = true) override;
	void Repaint(VPANEL vguiPanel) override;

	VPANEL IsWithinTraverse(VPANEL vguiPanel, int x, int y, bool traversePopups) override;

	void OnChildAdded(VPANEL vguiPanel, VPANEL child) override;
	void OnSizeChanged(VPANEL vguiPanel, int anNewWidth, int anNewHeight) override;

	void InternalFocusChanged(VPANEL vguiPanel, bool abLost) override;

	bool RequestInfo(VPANEL vguiPanel, KeyValues *outputData) override;
	void RequestFocus(VPANEL vguiPanel, int direction = 0) override;
	bool RequestFocusPrev(VPANEL vguiPanel, VPANEL existingPanel) override;
	bool RequestFocusNext(VPANEL vguiPanel, VPANEL existingPanel) override;

	VPANEL GetCurrentKeyFocus(VPANEL vguiPanel) override;

	int GetTabPosition(VPANEL vguiPanel) override;

	SurfacePlat *Plat(VPANEL vguiPanel) override;
	void SetPlat(VPANEL vguiPanel, SurfacePlat *Plat) override;

	Panel *GetPanel(VPANEL vguiPanel, const char *asDestModule) override;

	bool IsEnabled(VPANEL vguiPanel) override;
	void SetEnabled(VPANEL vguiPanel, bool abState) override;

	void *Client(VPANEL vguiPanel) override;

	const char *GetModuleName(VPANEL vguiPanel) override;
private:
	inline CPanel *ToCPanel(VPANEL vguiPanel) const {return reinterpret_cast<CPanel*>(vguiPanel);}
};

}; // namespace vgui3