---
title: Classe COleDropTarget
ms.date: 11/04/2016
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
ms.openlocfilehash: 127245385ebd89e51a1cc77d1efaa16729d73fe7
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57300122"
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
|[COleDropTarget::OnDragEnter](#ondragenter)|Chiamato quando il cursore viene posizionato prima di tutto la finestra.|
|[COleDropTarget::OnDragLeave](#ondragleave)|Chiamato quando il cursore viene trascinato fuori la finestra.|
|[COleDropTarget::OnDragOver](#ondragover)|Chiamato ripetutamente quando il cursore viene trascinato sulla finestra.|
|[COleDropTarget::OnDragScroll](#ondragscroll)|Chiamato per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|
|[COleDropTarget::OnDrop](#ondrop)|Chiamato quando viene eliminati i dati nella finestra del gestore predefinito.|
|[COleDropTarget::OnDropEx](#ondropex)|Chiamato quando viene eliminati i dati nella finestra, gestore iniziale.|
|[COleDropTarget::Register](#register)|Registra la finestra come obiettivo di rilascio valido.|
|[COleDropTarget::Revoke](#revoke)|Fa sì che la finestra quale terminare l'operazione in corso un obiettivo di rilascio valido.|

## <a name="remarks"></a>Note

Creazione di un oggetto di questa classe consente a una finestra di accettare i dati tramite il meccanismo di trascinamento e rilascio OLE.

Per ottenere una finestra di accettare i comandi drop, è necessario creare prima un oggetto del `COleDropTarget` classe e quindi chiamare il [registrare](#register) funzione con un puntatore all'oggetto desiderato `CWnd` oggetto come unico parametro.

Per altre informazioni sulle operazioni di trascinamento e rilascio usando OLE, vedere l'articolo [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md).

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

Chiamare [registrare](#register) per associare una finestra di questo oggetto.

##  <a name="ondragenter"></a>  COleDropTarget::OnDragEnter

Chiamato dal framework quando il cursore prima di tutto viene trascinato nella finestra.

```
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra che sta immettendo il cursore.

*pDataObject*<br/>
Punta all'oggetto dati che contiene i dati che possono essere eliminati.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Questa è una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*point*<br/>
Contiene la posizione corrente del cursore nelle coordinate del client.

### <a name="return-value"></a>Valore restituito

L'effetto che verrà generati se sono stato tentato un calo in corrispondenza della posizione specificata da *puntare*. Può trattarsi di uno o più delle seguenti operazioni:

- DROPEFFECT_NONE un rilascio non sarà autorizzato.

- DROPEFFECT_COPY verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE potrebbe eseguire un'operazione di spostamento.

- Verrà stabilito DROPEFFECT_LINK link tramite messaggio e-mail dai dati rilasciati ai dati originali.

- Operazione di scorrimento DROPEFFECT_SCROLL un trascinamento sta per verificarsi o è in corso nel database di destinazione.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per consentire operazioni di eliminazione si verificano nella finestra. L'implementazione predefinita chiama [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter), che restituisce semplicemente DROPEFFECT_NONE per impostazione predefinita.

Per altre informazioni, vedere [IDropTarget::DragEnter](/windows/desktop/api/oleidl/nf-oleidl-idroptarget-dragenter) nel SDK di Windows.

##  <a name="ondragleave"></a>  COleDropTarget::OnDragLeave

Chiamato dal framework quando il cursore non lascia la finestra mentre è attiva un'operazione di trascinamento.

```
virtual void OnDragLeave(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra che si sta spostando il cursore.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione se si desidera che un comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata. L'implementazione predefinita di questa funzione chiama [CView::OnDragLeave](../../mfc/reference/cview-class.md#ondragleave).

Per altre informazioni, vedere [IDropTarget::DragLeave](/windows/desktop/api/oleidl/nf-oleidl-idroptarget-dragleave) nel SDK di Windows.

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

*pWnd*<br/>
Punta alla finestra che il cursore è posizionato.

*pDataObject*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Questa è una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*point*<br/>
Contiene la posizione corrente del cursore nelle coordinate del client.

### <a name="return-value"></a>Valore restituito

L'effetto che verrà generati se sono stato tentato un calo in corrispondenza della posizione specificata da *puntare*. Può trattarsi di uno o più delle seguenti operazioni:

- DROPEFFECT_NONE un rilascio non sarà autorizzato.

- DROPEFFECT_COPY verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE potrebbe eseguire un'operazione di spostamento.

- Verrà stabilito DROPEFFECT_LINK link tramite messaggio e-mail dai dati rilasciati ai dati originali.

- DROPEFFECT_SCROLL indica che un'operazione di scorrimento di trascinamento sta per verificarsi o è in corso nel database di destinazione.

### <a name="remarks"></a>Note

Questa funzione deve essere sottoposto a override per consentire di operazioni drop nella finestra. L'implementazione predefinita di questa funzione chiama [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover), che restituisce DROPEFFECT_NONE per impostazione predefinita. Poiché questa funzione viene chiamata frequentemente durante un'operazione di trascinamento e rilascio, deve essere ottimizzato quanto più possibile.

Per altre informazioni, vedere [IDropTarget](/windows/desktop/api/oleidl/nf-oleidl-idroptarget-dragover) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#21](../../mfc/codesnippet/cpp/coledroptarget-class_1.cpp)]

##  <a name="ondragscroll"></a>  COleDropTarget::OnDragScroll

Chiamato dal framework prima di chiamare [OnDragEnter](#ondragenter) oppure [OnDragOver](#ondragover) per determinare se *puntare* è nell'area di scorrimento.

```
virtual DROPEFFECT OnDragScroll(
    CWnd* pWnd,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra che si trova attualmente il cursore.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Questa è una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*point*<br/>
Contiene la posizione del cursore, in pixel, rispetto allo schermo.

### <a name="return-value"></a>Valore restituito

L'effetto che verrà generati se sono stato tentato un calo in corrispondenza della posizione specificata da *puntare*. Può trattarsi di uno o più delle seguenti operazioni:

- DROPEFFECT_NONE un rilascio non sarà autorizzato.

- DROPEFFECT_COPY verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE potrebbe eseguire un'operazione di spostamento.

- Verrà stabilito DROPEFFECT_LINK link tramite messaggio e-mail dai dati rilasciati ai dati originali.

- DROPEFFECT_SCROLL indica che un'operazione di scorrimento di trascinamento sta per verificarsi o è in corso nel database di destinazione.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita di questa funzione chiama [CView::OnDragScroll](../../mfc/reference/cview-class.md#ondragscroll), che restituisce DROPEFFECT_NONE e consente di far scorrere la finestra quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo della finestra.

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

*pWnd*<br/>
Punta alla finestra che si trova attualmente il cursore.

*pDataObject*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*dropEffect*<br/>
L'effetto che l'utente ha scelto per l'operazione drop. Può trattarsi di uno o più delle seguenti operazioni:

- DROPEFFECT_COPY verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE potrebbe eseguire un'operazione di spostamento.

- Verrà stabilito DROPEFFECT_LINK link tramite messaggio e-mail dai dati rilasciati ai dati originali.

*point*<br/>
Contiene la posizione del cursore, in pixel, rispetto allo schermo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'eliminazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il framework chiama prima [OnDropEx](#ondropex). Se il `OnDropEx` funzione non gestisce l'eliminazione, quindi, il framework chiama questa funzione membro, `OnDrop`. In genere, l'applicazione esegue l'override [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per la gestione del pulsante destro del mouse trascinare e rilasciare. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire il semplice trascinamento.

L'implementazione predefinita di `COleDropTarget::OnDrop` chiamate [CView::OnDrop](../../mfc/reference/cview-class.md#ondrop), che semplicemente restituisce FALSE per impostazione predefinita.

Per altre informazioni, vedere [IDropTarget:: DROP](/windows/desktop/api/oleidl/nf-oleidl-idroptarget-drop) nel SDK di Windows.

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

*pWnd*<br/>
Punta alla finestra che si trova attualmente il cursore.

*pDataObject*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*dropDefault*<br/>
L'effetto che l'utente ha scelto per l'operazione di rilascio predefinite basata sullo stato della chiave corrente. Può essere DROPEFFECT_NONE. Nella sezione Osservazioni vengono descritti gli effetti di rilascio.

*dropList*<br/>
Un elenco degli effetti di trascinamento che supporta l'origine del trascinamento. I valori di effetto di rilascio possono essere combinati utilizzando l'operatore OR bit per bit (**&#124;**) operazione. Nella sezione Osservazioni vengono descritti gli effetti di rilascio.

*point*<br/>
Contiene la posizione del cursore, in pixel, rispetto allo schermo.

### <a name="return-value"></a>Valore restituito

L'effetto di rilascio che ha causato dal tentativo di eliminazione in corrispondenza della posizione specificata da *puntare*. Nella sezione Osservazioni vengono descritti gli effetti di rilascio.

### <a name="remarks"></a>Note

Prima di tutto, il framework chiama questa funzione. Se non viene gestito il trascinamento, il framework chiama [OnDrop](#ondrop). In genere, si eseguirà l'override [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per il supporto del pulsante destro del mouse trascinare e rilasciare. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) consente di gestire il caso di supporto per il semplice trascinamento.

L'implementazione predefinita di `COleDropTarget::OnDropEx` chiamate [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex). Per impostazione predefinita [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex) semplicemente restituisce un valore fittizio per indicare la [OnDrop](#ondrop) funzione membro deve essere chiamata.

Effetti di trascinamento descrivono l'azione associata a un'operazione di rilascio. Vedere l'elenco seguente di effetti di rilascio:

- DROPEFFECT_NONE un rilascio non sarà autorizzato.

- DROPEFFECT_COPY verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE potrebbe eseguire un'operazione di spostamento.

- Verrà stabilito DROPEFFECT_LINK link tramite messaggio e-mail dai dati rilasciati ai dati originali.

- DROPEFFECT_SCROLL indica che un'operazione di scorrimento di trascinamento sta per verificarsi o è in corso nel database di destinazione.

Per altre informazioni, vedere [IDropTarget:: DROP](/windows/desktop/api/oleidl/nf-oleidl-idroptarget-drop) nel SDK di Windows.

##  <a name="register"></a>  COleDropTarget::Register

Chiamare questa funzione per registrare la finestra con le DLL OLE come destinazione di rilascio valido.

```
BOOL Register(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra che deve essere registrato come destinazione di rilascio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata per le operazioni di trascinamento di essere accettati.

Per altre informazioni, vedere [RegisterDragDrop](/windows/desktop/api/ole2/nf-ole2-registerdragdrop) nel SDK di Windows.

##  <a name="revoke"></a>  COleDropTarget::Revoke

Chiamare questa funzione prima dell'eliminazione di qualsiasi finestra in cui è stato registrato come destinazione di rilascio tramite una chiamata a [registrare](#register) per rimuoverlo dall'elenco di destinazioni di rilascio.

```
virtual void Revoke();
```

### <a name="remarks"></a>Note

Questa funzione viene chiamata automaticamente dal [OnDestroy](../../mfc/reference/cwnd-class.md#ondestroy) gestore per la finestra è stata registrata, in modo che in genere non è necessario chiamare questa funzione in modo esplicito.

Per altre informazioni, vedere [RevokeDragDrop](/windows/desktop/api/ole2/nf-ole2-revokedragdrop) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../visual-cpp-samples.md)<br/>
[Esempio MFC OCLIENT](../../visual-cpp-samples.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDropSource](../../mfc/reference/coledropsource-class.md)
