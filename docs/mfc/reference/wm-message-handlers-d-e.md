---
title: "Gestori di messaggi WM_: D - E | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_WM_ERASEBKGND"
  - "ON_WM_DEVICECHANGE"
  - "ON_WM_ENTERIDLE"
  - "ON_WM_DESTROYCLIPBOARD"
  - "ON_WM_DESTROY"
  - "ON_WM_DEADCHAR"
  - "ON_WM_DELETEITEM"
  - "ON_WM_DROPFILES"
  - "ON_WM_DEVMODECHANGE"
  - "ON_WM_ENDSESSION"
  - "ON_WM_ENABLE"
  - "ON_WM_DRAWITEM"
  - "ON_WM_DRAWCLIPBOARD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_DEADCHAR"
  - "ON_WM_DELETEITEM"
  - "ON_WM_DESTROY"
  - "ON_WM_DESTROYCLIPBOARD"
  - "ON_WM_DEVICECHANGE"
  - "ON_WM_DEVMODECHANGE"
  - "ON_WM_DRAWCLIPBOARD"
  - "ON_WM_DRAWITEM"
  - "ON_WM_DROPFILES"
  - "ON_WM_ENABLE"
  - "ON_WM_ENDSESSION"
  - "ON_WM_ENTERIDLE"
  - "ON_WM_ERASEBKGND"
  - "WM_ (messaggi)"
ms.assetid: 56fb89c8-68a8-4adf-883e-a9f63bf677e9
caps.latest.revision: 16
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestori di messaggi WM_: D - E
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le voci della mappa a sinistra corrispondono ai prototipi di funzione sulla destra:  
  
|Voce di mapping|Prototipo di funzione|  
|---------------------|---------------------------|  
|ON\_WM\_DEADCHAR\(\)|afx\_msg [OnDeadChar](../Topic/CWnd::OnDeadChar.md)void \(UINT, UINT, UINT\);|  
|ON\_WM\_DELETEITEM\(\)|afx\_msg [OnDeleteItem](../Topic/CWnd::OnDeleteItem.md)void \(LPDELETEITEMSTRUCT\);|  
|ON\_WM\_DESTROY\(\)|afx\_msg void [OnDestroy](../Topic/CWnd::OnDestroy.md)\(\);|  
|ON\_WM\_DESTROYCLIPBOARD\(\)|afx\_msg void [OnDestroyClipboard](../Topic/CWnd::OnDestroyClipboard.md)\(\);|  
|ON\_WM\_DEVICECHANGE\(\)|afx\_msg [OnDeviceChange](../Topic/CWnd::OnDeviceChange.md)void \(UINT, DWORD\);|  
|ON\_WM\_DEVMODECHANGE\(\)|afx\_msg [OnDevModeChange](../Topic/CWnd::OnDevModeChange.md)void \(LPSTR\);|  
|ON\_WM\_DRAWCLIPBOARD\(\)|afx\_msg void [OnDrawClipboard](../Topic/CWnd::OnDrawClipboard.md)\(\);|  
|ON\_WM\_DRAWITEM\(\)|afx\_msg [OnDrawItem](../Topic/CWnd::OnDrawItem.md)void \(LPDRAWITEMSTRUCT\);|  
|ON\_WM\_DROPFILES\(\)|afx\_msg [OnDropFiles](../Topic/CWnd::OnDropFiles.md)void \(HDROP\);|  
|ON\_WM\_DWMCOLORIZATIONCOLORCHANGED\(\)|afx\_msg [OnColorizationColorChanged](../Topic/CWnd::OnColorizationColorChanged.md)void \(DWORD, BOOL\);|  
|ON\_WM\_DWMCOMPOSITIONCHANGED\(\)|afx\_msg void [OnCompositionChanged](../Topic/CWnd::OnCompositionChanged.md)\(\);|  
|ON\_WM\_DWMNCRENDERINGCHANGED\(\)|afx\_msg [OnNcRenderingChanged](../Topic/CWnd::OnNcRenderingChanged.md)void \(BOOL\);|  
|ON\_WM\_DWMWINDOWMAXIMIZEDCHANGE\(\)|afx\_msg [OnWindowMaximizedChanged](../Topic/CWnd::OnWindowMaximizedChanged.md)void \(BOOL\);|  
|ON\_WM\_ENABLE\(\)|afx\_msg [OnEnable](../Topic/CWnd::OnEnable.md)void \(BOOL\);|  
|ON\_WM\_ENDSESSION\(\)|afx\_msg [OnEndSession](../Topic/CWnd::OnEndSession.md)void \(BOOL\);|  
|ON\_WM\_ENTERIDLE\(\)|afx\_msg [OnEnterIdle](../Topic/CWnd::OnEnterIdle.md)void \(UINT, CWnd\*\);|  
|ON\_WM\_ENTERSIZEMOVE\(\)|afx\_msg void [OnEnterSizeMove](../Topic/CWnd::OnEnterSizeMove.md)\(\);|  
|ON\_WM\_ERASEBKGND\(\)|BOOL [OnEraseBkgnd](../Topic/CWnd::OnEraseBkgnd.md)\(CDC\*\) del afx\_msg;|  
|ON\_WM\_EXITSIZEMOVE\(\)|afx\_msg void [OnExitSizeMove](../Topic/CWnd::OnExitSizeMove.md)\(\);|  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM\_](../../mfc/reference/handlers-for-wm-messages.md)