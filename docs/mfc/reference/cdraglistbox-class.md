---
title: Classe CDragListBox
ms.date: 11/04/2016
f1_keywords:
- CDragListBox
- AFXCMN/CDragListBox
- AFXCMN/CDragListBox::CDragListBox
- AFXCMN/CDragListBox::BeginDrag
- AFXCMN/CDragListBox::CancelDrag
- AFXCMN/CDragListBox::Dragging
- AFXCMN/CDragListBox::DrawInsert
- AFXCMN/CDragListBox::Dropped
- AFXCMN/CDragListBox::ItemFromPt
helpviewer_keywords:
- CDragListBox [MFC], CDragListBox
- CDragListBox [MFC], BeginDrag
- CDragListBox [MFC], CancelDrag
- CDragListBox [MFC], Dragging
- CDragListBox [MFC], DrawInsert
- CDragListBox [MFC], Dropped
- CDragListBox [MFC], ItemFromPt
ms.assetid: fee20b42-60ae-4aa9-83f9-5a3d9b96e33b
ms.openlocfilehash: 0d1ae94948e1143a5bac17985423c4bd1bfbaf65
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374038"
---
# <a name="cdraglistbox-class"></a>Classe CDragListBox

Oltre a fornire la funzionalità di una `CDragListBox` casella di riepilogo di Windows, la classe consente all'utente di spostare gli elementi della casella di riepilogo, ad esempio i nomi di file, all'interno della casella di riepilogo.

## <a name="syntax"></a>Sintassi

```
class CDragListBox : public CListBox
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDragListBox::CDragListBox](#cdraglistbox)|Costruisce un oggetto `CDragListBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDragListBox::BeginDrag](#begindrag)|Chiamato dal framework all'avvio di un'operazione di trascinamento.|
|[CDragListBox::CancelDrag](#canceldrag)|Chiamato dal framework quando un'operazione di trascinamento è stata annullata.|
|[CDragListBox::Dragging](#dragging)|Chiamato dal framework durante un'operazione di trascinamento.|
|[CDragListBox::DrawInsert](#drawinsert)|Disegna la guida di inserimento della casella di riepilogo di trascinamento.|
|[CDragListBox::Dripped](#dropped)|Chiamato dal framework dopo che l'elemento è stato eliminato.|
|[CDragListBox::ItemFromPt](#itemfrompt)|Restituisce le coordinate dell'elemento trascinato.|

## <a name="remarks"></a>Osservazioni

Le caselle di riepilogo con questa funzionalità consentono agli utenti di ordinare gli elementi in un elenco in qualsiasi modo sia più utile per loro. Per impostazione predefinita, la casella di riepilogo sposterà l'elemento nella nuova posizione nell'elenco. Tuttavia, `CDragListBox` gli oggetti possono essere personalizzati per copiare gli elementi anziché spostarli.

Il controllo casella di `CDragListBox` riepilogo associato alla classe non deve avere lo stile LBS_SORT o LBS_MULTIPLESELECT. Per una descrizione degli stili delle caselle di riepilogo, vedere [Stili casella di riepilogo](../../mfc/reference/styles-used-by-mfc.md#list-box-styles).

Per utilizzare una casella di riepilogo di trascinamento in una finestra di dialogo esistente dell'applicazione, aggiungere `Control` un controllo `CDragListBox`casella di riepilogo al modello di finestra di dialogo utilizzando l'editor finestre e quindi assegnare una variabile membro (di Categoria e Tipo variabile ) corrispondente al controllo casella di riepilogo nel modello di finestra di dialogo.

Per ulteriori informazioni sull'assegnazione di controlli alle variabili membro, vedere [Collegamento per la definizione di variabili membro per](../../windows/defining-member-variables-for-dialog-controls.md)i controlli finestra di dialogo .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListBox](../../mfc/reference/clistbox-class.md)

`CDragListBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cdraglistboxbegindrag"></a><a name="begindrag"></a>CDragListBox::BeginDrag

Chiamato dal framework quando si verifica un evento che potrebbe iniziare un'operazione di trascinamento, ad esempio la pressione del pulsante sinistro del mouse.

```
virtual BOOL BeginDrag(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate dell'elemento trascinato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il trascinamento è consentito, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se si desidera controllare ciò che accade quando inizia un'operazione di trascinamento. L'implementazione predefinita acquisisce il mouse e rimane in modalità di trascinamento fino a quando l'utente fa clic sul pulsante sinistro o destro del mouse o preme ESC, nel momento in cui l'operazione di trascinamento viene annullata.

## <a name="cdraglistboxcanceldrag"></a><a name="canceldrag"></a>CDragListBox::CancelDrag

Chiamato dal framework quando un'operazione di trascinamento è stata annullata.

```
virtual void CancelDrag(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate dell'elemento trascinato.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per gestire qualsiasi elaborazione speciale per il controllo casella di riepilogo.

## <a name="cdraglistboxcdraglistbox"></a><a name="cdraglistbox"></a>CDragListBox::CDragListBox

Costruisce un oggetto `CDragListBox`.

```
CDragListBox();
```

## <a name="cdraglistboxdragging"></a><a name="dragging"></a>CDragListBox::Dragging

Chiamato dal framework quando un elemento della casella `CDragListBox` di riepilogo viene trascinato all'interno dell'oggetto.

```
virtual UINT Dragging(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate dello schermo x e y del cursore.

### <a name="return-value"></a>Valore restituito

ID di risorsa del cursore da visualizzare. Sono possibili i seguenti valori:

- DL_COPYCURSOR Indica che l'elemento verrà copiato.

- DL_MOVECURSOR Indica che l'elemento verrà spostato.

- DL_STOPCURSOR Indica che la destinazione di rilascio corrente non è accettabile.

### <a name="remarks"></a>Osservazioni

Il comportamento predefinito restituisce DL_MOVECURSOR. Eseguire l'override di questa funzione se si desidera fornire funzionalità aggiuntive.

## <a name="cdraglistboxdrawinsert"></a><a name="drawinsert"></a>CDragListBox::DrawInsert

Chiamato dal framework per disegnare la guida di inserimento prima dell'elemento con l'indice indicato.

```
virtual void DrawInsert(int nItem);
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Indice in base zero del punto di inserimento.

### <a name="remarks"></a>Osservazioni

Il valore - 1 cancella la guida di inserimento. Eseguire l'override di questa funzione per modificare l'aspetto o il comportamento della guida di inserimento.

## <a name="cdraglistboxdropped"></a><a name="dropped"></a>CDragListBox::Dripped

Chiamato dal framework quando un elemento `CDragListBox` viene rilasciato all'interno di un oggetto.

```
virtual void Dropped(
    int nSrcIndex,
    CPoint pt);
```

### <a name="parameters"></a>Parametri

*Indice nSrc*<br/>
Specifica l'indice in base zero della stringa eliminata.

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate del sito di rilascio.

### <a name="remarks"></a>Osservazioni

Il comportamento predefinito copia l'elemento della casella di riepilogo e i relativi dati nella nuova posizione e quindi elimina l'elemento originale. Eseguire l'override di questa funzione per personalizzare il comportamento predefinito, ad esempio consentendo il trascinamento delle copie degli elementi della casella di riepilogo in altre posizioni all'interno dell'elenco.

## <a name="cdraglistboxitemfrompt"></a><a name="itemfrompt"></a>CDragListBox::ItemFromPt

Chiamare questa funzione per recuperare l'indice in base zero dell'elemento della casella di riepilogo che si trova in *pt*.

```
int ItemFromPt(
    CPoint pt,
    BOOL bAutoScroll = TRUE) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto contenente le coordinate di un punto all'interno della casella di riepilogo.

*bAutoScroll (controllo degli occhi)*<br/>
Diverso da zero se lo scorrimento è consentito, in caso contrario 0.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento della casella di riepilogo di trascinamento.

## <a name="see-also"></a>Vedere anche

[TSTCON di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)
