---
title: 'Gestori messaggi WM _: F - K | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ON_WM_FONTCHANGE
- ON_WM_ICONERASEBKGND
- ON_WM_KEYDOWN
- ON_WM_GETMINMAXINFO
- ON_WM_KEYUP
- ON_WM_HSCROLL
- ON_WM_KILLFOCUS
- ON_WM_HSCROLLCLIPBOARD
- ON_WM_GETDLGCODE
- ON_WM_HELPINFO
- ON_WM_INITMENUPOPUP
- ON_WM_INITMENU
dev_langs:
- C++
helpviewer_keywords:
- ON_WM_HELPINFO
- ON_WM_KILLFOCUS
- ON_WM_GETMINMAXINFO
- ON_WM_KEYUP
- ON_WM_HSCROLL
- ON_WM_INITMENUPOPUP
- ON_WM_FONTCHANGE
- ON_WM_ICONERASEBKGND
- ON_WM_GETDLGCODE
- ON_WM_HSCROLLCLIPBOARD
- ON_WM_INITMENU
- WM_ messages
- ON_WM_KEYDOWN
ms.assetid: 0e7de191-1499-499f-859c-62742797808e
caps.latest.revision: 15
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 7f803a7e73491abfabf9dba19288dcb44d1b68d7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="wm-message-handlers-f---k"></a>WM_ Message Handlers: F - K
Le seguenti voci della mappa a sinistra corrispondono ai prototipi di funzione a destra:  
  
|Voce della mappa|Prototipo di funzione|  
|---------------|------------------------|  
|ON_WM_FONTCHANGE()|afx_msg void [OnFontChange](../../mfc/reference/cwnd-class.md#onfontchange)().|  
|ON_WM_GETDLGCODE()|afx_msg UINT [OnGetDlgCode](../../mfc/reference/cwnd-class.md#ongetdlgcode)().|  
|ON_WM_GETMINMAXINFO()|afx_msg void [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo)(LPPOINT);|  
|ON_WM_HELPINFO()|afx_msg BOOL [OnHelpInfo](../../mfc/reference/cwnd-class.md#onhelpinfo)(HELPINFO *);|  
|ON_WM_HOTKEY()|afx_msg void [OnHotKey](../../mfc/reference/cwnd-class.md#onhotkey)(UINT, UINT, UINT);|  
|ON_WM_HSCROLL()|afx_msg void [OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll)(UINT, UINT, CWnd *);|  
|ON_WM_HSCROLLCLIPBOARD()|afx_msg void [OnHScrollClipboard](../../mfc/reference/cwnd-class.md#onhscrollclipboard)(CWnd *, UINT, UINT);|  
|ON_WM_ICONERASEBKGND()|afx_msg void [OnIconEraseBkgnd](../../mfc/reference/cwnd-class.md#oniconerasebkgnd)(CDC *);|  
|ON_WM_INITMENU()|afx_msg void [OnInitMenu](../../mfc/reference/cwnd-class.md#oninitmenu)(CMenu *);|  
|ON_WM_INITMENUPOPUP()|afx_msg void [OnInitMenuPopup](../../mfc/reference/cwnd-class.md#oninitmenupopup)(CMenu *, UINT, BOOL);|  
|ON_WM_INPUT()|afx_msg void [OnRawInput](../../mfc/reference/cwnd-class.md#onrawinput)(UINT, HRAWINPUT);|  
|ON_WM_INPUT_DEVICE_CHANGE()|afx_msg void [OnInputDeviceChange](../../mfc/reference/cwnd-class.md#oninputdevicechange)(unsigned short);|  
|ON_WM_INPUTLANGCHANGE()|afx_msg void [OnInputLangChange](../../mfc/reference/cwnd-class.md#oninputlangchange)(BYTE, UINT);|  
|ON_WM_INPUTLANGCHANGEREQUEST()|afx_msg void [OnInputLangChangeRequest](../../mfc/reference/cwnd-class.md#oninputlangchangerequest)(UINT, HKL);|  
|ON_WM_KEYDOWN()|afx_msg void [OnKeyDown](../../mfc/reference/cwnd-class.md#onkeydown)(UINT, UINT, UINT);|  
|ON_WM_KEYUP()|afx_msg void [su tasto su](../../mfc/reference/cwnd-class.md#onkeyup)(UINT, UINT, UINT);|  
|ON_WM_KILLFOCUS()|afx_msg void [OnKillFocus](../../mfc/reference/cwnd-class.md#onkillfocus)(CWnd *);|  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM _](../../mfc/reference/handlers-for-wm-messages.md)


