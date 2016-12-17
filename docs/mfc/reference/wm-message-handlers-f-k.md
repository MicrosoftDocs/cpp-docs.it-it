---
title: "WM_ Message Handlers: F - K | Microsoft Docs"
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
  - "ON_WM_FONTCHANGE"
  - "ON_WM_ICONERASEBKGND"
  - "ON_WM_KEYDOWN"
  - "ON_WM_GETMINMAXINFO"
  - "ON_WM_KEYUP"
  - "ON_WM_HSCROLL"
  - "ON_WM_KILLFOCUS"
  - "ON_WM_HSCROLLCLIPBOARD"
  - "ON_WM_GETDLGCODE"
  - "ON_WM_HELPINFO"
  - "ON_WM_INITMENUPOPUP"
  - "ON_WM_INITMENU"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_FONTCHANGE"
  - "ON_WM_GETDLGCODE"
  - "ON_WM_GETMINMAXINFO"
  - "ON_WM_HELPINFO"
  - "ON_WM_HSCROLL"
  - "ON_WM_HSCROLLCLIPBOARD"
  - "ON_WM_ICONERASEBKGND"
  - "ON_WM_INITMENU"
  - "ON_WM_INITMENUPOPUP"
  - "ON_WM_KEYDOWN"
  - "ON_WM_KEYUP"
  - "ON_WM_KILLFOCUS"
  - "WM_ (messaggi)"
ms.assetid: 0e7de191-1499-499f-859c-62742797808e
caps.latest.revision: 15
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# WM_ Message Handlers: F - K
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le seguenti voci della mappa sulla sinistra corrispondono ai prototipi di funzione sulla destra:  
  
|Voce della mappa|Prototipo di funzione|  
|----------------------|---------------------------|  
|ON\_WM\_FONTCHANGE\(\)|afx\_msg void [OnFontChange](../Topic/CWnd::OnFontChange.md)\(\);|  
|ON\_WM\_GETDLGCODE\(\)|afx\_msg UINT [OnGetDlgCode](../Topic/CWnd::OnGetDlgCode.md)\(\);|  
|ON\_WM\_GETMINMAXINFO\(\)|afx\_msg void [OnGetMinMaxInfo](../Topic/CWnd::OnGetMinMaxInfo.md)\(LPPOINT\);|  
|ON\_WM\_HELPINFO\(\)|afx\_msg BOOL [OnHelpInfo](../Topic/CWnd::OnHelpInfo.md)\(HELPINFO\*\);|  
|ON\_WM\_HOTKEY\(\)|afx\_msg void [OnHotKey](../Topic/CWnd::OnHotKey.md)\(UINT, UINT, UINT\);|  
|ON\_WM\_HSCROLL\(\)|afx\_msg void [OnHScroll](../Topic/CWnd::OnHScroll.md)\(UINT, UINT, CWnd\*\);|  
|ON\_WM\_HSCROLLCLIPBOARD\(\)|afx\_msg void [OnHScrollClipboard](../Topic/CWnd::OnHScrollClipboard.md)\(CWnd\*, UINT, UINT\);|  
|ON\_WM\_ICONERASEBKGND\(\)|afx\_msg void [OnIconEraseBkgnd](../Topic/CWnd::OnIconEraseBkgnd.md)\(CDC\*\);|  
|ON\_WM\_INITMENU\(\)|afx\_msg void [OnInitMenu](../Topic/CWnd::OnInitMenu.md)\(CMenu\*\);|  
|ON\_WM\_INITMENUPOPUP\(\)|afx\_msg void [OnInitMenuPopup](../Topic/CWnd::OnInitMenuPopup.md)\(CMenu\*, UINT, BOOL\);|  
|ON\_WM\_INPUT\(\)|afx\_msg void [OnRawInput](../Topic/CWnd::OnRawInput.md)\(UINT, HRAWINPUT\);|  
|ON\_WM\_INPUT\_DEVICE\_CHANGE\(\)|afx\_msg void [OnInputDeviceChange](../Topic/CWnd::OnInputDeviceChange.md)\(unsigned short\);|  
|ON\_WM\_INPUTLANGCHANGE\(\)|afx\_msg void [OnInputLangChange](../Topic/CWnd::OnInputLangChange.md)\(BYTE, UINT\);|  
|ON\_WM\_INPUTLANGCHANGEREQUEST\(\)|afx\_msg void [OnInputLangChangeRequest](../Topic/CWnd::OnInputLangChangeRequest.md)\(UINT, HKL\);|  
|ON\_WM\_KEYDOWN\(\)|afx\_msg void [OnKeyDown](../Topic/CWnd::OnKeyDown.md)\(UINT, UINT, UINT\);|  
|ON\_WM\_KEYUP\(\)|afx\_msg void [OnKeyUp](../Topic/CWnd::OnKeyUp.md)\(UINT, UINT, UINT\);|  
|ON\_WM\_KILLFOCUS\(\)|afx\_msg void [OnKillFocus](../Topic/CWnd::OnKillFocus.md)\(CWnd\*\);|  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM\_](../../mfc/reference/handlers-for-wm-messages.md)