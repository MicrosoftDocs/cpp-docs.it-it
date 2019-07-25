---
title: 'Gestori di messaggi WM_: D-E'
ms.date: 11/04/2016
f1_keywords:
- ON_WM_ERASEBKGND
- ON_WM_DEVICECHANGE
- ON_WM_ENTERIDLE
- ON_WM_DESTROYCLIPBOARD
- ON_WM_DESTROY
- ON_WM_DEADCHAR
- ON_WM_DELETEITEM
- ON_WM_DROPFILES
- ON_WM_DEVMODECHANGE
- ON_WM_ENDSESSION
- ON_WM_ENABLE
- ON_WM_DRAWITEM
- ON_WM_DRAWCLIPBOARD
helpviewer_keywords:
- ON_WM_ENTERIDLE [MFC]
- ON_WM_DESTROYCLIPBOARD [MFC]
- ON_WM_DEADCHAR [MFC]
- ON_WM_DEVMODECHANGE [MFC]
- ON_WM_ERASEBKGND [MFC]
- ON_WM_DESTROY [MFC]
- ON_WM_DRAWCLIPBOARD [MFC]
- ON_WM_ENDSESSION [MFC]
- ON_WM_DRAWITEM [MFC]
- ON_WM_ENABLE [MFC]
- ON_WM_DROPFILES [MFC]
- ON_WM_DELETEITEM [MFC]
- ON_WM_DEVICECHANGE [MFC]
- WM_ messages [MFC]
ms.assetid: 56fb89c8-68a8-4adf-883e-a9f63bf677e9
ms.openlocfilehash: 12c785bb1e7e8fab0db237e8150e9e72f5c09ead
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449972"
---
# <a name="wm-message-handlers-d---e"></a>Gestori di messaggi WM_: D-E

Le seguenti voci della mappa a sinistra corrispondono ai prototipi di funzione a destra:

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|ON_WM_DEADCHAR()|afx_msg void [OnDeadChar](../../mfc/reference/cwnd-class.md#ondeadchar)(UINT, UINT, uint);|
|ON_WM_DELETEITEM()|afx_msg void [OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem)(int, LPDELETEITEMSTRUCT);|
|ON_WM_DESTROY()|afx_msg void [OnDestroy](../../mfc/reference/cwnd-class.md#ondestroy)();|
|ON_WM_DESTROYCLIPBOARD()|afx_msg void [OnDestroyClipboard](../../mfc/reference/cwnd-class.md#ondestroyclipboard)();|
|ON_WM_DEVICECHANGE()|afx_msg void [OnDeviceChange](../../mfc/reference/cwnd-class.md#ondevicechange)(uint, DWORD);|
|ON_WM_DEVMODECHANGE()|afx_msg void [OnDevModeChange](../../mfc/reference/cwnd-class.md#ondevmodechange)(LPSTR);|
|ON_WM_DRAWCLIPBOARD()|afx_msg void [OnDrawClipboard](../../mfc/reference/cwnd-class.md#ondrawclipboard)();|
|ON_WM_DRAWITEM()|afx_msg void [OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem)(LPDRAWITEMSTRUCT);|
|ON_WM_DROPFILES()|afx_msg void [OnDropFiles](../../mfc/reference/cwnd-class.md#ondropfiles)(HDROP);|
|ON_WM_DWMCOLORIZATIONCOLORCHANGED()|afx_msg void [OnColorizationColorChanged](../../mfc/reference/cwnd-class.md#oncolorizationcolorchanged)(DWORD, bool);|
|ON_WM_DWMCOMPOSITIONCHANGED()|afx_msg void [OnCompositionChanged](../../mfc/reference/cwnd-class.md#oncompositionchanged)();|
|ON_WM_DWMNCRENDERINGCHANGED()|afx_msg void [OnNcRenderingChanged](../../mfc/reference/cwnd-class.md#onncrenderingchanged)(bool);|
|ON_WM_DWMWINDOWMAXIMIZEDCHANGE()|afx_msg void [OnWindowMaximizedChanged](../../mfc/reference/cwnd-class.md#onwindowmaximizedchanged)(bool);|
|ON_WM_ENABLE()|afx_msg void [OnEnable](../../mfc/reference/cwnd-class.md#onenable)(bool);|
|ON_WM_ENDSESSION()|afx_msg void [OnEndSession](../../mfc/reference/cwnd-class.md#onendsession)(bool);|
|ON_WM_ENTERIDLE()|afx_msg void [OnEnterIdle](../../mfc/reference/cwnd-class.md#onenteridle)(uint, CWnd *);|
|ON_WM_ENTERSIZEMOVE()|afx_msg void [OnEnterSizeMove](../../mfc/reference/cwnd-class.md#onentersizemove)();|
|ON_WM_ERASEBKGND()|afx_msg BOOL [OnEraseBkgnd](../../mfc/reference/cwnd-class.md#onerasebkgnd)(CDC *);|
|ON_WM_EXITSIZEMOVE()|afx_msg void [OnExitSizeMove](../../mfc/reference/cwnd-class.md#onexitsizemove)();|

## <a name="see-also"></a>Vedere anche

[Mappe messaggi](../../mfc/reference/message-maps-mfc.md)<br/>
[Gestori per WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)
