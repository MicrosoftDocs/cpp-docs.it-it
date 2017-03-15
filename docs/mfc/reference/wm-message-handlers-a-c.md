---
title: 'Gestori messaggi WM _: A - C | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ON_WM_CREATE
- ON_WM_COMPACTING
- ON_WM_CHARTOITEM
- ON_WM_ASKCBFORMATNAME
- ON_WM_CTLCOLOR
- ON_WM_COMPAREITEM
- ON_WM_CHILDACTIVATE
- ON_WM_CONTEXTMENU
- ON_WM_ACTIVATE
- ON_WM_CANCELMODE
- ON_WM_CLOSE
- ON_WM_CAPTURECHANGED
- ON_WM_ACTIVATEAPP
- ON_WM_CHAR
- ON_WM_CHANGECBCHAIN
dev_langs:
- C++
helpviewer_keywords:
- ON_WM_COMPACTING
- ON_WM_COMPAREITEM
- ON_WM_CLOSE
- ON_WM_CTLCOLOR
- ON_WM_CHAR
- ON_WM_CAPTURECHANGED
- ON_WM_CHARTOITEM
- ON_WM_CREATE
- ON_WM_ACTIVATE
- ON_WM_CONTEXTMENU
- ON_WM_CANCELMODE
- ON_WM_ASKCBFORMATNAME
- ON_WM_CHILDACTIVATE
- WM_ messages
- ON_WM_ACTIVATEAPP
- ON_WM_CHANGECBCHAIN
ms.assetid: 4e315896-d646-4b87-b0ab-41a4a753b045
caps.latest.revision: 16
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
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 4b8a6b0527758e8eff8f2ab3ece4a69927176e2c
ms.lasthandoff: 02/24/2017

---
# <a name="wm-message-handlers-a---c"></a>Gestori di messaggi WM_: A - C
Le seguenti voci della mappa a sinistra corrispondono ai prototipi di funzione a destra:  
  
|Voce della mappa|Prototipo di funzione|  
|---------------|------------------------|  
|ON_WM_ACTIVATE()|afx_msg void [OnActivate](../../mfc/reference/cwnd-class.md#onactivate)(UINT, CWnd *, BOOL);|  
|ON_WM_ACTIVATEAPP()|afx_msg void [OnActivateApp](../../mfc/reference/cwnd-class.md#onactivateapp)(BOOL, DWORD);|  
|ON_WM_APPCOMMAND()|afx_msg void [OnAppCommand](../../mfc/reference/cwnd-class.md#onappcommand)(CWnd *, UINT, UINT, UINT);|  
|ON_WM_ASKCBFORMATNAME()|afx_msg void [OnAskCbFormatName](../../mfc/reference/cwnd-class.md#onaskcbformatname)(UINT, LPSTR);|  
|ON_WM_CANCELMODE()|afx_msg void [OnCancelMode](../../mfc/reference/cwnd-class.md#oncancelmode)().|  
|ON_WM_CAPTURECHANGED()|afx_msg void [OnCaptureChanged](../../mfc/reference/cwnd-class.md#oncapturechanged)(CWnd *);|  
|ON_WM_CHANGECBCHAIN()|afx_msg void [OnChangeCbChain](../../mfc/reference/cwnd-class.md#onchangecbchain)(HWND, HWND);|  
|ON_WM_CHAR()|afx_msg void [OnChar](../../mfc/reference/cwnd-class.md#onchar)(UINT, UINT, UINT);|  
|ON_WM_CHARTOITEM()|int afx_msg [OnCharToItem](../../mfc/reference/cwnd-class.md#onchartoitem)(UINT CWnd *, UINT);|  
|ON_WM_CHILDACTIVATE()|afx_msg void [OnChildActivate](../../mfc/reference/cwnd-class.md#onchildactivate)().|  
|ON_WM_CLIPBOARDUPDATE()|afx_msg void [OnClipboardUpdate](../../mfc/reference/cwnd-class.md#onclipboardupdate)().|  
|ON_WM_CLOSE()|afx_msg void [OnClose](../../mfc/reference/cwnd-class.md#onclose)().|  
|ON_WM_COMPACTING()|afx_msg void [OnCompacting](../../mfc/reference/cwnd-class.md#oncompacting)(UINT);|  
|ON_WM_COMPAREITEM()|int afx_msg [OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem)(LPCOMPAREITEMSTRUCT);|  
|ON_WM_CONTEXTMENU()|afx_msg void [OnContextMenu](../../mfc/reference/cwnd-class.md#oncontextmenu)(CWnd *, CPoint);|  
|ON_WM_COPYDATA()|afx_msg BOOL [OnCopyData](../../mfc/reference/cwnd-class.md#oncopydata)(CWnd * pWnd, COPYDATASTRUCT\* pCopyDataStruct);|  
|ON_WM_CREATE()|int afx_msg [OnCreate](../../mfc/reference/cwnd-class.md#oncreate)(LPCREATESTRUCT);|  
|ON_WM_CTLCOLOR()|HBRUSH afx_msg [OnCtlColor](../../mfc/reference/cwnd-class.md#onctlcolor)(CDC *, CWnd\*, UINT);|  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM _](../../mfc/reference/handlers-for-wm-messages.md)


