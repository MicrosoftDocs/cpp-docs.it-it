---
title: COleDropTarget (classe)
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
ms.openlocfilehash: 01eb277da029d06ee44d8e048cf3244f4371a9ec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374999"
---
# <a name="coledroptarget-class"></a>COleDropTarget (classe)

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
|[COleDropTarget::OnDragEnter](#ondragenter)|Chiamato quando il cursore entra per la prima volta nella finestra.|
|[COleDropTarget::OnDragLeave](#ondragleave)|Chiamato quando il cursore viene trascinato fuori dalla finestra.|
|[COleDropTarget::OnDragOver](#ondragover)|Chiamato ripetutamente quando il cursore viene trascinato sulla finestra.|
|[COleDropTarget::OnDragScroll](#ondragscroll)|Chiamato per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|
|[COleDropTarget::OnDrop](#ondrop)|Chiamato quando i dati vengono rilasciati nella finestra, gestore predefinito.|
|[COleDropTarget::OnDropEx](#ondropex)|Chiamato quando i dati vengono rilasciati nella finestra, gestore iniziale.|
|[COleDropTarget::Registra](#register)|Registra la finestra come destinazione di rilascio valida.|
|[COleDropTarget::Revoke](#revoke)|Fa sì che la finestra cessi di essere una destinazione di rilascio valida.|

## <a name="remarks"></a>Osservazioni

La creazione di un oggetto di questa classe consente a una finestra di accettare dati tramite il meccanismo di trascinamento OLE.

Per ottenere una finestra per accettare i comandi di `COleDropTarget` rilascio, è innanzitutto necessario creare `CWnd` un oggetto della classe e quindi chiamare la funzione [Register](#register) con un puntatore all'oggetto desiderato come unico parametro.

Per ulteriori informazioni sulle operazioni di trascinamento della selezione mediante OLE, vedere l'articolo [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDropTarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="coledroptargetcoledroptarget"></a><a name="coledroptarget"></a>COleDropTarget::COleDropTarget

Costruisce un oggetto `COleDropTarget`della classe .

```
COleDropTarget();
```

### <a name="remarks"></a>Osservazioni

Chiamare [Register](#register) per associare questo oggetto a una finestra.

## <a name="coledroptargetondragenter"></a><a name="ondragenter"></a>COleDropTarget::OnDragEnter

Chiamato dal framework quando il cursore viene trascinato per la prima volta nella finestra.

```
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra che entra il cursore.

*pDataObject (oggetto PDataObject)*<br/>
Punta all'oggetto dati contenente i dati che possono essere eliminati.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*Punto*<br/>
Contiene la posizione corrente del cursore nelle coordinate client.

### <a name="return-value"></a>Valore restituito

L'effetto che si risulterebbe se si tentasse un rilascio nella posizione specificata dal *punto*. Può essere uno o più dei seguenti:

- DROPEFFECT_NONE Non sarebbe consentito un goccio.

- DROPEFFECT_COPY Verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE Verrà eseguita un'operazione di spostamento.

- DROPEFFECT_LINK Verrà stabilito un collegamento dai dati eliminati ai dati originali.

- DROPEFFECT_SCROLL Un'operazione di scorrimento del trascinamento sta per verificarsi o si sta verificando nella destinazione.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per consentire l'esizione di operazioni di rilascio nella finestra. L'implementazione predefinita chiama [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter), che restituisce semplicemente DROPEFFECT_NONE per impostazione predefinita.

Per altre informazioni, vedere [IDropTarget::DragEnter](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragenter) in Windows SDK.

## <a name="coledroptargetondragleave"></a><a name="ondragleave"></a>COleDropTarget::OnDragLeave

Chiamato dal framework quando il cursore esce dalla finestra mentre è attiva un'operazione di trascinamento.

```
virtual void OnDragLeave(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra che il cursore sta lasciando.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se si desidera un comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata. L'implementazione predefinita di questa funzione chiama [CView::OnDragLeave](../../mfc/reference/cview-class.md#ondragleave).

Per altre informazioni, vedere [IDropTarget::DragLeave](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragleave) in Windows SDK.

## <a name="coledroptargetondragover"></a><a name="ondragover"></a>COleDropTarget::OnDragOver

Chiamato dal framework quando il cursore viene trascinato sulla finestra.

```
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra su cui si trova il cursore.

*pDataObject (oggetto PDataObject)*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*Punto*<br/>
Contiene la posizione corrente del cursore nelle coordinate client.

### <a name="return-value"></a>Valore restituito

L'effetto che si risulterebbe se si tentasse un rilascio nella posizione specificata dal *punto*. Può essere uno o più dei seguenti:

- DROPEFFECT_NONE Non sarebbe consentito un goccio.

- DROPEFFECT_COPY Verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE Verrà eseguita un'operazione di spostamento.

- DROPEFFECT_LINK Verrà stabilito un collegamento dai dati eliminati ai dati originali.

- DROPEFFECT_SCROLL Indica che un'operazione di scorrimento di trascinamento sta per verificarsi o si sta verificando nella destinazione.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere sottoposta a override per consentire l'operazione di rilascio nella finestra. L'implementazione predefinita di questa funzione chiama [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover), che restituisce DROPEFFECT_NONE per impostazione predefinita. Poiché questa funzione viene chiamata frequentemente durante un'operazione di trascinamento della selezione, deve essere ottimizzata il più possibile.

Per altre informazioni, vedere [IDropTarget::DragOver](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragover) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#21](../../mfc/codesnippet/cpp/coledroptarget-class_1.cpp)]

## <a name="coledroptargetondragscroll"></a><a name="ondragscroll"></a>COleDropTarget::OnDragScroll

Chiamato dal framework prima di chiamare [OnDragEnter](#ondragenter) o [OnDragOver](#ondragover) per determinare se *il punto* si trova nell'area di scorrimento.

```
virtual DROPEFFECT OnDragScroll(
    CWnd* pWnd,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra su cui si trova il cursore.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*Punto*<br/>
Contiene la posizione del cursore, in pixel, rispetto allo schermo.

### <a name="return-value"></a>Valore restituito

L'effetto che si risulterebbe se si tentasse un rilascio nella posizione specificata dal *punto*. Può essere uno o più dei seguenti:

- DROPEFFECT_NONE Non sarebbe consentito un goccio.

- DROPEFFECT_COPY Verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE Verrà eseguita un'operazione di spostamento.

- DROPEFFECT_LINK Verrà stabilito un collegamento dai dati eliminati ai dati originali.

- DROPEFFECT_SCROLL Indica che un'operazione di scorrimento di trascinamento sta per verificarsi o si sta verificando nella destinazione.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita di questa funzione chiama [CView::OnDragScroll](../../mfc/reference/cview-class.md#ondragscroll), che restituisce DROPEFFECT_NONE e scorre la finestra quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo della finestra.

## <a name="coledroptargetondrop"></a><a name="ondrop"></a>COleDropTarget::OnDrop

Chiamato dal framework quando deve verificarsi un'operazione di rilascio.

```
virtual BOOL OnDrop(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DROPEFFECT dropEffect,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra su cui si trova il cursore.

*pDataObject (oggetto PDataObject)*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*DropEffect (effetto drop)*<br/>
Effetto scelto dall'utente per l'operazione di rilascio. Può essere uno o più dei seguenti:

- DROPEFFECT_COPY Verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE Verrà eseguita un'operazione di spostamento.

- DROPEFFECT_LINK Verrà stabilito un collegamento dai dati eliminati ai dati originali.

*Punto*<br/>
Contiene la posizione del cursore, in pixel, rispetto allo schermo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'eliminazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il framework chiama prima [OnDropEx](#ondropex). Se `OnDropEx` la funzione non gestisce l'eliminazione, il `OnDrop`framework chiama quindi questa funzione membro, . In genere, l'applicazione esegue l'override [di OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per gestire il trascinamento del pulsante destro del mouse. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire il trascinamento della selezione semplice.

L'implementazione `COleDropTarget::OnDrop` predefinita delle chiamate [CView::OnDrop](../../mfc/reference/cview-class.md#ondrop), che restituisce semplicemente FALSE per impostazione predefinita.

Per ulteriori informazioni, vedere [IDropTarget::Drop](/windows/win32/api/oleidl/nf-oleidl-idroptarget-drop) in Windows SDK.

## <a name="coledroptargetondropex"></a><a name="ondropex"></a>COleDropTarget::OnDropEx

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

*pWnd (in questo stato di windows*<br/>
Punta alla finestra su cui si trova il cursore.

*pDataObject (oggetto PDataObject)*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*dropPredefinito*<br/>
Effetto scelto dall'utente per l'operazione di rilascio predefinita in base allo stato corrente della chiave. Può essere DROPEFFECT_NONE. Gli effetti di eliminazione sono descritti nella sezione Osservazioni.

*elenco di rilascio*<br/>
Elenco degli effetti di rilascio supportati dall'origine di rilascio. I valori dell'effetto di rilascio possono essere combinati utilizzando l'operazione OR bit per bit** (&#124;**). Gli effetti di eliminazione sono descritti nella sezione Osservazioni.

*Punto*<br/>
Contiene la posizione del cursore, in pixel, rispetto allo schermo.

### <a name="return-value"></a>Valore restituito

Effetto di rilascio risultante dal tentativo di rilascio nella posizione specificata dal *punto*. Gli effetti di eliminazione sono descritti nella sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Il framework chiama prima questa funzione. Se non gestisce l'eliminazione, il framework chiama [OnDrop](#ondrop). In genere, si eseguirà l'override [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per supportare il trascinamento del pulsante destro del mouse e rilascio. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire il caso di supporto per il trascinamento della selezione semplice.

L'implementazione `COleDropTarget::OnDropEx` predefinita delle chiamate [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex). Per impostazione predefinita, [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex) restituisce semplicemente un valore fittizio per indicare il [OnDrop](#ondrop) funzione membro deve essere chiamata.

Gli effetti di rilascio descrivono l'azione associata a un'operazione di rilascio. Vedere il seguente elenco di effetti a discesa:

- DROPEFFECT_NONE Non sarebbe consentito un goccio.

- DROPEFFECT_COPY Verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE Verrà eseguita un'operazione di spostamento.

- DROPEFFECT_LINK Verrà stabilito un collegamento dai dati eliminati ai dati originali.

- DROPEFFECT_SCROLL Indica che un'operazione di scorrimento di trascinamento sta per verificarsi o si sta verificando nella destinazione.

Per ulteriori informazioni, vedere [IDropTarget::Drop](/windows/win32/api/oleidl/nf-oleidl-idroptarget-drop) in Windows SDK.

## <a name="coledroptargetregister"></a><a name="register"></a>COleDropTarget::Registra

Chiamare questa funzione per registrare la finestra con le DLL OLE come destinazione di rilascio valida.

```
BOOL Register(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra che deve essere registrata come destinazione di rilascio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata per l'eliminazione delle operazioni da accettare.

Per altre informazioni, vedere [RegisterDragDrop](/windows/win32/api/ole2/nf-ole2-registerdragdrop) in Windows SDK.

## <a name="coledroptargetrevoke"></a><a name="revoke"></a>COleDropTarget::Revoke

Chiamare questa funzione prima di eliminare qualsiasi finestra che è stata registrata come destinazione di rilascio tramite una chiamata a [Register](#register) per rimuoverla dall'elenco delle destinazioni di rilascio.

```
virtual void Revoke();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata automaticamente dal [Gestore OnDestroy](../../mfc/reference/cwnd-class.md#ondestroy) per la finestra registrata, pertanto in genere non è necessario chiamare questa funzione in modo esplicito.

Per ulteriori informazioni, vedere [RevokeDragDrop](/windows/win32/api/ole2/nf-ole2-revokedragdrop) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDropSource](../../mfc/reference/coledropsource-class.md)
