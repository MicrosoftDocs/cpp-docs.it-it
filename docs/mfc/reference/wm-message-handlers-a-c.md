---
title: "Gestori di messaggi WM_: A - C | Microsoft Docs"
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
  - "ON_WM_CREATE"
  - "ON_WM_COMPACTING"
  - "ON_WM_CHARTOITEM"
  - "ON_WM_ASKCBFORMATNAME"
  - "ON_WM_CTLCOLOR"
  - "ON_WM_COMPAREITEM"
  - "ON_WM_CHILDACTIVATE"
  - "ON_WM_CONTEXTMENU"
  - "ON_WM_ACTIVATE"
  - "ON_WM_CANCELMODE"
  - "ON_WM_CLOSE"
  - "ON_WM_CAPTURECHANGED"
  - "ON_WM_ACTIVATEAPP"
  - "ON_WM_CHAR"
  - "ON_WM_CHANGECBCHAIN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_ACTIVATE"
  - "ON_WM_ACTIVATEAPP"
  - "ON_WM_ASKCBFORMATNAME"
  - "ON_WM_CANCELMODE"
  - "ON_WM_CAPTURECHANGED"
  - "ON_WM_CHANGECBCHAIN"
  - "ON_WM_CHAR"
  - "ON_WM_CHARTOITEM"
  - "ON_WM_CHILDACTIVATE"
  - "ON_WM_CLOSE"
  - "ON_WM_COMPACTING"
  - "ON_WM_COMPAREITEM"
  - "ON_WM_CONTEXTMENU"
  - "ON_WM_CREATE"
  - "ON_WM_CTLCOLOR"
  - "WM_ (messaggi)"
ms.assetid: 4e315896-d646-4b87-b0ab-41a4a753b045
caps.latest.revision: 16
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestori di messaggi WM_: A - C
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le voci della mappa a sinistra corrispondono ai prototipi di funzione sulla destra:  
  
|Voce di mapping|Prototipo di funzione|  
|---------------------|---------------------------|  
|ON\_WM\_ACTIVATE\(\)|afx\_msg [OnActivate](../Topic/CWnd::OnActivate.md)void \(UINT, CWnd\*, BOOL\);|  
|ON\_WM\_ACTIVATEAPP\(\)|afx\_msg [OnActivateApp](../Topic/CWnd::OnActivateApp.md)void \(BOOL, DWORD\);|  
|ON\_WM\_APPCOMMAND\(\)|afx\_msg [OnAppCommand](../Topic/CWnd::OnAppCommand.md)void \(CWnd\*, UINT, UINT, UINT\);|  
|ON\_WM\_ASKCBFORMATNAME\(\)|afx\_msg [OnAskCbFormatName](../Topic/CWnd::OnAskCbFormatName.md)void \(UINT, LPSTR\);|  
|ON\_WM\_CANCELMODE\(\)|afx\_msg void [OnCancelMode](../Topic/CWnd::OnCancelMode.md)\(\);|  
|ON\_WM\_CAPTURECHANGED\(\)|afx\_msg [OnCaptureChanged](../Topic/CWnd::OnCaptureChanged.md)void \(CWnd\*\);|  
|ON\_WM\_CHANGECBCHAIN\(\)|afx\_msg [OnChangeCbChain](../Topic/CWnd::OnChangeCbChain.md)void \(HWND, HWND\);|  
|ON\_WM\_CHAR\(\)|afx\_msg [OnChar](../Topic/CWnd::OnChar.md)void \(UINT, UINT, UINT\);|  
|ON\_WM\_CHARTOITEM\(\)|afx\_msg int [OnCharToItem](../Topic/CWnd::OnCharToItem.md)\(UINT, CWnd\*, UINT\);|  
|ON\_WM\_CHILDACTIVATE\(\)|afx\_msg void [OnChildActivate](../Topic/CWnd::OnChildActivate.md)\(\);|  
|ON\_WM\_CLIPBOARDUPDATE\(\)|afx\_msg void [OnClipboardUpdate](../Topic/CWnd::OnClipboardUpdate.md)\(\);|  
|ON\_WM\_CLOSE\(\)|afx\_msg void [OnClose](../Topic/CWnd::OnClose.md)\(\);|  
|ON\_WM\_COMPACTING\(\)|afx\_msg [OnCompacting](../Topic/CWnd::OnCompacting.md)UINT \(void\);|  
|ON\_WM\_COMPAREITEM\(\)|afx\_msg int [OnCompareItem](../Topic/CWnd::OnCompareItem.md)\(LPCOMPAREITEMSTRUCT\);|  
|ON\_WM\_CONTEXTMENU\(\)|afx\_msg [OnContextMenu](../Topic/CWnd::OnContextMenu.md)void \(CWnd\*, CPoint\);|  
|ON\_WM\_COPYDATA\(\)|BOOL [OnCopyData](../Topic/CWnd::OnCopyData.md)\(pWnd di afx\_msg di CWnd\*, pCopyDataStruct di COPYDATASTRUCT\*\);|  
|ON\_WM\_CREATE\(\)|afx\_msg int [OnCreate](../Topic/CWnd::OnCreate.md)\(LPCREATESTRUCT\);|  
|ON\_WM\_CTLCOLOR\(\)|afx\_msg HBRUSH [OnCtlColor](../Topic/CWnd::OnCtlColor.md)\(CDC\*, CWnd\*, UINT\);|  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM\_](../../mfc/reference/handlers-for-wm-messages.md)