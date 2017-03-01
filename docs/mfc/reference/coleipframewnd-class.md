---
title: Classe COleIPFrameWnd | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleIPFrameWnd
dev_langs:
- C++
helpviewer_keywords:
- COleIPFrameWnd class
- OLE, editing
- OLE, in-place activation
- in-place editing
ms.assetid: 24abb2cb-826c-4dda-a287-d8a8900a5763
caps.latest.revision: 24
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
ms.openlocfilehash: 85ce028bb5d72c06a0e228abba1bd08a7f6526cb
ms.lasthandoff: 02/24/2017

---
# <a name="coleipframewnd-class"></a>Classe COleIPFrameWnd
Base per la finestra di modifica sul posto dell'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleIPFrameWnd : public CFrameWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleIPFrameWnd::COleIPFrameWnd](#coleipframewnd)|Costruisce un oggetto `COleIPFrameWnd`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleIPFrameWnd::OnCreateControlBars](#oncreatecontrolbars)|Chiamato dal framework quando un elemento viene attivato per la modifica sul posto.|  
|[COleIPFrameWnd::RepositionFrame](#repositionframe)|Chiamato dal framework per riposizionare la finestra di modifica sul posto.|  
  
## <a name="remarks"></a>Note  
 Questa classe crea e le posizioni delle barre nella finestra del documento dell'applicazione contenitore di controllo. Gestisce anche le notifiche generate da incorporato [COleResizeBar](../../mfc/reference/coleresizebar-class.md) dell'oggetto quando l'utente ridimensiona la finestra di modifica sul posto.  
  
 Per ulteriori informazioni sull'utilizzo di `COleIPFrameWnd`, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `COleIPFrameWnd`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="a-namecoleipframewnda--coleipframewndcoleipframewnd"></a><a name="coleipframewnd"></a>COleIPFrameWnd::COleIPFrameWnd  
 Costruisce un `COleIPFrameWnd` dell'oggetto e inizializza le informazioni sullo stato sul posto, memorizzato in una struttura di tipo **OLEINPLACEFRAMEINFO**.  
  
```  
COleIPFrameWnd();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [OLEINPLACEFRAMEINFO](http://msdn.microsoft.com/library/windows/desktop/ms693737) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameoncreatecontrolbarsa--coleipframewndoncreatecontrolbars"></a><a name="oncreatecontrolbars"></a>COleIPFrameWnd::OnCreateControlBars  
 Il framework chiama la `OnCreateControlBars` funzione quando un elemento viene attivato per la modifica sul posto.  
  
```  
virtual BOOL OnCreateControlBars(
    CWnd* pWndFrame,  
    CWnd* pWndDoc);

 
virtual BOOL OnCreateControlBars(
    CFrameWnd* pWndFrame,  
    CFrameWnd* pWndDoc);
```  
  
### <a name="parameters"></a>Parametri  
 *pWndFrame*  
 Puntatore alla finestra cornice dell'applicazione contenitore.  
  
 *pWndDoc*  
 Puntatore alla finestra del contenitore a livello di documento. Può essere **NULL** se il contenitore è un'applicazione SDI.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di riuscita; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per eseguire qualsiasi elaborazione speciale necessario quando vengono create le barre di controllo.  
  
##  <a name="a-namerepositionframea--coleipframewndrepositionframe"></a><a name="repositionframe"></a>COleIPFrameWnd::RepositionFrame  
 Il framework chiama la `RepositionFrame` funzione membro per il layout delle barre di controllo e riposizionare la finestra di modifica sul posto, pertanto tutti gli elementi è visibile.  
  
```  
virtual void RepositionFrame(
    LPCRECT lpPosRect,  
    LPCRECT lpClipRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPosRect`  
 Puntatore a un `RECT` struttura o un `CRect` oggetto che contiene la posizione nella cornice corrente coordinate della posizione della finestra, espressa in pixel, rispetto all'area client.  
  
 `lpClipRect`  
 Puntatore a un `RECT` struttura o un `CRect` oggetto che contiene la posizione nella cornice corrente rettangolo di ridimensionamento coordinate della finestra, in pixel, rispetto all'area client.  
  
### <a name="remarks"></a>Note  
 Layout delle barre di controllo nella finestra del contenitore è diverso da eseguite da una finestra cornice non OLE. La finestra cornice OLE non calcola le posizioni delle barre di controllo e altri oggetti da una dimensione della finestra cornice specificato, come una chiamata a [RecalcLayout](../../mfc/reference/cframewnd-class.md#recalclayout). L'area client è ciò che rimane sottraendo lo spazio per le barre di controllo e altri oggetti. Oggetto `COleIPFrameWnd` finestra, d'altra parte, posiziona le barre degli strumenti in base a un'area client specificata. In altre parole, `CFrameWnd::RecalcLayout` funziona "dall'esterno," mentre `COleIPFrameWnd::RepositionFrame` è "dall'interno verso l'esterno."  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)

