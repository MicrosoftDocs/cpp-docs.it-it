---
title: Classe COleDropTarget | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleDropTarget
- AFXOLE/COleDropTarget
- AFXOLE/COleDropTarget::COleDropTarget
- AFXOLE/COleDropTarget::OnDragEnter
- AFXOLE/COleDropTarget::OnDragLeave
- AFXOLE/COleDropTarget::OnDragOver
- AFXOLE/COleDropTarget::OnDragScroll
- AFXOLE/COleDropTarget::OnDrop
- AFXOLE/COleDropTarget::OnDropEx
- AFXOLE/COleDropTarget::Register
- AFXOLE/COleDropTarget::Revoke
dev_langs:
- C++
helpviewer_keywords:
- COleDropTarget [MFC], COleDropTarget
- COleDropTarget [MFC], OnDragEnter
- COleDropTarget [MFC], OnDragLeave
- COleDropTarget [MFC], OnDragOver
- COleDropTarget [MFC], OnDragScroll
- COleDropTarget [MFC], OnDrop
- COleDropTarget [MFC], OnDropEx
- COleDropTarget [MFC], Register
- COleDropTarget [MFC], Revoke
ms.assetid: a58c9a48-6a93-4357-b078-4594df258311
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fec20d8bb960d48392f2d174dab9ee6497738c80
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37039602"
---
# <a name="coledroptarget-class"></a>Classe COleDropTarget
Fornisce il meccanismo di comunicazione tra una finestra e le librerie OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDropTarget : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDropTarget::COleDropTarget](#coledroptarget)|Costruisce un oggetto `COleDropTarget`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDropTarget::OnDragEnter](#ondragenter)|Chiamato quando il cursore nella prima finestra.|  
|[COleDropTarget::OnDragLeave](#ondragleave)|Chiamata eseguita quando il cursore viene trascinato fuori la finestra.|  
|[COleDropTarget::OnDragOver](#ondragover)|Chiamato ripetutamente quando il cursore viene trascinato sulla finestra.|  
|[COleDropTarget::OnDragScroll](#ondragscroll)|Chiamata eseguita per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|  
|[COleDropTarget::OnDrop](#ondrop)|Chiamato quando viene eliminati i dati nella finestra, gestore predefinito.|  
|[COleDropTarget::OnDropEx](#ondropex)|Chiamato quando viene eliminati i dati nella finestra, gestore iniziale.|  
|[COleDropTarget::Register](#register)|Registra la finestra come obiettivo di rilascio valido.|  
|[COleDropTarget::Revoke](#revoke)|Fa sì che la finestra quale terminare l'operazione in corso di un obiettivo di rilascio valido.|  
  
## <a name="remarks"></a>Note  
 Creazione di un oggetto di questa classe consente a una finestra del accetti dati tramite il meccanismo di trascinamento e rilascio OLE.  
  
 Per ottenere una finestra del accetti comandi drop, è necessario creare prima un oggetto del `COleDropTarget` classe e quindi chiamare il [registrare](#register) funzione con un puntatore all'oggetto desiderato `CWnd` oggetto come unico parametro.  
  
 Per ulteriori informazioni sulle operazioni di trascinamento e rilascio con OLE, vedere l'articolo [trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDropTarget`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="coledroptarget"></a>  COleDropTarget::COleDropTarget  
 Costruisce un oggetto della classe `COleDropTarget`.  
  
```  
COleDropTarget();
```  
  
### <a name="remarks"></a>Note  
 Chiamare [registrare](#register) per associare l'oggetto con una finestra.  
  
##  <a name="ondragenter"></a>  COleDropTarget::OnDragEnter  
 Chiamato dal framework quando il cursore viene innanzitutto trascinato nella finestra.  
  
```  
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta alla finestra che sta entrando il cursore.  
  
 *pDataObject*  
 Punta all'oggetto dati che contiene i dati che possono essere eliminati.  
  
 *dwKeyState*  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_ MBUTTON**, e **MK_RBUTTON**.  
  
 *Punto*  
 Contiene la posizione corrente del cursore nelle coordinate client.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che verrà generati se sono stato tentato nella posizione specificata da un calo *punto*. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE` Un calo non sarebbe consentito.  
  
- `DROPEFFECT_COPY` Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE` Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK` Viene stabilito un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL` Un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per consentire di operazioni drop nella finestra. L'implementazione predefinita chiama [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter), che restituisce semplicemente `DROPEFFECT_NONE` per impostazione predefinita.  
  
 Per altre informazioni, vedere [IDropTarget::DragEnter](http://msdn.microsoft.com/library/windows/desktop/ms680106) in Windows SDK.  
  
##  <a name="ondragleave"></a>  COleDropTarget::OnDragLeave  
 Chiamato dal framework quando il cursore non lascia la finestra mentre è attiva un'operazione di trascinamento.  
  
```  
virtual void OnDragLeave(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta alla finestra che sta uscendo dal cursore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si desidera un comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata. L'implementazione predefinita di questa funzione chiama [CView::OnDragLeave](../../mfc/reference/cview-class.md#ondragleave).  
  
 Per altre informazioni, vedere [IDropTarget::DragLeave](http://msdn.microsoft.com/library/windows/desktop/ms680110) in Windows SDK.  
  
##  <a name="ondragover"></a>  COleDropTarget::OnDragOver  
 Chiamato dal framework quando il cursore viene trascinato sulla finestra.  
  
```  
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta alla finestra che il cursore è posizionato.  
  
 *pDataObject*  
 Punta all'oggetto dati che contiene i dati da eliminare.  
  
 *dwKeyState*  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_ MBUTTON**, e **MK_RBUTTON**.  
  
 *Punto*  
 Contiene la posizione corrente del cursore nelle coordinate client.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che verrà generati se sono stato tentato nella posizione specificata da un calo *punto*. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE` Un calo non sarebbe consentito.  
  
- `DROPEFFECT_COPY` Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE` Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK` Viene stabilito un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL` Indica che un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere sottoposto a override per consentire di operazioni drop nella finestra. L'implementazione predefinita di questa funzione chiama [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover), che restituisce `DROPEFFECT_NONE` per impostazione predefinita. Poiché questa funzione viene chiamata frequentemente durante un'operazione di trascinamento e rilascio, deve essere ottimizzato quanto più possibile.  
  
 Per altre informazioni, vedere [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms680129) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#21](../../mfc/codesnippet/cpp/coledroptarget-class_1.cpp)]  
  
##  <a name="ondragscroll"></a>  COleDropTarget::OnDragScroll  
 Chiamato dal framework prima di chiamare [OnDragEnter](#ondragenter) oppure [OnDragOver](#ondragover) per determinare se *punto* è nell'area di scorrimento.  
  
```  
virtual DROPEFFECT OnDragScroll(
    CWnd* pWnd,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta alla finestra che si trova attualmente il cursore.  
  
 *dwKeyState*  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_ MBUTTON**, e **MK_RBUTTON**.  
  
 *Punto*  
 Contiene la posizione del cursore, in pixel, rispetto allo schermo.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che verrà generati se sono stato tentato nella posizione specificata da un calo *punto*. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE` Un calo non sarebbe consentito.  
  
- `DROPEFFECT_COPY` Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE` Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK` Viene stabilito un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL` Indica che un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita di questa funzione chiama [CView::OnDragScroll](../../mfc/reference/cview-class.md#ondragscroll), che restituisce `DROPEFFECT_NONE` e scorre la finestra quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo della finestra.  
  
##  <a name="ondrop"></a>  COleDropTarget::OnDrop  
 Chiamato dal framework quando deve verificarsi un'operazione di rilascio.  
  
```  
virtual BOOL OnDrop(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DROPEFFECT dropEffect,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta alla finestra che si trova attualmente il cursore.  
  
 *pDataObject*  
 Punta all'oggetto dati che contiene i dati da eliminare.  
  
 *dropEffect*  
 L'effetto che la scelta dell'utente per l'operazione di trascinamento. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_COPY` Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE` Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK` Viene stabilito un collegamento dai dati ignorati per i dati originali.  
  
 *Punto*  
 Contiene la posizione del cursore, in pixel, rispetto allo schermo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'eliminazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework chiama primo [OnDropEx](#ondropex). Se il `OnDropEx` funzione non gestisce l'eliminazione, quindi il framework chiama questa funzione membro, `OnDrop`. In genere, l'applicazione esegue l'override [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per la gestione del pulsante destro del mouse trascinamento della selezione. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire una semplice operazione di trascinamento.  
  
 L'implementazione predefinita di `COleDropTarget::OnDrop` chiamate [CView::OnDrop](../../mfc/reference/cview-class.md#ondrop), che restituisce semplicemente **FALSE** per impostazione predefinita.  
  
 Per altre informazioni, vedere [IDropTarget:: DROP](http://msdn.microsoft.com/library/windows/desktop/ms687242) in Windows SDK.  
  
##  <a name="ondropex"></a>  COleDropTarget::OnDropEx  
 Chiamato dal framework quando deve verificarsi un'operazione di rilascio.  
  
```  
virtual DROPEFFECT OnDropEx(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DROPEFFECT dropDefault,  
    DROPEFFECT dropList,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta alla finestra che si trova attualmente il cursore.  
  
 *pDataObject*  
 Punta all'oggetto dati che contiene i dati da eliminare.  
  
 *dropDefault*  
 L'effetto che la scelta dell'utente per l'operazione di rilascio predefinito in base allo stato di chiave corrente. Può essere `DROPEFFECT_NONE`. Effetti di trascinamento sono illustrati nella sezione Osservazioni.  
  
 *elenco a discesa*  
 Un elenco degli effetti di rilascio che supporta l'origine del trascinamento. I valori di effetto di rilascio possono essere combinati utilizzando l'operatore OR ( **&#124;**) operazione. Effetti di trascinamento sono illustrati nella sezione Osservazioni.  
  
 *Punto*  
 Contiene la posizione del cursore, in pixel, rispetto allo schermo.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che ha causato dal tentativo di eliminazione nella posizione specificata da *punto*. Effetti di trascinamento sono illustrati nella sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Innanzitutto, il framework chiama questa funzione. Se non gestisce l'eliminazione, il framework chiama [OnDrop](#ondrop). In genere, si eseguirà l'override [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per il supporto del pulsante destro del mouse trascinamento della selezione. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire il caso di supporto per una semplice operazione di trascinamento.  
  
 L'implementazione predefinita di `COleDropTarget::OnDropEx` chiamate [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex). Per impostazione predefinita [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex) semplicemente restituisce un valore fittizio per indicare il [OnDrop](#ondrop) funzione membro deve essere chiamata.  
  
 Effetti di trascinamento viene descritta l'azione associata a un'operazione di rilascio. Vedere l'elenco degli effetti di rilascio seguente:  
  
- `DROPEFFECT_NONE` Un calo non sarebbe consentito.  
  
- `DROPEFFECT_COPY` Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE` Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK` Viene stabilito un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL` Indica che un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
 Per altre informazioni, vedere [IDropTarget:: DROP](http://msdn.microsoft.com/library/windows/desktop/ms687242) in Windows SDK.  
  
##  <a name="register"></a>  COleDropTarget::Register  
 Chiamare questa funzione per registrare la finestra con le DLL OLE come obiettivo di rilascio valido.  
  
```  
BOOL Register(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta alla finestra che deve essere registrato come obiettivo di rilascio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la registrazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata per le operazioni di rilascio di essere accettati.  
  
 Per altre informazioni, vedere [RegisterDragDrop](http://msdn.microsoft.com/library/windows/desktop/ms678405) in Windows SDK.  
  
##  <a name="revoke"></a>  COleDropTarget::Revoke  
 Chiamare questa funzione prima dell'eliminazione di tutte le finestre che sono stata registrata come obiettivo di rilascio tramite una chiamata a [registrare](#register) per rimuoverlo dall'elenco delle destinazioni di rilascio.  
  
```  
virtual void Revoke();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata automaticamente dal [OnDestroy](../../mfc/reference/cwnd-class.md#ondestroy) gestore per la finestra è stata registrata, pertanto in genere non è necessario chiamare questa funzione in modo esplicito.  
  
 Per altre informazioni, vedere [RevokeDragDrop](http://msdn.microsoft.com/library/windows/desktop/ms692643) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDropSource](../../mfc/reference/coledropsource-class.md)
