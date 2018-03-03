---
title: Classe COleDropTarget | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fecdedc84f4fd93cbd9efe5e525c1771c5eb1c7e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[COleDropTarget::OnDragLeave](#ondragleave)|Chiamato quando il cursore viene trascinato fuori la finestra.|  
|[COleDropTarget::OnDragOver](#ondragover)|Chiamato ripetutamente quando il cursore viene trascinato sulla finestra.|  
|[COleDropTarget::OnDragScroll](#ondragscroll)|Chiamato per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|  
|[COleDropTarget::OnDrop](#ondrop)|Chiamato quando vengono rilasciati dati nella finestra di gestore predefinito.|  
|[COleDropTarget::OnDropEx](#ondropex)|Chiamato quando vengono rilasciati dati nella finestra di gestore iniziale.|  
|[COleDropTarget::Register](#register)|Registra la finestra come obiettivo di rilascio valido.|  
|[COleDropTarget::Revoke](#revoke)|Fa sì che la finestra quale terminare l'operazione da un obiettivo di rilascio valido.|  
  
## <a name="remarks"></a>Note  
 Creazione di un oggetto di questa classe consente a una finestra accettare i dati tramite il meccanismo di trascinamento e rilascio OLE.  
  
 Per ottenere una finestra per accettare i comandi di rilascio, è necessario creare prima un oggetto del `COleDropTarget` classe e quindi chiamare il [registrare](#register) funzione con un puntatore all'oggetto desiderato `CWnd` oggetto come unico parametro.  
  
 Per ulteriori informazioni sulle operazioni di trascinamento e rilascio tramite OLE, vedere l'articolo [trascinamento della selezione (OLE)](../../mfc/drag-and-drop-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDropTarget`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="coledroptarget"></a>COleDropTarget::COleDropTarget  
 Costruisce un oggetto della classe `COleDropTarget`.  
  
```  
COleDropTarget();
```  
  
### <a name="remarks"></a>Note  
 Chiamare [registrare](#register) per associare l'oggetto con una finestra.  
  
##  <a name="ondragenter"></a>COleDropTarget::OnDragEnter  
 Chiamato dal framework quando il cursore viene trascinato innanzitutto nella finestra.  
  
```  
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra che passa il cursore.  
  
 `pDataObject`  
 Punta all'oggetto dati che contiene i dati che possono essere eliminati.  
  
 `dwKeyState`  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_ MBUTTON**, e **MK_RBUTTON**.  
  
 `point`  
 Contiene la posizione corrente del cursore nelle coordinate client.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che verrà generati se sono stato tentato un calo nella posizione specificata da `point`. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE`Un rilascio non sarebbe consentito.  
  
- `DROPEFFECT_COPY`Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE`Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK`Sarebbe possibile stabilire un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL`Un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per consentire l'esecuzione nella finestra di operazioni drop. L'implementazione predefinita chiama [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter), che restituisce semplicemente `DROPEFFECT_NONE` per impostazione predefinita.  
  
 Per ulteriori informazioni, vedere [IDropTarget::DragEnter](http://msdn.microsoft.com/library/windows/desktop/ms680106) in Windows SDK.  
  
##  <a name="ondragleave"></a>COleDropTarget::OnDragLeave  
 Chiamato dal framework quando il cursore lascia la finestra mentre è in corso di un'operazione di trascinamento.  
  
```  
virtual void OnDragLeave(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra che si sta spostando il cursore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si desidera un comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata. L'implementazione predefinita di questa funzione chiama [CView::OnDragLeave](../../mfc/reference/cview-class.md#ondragleave).  
  
 Per ulteriori informazioni, vedere [IDropTarget::DragLeave](http://msdn.microsoft.com/library/windows/desktop/ms680110) in Windows SDK.  
  
##  <a name="ondragover"></a>COleDropTarget::OnDragOver  
 Chiamato dal framework quando il cursore viene trascinato sulla finestra.  
  
```  
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra che il cursore è posizionato.  
  
 `pDataObject`  
 Punta all'oggetto dati che contiene i dati da eliminare.  
  
 `dwKeyState`  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_ MBUTTON**, e **MK_RBUTTON**.  
  
 `point`  
 Contiene la posizione corrente del cursore nelle coordinate client.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che verrà generati se sono stato tentato un calo nella posizione specificata da `point`. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE`Un rilascio non sarebbe consentito.  
  
- `DROPEFFECT_COPY`Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE`Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK`Sarebbe possibile stabilire un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL`Indica che un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere sottoposto a override per consentire l'esecuzione nella finestra di operazioni drop. L'implementazione predefinita di questa funzione chiama [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover), che restituisce `DROPEFFECT_NONE` per impostazione predefinita. Poiché questa funzione viene chiamata frequentemente durante un'operazione di trascinamento e rilascio, viene ottimizzata per quanto possibile.  
  
 Per ulteriori informazioni, vedere [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms680129) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#21](../../mfc/codesnippet/cpp/coledroptarget-class_1.cpp)]  
  
##  <a name="ondragscroll"></a>COleDropTarget::OnDragScroll  
 Chiamato dal framework prima di chiamare [OnDragEnter](#ondragenter) o [OnDragOver](#ondragover) per determinare se `point` è nell'area di scorrimento.  
  
```  
virtual DROPEFFECT OnDragScroll(
    CWnd* pWnd,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra che si trova attualmente il cursore.  
  
 `dwKeyState`  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_ MBUTTON**, e **MK_RBUTTON**.  
  
 `point`  
 Contiene la posizione del cursore, in pixel, rispetto allo schermo.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che verrà generati se sono stato tentato un calo nella posizione specificata da `point`. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_NONE`Un rilascio non sarebbe consentito.  
  
- `DROPEFFECT_COPY`Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE`Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK`Sarebbe possibile stabilire un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL`Indica che un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita di questa funzione chiama [CView::OnDragScroll](../../mfc/reference/cview-class.md#ondragscroll), che restituisce `DROPEFFECT_NONE` e scorre la finestra quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo della finestra.  
  
##  <a name="ondrop"></a>COleDropTarget::OnDrop  
 Chiamato dal framework quando deve verificarsi un'operazione di rilascio.  
  
```  
virtual BOOL OnDrop(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DROPEFFECT dropEffect,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra che si trova attualmente il cursore.  
  
 `pDataObject`  
 Punta all'oggetto dati che contiene i dati da eliminare.  
  
 `dropEffect`  
 L'effetto che la scelta dell'utente per l'operazione di trascinamento. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_COPY`Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE`Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK`Sarebbe possibile stabilire un collegamento dai dati ignorati per i dati originali.  
  
 `point`  
 Contiene la posizione del cursore, in pixel, rispetto allo schermo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'eliminazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework chiama prima [OnDropEx](#ondropex). Se il `OnDropEx` funzione non gestisce l'eliminazione, il framework chiama la funzione di questo membro, `OnDrop`. In genere, l'applicazione esegue l'override [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per la gestione del pulsante destro del mouse, trascinare e rilasciare. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire una semplice operazione di trascinamento.  
  
 L'implementazione predefinita di `COleDropTarget::OnDrop` chiamate [CView::OnDrop](../../mfc/reference/cview-class.md#ondrop), che restituisce semplicemente **FALSE** per impostazione predefinita.  
  
 Per ulteriori informazioni, vedere [IDropTarget:: DROP](http://msdn.microsoft.com/library/windows/desktop/ms687242) in Windows SDK.  
  
##  <a name="ondropex"></a>COleDropTarget::OnDropEx  
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
 `pWnd`  
 Punta alla finestra che si trova attualmente il cursore.  
  
 `pDataObject`  
 Punta all'oggetto dati che contiene i dati da eliminare.  
  
 `dropDefault`  
 L'effetto che la scelta dell'utente per l'operazione di rilascio predefinito in base allo stato di chiave corrente. Può essere `DROPEFFECT_NONE`. Effetti di trascinamento sono descritti nella sezione Osservazioni.  
  
 `dropList`  
 Un elenco degli effetti di rilascio che supporta l'origine del trascinamento. I valori di effetto di rilascio possono essere combinati utilizzando l'operatore OR bit per bit ( **&#124;**) operazione. Effetti di trascinamento sono descritti nella sezione Osservazioni.  
  
 `point`  
 Contiene la posizione del cursore, in pixel, rispetto allo schermo.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che ha causato dal tentativo di eliminazione nella posizione specificata da `point`. Effetti di trascinamento sono descritti nella sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Innanzitutto, il framework chiama questa funzione. Se non gestisce l'eliminazione, il framework chiama [OnDrop](#ondrop). In genere, si eseguirà l'override [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per il supporto del pulsante destro del mouse, trascinare e rilasciare. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire il caso di supporto per una semplice operazione di trascinamento.  
  
 L'implementazione predefinita di `COleDropTarget::OnDropEx` chiamate [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex). Per impostazione predefinita, [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex) restituisce semplicemente un valore fittizio per indicare il [OnDrop](#ondrop) funzione membro deve essere chiamata.  
  
 Gli effetti di rilascio descrivono l'azione associata a un'operazione di rilascio. Vedere l'elenco degli effetti di rilascio seguente:  
  
- `DROPEFFECT_NONE`Un rilascio non sarebbe consentito.  
  
- `DROPEFFECT_COPY`Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE`Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK`Sarebbe possibile stabilire un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL`Indica che un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
 Per ulteriori informazioni, vedere [IDropTarget:: DROP](http://msdn.microsoft.com/library/windows/desktop/ms687242) in Windows SDK.  
  
##  <a name="register"></a>COleDropTarget::Register  
 Chiamare questa funzione per registrare la finestra con le DLL OLE come destinazione di rilascio valido.  
  
```  
BOOL Register(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra che deve essere registrato come obiettivo di rilascio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la registrazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata per le operazioni di rilascio di essere accettati.  
  
 Per ulteriori informazioni, vedere [RegisterDragDrop](http://msdn.microsoft.com/library/windows/desktop/ms678405) in Windows SDK.  
  
##  <a name="revoke"></a>COleDropTarget::Revoke  
 Chiamare questa funzione prima dell'eliminazione di qualsiasi finestra che è stata registrata come obiettivo di rilascio tramite una chiamata a [registrare](#register) per rimuoverlo dall'elenco di destinazioni di rilascio.  
  
```  
virtual void Revoke();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata automaticamente dal [OnDestroy](../../mfc/reference/cwnd-class.md#ondestroy) gestore per la finestra che è stata registrata, pertanto non è in genere necessario chiamare questa funzione in modo esplicito.  
  
 Per ulteriori informazioni, vedere [RevokeDragDrop](http://msdn.microsoft.com/library/windows/desktop/ms692643) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDropSource](../../mfc/reference/coledropsource-class.md)
