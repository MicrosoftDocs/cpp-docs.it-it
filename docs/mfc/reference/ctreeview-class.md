---
title: CTreeView (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CTreeView
- AFXCVIEW/CTreeView
- AFXCVIEW/CTreeView::CTreeView
- AFXCVIEW/CTreeView::GetTreeCtrl
dev_langs: C++
helpviewer_keywords:
- CTreeView [MFC], CTreeView
- CTreeView [MFC], GetTreeCtrl
ms.assetid: 5df583a6-d69f-42ca-9d8d-57e04558afff
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7530569d5e5313ebfcbdaf92ebd245962b9e443c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ctreeview-class"></a>CTreeView (classe)
Semplifica l'utilizzo del controllo struttura ad albero e di [CTreeCtrl](../../mfc/reference/ctreectrl-class.md), la classe che incapsula la funzionalità di controllo di struttura ad albero, con l'architettura documento / visualizzazione MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CTreeView : public CCtrlView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTreeView::CTreeView](#ctreeview)|Costruisce un oggetto `CTreeView`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTreeView:: GetTreeCtrl](#gettreectrl)|Restituisce il controllo struttura ad albero associato alla visualizzazione.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni su questa architettura, vedere la panoramica per il [CView](../../mfc/reference/cview-class.md) classe e i riferimenti incrociati citati non esiste.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CTreeView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcview.h  
  
##  <a name="ctreeview"></a>CTreeView::CTreeView  
 Costruisce un oggetto `CTreeView`.  
  
```  
CTreeView();
```  
  
##  <a name="gettreectrl"></a>CTreeView:: GetTreeCtrl  
 Restituisce un riferimento al controllo struttura ad albero è associato alla visualizzazione.  
  
```  
CTreeCtrl& GetTreeCtrl() const;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCtrlView](../../mfc/reference/cctrlview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [Classe CCtrlView](../../mfc/reference/cctrlview-class.md)   
 [Classe CTreeCtrl](../../mfc/reference/ctreectrl-class.md)
