---
description: 'Altre informazioni su: classe CDragListBox'
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
ms.openlocfilehash: 0dfa61503bd9c1aa3017d37b873a8948f61e68e2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184765"
---
# <a name="cdraglistbox-class"></a>Classe CDragListBox

Oltre a fornire la funzionalità di una casella di riepilogo di Windows, la `CDragListBox` classe consente all'utente di spostare gli elementi della casella di riepilogo, ad esempio i nomi file, all'interno della casella di riepilogo.

## <a name="syntax"></a>Sintassi

```
class CDragListBox : public CListBox
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDragListBox:: CDragListBox](#cdraglistbox)|Costruisce un oggetto `CDragListBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDragListBox:: BeginDrag](#begindrag)|Chiamato dal framework quando viene avviata un'operazione di trascinamento.|
|[CDragListBox:: CancelDrag](#canceldrag)|Chiamata eseguita dal framework quando un'operazione di trascinamento è stata annullata.|
|[CDragListBox::D ragging](#dragging)|Chiamata eseguita dal Framework durante un'operazione di trascinamento.|
|[CDragListBox::D rawInsert](#drawinsert)|Disegna la Guida di inserimento della casella di riepilogo di trascinamento.|
|[CDragListBox::D ropped](#dropped)|Chiamata eseguita dal Framework dopo l'eliminazione dell'elemento.|
|[CDragListBox:: ItemFromPt](#itemfrompt)|Restituisce le coordinate dell'elemento trascinato.|

## <a name="remarks"></a>Commenti

Le caselle di riepilogo con questa funzionalità consentono agli utenti di ordinare gli elementi in un elenco nel modo più utile. Per impostazione predefinita, la casella di riepilogo sposterà l'elemento nella nuova posizione nell'elenco. È tuttavia `CDragListBox` possibile personalizzare gli oggetti per copiare gli elementi anziché spostarli.

Il controllo casella di riepilogo associato alla `CDragListBox` classe non deve avere il LBS_SORT o lo stile LBS_MULTIPLESELECT. Per una descrizione degli stili delle caselle di riepilogo, vedere [stili di caselle di riepilogo](../../mfc/reference/styles-used-by-mfc.md#list-box-styles).

Per usare una casella di riepilogo di trascinamento in una finestra di dialogo esistente dell'applicazione, aggiungere un controllo casella di riepilogo al modello di finestra di dialogo usando l'editor finestre e quindi assegnare una variabile membro (di `Control` tipo categoria e variabile `CDragListBox` ) corrispondente al controllo casella di riepilogo nel modello di finestra di dialogo.

Per ulteriori informazioni sull'assegnazione di controlli a variabili membro, vedere [collegamento per la definizione di variabili membro per i controlli finestra di dialogo](../../windows/adding-editing-or-deleting-controls.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListBox](../../mfc/reference/clistbox-class.md)

`CDragListBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cdraglistboxbegindrag"></a><a name="begindrag"></a> CDragListBox:: BeginDrag

Chiamato dal framework quando si verifica un evento che potrebbe iniziare un'operazione di trascinamento, ad esempio premendo il pulsante sinistro del mouse.

```
virtual BOOL BeginDrag(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) che contiene le coordinate dell'elemento trascinato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il trascinamento è consentito; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione se si vuole controllare cosa accade quando inizia un'operazione di trascinamento. L'implementazione predefinita acquisisce il mouse e rimane in modalità di trascinamento fino a quando l'utente non fa clic sul pulsante sinistro o destro del mouse oppure preme ESC, a quel punto l'operazione di trascinamento viene annullata.

## <a name="cdraglistboxcanceldrag"></a><a name="canceldrag"></a> CDragListBox:: CancelDrag

Chiamata eseguita dal framework quando un'operazione di trascinamento è stata annullata.

```
virtual void CancelDrag(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) che contiene le coordinate dell'elemento trascinato.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione per gestire qualsiasi elaborazione speciale per il controllo casella di riepilogo.

## <a name="cdraglistboxcdraglistbox"></a><a name="cdraglistbox"></a> CDragListBox:: CDragListBox

Costruisce un oggetto `CDragListBox`.

```
CDragListBox();
```

## <a name="cdraglistboxdragging"></a><a name="dragging"></a> CDragListBox::D ragging

Chiamata eseguita dal framework quando un elemento della casella di riepilogo viene trascinato all'interno dell' `CDragListBox` oggetto.

```
virtual UINT Dragging(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) che contiene le coordinate dello schermo x e y del cursore.

### <a name="return-value"></a>Valore restituito

ID risorsa del cursore da visualizzare. Sono possibili i seguenti valori:

- DL_COPYCURSOR indica che l'elemento verrà copiato.

- DL_MOVECURSOR indica che l'elemento verrà spostato.

- DL_STOPCURSOR indica che l'obiettivo di rilascio corrente non è accettabile.

### <a name="remarks"></a>Commenti

Il comportamento predefinito restituisce DL_MOVECURSOR. Eseguire l'override di questa funzione se si desidera fornire funzionalità aggiuntive.

## <a name="cdraglistboxdrawinsert"></a><a name="drawinsert"></a> CDragListBox::D rawInsert

Chiamato dal Framework per tracciare la Guida di inserimento prima dell'elemento con l'indice indicato.

```
virtual void DrawInsert(int nItem);
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Indice in base zero del punto di inserimento.

### <a name="remarks"></a>Commenti

Il valore-1 Cancella la Guida di inserimento. Eseguire l'override di questa funzione per modificare l'aspetto o il comportamento della Guida di inserimento.

## <a name="cdraglistboxdropped"></a><a name="dropped"></a> CDragListBox::D ropped

Chiamata eseguita dal framework quando un elemento viene eliminato all'interno di un `CDragListBox` oggetto.

```
virtual void Dropped(
    int nSrcIndex,
    CPoint pt);
```

### <a name="parameters"></a>Parametri

*nSrcIndex*<br/>
Specifica l'indice in base zero della stringa eliminata.

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) che contiene le coordinate del sito di rilascio.

### <a name="remarks"></a>Commenti

Il comportamento predefinito copia l'elemento casella di riepilogo e i relativi dati nella nuova posizione, quindi Elimina l'elemento originale. Eseguire l'override di questa funzione per personalizzare il comportamento predefinito, ad esempio per consentire il trascinamento delle copie degli elementi della casella di riepilogo in altre posizioni all'interno dell'elenco.

## <a name="cdraglistboxitemfrompt"></a><a name="itemfrompt"></a> CDragListBox:: ItemFromPt

Chiamare questa funzione per recuperare l'indice in base zero dell'elemento della casella di riepilogo situato in *PT*.

```
int ItemFromPt(
    CPoint pt,
    BOOL bAutoScroll = TRUE) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) che contiene le coordinate di un punto all'interno della casella di riepilogo.

*bAutoScroll*<br/>
Diverso da zero se lo scorrimento è consentito; in caso contrario, 0.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento della casella di riepilogo di trascinamento.

## <a name="see-also"></a>Vedi anche

[TSTCON di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)
