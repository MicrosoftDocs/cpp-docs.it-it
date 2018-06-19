---
title: 'Gestori messaggi WM _: D - E | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 804bd7d9e0180dd3bf970339b382d0c8807e9b50
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33380321"
---
# <a name="wm-message-handlers-d---e"></a>Gestori di messaggi WM_: D - E
Le seguenti voci della mappa a sinistra corrispondono ai prototipi di funzione a destra:  
  
|Voce della mappa|Prototipo di funzione|  
|---------------|------------------------|  
|ON_WM_DEADCHAR()|void afx_msg [OnDeadChar](../../mfc/reference/cwnd-class.md#ondeadchar)(UINT, UINT, UINT);|  
|ON_WM_DELETEITEM()|void afx_msg [OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem)(LPDELETEITEMSTRUCT);|  
|ON_WM_DESTROY()|void afx_msg [OnDestroy](../../mfc/reference/cwnd-class.md#ondestroy)().|  
|ON_WM_DESTROYCLIPBOARD()|void afx_msg [OnDestroyClipboard](../../mfc/reference/cwnd-class.md#ondestroyclipboard)().|  
|ON_WM_DEVICECHANGE()|void afx_msg [OnDeviceChange](../../mfc/reference/cwnd-class.md#ondevicechange)(UINT, DWORD);|  
|ON_WM_DEVMODECHANGE()|void afx_msg [OnDevModeChange](../../mfc/reference/cwnd-class.md#ondevmodechange)(LPSTR);|  
|ON_WM_DRAWCLIPBOARD()|void afx_msg [OnDrawClipboard](../../mfc/reference/cwnd-class.md#ondrawclipboard)().|  
|ON_WM_DRAWITEM()|void afx_msg [OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem)(LPDRAWITEMSTRUCT);|  
|ON_WM_DROPFILES()|void afx_msg [OnDropFiles](../../mfc/reference/cwnd-class.md#ondropfiles)(HDROP);|  
|ON_WM_DWMCOLORIZATIONCOLORCHANGED()|void afx_msg [OnColorizationColorChanged](../../mfc/reference/cwnd-class.md#oncolorizationcolorchanged)(DWORD, BOOL);|  
|ON_WM_DWMCOMPOSITIONCHANGED()|void afx_msg [OnCompositionChanged](../../mfc/reference/cwnd-class.md#oncompositionchanged)().|  
|ON_WM_DWMNCRENDERINGCHANGED()|void afx_msg [OnNcRenderingChanged](../../mfc/reference/cwnd-class.md#onncrenderingchanged)(BOOL);|  
|ON_WM_DWMWINDOWMAXIMIZEDCHANGE()|void afx_msg [OnWindowMaximizedChanged](../../mfc/reference/cwnd-class.md#onwindowmaximizedchanged)(BOOL);|  
|ON_WM_ENABLE()|void afx_msg [OnEnable](../../mfc/reference/cwnd-class.md#onenable)(BOOL);|  
|ON_WM_ENDSESSION()|void afx_msg [OnEndSession](../../mfc/reference/cwnd-class.md#onendsession)(BOOL);|  
|ON_WM_ENTERIDLE()|void afx_msg [OnEnterIdle](../../mfc/reference/cwnd-class.md#onenteridle)(UINT, CWnd *);|  
|ON_WM_ENTERSIZEMOVE()|void afx_msg [OnEnterSizeMove](../../mfc/reference/cwnd-class.md#onentersizemove)().|  
|ON_WM_ERASEBKGND()|afx_msg BOOL [OnEraseBkgnd](../../mfc/reference/cwnd-class.md#onerasebkgnd)(CDC *);|  
|ON_WM_EXITSIZEMOVE()|void afx_msg [OnExitSizeMove](../../mfc/reference/cwnd-class.md#onexitsizemove)().|  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

