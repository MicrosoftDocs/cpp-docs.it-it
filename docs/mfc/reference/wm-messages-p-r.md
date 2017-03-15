---
title: "Messaggi WM_: P - R | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_WM_RBUTTONUP"
  - "ON_WM_PALETTECHANGED"
  - "ON_WM_RBUTTONDBLCLK"
  - "ON_WM_QUERYENDSESSION"
  - "ON_WM_PARENTNOTIFY"
  - "ON_WM_PALETTEISCHANGING"
  - "ON_WM_QUERYOPEN"
  - "ON_WM_PAINT"
  - "ON_WM_QUERYNEWPALETTE"
  - "ON_WM_RBUTTONDOWN"
  - "ON_WM_RENDERALLFORMATS"
  - "ON_WM_PAINTCLIPBOARD"
  - "ON_WM_RENDERFORMAT"
  - "ON_WM_QUERYDRAGICON"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_PAINT"
  - "ON_WM_PAINTCLIPBOARD"
  - "ON_WM_PALETTECHANGED"
  - "ON_WM_PALETTEISCHANGING"
  - "ON_WM_PARENTNOTIFY"
  - "ON_WM_QUERYDRAGICON"
  - "ON_WM_QUERYENDSESSION"
  - "ON_WM_QUERYNEWPALETTE"
  - "ON_WM_QUERYOPEN"
  - "ON_WM_RBUTTONDBLCLK"
  - "ON_WM_RBUTTONDOWN"
  - "ON_WM_RBUTTONUP"
  - "ON_WM_RENDERALLFORMATS"
  - "ON_WM_RENDERFORMAT"
  - "WM_ (messaggi)"
ms.assetid: f46962e5-8329-4f1f-9b4d-fdad2a5ce1f8
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Messaggi WM_: P - R
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le voci della mappa corrispondono ai prototipi di funzione:  
  
|Voce di mapping|Prototipo di funzione|  
|---------------------|---------------------------|  
|ON\_WM\_PAINT\(\)|afx\_msg void [OnPaint](../Topic/CWnd::OnPaint.md)\(\);|  
|ON\_WM\_PAINTCLIPBOARD\(\)|afx\_msg [OnPaintClipboard](../Topic/CWnd::OnPaintClipboard.md)void \(CWnd\*, HANDLE\);|  
|ON\_WM\_PALETTECHANGED\(\)|afx\_msg [OnPaletteChanged](../Topic/CWnd::OnPaletteChanged.md)void \(CWnd\*\);|  
|ON\_WM\_PALETTEISCHANGING\(\)|afx\_msg [OnPaletteIsChanging](../Topic/CWnd::OnPaletteIsChanging.md)void \(CWnd\*\);|  
|ON\_WM\_PARENTNOTIFY\(\)|afx\_msg [OnParentNotify](../Topic/CWnd::OnParentNotify.md)void \(UINT, LUNGHI\);|  
|ON\_WM\_POWERBROADCAST\(\)|afx\_msg UINT [OnPowerBroadcast](../Topic/CWnd::OnPowerBroadcast.md)\(UINT, UINT\);|  
|ON\_WM\_QUERYDRAGICON\(\)|afx\_msg HCURSOR [OnQueryDragIcon](../Topic/CWnd::OnQueryDragIcon.md)\(\(\)\);|  
|ON\_WM\_QUERYENDSESSION\(\)|BOOL [OnQueryEndSession](../Topic/CWnd::OnQueryEndSession.md)di afx\_msg \(\(\)\);|  
|ON\_WM\_QUERYNEWPALETTE\(\)|BOOL [OnQueryNewPalette](../Topic/CWnd::OnQueryNewPalette.md)di afx\_msg \(\(\)\);|  
|ON\_WM\_QUERYOPEN\(\)|BOOL [OnQueryOpen](../Topic/CWnd::OnQueryOpen.md)di afx\_msg \(\(\)\);|  
|ON\_WM\_RBUTTONDBLCLK\(\)|afx\_msg [OnRButtonDblClk](../Topic/CWnd::OnRButtonDblClk.md)void \(UINT, CPoint\);|  
|ON\_WM\_RBUTTONDOWN\(\)|afx\_msg [OnRButtonDown](../Topic/CWnd::OnRButtonDown.md)void \(UINT, CPoint\);|  
|ON\_WM\_RBUTTONUP\(\)|afx\_msg [OnRButtonUp](../Topic/CWnd::OnRButtonUp.md)void \(UINT, CPoint\);|  
|ON\_WM\_RENDERALLFORMATS\(\)|afx\_msg void [OnRenderAllFormats](../Topic/CWnd::OnRenderAllFormats.md)\(\);|  
|ON\_WM\_RENDERFORMAT\(\)|afx\_msg [OnRenderFormat](../Topic/CWnd::OnRenderFormat.md)UINT \(void\);|  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM\_](../../mfc/reference/handlers-for-wm-messages.md)