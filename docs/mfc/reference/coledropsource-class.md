---
title: Classe COleDropSource
ms.date: 11/04/2016
f1_keywords:
- COleDropSource
- AFXOLE/COleDropSource
- AFXOLE/COleDropSource::COleDropSource
- AFXOLE/COleDropSource::GiveFeedback
- AFXOLE/COleDropSource::OnBeginDrag
- AFXOLE/COleDropSource::QueryContinueDrag
helpviewer_keywords:
- COleDropSource [MFC], COleDropSource
- COleDropSource [MFC], GiveFeedback
- COleDropSource [MFC], OnBeginDrag
- COleDropSource [MFC], QueryContinueDrag
ms.assetid: d3eecc5f-a70b-4a01-b705-7d2c098ebe17
ms.openlocfilehash: 324c4b7273f021b43c319fb0a494ac843856c78a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375018"
---
# <a name="coledropsource-class"></a>Classe COleDropSource

Consente di trascinare i dati su una destinazione di rilascio.

## <a name="syntax"></a>Sintassi

```
class COleDropSource : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDropSource::COleDropSource](#coledropsource)|Costruisce un oggetto `COleDropSource`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDropSource::GiveFeedback](#givefeedback)|Modifica il cursore durante un'operazione di trascinamento della selezione.|
|[COleDropSource::OnBeginDrag](#onbegindrag)|Gestisce l'acquisizione del mouse durante un'operazione di trascinamento della selezione.|
|[COleDropSource::QueryContinueDrag](#querycontinuedrag)|Controlla se il trascinamento deve continuare.|

## <a name="remarks"></a>Osservazioni

La classe [COleDropTarget](../../mfc/reference/coledroptarget-class.md) gestisce la parte ricevente dell'operazione di trascinamento della selezione. L'oggetto `COleDropSource` è responsabile di determinare quando inizia un'operazione di trascinamento, fornendo feedback durante l'operazione di trascinamento e determinando quando termina l'operazione di trascinamento.

Per utilizzare `COleDropSource` un oggetto, è sufficiente chiamare il costruttore. Ciò semplifica il processo di determinazione degli eventi, ad esempio il clic del mouse, avviare un'operazione di trascinamento utilizzando la funzione [COleDataSource::DoDragDrop](../../mfc/reference/coledatasource-class.md#dodragdrop), [COleClientItem::DoDragDrop](../../mfc/reference/coleclientitem-class.md#dodragdrop)o [COleServerItem::DoDragDrop](../../mfc/reference/coleserveritem-class.md#dodragdrop) . Queste funzioni creeranno un `COleDropSource` oggetto per te. È possibile modificare il comportamento `COleDropSource` predefinito delle funzioni sottoponibili a override. Queste funzioni membro verranno chiamate nei momenti appropriati dal framework.

Per ulteriori informazioni sulle operazioni di trascinamento della selezione mediante OLE, vedere l'articolo [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

Per ulteriori informazioni, vedere [IDropSource](/windows/win32/api/oleidl/nn-oleidl-idropsource) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDropSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="coledropsourcecoledropsource"></a><a name="coledropsource"></a>COleDropSource::COleDropSource

Costruisce un oggetto `COleDropSource`.

```
COleDropSource();
```

## <a name="coledropsourcegivefeedback"></a><a name="givefeedback"></a>COleDropSource::GiveFeedback

Chiamato dal framework dopo la chiamata a [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover) o [COleDropTarget::DragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).

```
virtual SCODE GiveFeedback(DROPEFFECT dropEffect);
```

### <a name="parameters"></a>Parametri

*DropEffect (effetto drop)*<br/>
L'effetto che si desidera visualizzare all'utente, in genere indica cosa accadrebbe se si verificasse un calo a questo punto con i dati selezionati. In genere, si tratta del valore restituito dalla chiamata più recente a [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter) o [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover). Può essere uno o più dei seguenti:

- DROPEFFECT_NONE Non sarebbe consentito un goccio.

- DROPEFFECT_COPY Verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE Verrà eseguita un'operazione di spostamento.

- DROPEFFECT_LINK Verrà stabilito un collegamento dai dati eliminati ai dati originali.

- DROPEFFECT_SCROLL Un'operazione di scorrimento del trascinamento sta per verificarsi o si sta verificando nella destinazione.

### <a name="return-value"></a>Valore restituito

Restituisce DRAGDROP_S_USEDEFAULTCURSORS se il trascinamento è in corso, NOERROR in caso contrario.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per fornire commenti e suggerimenti all'utente su ciò che accadrebbe se si verificasse un calo a questo punto. L'implementazione predefinita utilizza i cursori predefiniti OLE. Per ulteriori informazioni sulle operazioni di trascinamento della selezione mediante OLE, vedere l'articolo [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

Per ulteriori informazioni, vedere [IDropSource::GiveFeedback](/windows/win32/api/oleidl/nf-oleidl-idropsource-givefeedback), [IDropTarget::DragOver](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragover)e [IDropTarget::DragEnter](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragenter) in Windows SDK.

## <a name="coledropsourceonbegindrag"></a><a name="onbegindrag"></a>COleDropSource::OnBeginDrag

Chiamato dal framework quando si verifica un evento che potrebbe iniziare un'operazione di trascinamento, ad esempio la pressione del pulsante sinistro del mouse.

```
virtual BOOL OnBeginDrag(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra che contiene i dati selezionati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il trascinamento è consentito, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se si desidera modificare la modalità di avvio del processo di trascinamento. L'implementazione predefinita acquisisce il mouse e rimane in modalità di trascinamento fino a quando l'utente fa clic sul pulsante sinistro o destro del mouse o preme ESC, in cui rilascia il mouse.

## <a name="coledropsourcequerycontinuedrag"></a><a name="querycontinuedrag"></a>COleDropSource::QueryContinueDrag

Dopo l'inizio del trascinamento, questa funzione viene chiamata ripetutamente dal framework fino a quando l'operazione di trascinamento non viene annullata o completata.

```
virtual SCODE QueryContinueDrag(
    BOOL bEscapePressed,
    DWORD dwKeyState);
```

### <a name="parameters"></a>Parametri

*bFugaPremuto*<br/>
Indica se il tasto ESC è stato `COleDropSource::QueryContinueDrag`premuto dall'ultima chiamata a .

*dwKeyState*<br/>
Contiene lo stato dei tasti modificatori sulla tastiera. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

### <a name="return-value"></a>Valore restituito

DRAGDROP_S_CANCEL se viene premuto il tasto ESC o il pulsante destro oppure se il pulsante sinistro viene alzato prima dell'inizio del trascinamento. DRAGDROP_S_DROP se deve verificarsi un'operazione di rilascio. Altrimenti S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se si desidera modificare il punto in cui il trascinamento viene annullato o si verifica un rilascio.

L'implementazione predefinita avvia il rilascio o annulla il trascinamento come indicato di seguito. Annulla un'operazione di trascinamento quando viene premuto il tasto ESC o il pulsante destro del mouse. Avvia un'operazione di rilascio quando il pulsante sinistro del mouse viene generato dopo l'avvio del trascinamento. In caso contrario, restituisce S_OK e non esegue ulteriori operazioni.

Poiché questa funzione viene chiamata frequentemente, deve essere ottimizzata il più possibile.

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
