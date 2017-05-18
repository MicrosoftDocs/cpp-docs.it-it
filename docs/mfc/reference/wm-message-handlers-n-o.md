---
title: 'Gestori messaggi WM _: N - O | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ON_WM_NCHITTEST
- ON_WM_NCLBUTTONDOWN
- ON_WM_NCCALCSIZE
- ON_WM_NCLBUTTONUP
- ON_WM_NCPAINT
- ON_WM_NCMBUTTONUP
- ON_WM_NCCREATE
- ON_WM_NCACTIVATE
- ON_WM_NCMOUSEMOVE
- ON_WM_NCRBUTTONDBLCLK
- ON_WM_NCLBUTTONDBLCLK
- ON_WM_NCDESTROY
- ON_WM_NCMBUTTONDBLCLK
- ON_WM_NCRBUTTONDOWN
- ON_WM_NCRBUTTONUP
- ON_WM_NCMBUTTONDOWN
dev_langs:
- C++
helpviewer_keywords:
- ON_WM_NCCALCSIZE
- ON_WM_NCMBUTTONDOWN
- ON_WM_NCRBUTTONDBLCLK
- ON_WM_NCMBUTTONDBLCLK
- ON_WM_NCLBUTTONDBLCLK
- ON_WM_NCDESTROY
- ON_WM_NCRBUTTONDOWN
- ON_WM_NCLBUTTONDOWN
- ON_WM_NCCREATE
- ON_WM_NCRBUTTONUP
- ON_WM_NCLBUTTONUP
- ON_WM_NCPAINT
- ON_WM_NCACTIVATE
- ON_WM_NCHITTEST
- ON_WM_NCMOUSEMOVE
- ON_WM_NCMBUTTONUP
- WM_ messages
ms.assetid: 4efd1cda-b642-4e8b-89e8-73255fa70d77
caps.latest.revision: 17
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
ms.openlocfilehash: f1e2a3a42c105e5f0e6d0fca714c5cd4d1216f2f
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="wm-message-handlers-n---o"></a>Gestori di messaggi WM_: N - O
Le seguenti voci della mappa a sinistra corrispondono ai prototipi di funzione a destra:  
  
|Voce della mappa|Prototipo di funzione|  
|---------------|------------------------|  
|ON_WM_NCACTIVATE()|afx_msg BOOL [OnNcActivate](../../mfc/reference/cwnd-class.md#onncactivate)(BOOL);|  
|ON_WM_NCCALCSIZE()|afx_msg void [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)(BOOL, NCCALCSIZE_PARAMS ESTREMO *);|  
|ON_WM_NCCREATE()|afx_msg BOOL [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate)(LPCREATESTRUCT);|  
|ON_WM_NCDESTROY()|afx_msg void [OnNcDestroy](../../mfc/reference/cwnd-class.md#onncdestroy)().|  
|ON_WM_NCHITTEST()|afx_msg LRESULT [OnNcHitTest](../../mfc/reference/cwnd-class.md#onnchittest)(CPoint);|  
|ON_WM_NCLBUTTONDBLCLK()|afx_msg void [OnNcLButtonDblClk](../../mfc/reference/cwnd-class.md#onnclbuttondblclk)(UINT, CPoint);|  
|ON_WM_NCLBUTTONDOWN()|afx_msg void [OnNcLButtonDown](../../mfc/reference/cwnd-class.md#onnclbuttondown)(UINT, CPoint);|  
|ON_WM_NCLBUTTONUP()|afx_msg void [OnNcLButtonUp](../../mfc/reference/cwnd-class.md#onnclbuttonup)(UINT, CPoint);|  
|ON_WM_NCMBUTTONDBLCLK()|afx_msg void [OnNcMButtonDblClk](../../mfc/reference/cwnd-class.md#onncmbuttondblclk)(UINT, CPoint);|  
|ON_WM_NCMBUTTONDOWN()|afx_msg void [OnNcMButtonDown](../../mfc/reference/cwnd-class.md#onncmbuttondown)(UINT, CPoint);|  
|ON_WM_NCMBUTTONUP()|afx_msg void [OnNcMButtonUp](../../mfc/reference/cwnd-class.md#onncmbuttonup)(UINT, CPoint);|  
|ON_WM_NCMOUSEHOVER()|afx_msg void [OnNcMouseHover](../../mfc/reference/cwnd-class.md#onncmousehover)(UINT, CPoint);|  
|ON_WM_NCMOUSELEAVE()|afx_msg void [OnNcMouseLeave](../../mfc/reference/cwnd-class.md#onncmouseleave)().|  
|ON_WM_NCMOUSEMOVE()|afx_msg void [OnNcMouseMove](../../mfc/reference/cwnd-class.md#onncmousemove)(UINT, CPoint);|  
|ON_WM_NCPAINT()|afx_msg void [OnNcPaint](../../mfc/reference/cwnd-class.md#onncpaint)().|  
|ON_WM_NCRBUTTONDBLCLK()|afx_msg void [OnNcRButtonDblClk](../../mfc/reference/cwnd-class.md#onncrbuttondblclk)(UINT, CPoint);|  
|ON_WM_NCRBUTTONDOWN()|afx_msg void [OnNcRButtonDown](../../mfc/reference/cwnd-class.md#onncrbuttondown)(UINT, CPoint);|  
|ON_WM_NCRBUTTONUP()|afx_msg void [OnNcRButtonUp](../../mfc/reference/cwnd-class.md#onncrbuttonup)(UINT, CPoint);|  
|ON_WM_NCXBUTTONDBLCLK()|void [OnNcXButtonDblClk](../../mfc/reference/cwnd-class.md#onncxbuttondblclk)(short, UINT, CPoint);|  
|ON_WM_NCXBUTTONDOWN()|afx_msg void [OnNcXButtonDown](../../mfc/reference/cwnd-class.md#onncxbuttondown)(short, UINT, CPoint);|  
|ON_WM_NCXBUTTONUP()|afx_msg void [OnNcXButtonUp](../../mfc/reference/cwnd-class.md#onncxbuttonup)(short, UINT, CPoint);|  
|ON_WM_NEXTMENU()|afx_msg void [OnNextMenu](../../mfc/reference/cwnd-class.md#onnextmenu)(UINT, LPMDINEXTMENU);|  
|ON_WM_NOTIFYFORMAT()|afx_msg UINT [OnNotifyFormat](../../mfc/reference/cwnd-class.md#onnotifyformat)(CWnd *, UINT);|  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM _](../../mfc/reference/handlers-for-wm-messages.md)


