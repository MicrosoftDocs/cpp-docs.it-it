---
description: 'Altre informazioni su: Classe COleDropSource'
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
ms.openlocfilehash: 069c1b2a3cb46f0824da55bca8e97041e9b0b2e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227143"
---
# <a name="coledropsource-class"></a>Classe COleDropSource

Consente il trascinamento dei dati in un obiettivo di rilascio.

## <a name="syntax"></a>Sintassi

```
class COleDropSource : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleDropSource:: COleDropSource](#coledropsource)|Costruisce un oggetto `COleDropSource`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleDropSource:: GiveFeedback](#givefeedback)|Modifica il cursore durante un'operazione di trascinamento della selezione.|
|[COleDropSource:: OnBeginDrag](#onbegindrag)|Gestisce l'acquisizione del mouse durante un'operazione di trascinamento della selezione.|
|[COleDropSource:: QueryContinueDrag](#querycontinuedrag)|Verifica se il trascinamento deve continuare.|

## <a name="remarks"></a>Commenti

La classe [COleDropTarget](../../mfc/reference/coledroptarget-class.md) gestisce la parte di ricezione dell'operazione di trascinamento della selezione. L' `COleDropSource` oggetto è responsabile di determinare l'inizio di un'operazione di trascinamento, fornire commenti e suggerimenti durante l'operazione di trascinamento e determinare quando termina l'operazione di trascinamento.

Per usare un `COleDropSource` oggetto, è sufficiente chiamare il costruttore. Questo semplifica il processo di individuazione degli eventi, ad esempio un clic del mouse, per iniziare un'operazione di trascinamento usando [COleDataSource::D odragdrop](../../mfc/reference/coledatasource-class.md#dodragdrop), [COleClientItem::D odragdrop](../../mfc/reference/coleclientitem-class.md#dodragdrop)o [COleServerItem::D funzione odragdrop](../../mfc/reference/coleserveritem-class.md#dodragdrop) . Queste funzioni creeranno un `COleDropSource` oggetto per l'utente. Potrebbe essere necessario modificare il comportamento predefinito delle `COleDropSource` funzioni sottoponibili a override. Queste funzioni membro verranno chiamate al momento appropriato dal Framework.

Per altre informazioni sulle operazioni di trascinamento della selezione usando OLE, vedere l'articolo [trascinamento della selezione OLE](../../mfc/drag-and-drop-ole.md).

Per ulteriori informazioni, vedere [IDropSource](/windows/win32/api/oleidl/nn-oleidl-idropsource) nel Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDropSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="coledropsourcecoledropsource"></a><a name="coledropsource"></a> COleDropSource:: COleDropSource

Costruisce un oggetto `COleDropSource`.

```
COleDropSource();
```

## <a name="coledropsourcegivefeedback"></a><a name="givefeedback"></a> COleDropSource:: GiveFeedback

Chiamata eseguita dal Framework dopo la chiamata di [COleDropTarget:: OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover) o [COleDropTarget::D ragenter](../../mfc/reference/coledroptarget-class.md#ondragenter).

```
virtual SCODE GiveFeedback(DROPEFFECT dropEffect);
```

### <a name="parameters"></a>Parametri

*dropEffect*<br/>
L'effetto che si desidera visualizzare all'utente, in genere indicando che cosa accadrebbe se si verificasse un rilascio a questo punto con i dati selezionati. Si tratta in genere del valore restituito dalla chiamata più recente a [CView:: OnDragEnter](../../mfc/reference/cview-class.md#ondragenter) o [CView:: OnDragOver](../../mfc/reference/cview-class.md#ondragover). Può essere uno o più degli elementi seguenti:

- DROPEFFECT_NONE un rilascio non è consentito.

- DROPEFFECT_COPY viene eseguita un'operazione di copia.

- DROPEFFECT_MOVE viene eseguita un'operazione di spostamento.

- DROPEFFECT_LINK viene stabilito un collegamento tra i dati eliminati e i dati originali.

- DROPEFFECT_SCROLL un'operazione di scorrimento di trascinamento sta per verificarsi o si sta verificando nella destinazione.

### <a name="return-value"></a>Valore restituito

Restituisce DRAGDROP_S_USEDEFAULTCURSORS se il trascinamento è in corso, NOERROR in caso contrario.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione per fornire commenti e suggerimenti all'utente su cosa accadrebbe se si verificasse un calo a questo punto. Nell'implementazione predefinita vengono utilizzati i cursori OLE predefiniti. Per altre informazioni sulle operazioni di trascinamento della selezione usando OLE, vedere l'articolo [trascinamento della selezione OLE](../../mfc/drag-and-drop-ole.md).

Per ulteriori informazioni, vedere [IDropSource:: GiveFeedback](/windows/win32/api/oleidl/nf-oleidl-idropsource-givefeedback), [IDropTarget::D ragover](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragover)e [IDropTarget::D ragenter](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragenter) nella Windows SDK.

## <a name="coledropsourceonbegindrag"></a><a name="onbegindrag"></a> COleDropSource:: OnBeginDrag

Chiamato dal framework quando si verifica un evento che potrebbe iniziare un'operazione di trascinamento, ad esempio premendo il pulsante sinistro del mouse.

```
virtual BOOL OnBeginDrag(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra che contiene i dati selezionati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il trascinamento è consentito; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione se si desidera modificare la modalità di avvio del processo di trascinamento. L'implementazione predefinita acquisisce il mouse e rimane in modalità di trascinamento fino a quando l'utente non fa clic sul pulsante sinistro o destro del mouse o preme ESC, a quel punto rilascia il mouse.

## <a name="coledropsourcequerycontinuedrag"></a><a name="querycontinuedrag"></a> COleDropSource:: QueryContinueDrag

Dopo l'inizio del trascinamento, questa funzione viene chiamata ripetutamente dal Framework fino a quando l'operazione di trascinamento non viene annullata o completata.

```
virtual SCODE QueryContinueDrag(
    BOOL bEscapePressed,
    DWORD dwKeyState);
```

### <a name="parameters"></a>Parametri

*bEscapePressed*<br/>
Indica se è stato premuto il tasto ESC dall'ultima chiamata a `COleDropSource::QueryContinueDrag` .

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica sulla tastiera. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

### <a name="return-value"></a>Valore restituito

DRAGDROP_S_CANCEL se il tasto ESC o il pulsante destro è premuto oppure il pulsante sinistro viene generato prima dell'avvio del trascinamento. DRAGDROP_S_DROP se deve verificarsi un'operazione di rilascio. In caso contrario S_OK.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione se si desidera modificare il punto in cui il trascinamento viene annullato o si verifica un trascinamento.

L'implementazione predefinita avvia l'eliminazione o Annulla il trascinamento come indicato di seguito. Annulla un'operazione di trascinamento quando viene premuto il tasto ESC o il pulsante destro del mouse. Viene avviata un'operazione di rilascio quando viene generato il pulsante sinistro del mouse dopo l'avvio del trascinamento. In caso contrario, restituisce S_OK e non esegue altre operazioni.

Poiché questa funzione viene chiamata di frequente, è consigliabile ottimizzarla quanto più possibile.

## <a name="see-also"></a>Vedi anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[OCLIENT di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
