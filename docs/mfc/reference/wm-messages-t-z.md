---
title: 'Messaggi WM _: T - Z'
ms.date: 11/04/2016
f1_keywords:
- ON_WM_TCARD
- ON_WM_WININICHANGE
- ON_WM_VSCROLLCLIPBOARD
- ON_WM_VSCROLL
- ON_WM_WINDOWPOSCHANGED
- ON_WM_TIMECHANGE
- ON_WM_TIMER
- ON_WM_VKEYTOITEM
- ON_WM_WINDOWPOSCHANGING
helpviewer_keywords:
- ON_WM_VSCROLLCLIPBOARD [MFC]
- ON_WM_WININICHANGE [MFC]
- ON_WM_WINDOWPOSCHANGED [MFC]
- ON_WM_TCARD [MFC]
- ON_WM_TIMECHANGE [MFC]
- ON_WM_TIMER [MFC]
- WM_ messages [MFC]
- ON_WM_WINDOWPOSCHANGING [MFC]
- ON_WM_VKEYTOITEM [MFC]
- ON_WM_VSCROLL
ms.assetid: c528bb2e-ddb5-4da6-b652-432a387408b8
ms.openlocfilehash: 7b5dbcb52ef7a61712f2c59c217a71f533799f67
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271853"
---
# <a name="wm-messages-t---z"></a>Messaggi WM _: T - Z

Le voci della mappa seguenti corrispondono ai prototipi di funzione:

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|ON_WM_TCARD()|void afx_msg [OnTCard](../../mfc/reference/cwnd-class.md#ontcard)(UINT, valore DWORD);|
|ON_WM_TIMECHANGE()|afx_msg void [OnTimeChange](../../mfc/reference/cwnd-class.md#ontimechange)( );|
|ON_WM_TIMER()|void afx_msg [su timer](../../mfc/reference/cwnd-class.md#ontimer)(UINT_PTR);|
|ON_WM_UNICHAR()|void afx_msg [OnUniChar](../../mfc/reference/cwnd-class.md#onunichar)(UINT, UINT, UINT);|
|ON_WM_UNINITMENUPOPUP()|afx_msg void [OnUnInitMenuPopup](../../mfc/reference/cwnd-class.md#onuninitmenupopup)( CMenu*, UINT );|
|ON_WM_USERCHANGED()|void afx_msg [OnUserChanged](../../mfc/reference/cwnd-class.md#onuserchanged)();|
|ON_WM_VKEYTOITEM()|int afx_msg [OnVKeyToItem](../../mfc/reference/cwnd-class.md#onvkeytoitem)(UINT, CWnd *, UINT);|
|ON_WM_VSCROLL()|void afx_msg [OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll)(UINT, UINT, CWnd *);|
|ON_WM_VSCROLLCLIPBOARD()|void afx_msg [OnVScrollClipboard](../../mfc/reference/cwnd-class.md#onvscrollclipboard)(CWnd *, UINT, UINT);|
|ON_WM_WINDOWPOSCHANGED()|afx_msg void [OnWindowPosChanged](../../mfc/reference/cwnd-class.md#onwindowposchanged)( WINDOWPOS*);|
|ON_WM_WINDOWPOSCHANGING()|afx_msg void [OnWindowPosChanging](../../mfc/reference/cwnd-class.md#onwindowposchanging)( WINDOWPOS*);|
|ON_WM_WININICHANGE()|afx_msg void [OnWinIniChange](../../mfc/reference/cwnd-class.md#onwininichange)( LPSTR );|
|ON_WM_WTSSESSION_CHANGE()|void afx_msg [OnSessionChange](../../mfc/reference/cwnd-class.md#onsessionchange)(UINT, UINT);|
|ON_WM_XBUTTONDBLCLK()|void afx_msg [OnXButtonDblClk](../../mfc/reference/cwnd-class.md#onxbuttondblclk)(UINT, UINT, CPoint);|
|ON_WM_XBUTTONDOWN()|void afx_msg [OnXButtonDown](../../mfc/reference/cwnd-class.md#onxbuttondown)(UINT, UINT, CPoint);|
|ON_WM_XBUTTONUP()|void afx_msg [OnXButtonUp](../../mfc/reference/cwnd-class.md#onxbuttonup)(UINT, UINT, CPoint);|

## <a name="see-also"></a>Vedere anche

[Mappe messaggi](../../mfc/reference/message-maps-mfc.md)<br/>
[Gestori per WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)
