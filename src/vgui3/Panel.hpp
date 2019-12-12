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

namespace vgui3
{

class CPanel
{
public:
	CPanel(VPANEL anParent) : mnParent(anParent){}
	CPanel(VPANEL anParent, const char *asName) : mnParent(anParent), msName(asName){}
	
	void Init(IClientPanel *panel);

	void SetPos(int x, int y)
	{
		mnPosX = x;
		mnPosY = y;
	};
	
	void GetPos(int &x, int &y) const
	{
		x = mnPosX;
		y = mnPosY;
	};

	void SetSize(int wide, int tall)
	{
		if(wide < mnWidthMin)
			wide = mnWidthMin;
		
		if(tall < mnHeightMin)
			tall = mnHeightMin;
		
		mnWidth = wide;
		mnHeight = tall;
	};
	
	void GetSize(int &wide, int &tall) const
	{
		wide = mnWidth;
		tall = mnHeight;
	};

	void SetMinimumSize(int wide, int tall)
	{
		mnWidthMin = wide;
		mnHeightMin = tall;
	};
	
	void GetMinimumSize(int &wide, int &tall) const
	{
		wide = mnWidthMin;
		tall = mnHeightMin;
	};

	void SetZPos(int anPosZ){mnPosZ = anPosZ;}
	int GetZPos() const {return mnPosZ;}

	void GetAbsPos(int &x, int &y) const;

	void GetClipRect(int &x0, int &y0, int &x1, int &y1) const;

	void SetInset(int left, int top, int right, int bottom);
	void GetInset(int &left, int &top, int &right, int &bottom) const;

	void SetVisible(bool abState){mbVisible = abState;}
	bool IsVisible() const {return mbVisible;}

	void SetParent(VPANEL newParent){(mnParent != newParent) ? mnParent = newParent : return;}

	int GetChildCount() const {return mvChildren.size();}

	VPANEL GetChild(int anIndex) const {return mvChildren.at(anIndex);}
	VPANEL GetParent() const {return mnParent;}

	void MoveToFront();
	void MoveToBack();

	bool HasParent(VPANEL potentialParent) const {return mnParent == potentialParent;}

	void SetPopup(bool abState){mbPopup = abState;}
	bool IsPopup() const {return mbPopup;}

	void Render_SetPopupVisible(bool abState);
	bool Render_GetPopupVisible() const;

	HScheme GetScheme() const;

	bool IsProportional() const;
	bool IsAutoDeleteSet() const;

	void DeletePanel(){delete this;}

	void SetKeyBoardInputEnabled(bool abState){mbKeyboardInputEnabled = abState;}
	void SetMouseInputEnabled(bool abState){mbMouseInputEnabled = abState;}

	bool IsKeyBoardInputEnabled() const {return mbKeyboardInputEnabled;}
	bool IsMouseInputEnabled() const {return mbMouseInputEnabled;}

	void Solve();

	const char *GetName() const {return msName;}
	const char *GetClassName() const;

	void SendMessage(KeyValues *params, VPANEL ifromPanel);

	void Think();

	void PerformApplySchemeSettings();

	void PaintTraverse(bool forceRepaint, bool allowForce = true);
	void Repaint();

	VPANEL IsWithinTraverse(int x, int y, bool traversePopups);

	void OnChildAdded(VPANEL child){} // TODO: set child's constraints?
	void OnSizeChanged(int newWide, int newTall){} // TODO: notify children?

	void InternalFocusChanged(bool lost){} // TODO: ???

	bool RequestInfo(KeyValues *outputData);
	void RequestFocus(int direction = 0);
	bool RequestFocusPrev(VPANEL existingPanel);
	bool RequestFocusNext(VPANEL existingPanel);

	VPANEL GetCurrentKeyFocus() const;

	int GetTabPosition() const;

	void SetPlat(SurfacePlat *Plat);
	SurfacePlat *Plat() const;

	Panel *GetPanel(const char *asDestModule) const;

	void SetEnabled(bool abState){mbEnabled = abState;}
	bool IsEnabled() const {return mbEnabled;}

	void *GetClient() const;

	const char *GetModuleName() const;
private:
	tPanelVec mvChildren;
	
	VPANEL mnParent;
	
	const char *msName{""};
	
	int mnPosX{0};
	int mnPosY{0};
	int mnPosZ{0}; // TODO: mnDepth/mnLayer/mnZOrder?
	
	int mnWidth{0};
	int mnHeight{0};
	
	int mnWidthMin{0};
	int mnHeightMin{0};
	
	bool mbEnabled{false};
	bool mbVisible{false};
	bool mbPopup{false};
	
	bool mbMouseInputEnabled{false};
	bool mbKeyboardInputEnabled{false};
};

}; // namespace vgui3