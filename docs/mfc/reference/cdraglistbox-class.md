---
title: Classe CDragListBox | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CDragListBox [MFC], CDragListBox
- CDragListBox [MFC], BeginDrag
- CDragListBox [MFC], CancelDrag
- CDragListBox [MFC], Dragging
- CDragListBox [MFC], DrawInsert
- CDragListBox [MFC], Dropped
- CDragListBox [MFC], ItemFromPt
ms.assetid: fee20b42-60ae-4aa9-83f9-5a3d9b96e33b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2d9e4fb2835870fa9c3a46dcd5cda5b0cca600a7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46432984"
---
# <a name="cdraglistbox-class"></a>Classe CDragListBox

Oltre a fornire la funzionalità di una casella di riepilogo di Windows, il `CDragListBox` classe consente all'utente di spostare elementi casella di riepilogo, ad esempio nomi di file, all'interno della casella di elenco.

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
|[CDragListBox::BeginDrag](#begindrag)|Chiamato dal framework quando viene avviata un'operazione di trascinamento.|
|[CDragListBox::CancelDrag](#canceldrag)|Chiamato dal framework quando viene annullata un'operazione di trascinamento.|
|[CDragListBox::Dragging](#dragging)|Chiamato dal framework durante un'operazione di trascinamento.|
|[CDragListBox::DrawInsert](#drawinsert)|Consente di disegnare la Guida di inserimento della casella di riepilogo di trascinamento.|
|[CDragListBox::Dropped](#dropped)|Chiamato dal framework dopo l'elemento è stato eliminato.|
|[CDragListBox::ItemFromPt](#itemfrompt)|Restituisce le coordinate dell'elemento da trascinare.|

## <a name="remarks"></a>Note

Le caselle di riepilogo con questa funzionalità consentono agli utenti di ordinare gli elementi in un elenco in qualsiasi modo, è particolarmente utile per loro. Per impostazione predefinita, la casella di riepilogo sposterà l'elemento nella nuova posizione nell'elenco. Tuttavia, `CDragListBox` oggetti possono essere personalizzati per copiare elementi anziché spostarli.

Il controllo casella di riepilogo è associato il `CDragListBox` classe non può disporre di LBS_SORT o lo stile LBS_MULTIPLESELECT. Per una descrizione di stili casella di riepilogo, vedere [stili di casella di riepilogo](../../mfc/reference/styles-used-by-mfc.md#list-box-styles).

Per usare una casella di riepilogo di trascinamento in una finestra di dialogo esistenti dell'applicazione, aggiungere un controllo casella di riepilogo al modello di finestra di dialogo utilizzando la finestra di dialogo e quindi assegnare una variabile membro (della categoria `Control` e il tipo di variabile `CDragListBox`) corrispondente alla casella di riepilogo Controllare nel modello di finestra di dialogo.

Per altre informazioni sull'assegnazione di controlli per le variabili membro, vedere [scelta rapida per la definizione delle variabili membro per i controlli di finestra di dialogo](../../windows/defining-member-variables-for-dialog-controls.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListBox](../../mfc/reference/clistbox-class.md)

`CDragListBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="begindrag"></a>  CDragListBox::BeginDrag

Chiamata eseguita dal framework quando si verifica un evento che è stato possibile avviare un'operazione di trascinamento, ad esempio premendo il pulsante sinistro del mouse.

```
virtual BOOL BeginDrag(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate dell'elemento da trascinare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il trascinamento è consentito, in caso contrario 0.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione se si vuole controllare cosa accade quando viene avviata un'operazione di trascinamento. L'implementazione predefinita consente di acquisire il puntatore del mouse e rimane in modalità di trascinamento, fino a quando l'utente fa clic sul pulsante sinistro o destro del mouse o preme ESC, momento in cui viene annullata l'operazione di trascinamento.

##  <a name="canceldrag"></a>  CDragListBox::CancelDrag

Chiamato dal framework quando viene annullata un'operazione di trascinamento.

```
virtual void CancelDrag(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate dell'elemento da trascinare.

### <a name="remarks"></a>Note

Eseguire l'override della funzione per gestire qualsiasi elaborazione speciale per il controllo casella di riepilogo.

##  <a name="cdraglistbox"></a>  CDragListBox::CDragListBox

Costruisce un oggetto `CDragListBox`.

```
CDragListBox();
```

##  <a name="dragging"></a>  CDragListBox::Dragging

Chiamato dal framework quando un elemento di casella di riepilogo viene trascinato all'interno di `CDragListBox` oggetto.

```
virtual UINT Dragging(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto contenente gli assi x e y del cursore coordinate dello schermo.

### <a name="return-value"></a>Valore restituito

L'ID risorsa del cursore da visualizzare. Sono possibili i seguenti valori:

- DL_COPYCURSOR indica che l'elemento verrà copiato.

- DL_MOVECURSOR indica che verrà spostato l'elemento.

- DL_STOPCURSOR indica che l'obiettivo di rilascio corrente non è accettabile.

### <a name="remarks"></a>Note

Il comportamento predefinito restituisce DL_MOVECURSOR. Eseguire l'override di questa funzione se si desidera fornire funzionalità aggiuntive.

##  <a name="drawinsert"></a>  CDragListBox::DrawInsert

Chiamata eseguita dal framework per disegnare la Guida di inserimento prima dell'elemento con l'indice indicato.

```
virtual void DrawInsert(int nItem);
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Indice in base zero del punto di inserimento.

### <a name="remarks"></a>Note

Un valore di - 1 viene cancellata la Guida di inserimento. Eseguire l'override di questa funzione per modificare l'aspetto o il comportamento della Guida di inserimento.

##  <a name="dropped"></a>  CDragListBox::Dropped

Chiamato dal framework quando viene eliminato un elemento all'interno di un `CDragListBox` oggetto.

```
virtual void Dropped(
    int nSrcIndex,
    CPoint pt);
```

### <a name="parameters"></a>Parametri

*nSrcIndex*<br/>
Specifica l'indice in base zero della stringa eliminata.

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate del sito di destinazione.

### <a name="remarks"></a>Note

Il comportamento predefinito consente di copiare l'elemento casella di riepilogo e i relativi dati nella nuova posizione e quindi Elimina l'elemento originale. Eseguire l'override di questa funzione per personalizzare il comportamento predefinito, ad esempio l'abilitazione di copie di elementi di casella di riepilogo per essere trascinato in altre posizioni all'interno dell'elenco.

##  <a name="itemfrompt"></a>  CDragListBox::ItemFromPt

Chiamata di questa funzione per recuperare l'indice in base zero dell'elemento di casella di elenco che si trova in *pt*.

```
int ItemFromPt(
    CPoint pt,
    BOOL bAutoScroll = TRUE) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto contenente le coordinate di un punto all'interno della casella di elenco.

*bAutoScroll*<br/>
Diverso da zero se è consentito lo scorrimento, in caso contrario 0.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento di casella dell'elenco di trascinamento.

## <a name="see-also"></a>Vedere anche

[Esempio MFC TSTCON](../../visual-cpp-samples.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)
