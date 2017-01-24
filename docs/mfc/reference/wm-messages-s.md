---
title: "Messaggi WM_: S | Microsoft Docs"
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
  - "ON_WM_SYSDEADCHAR"
  - "ON_WM_SYSKEYDOWN"
  - "ON_WM_STYLECHANGING"
  - "ON_WM_STYLECHANGED"
  - "ON_WM_SPOOLERSTATUS"
  - "ON_WM_SYSCHAR"
  - "ON_WM_SETFOCUS"
  - "ON_WM_SIZE"
  - "ON_WM_SIZING"
  - "ON_WM_SETCURSOR"
  - "ON_WM_SYSCOMMAND"
  - "ON_WM_SETTINGCHANGE"
  - "ON_WM_SHOWWINDOW"
  - "ON_WM_SYSKEYUP"
  - "ON_WM_SIZECLIPBOARD"
  - "ON_WM_SYSCOLORCHANGE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_SETCURSOR"
  - "ON_WM_SETFOCUS"
  - "ON_WM_SETTINGCHANGE"
  - "ON_WM_SHOWWINDOW"
  - "ON_WM_SIZE"
  - "ON_WM_SIZECLIPBOARD"
  - "ON_WM_SIZING"
  - "ON_WM_SPOOLERSTATUS"
  - "ON_WM_STYLECHANGED"
  - "ON_WM_STYLECHANGING"
  - "ON_WM_SYSCHAR"
  - "ON_WM_SYSCOLORCHANGE"
  - "ON_WM_SYSCOMMAND"
  - "ON_WM_SYSDEADCHAR"
  - "ON_WM_SYSKEYDOWN"
  - "ON_WM_SYSKEYUP"
  - "WM_ (messaggi)"
ms.assetid: 4b9aec79-a98f-4aa0-a3d9-110941b6dcbc
caps.latest.revision: 14
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Messaggi WM_: S
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le voci della mappa corrispondono ai prototipi di funzione.  
  
|Voce di mapping|Prototipo di funzione|  
|---------------------|---------------------------|  
|ON\_WM\_SETCURSOR\( \)|BOOL [OnSetCursor](../Topic/CWnd::OnSetCursor.md)\(CWnd\*, UINT, UINT\) del afx\_msg;|  
|ON\_WM\_SETFOCUS\( \)|afx\_msg [OnSetFocus](../Topic/CWnd::OnSetFocus.md)void \(CWnd\*\);|  
|ON\_WM\_SETTINGCHANGE\( \)|afx\_msg [OnSettingChange](../Topic/CWnd::OnSettingChange.md)void \(uFlags UINT, lpszSection di LPCTSTR\);|  
|ON\_WM\_SHOWWINDOW\( \)|afx\_msg [OnShowWindow](../Topic/CWnd::OnShowWindow.md)void \(BOOL, UINT\);|  
|ON\_WM\_SIZE\( \)|afx\_msg [OnSize](../Topic/CWnd::OnSize.md)void \(UINT, int, int\);|  
|ON\_WM\_SIZECLIPBOARD\( \)|afx\_msg [OnSizeClipboard](../Topic/CWnd::OnSizeClipboard.md)void \(CWnd\*, HANDLE\);|  
|ON\_WM\_SIZING\( \)|afx\_msg [OnSizing](../Topic/CWnd::OnSizing.md)void \(UINT, LPRECT\);|  
|ON\_WM\_SPOOLERSTATUS\( \)|afx\_msg [OnSpoolerStatus](../Topic/CWnd::OnSpoolerStatus.md)void \(UINT, UINT\);|  
|ON\_WM\_STYLECHANGED\( \)|afx\_msg [OnStyleChanged](../Topic/CWnd::OnStyleChanged.md)void \(int, LPSTYLESTRUCT\);|  
|ON\_WM\_STYLECHANGING\( \)|afx\_msg [OnStyleChanging](../Topic/CWnd::OnStyleChanging.md)void \(int, LPSTYLESTRUCT\);|  
|ON\_WM\_SYSCHAR\( \)|afx\_msg [OnSysChar](../Topic/CWnd::OnSysChar.md)void \(UINT, UINT, UINT\);|  
|ON\_WM\_SYSCOLORCHANGE\( \)|afx\_msg void [OnSysColorChange](../Topic/CWnd::OnSysColorChange.md)\(\);|  
|ON\_WM\_SYSCOMMAND\( \)|afx\_msg [OnSysCommand](../Topic/CWnd::OnSysCommand.md)void \(UINT, LUNGHI\);|  
|ON\_WM\_SYSDEADCHAR\( \)|afx\_msg [OnSysDeadChar](../Topic/CWnd::OnSysDeadChar.md)void \(UINT, UINT, UINT\);|  
|ON\_WM\_SYSKEYDOWN\( \)|afx\_msg [OnSysKeyDown](../Topic/CWnd::OnSysKeyDown.md)void \(UINT, UINT, UINT\);|  
|ON\_WM\_SYSKEYUP\( \)|afx\_msg [OnSysKeyUp](../Topic/CWnd::OnSysKeyUp.md)void \(UINT, UINT, UINT\);|  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM\_](../../mfc/reference/handlers-for-wm-messages.md)