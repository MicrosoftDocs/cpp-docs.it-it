---
title: 'Messaggi WM_: S'
ms.date: 11/04/2016
f1_keywords:
- ON_WM_SYSDEADCHAR
- ON_WM_SYSKEYDOWN
- ON_WM_STYLECHANGING
- ON_WM_STYLECHANGED
- ON_WM_SPOOLERSTATUS
- ON_WM_SYSCHAR
- ON_WM_SETFOCUS
- ON_WM_SIZE
- ON_WM_SIZING
- ON_WM_SETCURSOR
- ON_WM_SYSCOMMAND
- ON_WM_SETTINGCHANGE
- ON_WM_SHOWWINDOW
- ON_WM_SYSKEYUP
- ON_WM_SIZECLIPBOARD
- ON_WM_SYSCOLORCHANGE
helpviewer_keywords:
- ON_WM_SIZE [MFC]
- ON_WM_SETFOCUS [MFC]
- ON_WM_SIZING [MFC]
- ON_WM_SYSCHAR [MFC]
- ON_WM_SETTINGCHANGE [MFC]
- ON_WM_SYSDEADCHAR [MFC]
- ON_WM_SHOWWINDOW [MFC]
- ON_WM_STYLECHANGING [MFC]
- ON_WM_SYSCOMMAND [MFC]
- ON_WM_STYLECHANGED [MFC]
- ON_WM_SPOOLERSTATUS [MFC]
- ON_WM_SYSCOLORCHANGE [MFC]
- ON_WM_SETCURSOR [MFC]
- ON_WM_SIZECLIPBOARD [MFC]
- ON_WM_SYSKEYUP [MFC]
- ON_WM_SYSKEYDOWN [MFC]
- WM_ messages
ms.assetid: 4b9aec79-a98f-4aa0-a3d9-110941b6dcbc
ms.openlocfilehash: fcbb71713a3754f22325a36bce47e039d5d142b5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50553283"
---
# <a name="wm-messages-s"></a>Messaggi WM_: S

Le voci della mappa seguenti corrispondono ai prototipi di funzione.

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|ON_WM_SETCURSOR)|BOOL afx_msg [OnSetCursor](../../mfc/reference/cwnd-class.md#onsetcursor)(CWnd *, UINT, UINT);|
|ON_WM_SETFOCUS)|void afx_msg [OnSetFocus](../../mfc/reference/cwnd-class.md#onsetfocus)(CWnd *);|
|ON_WM_SETTINGCHANGE)|void afx_msg [OnSettingChange](../../mfc/reference/cwnd-class.md#onsettingchange)(UINT uFlags, LPCTSTR lpszSection);|
|ON_WM_SHOWWINDOW)|void afx_msg [OnShowWindow](../../mfc/reference/cwnd-class.md#onshowwindow)(BOOL, UINT);|
|ON_WM_SIZE)|void afx_msg [OnSize](../../mfc/reference/cwnd-class.md#onsize)(UINT, int, int);|
|ON_WM_SIZECLIPBOARD)|void afx_msg [OnSizeClipboard](../../mfc/reference/cwnd-class.md#onsizeclipboard)(CWnd *, HANDLE);|
|ON_WM_SIZING)|void afx_msg [OnSizing](../../mfc/reference/cwnd-class.md#onsizing)(UINT, LPRECT);|
|ON_WM_SPOOLERSTATUS)|void afx_msg [OnSpoolerStatus](../../mfc/reference/cwnd-class.md#onspoolerstatus)(UINT, UINT);|
|ON_WM_STYLECHANGED)|void afx_msg [OnStyleChanged](../../mfc/reference/cwnd-class.md#onstylechanged)(int, LPSTYLESTRUCT);|
|ON_WM_STYLECHANGING)|void afx_msg [OnStyleChanging](../../mfc/reference/cwnd-class.md#onstylechanging)(int, LPSTYLESTRUCT);|
|ON_WM_SYSCHAR)|void afx_msg [OnSysChar](../../mfc/reference/cwnd-class.md#onsyschar)(UINT, UINT, UINT);|
|ON_WM_SYSCOLORCHANGE)|void afx_msg [OnSysColorChange](../../mfc/reference/cwnd-class.md#onsyscolorchange)();|
|ON_WM_SYSCOMMAND)|void afx_msg [OnSysCommand](../../mfc/reference/cwnd-class.md#onsyscommand)(UINT, LONG);|
|ON_WM_SYSDEADCHAR)|void afx_msg [OnSysDeadChar](../../mfc/reference/cwnd-class.md#onsysdeadchar)(UINT, UINT, UINT);|
|ON_WM_SYSKEYDOWN)|void afx_msg [OnSysKeyDown](../../mfc/reference/cwnd-class.md#onsyskeydown)(UINT, UINT, UINT);|
|ON_WM_SYSKEYUP)|void afx_msg [OnSysKeyUp](../../mfc/reference/cwnd-class.md#onsyskeyup)(UINT, UINT, UINT);|

## <a name="see-also"></a>Vedere anche

[Mappe messaggi](../../mfc/reference/message-maps-mfc.md)<br/>
[Gestori per WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

