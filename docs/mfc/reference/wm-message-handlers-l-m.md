---
description: 'Altre informazioni su: WM_ gestori di messaggi: L-M'
title: 'Gestori messaggi WM_: L - M'
ms.date: 11/04/2016
f1_keywords:
- ON_WM_MENUSELECT
- ON_WM_MBUTTONDBLCLK
- ON_WM_MOUSEACTIVATE
- ON_WM_MOUSEMOVE
- ON_WM_MOVING
- ON_WM_LBUTTONUP
- ON_WM_LBUTTONDBLCLK
- ON_WM_MEASUREITEM
- ON_WM_MDIACTIVATE
- ON_WM_MOVE
- ON_WM_LBUTTONDOWN
- ON_WM_MBUTTONDOWN
- ON_WM_MENUCHAR
- ON_WM_MBUTTONUP
helpviewer_keywords:
- ON_WM_MENUSELECT [MFC]
- ON_WM_MBUTTONDBLCLK [MFC]
- ON_WM_MOVE [MFC]
- ON_WM_MOUSEACTIVATE [MFC]
- ON_WM_MBUTTONUP [MFC]
- ON_WM_MOUSEMOVE [MFC]
- ON_WM_MENUCHAR [MFC]
- ON_WM_MBUTTONDOWN [MFC]
- ON_WM_MEASUREITEM [MFC]
- ON_WM_MOVING [MFC]
- ON_WM_LBUTTONDOWN [MFC]
- ON_WM_MDIACTIVATE [MFC]
- ON_WM_LBUTTONDBLCLK [MFC]
- ON_WM_LBUTTONUP [MFC]
- WM_ messages
ms.assetid: 96ecaaf1-6d13-4e12-a454-535635967489
ms.openlocfilehash: 2044f8eeb74c75f92f42c6e0199820528f7c10c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218329"
---
# <a name="wm_-message-handlers-l---m"></a>Gestori messaggi WM_: L - M

Le seguenti voci della mappa a sinistra corrispondono ai prototipi di funzione a destra:

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|ON_WM_LBUTTONDBLCLK ()|afx_msg void [OnLButtonDblClk](../../mfc/reference/cwnd-class.md#onlbuttondblclk)(uint, CPoint);|
|ON_WM_LBUTTONDOWN ()|afx_msg void [OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown)(uint, CPoint);|
|ON_WM_LBUTTONUP ()|afx_msg void [OnLButtonUp](../../mfc/reference/cwnd-class.md#onlbuttonup)(uint, CPoint);|
|ON_WM_MBUTTONDBLCLK ()|afx_msg void [OnMButtonDblClk](../../mfc/reference/cwnd-class.md#onmbuttondblclk)(uint, CPoint);|
|ON_WM_MBUTTONDOWN ()|afx_msg void [OnMButtonDown](../../mfc/reference/cwnd-class.md#onmbuttondown)(uint, CPoint);|
|ON_WM_MBUTTONUP ()|afx_msg void [OnMButtonUp](../../mfc/reference/cwnd-class.md#onmbuttonup)(uint, CPoint);|
|ON_WM_MDIACTIVATE ()|afx_msg void [OnMDIActivate](../../mfc/reference/cwnd-class.md#onmdiactivate)(bool, CWnd \* , CWnd \* );|
|ON_WM_MEASUREITEM ()|afx_msg void [OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem)(LPMEASUREITEMSTRUCT);|
|ON_WM_MENUCHAR ()|afx_msg LONG [OnMenuChar](../../mfc/reference/cwnd-class.md#onmenuchar)(UINT, uint, CMenu \* );|
|ON_WM_MENUDRAG ()|afx_msg UINT [OnMenuDrag](../../mfc/reference/cwnd-class.md#onmenudrag)(uint, CMenu \* );|
|ON_WM_MENUGETOBJECT ()|afx_msg UINT [OnMenuGetObject](../../mfc/reference/cwnd-class.md#onmenugetobject)(MENUGETOBJECTINFO \* );|
|ON_WM_MENURBUTTONUP ()|afx_msg void [OnMenuRButtonUp](../../mfc/reference/cwnd-class.md#onmenurbuttonup)(uint, CMenu \* );|
|ON_WM_MENUSELECT ()|afx_msg void [OnMenuSelect](../../mfc/reference/cwnd-class.md#onmenuselect)(UINT, uint, HMENU);|
|ON_WM_MOUSEACTIVATE ()|afx_msg int [OnMouseActivate](../../mfc/reference/cwnd-class.md#onmouseactivate)(CWnd \* , uint, uint);|
|ON_WM_MOUSEHOVER ()|afx_msg void [OnMouseHover](../../mfc/reference/cwnd-class.md#onmousehover)(uint, CPoint);|
|ON_WM_MOUSEHWHEEL ()|afx_msg void [OnMouseHWheel](../../mfc/reference/cwnd-class.md#onmousehwheel)(uint, short, CPoint);|
|ON_WM_MOUSELEAVE ()|afx_msg void [OnMouseLeave](../../mfc/reference/cwnd-class.md#onmouseleave)();|
|ON_WM_MOUSEMOVE ()|afx_msg void [OnMouseMove](../../mfc/reference/cwnd-class.md#onmousemove)(uint, CPoint);|
|ON_WM_MOUSEWHEEL ()|afx_msg BOOL [OnMouseWheel](../../mfc/reference/cwnd-class.md#onmousewheel)(uint, short, CPoint);|
|ON_WM_MOVE ()|afx_msg void [OnMove](../../mfc/reference/cwnd-class.md#onmove)(int, int);|
|ON_WM_MOVING ()|afx_msg void [Onmossing](../../mfc/reference/cwnd-class.md#onmoving)(uint, lpRect);|

## <a name="see-also"></a>Vedi anche

[Mappe messaggi](../../mfc/reference/message-maps-mfc.md)<br/>
[Gestori per messaggi di WM_](../../mfc/reference/handlers-for-wm-messages.md)
