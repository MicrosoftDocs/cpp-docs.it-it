---
description: 'Altre informazioni su: classe COleDropTarget'
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
ms.openlocfilehash: ff911caa98031899ab018434d87d813d3c45362e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227104"
---
# <a name="coledroptarget-class"></a>Classe COleDropTarget

Fornisce il meccanismo di comunicazione tra una finestra e le librerie OLE.

## <a name="syntax"></a>Sintassi

```
class COleDropTarget : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleDropTarget:: COleDropTarget](#coledroptarget)|Costruisce un oggetto `COleDropTarget`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleDropTarget:: OnDragEnter](#ondragenter)|Chiamato quando il cursore entra per la prima volta nella finestra.|
|[COleDropTarget:: OnDragLeave](#ondragleave)|Chiamato quando il cursore viene trascinato fuori dalla finestra.|
|[COleDropTarget:: OnDragOver](#ondragover)|Chiamato ripetutamente quando il cursore viene trascinato sulla finestra.|
|[COleDropTarget:: OnDragScroll](#ondragscroll)|Chiamata eseguita per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|
|[COleDropTarget:: OnDrop](#ondrop)|Chiamato quando i dati vengono rilasciati nella finestra, gestore predefinito.|
|[COleDropTarget:: OnDropEx](#ondropex)|Chiamato quando i dati vengono rilasciati nella finestra, il gestore iniziale.|
|[COleDropTarget:: Register](#register)|Registra la finestra come destinazione di rilascio valida.|
|[COleDropTarget:: Revoke](#revoke)|Fa in modo che la finestra smetta di essere un obiettivo di rilascio valido.|

## <a name="remarks"></a>Commenti

La creazione di un oggetto di questa classe consente a una finestra di accettare i dati tramite il meccanismo di trascinamento della selezione OLE.

Per ottenere una finestra per accettare i comandi drop, è necessario innanzitutto creare un oggetto della `COleDropTarget` classe e quindi chiamare la funzione [Register](#register) con un puntatore all' `CWnd` oggetto desiderato come unico parametro.

Per altre informazioni sulle operazioni di trascinamento della selezione usando OLE, vedere l'articolo [trascinamento della selezione OLE](../../mfc/drag-and-drop-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDropTarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="coledroptargetcoledroptarget"></a><a name="coledroptarget"></a> COleDropTarget:: COleDropTarget

Costruisce un oggetto della classe `COleDropTarget` .

```
COleDropTarget();
```

### <a name="remarks"></a>Commenti

Chiamare [Register](#register) per associare l'oggetto a una finestra.

## <a name="coledroptargetondragenter"></a><a name="ondragenter"></a> COleDropTarget:: OnDragEnter

Chiamata eseguita dal framework quando il cursore viene trascinato per la prima volta nella finestra.

```
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra in cui viene immesso il cursore.

*pDataObject*<br/>
Punta all'oggetto dati contenente i dati che possono essere eliminati.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*punto*<br/>
Contiene la posizione corrente del cursore nelle coordinate del client.

### <a name="return-value"></a>Valore restituito

Effetto risultante se è stato eseguito un tentativo di trascinamento nella posizione specificata dal *punto*. Può essere uno o più degli elementi seguenti:

- DROPEFFECT_NONE un rilascio non è consentito.

- DROPEFFECT_COPY viene eseguita un'operazione di copia.

- DROPEFFECT_MOVE viene eseguita un'operazione di spostamento.

- DROPEFFECT_LINK viene stabilito un collegamento tra i dati eliminati e i dati originali.

- DROPEFFECT_SCROLL un'operazione di scorrimento di trascinamento sta per verificarsi o si sta verificando nella destinazione.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione per consentire l'esecuzione di operazioni di eliminazione nella finestra. L'implementazione predefinita chiama [CView:: OnDragEnter](../../mfc/reference/cview-class.md#ondragenter), che restituisce semplicemente DROPEFFECT_NONE per impostazione predefinita.

Per ulteriori informazioni, vedere [IDropTarget::D ragenter](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragenter) nella Windows SDK.

## <a name="coledroptargetondragleave"></a><a name="ondragleave"></a> COleDropTarget:: OnDragLeave

Chiamata eseguita dal framework quando il cursore esce dalla finestra mentre è attiva un'operazione di trascinamento.

```
virtual void OnDragLeave(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra da cui il cursore viene lasciato.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione se si desidera un comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata. L'implementazione predefinita di questa funzione chiama [CView:: OnDragLeave](../../mfc/reference/cview-class.md#ondragleave).

Per ulteriori informazioni, vedere [IDropTarget::D ragleave](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragleave) nella Windows SDK.

## <a name="coledroptargetondragover"></a><a name="ondragover"></a> COleDropTarget:: OnDragOver

Chiamata eseguita dal framework quando il cursore viene trascinato sulla finestra.

```
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra su cui si trova il cursore.

*pDataObject*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*punto*<br/>
Contiene la posizione corrente del cursore nelle coordinate del client.

### <a name="return-value"></a>Valore restituito

Effetto risultante se è stato eseguito un tentativo di trascinamento nella posizione specificata dal *punto*. Può essere uno o più degli elementi seguenti:

- DROPEFFECT_NONE un rilascio non è consentito.

- DROPEFFECT_COPY viene eseguita un'operazione di copia.

- DROPEFFECT_MOVE viene eseguita un'operazione di spostamento.

- DROPEFFECT_LINK viene stabilito un collegamento tra i dati eliminati e i dati originali.

- DROPEFFECT_SCROLL indica che sta per verificarsi un'operazione di scorrimento di trascinamento o che si sta verificando nella destinazione.

### <a name="remarks"></a>Commenti

Questa funzione deve essere sottoposta a override per consentire l'esecuzione di operazioni di eliminazione nella finestra. L'implementazione predefinita di questa funzione chiama [CView:: OnDragOver](../../mfc/reference/cview-class.md#ondragover), che restituisce DROPEFFECT_NONE per impostazione predefinita. Poiché questa funzione viene chiamata spesso durante un'operazione di trascinamento della selezione, è consigliabile ottimizzarla quanto più possibile.

Per ulteriori informazioni, vedere [IDropTarget::D ragover](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragover) nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#21](../../mfc/codesnippet/cpp/coledroptarget-class_1.cpp)]

## <a name="coledroptargetondragscroll"></a><a name="ondragscroll"></a> COleDropTarget:: OnDragScroll

Chiamata eseguita dal Framework prima della chiamata a [OnDragEnter](#ondragenter) o [OnDragOver](#ondragover) per determinare se il *punto* si trova nell'area di scorrimento.

```
virtual DROPEFFECT OnDragScroll(
    CWnd* pWnd,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra su cui si trova attualmente il cursore.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*punto*<br/>
Contiene la posizione del cursore, in pixel, relativa allo schermo.

### <a name="return-value"></a>Valore restituito

Effetto risultante se è stato eseguito un tentativo di trascinamento nella posizione specificata dal *punto*. Può essere uno o più degli elementi seguenti:

- DROPEFFECT_NONE un rilascio non è consentito.

- DROPEFFECT_COPY viene eseguita un'operazione di copia.

- DROPEFFECT_MOVE viene eseguita un'operazione di spostamento.

- DROPEFFECT_LINK viene stabilito un collegamento tra i dati eliminati e i dati originali.

- DROPEFFECT_SCROLL indica che sta per verificarsi un'operazione di scorrimento di trascinamento o che si sta verificando nella destinazione.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita di questa funzione chiama [CView:: OnDragScroll](../../mfc/reference/cview-class.md#ondragscroll), che restituisce DROPEFFECT_NONE e scorre la finestra quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo della finestra.

## <a name="coledroptargetondrop"></a><a name="ondrop"></a> COleDropTarget:: OnDrop

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
Punta alla finestra su cui si trova attualmente il cursore.

*pDataObject*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*dropEffect*<br/>
Effetto scelto dall'utente per l'operazione di rilascio. Può essere uno o più degli elementi seguenti:

- DROPEFFECT_COPY viene eseguita un'operazione di copia.

- DROPEFFECT_MOVE viene eseguita un'operazione di spostamento.

- DROPEFFECT_LINK viene stabilito un collegamento tra i dati eliminati e i dati originali.

*punto*<br/>
Contiene la posizione del cursore, in pixel, relativa allo schermo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il rilascio ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Il Framework chiama prima [OnDropEx](#ondropex). Se la `OnDropEx` funzione non gestisce l'eliminazione, il Framework chiama la funzione membro `OnDrop` . In genere, l'applicazione esegue l'override di [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per gestire il trascinamento della selezione del pulsante destro del mouse. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire un semplice trascinamento della selezione.

L'implementazione predefinita di `COleDropTarget::OnDrop` chiama [CView:: OnDrop](../../mfc/reference/cview-class.md#ondrop), che restituisce semplicemente false per impostazione predefinita.

Per ulteriori informazioni, vedere [IDropTarget::D por](/windows/win32/api/oleidl/nf-oleidl-idroptarget-drop) nel Windows SDK.

## <a name="coledroptargetondropex"></a><a name="ondropex"></a> COleDropTarget:: OnDropEx

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
Punta alla finestra su cui si trova attualmente il cursore.

*pDataObject*<br/>
Punta all'oggetto dati che contiene i dati da eliminare.

*dropDefault*<br/>
Effetto scelto dall'utente per l'operazione di rilascio predefinita in base allo stato della chiave corrente. Può essere DROPEFFECT_NONE. Gli effetti di rilascio sono descritti nella sezione Osservazioni.

*dropList*<br/>
Elenco degli effetti di trascinamento supportati dall'origine di rilascio. I valori dell'effetto di rilascio possono essere combinati usando l'operazione OR bit per bit (**&#124;**). Gli effetti di rilascio sono descritti nella sezione Osservazioni.

*punto*<br/>
Contiene la posizione del cursore, in pixel, relativa allo schermo.

### <a name="return-value"></a>Valore restituito

Effetto di rilascio risultante dal tentativo di rilascio nella posizione specificata dal *punto*. Gli effetti di rilascio sono descritti nella sezione Osservazioni.

### <a name="remarks"></a>Commenti

Il Framework chiama innanzitutto questa funzione. Se non gestisce l'eliminazione, il Framework chiama [OnDrop](#ondrop). In genere, si eseguirà l'override di [OnDropEx](../../mfc/reference/cview-class.md#ondropex) nella classe di visualizzazione per supportare il trascinamento del pulsante destro del mouse. In genere, la classe di visualizzazione [OnDrop](../../mfc/reference/cview-class.md#ondrop) viene utilizzata per gestire il caso di supporto per il trascinamento della selezione semplice.

L'implementazione predefinita di `COleDropTarget::OnDropEx` chiama [CView:: OnDropEx](../../mfc/reference/cview-class.md#ondropex). Per impostazione predefinita, [CView:: OnDropEx](../../mfc/reference/cview-class.md#ondropex) restituisce semplicemente un valore fittizio per indicare che deve essere chiamata la funzione membro [OnDrop](#ondrop) .

Gli effetti Drop descrivono l'azione associata a un'operazione DROP. Vedere l'elenco seguente di effetti di eliminazione:

- DROPEFFECT_NONE un rilascio non è consentito.

- DROPEFFECT_COPY viene eseguita un'operazione di copia.

- DROPEFFECT_MOVE viene eseguita un'operazione di spostamento.

- DROPEFFECT_LINK viene stabilito un collegamento tra i dati eliminati e i dati originali.

- DROPEFFECT_SCROLL indica che sta per verificarsi un'operazione di scorrimento di trascinamento o che si sta verificando nella destinazione.

Per ulteriori informazioni, vedere [IDropTarget::D por](/windows/win32/api/oleidl/nf-oleidl-idroptarget-drop) nel Windows SDK.

## <a name="coledroptargetregister"></a><a name="register"></a> COleDropTarget:: Register

Chiamare questa funzione per registrare la finestra con le DLL OLE come destinazione di rilascio valida.

```
BOOL Register(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra che deve essere registrata come destinazione di rilascio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione deve essere chiamata affinché le operazioni di eliminazione vengano accettate.

Per ulteriori informazioni, vedere [RegisterDragDrop](/windows/win32/api/ole2/nf-ole2-registerdragdrop) nel Windows SDK.

## <a name="coledroptargetrevoke"></a><a name="revoke"></a> COleDropTarget:: Revoke

Chiamare questa funzione prima di eliminare definitivamente qualsiasi finestra che è stata registrata come destinazione di rilascio tramite una chiamata a [Register](#register) per rimuoverla dall'elenco di destinazioni di rilascio.

```
virtual void Revoke();
```

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata automaticamente dal gestore [OnDestroy](../../mfc/reference/cwnd-class.md#ondestroy) per la finestra registrata, quindi in genere non è necessario chiamare questa funzione in modo esplicito.

Per ulteriori informazioni, vedere [RevokeDragDrop](/windows/win32/api/ole2/nf-ole2-revokedragdrop) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[OCLIENT di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDropSource](../../mfc/reference/coledropsource-class.md)
