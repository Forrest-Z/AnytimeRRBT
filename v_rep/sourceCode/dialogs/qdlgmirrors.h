// This file is part of V-REP, the Virtual Robot Experimentation Platform.
// 
// Copyright 2006-2014 Coppelia Robotics GmbH. All rights reserved. 
// marc@coppeliarobotics.com
// www.coppeliarobotics.com
// 
// V-REP is dual-licensed, under the terms of EITHER (at your option):
//   1. V-REP commercial license (contact us for details)
//   2. GNU GPL (see below)
// 
// GNU GPL license:
// -------------------------------------------------------------------
// V-REP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// V-REP IS DISTRIBUTED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
// WARRANTY. THE USER WILL USE IT AT HIS/HER OWN RISK. THE ORIGINAL
// AUTHORS AND COPPELIA ROBOTICS GMBH WILL NOT BE LIABLE FOR DATA LOSS,
// DAMAGES, LOSS OF PROFITS OR ANY OTHER KIND OF LOSS WHILE USING OR
// MISUSING THIS SOFTWARE.
// 
// See the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with V-REP.  If not, see <http://www.gnu.org/licenses/>.
// -------------------------------------------------------------------
//
// This file was automatically created for V-REP release V3.1.2 on June 16th 2014

#ifndef QDLGMIRRORS_H
#define QDLGMIRRORS_H

#include "DlgEx.h"

namespace Ui {
	class CQDlgMirrors;
}

class CQDlgMirrors : public CDlgEx
{
    Q_OBJECT

public:
	explicit CQDlgMirrors(QWidget *parent = 0);
	~CQDlgMirrors();

	void refresh();

	void cancelEvent();
	bool inMainRefreshRoutine;
private slots:
	void on_qqEnabled_clicked();
	void on_qqWidth_editingFinished();
	void on_qqHeight_editingFinished();
	void on_qqColor_clicked();

	void on_qqReflectance_editingFinished();

	void on_qqIsMirror_clicked();

	void on_qqIsClippingPlane_clicked();

	void on_qqApplyAll_clicked();

	void on_qqEntityCombo_currentIndexChanged(int index);

	void on_qqDisableAllMirrors_clicked();

	void on_qqDisableAllClippingPlanes_clicked();

private:
	Ui::CQDlgMirrors *ui;
};

#endif // QDLGMIRRORS_H
