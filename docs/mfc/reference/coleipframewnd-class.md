---
title: Classe COleIPFrameWnd | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleIPFrameWnd
- AFXOLE/COleIPFrameWnd
- AFXOLE/COleIPFrameWnd::COleIPFrameWnd
- AFXOLE/COleIPFrameWnd::OnCreateControlBars
- AFXOLE/COleIPFrameWnd::RepositionFrame
dev_langs:
- C++
helpviewer_keywords:
- COleIPFrameWnd [MFC], COleIPFrameWnd
- COleIPFrameWnd [MFC], OnCreateControlBars
- COleIPFrameWnd [MFC], RepositionFrame
ms.assetid: 24abb2cb-826c-4dda-a287-d8a8900a5763
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9136f3c57358a71186b196a4223b401e6abad2a9
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37040025"
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
 Questa classe crea e le posizioni di controllo delle barre nella finestra del documento dell'applicazione contenitore. Questo tipo gestisce anche le notifiche generate dalla incorporato [COleResizeBar](../../mfc/reference/coleresizebar-class.md) oggetto quando l'utente ridimensiona la finestra di modifica sul posto.  
  
 Per ulteriori informazioni sull'utilizzo `COleIPFrameWnd`, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `COleIPFrameWnd`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="coleipframewnd"></a>  COleIPFrameWnd::COleIPFrameWnd  
 Costruisce un `COleIPFrameWnd` dell'oggetto e inizializza le informazioni sullo stato sul posto, che viene archiviate in una struttura di tipo **OLEINPLACEFRAMEINFO**.  
  
```  
COleIPFrameWnd();
```  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [OLEINPLACEFRAMEINFO](http://msdn.microsoft.com/library/windows/desktop/ms693737) in Windows SDK.  
  
##  <a name="oncreatecontrolbars"></a>  COleIPFrameWnd::OnCreateControlBars  
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
  
 *pWndDoc.*  
 Puntatore alla finestra a livello di documento del contenitore. Può essere **NULL** se il contenitore è un'applicazione SDI.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione riesce; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per eseguire qualsiasi elaborazione speciale necessario quando vengono create le barre di controllo.  
  
##  <a name="repositionframe"></a>  COleIPFrameWnd::RepositionFrame  
 Il framework chiama la `RepositionFrame` funzione membro per il layout delle barre di controllo e riposizionare la finestra di modifica sul posto in modo che tutto sia visibile.  
  
```  
virtual void RepositionFrame(
    LPCRECT lpPosRect,  
    LPCRECT lpClipRect);
```  
  
### <a name="parameters"></a>Parametri  
 *lpPosRect*  
 Puntatore a un `RECT` struttura o un `CRect` oggetto contenente il posto cornice posizione coordinate correnti della finestra, in pixel e relativo all'area client.  
  
 *lpClipRect*  
 Puntatore a un `RECT` struttura o un `CRect` oggetto contenente il posto cornice rettangolo di ridimensionamento coordinate correnti della finestra, in pixel e relativo all'area client.  
  
### <a name="remarks"></a>Note  
 Layout delle barre di controllo nella finestra del contenitore è diverso da eseguite da una finestra cornice non OLE. La finestra cornice non OLE calcola le posizioni delle barre di controllo e altri oggetti da una dimensione determinata frame-window, come in una chiamata a [RecalcLayout](../../mfc/reference/cframewnd-class.md#recalclayout). L'area client è il valore restante sottraendo lo spazio per le barre di controllo e gli altri oggetti. Oggetto `COleIPFrameWnd` finestra, d'altro canto, posiziona le barre degli strumenti in conformità con un'area client specificato. In altre parole, `CFrameWnd::RecalcLayout` funziona "dall'esterno," mentre `COleIPFrameWnd::RepositionFrame` funziona "dall'interno verso l'esterno."  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)
