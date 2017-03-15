---
title: Classe COleResizeBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleResizeBar
dev_langs:
- C++
helpviewer_keywords:
- OLE items, resizing
- in-place items
- in-place items, resizing
- resizing in-place OLE items
- control bars, resizing
- COleResizeBar class
ms.assetid: 56a708d9-28c5-4eb0-9404-77b688d91c63
caps.latest.revision: 23
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
ms.openlocfilehash: 99ba53c771d018b8c69c5951703b9d6f7b4afe9b
ms.lasthandoff: 02/24/2017

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
|[COleResizeBar::Create](#create)|Crea e Inizializza una finestra figlio di Windows e lo associa a di `COleResizeBar` oggetto.|  
  
## <a name="remarks"></a>Note  
 `COleResizeBar`gli oggetti vengono visualizzati come un [CRectTracker](../../mfc/reference/crecttracker-class.md) con un bordo tratteggiato e outer quadratini di ridimensionamento.  
  
 `COleResizeBar`gli oggetti sono incorporati in genere membri di oggetti finestra cornice derivati dal [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md) (classe).  
  
 Per ulteriori informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `COleResizeBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="a-namecoleresizebara--coleresizebarcoleresizebar"></a><a name="coleresizebar"></a>COleResizeBar::COleResizeBar  
 Costruisce un oggetto `COleResizeBar`.  
  
```  
COleResizeBar();
```  
  
### <a name="remarks"></a>Note  
 Chiamare **crea** per creare l'oggetto barra di ridimensionamento.  
  
##  <a name="a-namecreatea--coleresizebarcreate"></a><a name="create"></a>COleResizeBar::Create  
 Crea una finestra figlio e associa il `COleResizeBar` oggetto.  
  
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
 Specifica il [stile della finestra](../../mfc/reference/window-styles.md) attributi.  
  
 `nID`  
 ID della finestra figlio della barra di ridimensionamento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra di ridimensionamento è stata creata; in caso contrario 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC SUPERPAD](../../visual-cpp-samples.md)   
 [CControlBar (classe)](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)

