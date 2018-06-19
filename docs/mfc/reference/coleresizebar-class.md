---
title: Classe COleResizeBar | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleResizeBar
- AFXOLE/COleResizeBar
- AFXOLE/COleResizeBar::COleResizeBar
- AFXOLE/COleResizeBar::Create
dev_langs:
- C++
helpviewer_keywords:
- COleResizeBar [MFC], COleResizeBar
- COleResizeBar [MFC], Create
ms.assetid: 56a708d9-28c5-4eb0-9404-77b688d91c63
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cf000b45e2bd24ec40e1ae15001c3df46d1b12c9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33375616"
---
# <a name="coleresizebar-class"></a>Classe COleResizeBar
Tipo di barra di controllo che supporta il ridimensionamento di elementi OLE sul posto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleResizeBar : public CControlBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleResizeBar::COleResizeBar](#coleresizebar)|Costruisce un oggetto `COleResizeBar`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleResizeBar::Create](#create)|Crea e Inizializza una finestra figlio di Windows e la associa al `COleResizeBar` oggetto.|  
  
## <a name="remarks"></a>Note  
 `COleResizeBar` gli oggetti vengono visualizzati come un [CRectTracker](../../mfc/reference/crecttracker-class.md) con un bordo tratteggiato e outer quadratini di ridimensionamento.  
  
 `COleResizeBar` gli oggetti sono in genere incorporati membri della finestra cornice oggetti derivati dal [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md) classe.  
  
 Per ulteriori informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `COleResizeBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="coleresizebar"></a>  COleResizeBar::COleResizeBar  
 Costruisce un oggetto `COleResizeBar`.  
  
```  
COleResizeBar();
```  
  
### <a name="remarks"></a>Note  
 Chiamare **crea** per creare l'oggetto barra di ridimensionamento.  
  
##  <a name="create"></a>  COleResizeBar::Create  
 Crea una finestra figlio e la associa il `COleResizeBar` oggetto.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE,  
    UINT nID = AFX_IDW_RESIZE_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore alla finestra padre della barra di ridimensionamento.  
  
 `dwStyle`  
 Specifica il [stile della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) attributi.  
  
 `nID`  
 ID di finestra figlio della barra di ridimensionamento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra di ridimensionamento è stata creata; in caso contrario 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC SUPERPAD](../../visual-cpp-samples.md)   
 [CControlBar (classe)](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)
