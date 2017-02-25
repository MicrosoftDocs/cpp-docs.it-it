---
title: "Gestori messaggi WM_: L - M | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_WM_MENUSELECT"
  - "ON_WM_MBUTTONDBLCLK"
  - "ON_WM_MOUSEACTIVATE"
  - "ON_WM_MOUSEMOVE"
  - "ON_WM_MOVING"
  - "ON_WM_LBUTTONUP"
  - "ON_WM_LBUTTONDBLCLK"
  - "ON_WM_MEASUREITEM"
  - "ON_WM_MDIACTIVATE"
  - "ON_WM_MOVE"
  - "ON_WM_LBUTTONDOWN"
  - "ON_WM_MBUTTONDOWN"
  - "ON_WM_MENUCHAR"
  - "ON_WM_MBUTTONUP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_LBUTTONDBLCLK"
  - "ON_WM_LBUTTONDOWN"
  - "ON_WM_LBUTTONUP"
  - "ON_WM_MBUTTONDBLCLK"
  - "ON_WM_MBUTTONDOWN"
  - "ON_WM_MBUTTONUP"
  - "ON_WM_MDIACTIVATE"
  - "ON_WM_MEASUREITEM"
  - "ON_WM_MENUCHAR"
  - "ON_WM_MENUSELECT"
  - "ON_WM_MOUSEACTIVATE"
  - "ON_WM_MOUSEMOVE"
  - "ON_WM_MOVE"
  - "ON_WM_MOVING"
  - "WM_ (messaggi)"
ms.assetid: 96ecaaf1-6d13-4e12-a454-535635967489
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Gestori messaggi WM_: L - M
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le voci della mappa a sinistra corrispondono ai prototipi di funzione sulla destra:  
  
|Voce di mapping|Prototipo di funzione|  
|---------------------|---------------------------|  
|ON\_WM\_LBUTTONDBLCLK\(\)|afx\_msg [OnLButtonDblClk](../Topic/CWnd::OnLButtonDblClk.md)void \(UINT, CPoint\);|  
|ON\_WM\_LBUTTONDOWN\(\)|afx\_msg [OnLButtonDown](../Topic/CWnd::OnLButtonDown.md)void \(UINT, CPoint\);|  
|ON\_WM\_LBUTTONUP\(\)|afx\_msg [OnLButtonUp](../Topic/CWnd::OnLButtonUp.md)void \(UINT, CPoint\);|  
|ON\_WM\_MBUTTONDBLCLK\(\)|afx\_msg [OnMButtonDblClk](../Topic/CWnd::OnMButtonDblClk.md)void \(UINT, CPoint\);|  
|ON\_WM\_MBUTTONDOWN\(\)|afx\_msg [OnMButtonDown](../Topic/CWnd::OnMButtonDown.md)void \(UINT, CPoint\);|  
|ON\_WM\_MBUTTONUP\(\)|afx\_msg [OnMButtonUp](../Topic/CWnd::OnMButtonUp.md)void \(UINT, CPoint\);|  
|ON\_WM\_MDIACTIVATE\(\)|afx\_msg [OnMDIActivate](../Topic/CWnd::OnMDIActivate.md)void \(BOOL, CWnd\*, CWnd\*\);|  
|ON\_WM\_MEASUREITEM\(\)|afx\_msg [OnMeasureItem](../Topic/CWnd::OnMeasureItem.md)void \(LPMEASUREITEMSTRUCT\);|  
|ON\_WM\_MENUCHAR\(\)|afx\_msg [OnMenuChar](../Topic/CWnd::OnMenuChar.md)LONG \(UINT, UINT, CMenu\*\);|  
|ON\_WM\_MENUDRAG\(\)|afx\_msg UINT [OnMenuDrag](../Topic/CWnd::OnMenuDrag.md)\(UINT, CMenu\*\);|  
|ON\_WM\_MENUGETOBJECT\(\)|afx\_msg UINT [OnMenuGetObject](../Topic/CWnd::OnMenuGetObject.md)\(MENUGETOBJECTINFO\*\);|  
|ON\_WM\_MENURBUTTONUP\(\)|afx\_msg [OnMenuRButtonUp](../Topic/CWnd::OnMenuRButtonUp.md)void \(UINT, CMenu\*\);|  
|ON\_WM\_MENUSELECT\(\)|afx\_msg [OnMenuSelect](../Topic/CWnd::OnMenuSelect.md)void \(UINT, UINT, HMENU\);|  
|ON\_WM\_MOUSEACTIVATE\(\)|afx\_msg int [OnMouseActivate](../Topic/CWnd::OnMouseActivate.md)\(CWnd\*, UINT, UINT\);|  
|ON\_WM\_MOUSEHOVER\(\)|afx\_msg [OnMouseHover](../Topic/CWnd::OnMouseHover.md)void \(UINT, CPoint\);|  
|ON\_WM\_MOUSEHWHEEL\(\)|afx\_msg [OnMouseHWheel](../Topic/CWnd::OnMouseHWheel.md)void \(UINT, short, CPoint\);|  
|ON\_WM\_MOUSELEAVE\(\)|afx\_msg void [OnMouseLeave](../Topic/CWnd::OnMouseLeave.md)\(\);|  
|ON\_WM\_MOUSEMOVE\(\)|afx\_msg [OnMouseMove](../Topic/CWnd::OnMouseMove.md)void \(UINT, CPoint\);|  
|ON\_WM\_MOUSEWHEEL\(\)|BOOL [OnMouseWheel](../Topic/CWnd::OnMouseWheel.md)\(UINT, short, CPoint\) del afx\_msg;|  
|ON\_WM\_MOVE\(\)|afx\_msg [OnMove](../Topic/CWnd::OnMove.md)void \(int, int\);|  
|ON\_WM\_MOVING\(\)|afx\_msg [OnMoving](../Topic/CWnd::OnMoving.md)void \(UINT, LPRECT\);|  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM\_](../../mfc/reference/handlers-for-wm-messages.md)