---
title: 'Messaggi WM _: P - R | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- ON_WM_RBUTTONUP
- ON_WM_PALETTECHANGED
- ON_WM_RBUTTONDBLCLK
- ON_WM_QUERYENDSESSION
- ON_WM_PARENTNOTIFY
- ON_WM_PALETTEISCHANGING
- ON_WM_QUERYOPEN
- ON_WM_PAINT
- ON_WM_QUERYNEWPALETTE
- ON_WM_RBUTTONDOWN
- ON_WM_RENDERALLFORMATS
- ON_WM_PAINTCLIPBOARD
- ON_WM_RENDERFORMAT
- ON_WM_QUERYDRAGICON
dev_langs:
- C++
helpviewer_keywords:
- ON_WM_RENDERFORMAT [MFC]
- ON_WM_QUERYOPEN [MFC]
- ON_WM_RBUTTONDOWN [MFC]
- ON_WM_PAINTCLIPBOARD [MFC]
- ON_WM_QUERYNEWPALETTE [MFC]
- ON_WM_RBUTTONUP [MFC]
- ON_WM_PARENTNOTIFY [MFC]
- ON_WM_RBUTTONDBLCLK [MFC]
- ON_WM_PALETTECHANGED [MFC]
- ON_WM_PALETTEISCHANGING [MFC]
- ON_WM_QUERYDRAGICON [MFC]
- ON_WM_PAINT [MFC]
- ON_WM_RENDERALLFORMATS [MFC]
- ON_WM_QUERYENDSESSION [MFC]
- WM_ messages
ms.assetid: f46962e5-8329-4f1f-9b4d-fdad2a5ce1f8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d37189490a955b2837fa974dfaad3efba0c615bd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="wm-messages-p---r"></a>Messaggi WM_: P - R
Le voci della mappa seguenti corrispondono ai prototipi di funzione:  
  
|Voce della mappa|Prototipo di funzione|  
|---------------|------------------------|  
|ON_WM_PAINT()|void afx_msg [OnPaint](../../mfc/reference/cwnd-class.md#onpaint)().|  
|ON_WM_PAINTCLIPBOARD()|void afx_msg [OnPaintClipboard](../../mfc/reference/cwnd-class.md#onpaintclipboard)(CWnd *, HANDLE);|  
|ON_WM_PALETTECHANGED()|void afx_msg [OnPaletteChanged](../../mfc/reference/cwnd-class.md#onpalettechanged)(CWnd *);|  
|ON_WM_PALETTEISCHANGING()|void afx_msg [OnPaletteIsChanging](../../mfc/reference/cwnd-class.md#onpaletteischanging)(CWnd *);|  
|ON_WM_PARENTNOTIFY()|void afx_msg [OnParentNotify](../../mfc/reference/cwnd-class.md#onparentnotify)(UINT, LONG);|  
|ON_WM_POWERBROADCAST()|afx_msg UINT [OnPowerBroadcast](../../mfc/reference/cwnd-class.md#onpowerbroadcast)(UINT, UINT);|  
|ON_WM_QUERYDRAGICON()|afx_msg HCURSOR [OnQueryDragIcon della pagina delle](../../mfc/reference/cwnd-class.md#onquerydragicon)() ().|  
|ON_WM_QUERYENDSESSION()|afx_msg BOOL [OnQueryEndSession](../../mfc/reference/cwnd-class.md#onqueryendsession)() ().|  
|ON_WM_QUERYNEWPALETTE()|afx_msg BOOL [OnQueryNewPalette](../../mfc/reference/cwnd-class.md#onquerynewpalette)() ().|  
|ON_WM_QUERYOPEN()|afx_msg BOOL [OnQueryOpen](../../mfc/reference/cwnd-class.md#onqueryopen)() ().|  
|ON_WM_RBUTTONDBLCLK()|void afx_msg [OnRButtonDblClk](../../mfc/reference/cwnd-class.md#onrbuttondblclk)(UINT, CPoint);|  
|ON_WM_RBUTTONDOWN()|void afx_msg [OnRButtonDown](../../mfc/reference/cwnd-class.md#onrbuttondown)(UINT, CPoint);|  
|ON_WM_RBUTTONUP()|void afx_msg [OnRButtonUp](../../mfc/reference/cwnd-class.md#onrbuttonup)(UINT, CPoint);|  
|ON_WM_RENDERALLFORMATS()|void afx_msg [OnRenderAllFormats](../../mfc/reference/cwnd-class.md#onrenderallformats)().|  
|ON_WM_RENDERFORMAT()|void afx_msg [OnRenderFormat](../../mfc/reference/cwnd-class.md#onrenderformat)(UINT);|  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

