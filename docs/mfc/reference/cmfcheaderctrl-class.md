---
title: CMFCHeaderCtrl Class
ms.date: 11/04/2016
f1_keywords:
- CMFCHeaderCtrl
- AFXHEADERCTRL/CMFCHeaderCtrl
- AFXHEADERCTRL/CMFCHeaderCtrl::CMFCHeaderCtrl
- AFXHEADERCTRL/CMFCHeaderCtrl::EnableMultipleSort
- AFXHEADERCTRL/CMFCHeaderCtrl::GetColumnState
- AFXHEADERCTRL/CMFCHeaderCtrl::GetSortColumn
- AFXHEADERCTRL/CMFCHeaderCtrl::IsAscending
- AFXHEADERCTRL/CMFCHeaderCtrl::IsDialogControl
- AFXHEADERCTRL/CMFCHeaderCtrl::IsMultipleSort
- AFXHEADERCTRL/CMFCHeaderCtrl::RemoveSortColumn
- AFXHEADERCTRL/CMFCHeaderCtrl::SetSortColumn
- AFXHEADERCTRL/CMFCHeaderCtrl::OnDrawItem
- AFXHEADERCTRL/CMFCHeaderCtrl::OnDrawSortArrow
- AFXHEADERCTRL/CMFCHeaderCtrl::OnFillBackground
helpviewer_keywords:
- CMFCHeaderCtrl [MFC], CMFCHeaderCtrl
- CMFCHeaderCtrl [MFC], EnableMultipleSort
- CMFCHeaderCtrl [MFC], GetColumnState
- CMFCHeaderCtrl [MFC], GetSortColumn
- CMFCHeaderCtrl [MFC], IsAscending
- CMFCHeaderCtrl [MFC], IsDialogControl
- CMFCHeaderCtrl [MFC], IsMultipleSort
- CMFCHeaderCtrl [MFC], RemoveSortColumn
- CMFCHeaderCtrl [MFC], SetSortColumn
- CMFCHeaderCtrl [MFC], OnDrawItem
- CMFCHeaderCtrl [MFC], OnDrawSortArrow
- CMFCHeaderCtrl [MFC], OnFillBackground
ms.assetid: 2f5fbf7b-5c75-42db-9216-640b1628f777
ms.openlocfilehash: 0a6b0cf39861ba995acff71fc40cf44ae5114642
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367452"
---
# <a name="cmfcheaderctrl-class"></a>CMFCHeaderCtrl Class

La `CMFCHeaderCtrl` classe supporta l'ordinamento di più colonne in un controllo intestazione.

## <a name="syntax"></a>Sintassi

```
class CMFCHeaderCtrl : public CHeaderCtrl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCHeaderCtrl::CMFCHeaderCtrl](#cmfcheaderctrl)|Costruisce un oggetto `CMFCHeaderCtrl`.|
|`CMFCHeaderCtrl::~CMFCHeaderCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort)|Abilita o disabilita la modalità di *ordinamento di più* colonne per il controllo intestazione corrente.|
|[CMFCHeaderCtrl::GetColumnState](#getcolumnstate)|Indica se una colonna non è ordinata o è ordinata in ordine crescente o decrescente.|
|[CMFCHeaderCtrl::GetSortColumn](#getsortcolumn)|Recupera l'indice in base zero della prima colonna ordinata nel controllo intestazione.|
|`CMFCHeaderCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCHeaderCtrl::IsAscending](#isascending)|Indica se una colonna nel controllo intestazione è ordinata in ordine crescente.|
|[CMFCHeaderCtrl::IsDialogControl](#isdialogcontrol)|Indica se la finestra padre del controllo intestazione corrente è una finestra di dialogo.|
|[CMFCHeaderCtrl::IsMultipleSort](#ismultiplesort)|Indica se il controllo intestazione corrente è in modalità di *ordinamento a più* colonne.|
|[CMFCHeaderCtrl::RemoveSortColumn](#removesortcolumn)|Rimuove la colonna specificata dall'elenco delle colonne di ordinamento.|
|[CMFCHeaderCtrl::SetSortColumn](#setsortcolumn)|Imposta l'ordinamento di una colonna specificata in un controllo intestazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCHeaderCtrl::OnDrawItem](#ondrawitem)|Chiamato dal framework per disegnare una colonna del controllo intestazione.|
|[CMFCHeaderCtrl::OnDrawSortArrow](#ondrawsortarrow)|Chiamato dal framework per disegnare la freccia di ordinamento.|
|[CMFCHeaderCtrl::OnFillBackground](#onfillbackground)|Chiamato dal framework per riempire lo sfondo di una colonna di controllo intestazione.|

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCHeaderCtrl` costruire un oggetto della classe e come abilitare la modalità di *ordinamento* di più colonne per il controllo intestazione corrente.

[!code-cpp[NVC_MFC_RibbonApp#24](../../mfc/reference/codesnippet/cpp/cmfcheaderctrl-class_1.cpp)]

## <a name="remarks"></a>Osservazioni

La `CMFCHeaderCtrl` classe disegna una freccia di ordinamento in una colonna di controllo intestazione per indicare che la colonna è ordinata. Utilizzare la modalità di *ordinamento* di più colonne se un set di colonne nel controllo elenco padre ( [Classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)) può essere ordinato contemporaneamente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)

[CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxheaderctrl.h

## <a name="cmfcheaderctrlcmfcheaderctrl"></a><a name="cmfcheaderctrl"></a>CMFCHeaderCtrl::CMFCHeaderCtrl

Costruisce un oggetto `CMFCHeaderCtrl`.

```
CMFCHeaderCtrl::CMFCHeaderCtrl()
```

### <a name="remarks"></a>Osservazioni

Questo costruttore inizializza le seguenti variabili membro sui valori specificati:

|Variabile membro|Valore|
|---------------------|-----------|
|`m_bIsMousePressed`|FALSE|
|`m_bMultipleSort`|FALSE|
|`m_bAscending`|TRUE|
|`m_nHighlightedItem`|-1|
|`m_bTracked`|FALSE|
|`m_bIsDlgControl`|FALSE|
|`m_hFont`|NULL|

## <a name="cmfcheaderctrlenablemultiplesort"></a><a name="enablemultiplesort"></a>CMFCHeaderCtrl::EnableMultipleSort

Abilita o disabilita la modalità di *ordinamento di più* colonne per il controllo intestazione corrente.

```
void EnableMultipleSort(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare la modalità di ordinamento a più colonne. FALSE per disabilitare la modalità di ordinamento di più colonne e per rimuovere tutte le colonne dall'elenco delle colonne ordinate. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per abilitare o disabilitare la modalità di ordinamento di più colonne. Due o più colonne possono partecipare a un ordinamento se il controllo intestazione è in modalità di ordinamento a più colonne.

## <a name="cmfcheaderctrlgetcolumnstate"></a><a name="getcolumnstate"></a>CMFCHeaderCtrl::GetColumnState

Indica se una colonna non è ordinata o è ordinata in ordine crescente o decrescente.

```
int GetColumnState(int iColumn) const;
```

### <a name="parameters"></a>Parametri

*Icolumn*<br/>
[in] Indice in base zero di una colonna.

### <a name="return-value"></a>Valore restituito

Valore che indica lo stato di ordinamento della colonna specificata. La tabella seguente elenca i possibili valori:

|valore|Descrizione|
|-----------|-----------------|
|-1|Ordinato in ordine decrescente.|
|0|Non ordinato.|
|1|Ordinato in ordine crescente.|

### <a name="remarks"></a>Osservazioni

## <a name="cmfcheaderctrlgetsortcolumn"></a><a name="getsortcolumn"></a>CMFCHeaderCtrl::GetSortColumn

Recupera l'indice in base zero della prima colonna ordinata nel controllo intestazione.

```
int GetSortColumn() const;
```

### <a name="return-value"></a>Valore restituito

Indice di una colonna ordinata oppure -1 se non viene trovata alcuna colonna ordinata.

### <a name="remarks"></a>Osservazioni

Se il controllo intestazione è in modalità di *ordinamento a più* colonne ed è stata compilata l'applicazione in modalità di debug, questo metodo asserisce e consiglia di utilizzare il [metodo CMFCHeaderCtrl::GetColumnState](#getcolumnstate) . Se il controllo intestazione è in modalità di ordinamento a più colonne ed è stata compilata l'applicazione in modalità di vendita al dettaglio, questo metodo restituisce -1.

## <a name="cmfcheaderctrlisascending"></a><a name="isascending"></a>CMFCHeaderCtrl::IsAscending

Indica se una colonna nel controllo intestazione è ordinata in ordine crescente.

```
BOOL IsAscending() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe qualsiasi colonna nel controllo intestazione è ordinata in ordine crescente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il valore restituito da questo metodo viene utilizzato per visualizzare la freccia di ordinamento appropriata nell'elemento del controllo intestazione. Utilizzare il [CMFCHeaderCtrl::SetSortColumn](#setsortcolumn) metodo per impostare l'ordinamento.

## <a name="cmfcheaderctrlisdialogcontrol"></a><a name="isdialogcontrol"></a>CMFCHeaderCtrl::IsDialogControl

Indica se la finestra padre del controllo intestazione corrente è una finestra di dialogo.

```
BOOL IsDialogControl() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la finestra padre del controllo intestazione corrente è una finestra di dialogo. in caso contrario, FALSE.

## <a name="cmfcheaderctrlismultiplesort"></a><a name="ismultiplesort"></a>CMFCHeaderCtrl::IsMultipleSort

Indica se il controllo intestazione corrente è in modalità di *ordinamento a più* colonne.

```
BOOL IsMultipleSort() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe è attivata la modalità di ordinamento di più colonne. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare il [CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort) metodo per abilitare o disabilitare la modalità di ordinamento a più colonne. Due o più colonne possono partecipare a un ordinamento se il controllo intestazione è in modalità di ordinamento a più colonne.

## <a name="cmfcheaderctrlondrawitem"></a><a name="ondrawitem"></a>CMFCHeaderCtrl::OnDrawItem

Chiamato dal framework per disegnare una colonna del controllo intestazione.

```
virtual void OnDrawItem(
    CDC* pDC,
    int iItem,
    CRect rect,
    BOOL bIsPressed,
    BOOL bIsHighlighted);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*iItem*<br/>
[in] Indice in base zero dell'elemento da disegnare.

*Rect*<br/>
[in] Rettangolo di delimitazione dell'elemento da disegnare.

*bIsPressed*<br/>
[in] TRUE per disegnare l'elemento nello stato premuto; in caso contrario, FALSE.

*bIsEvidenziato*<br/>
[in] TRUE per disegnare l'elemento nello stato evidenziato; in caso contrario, FALSE.

## <a name="cmfcheaderctrlondrawsortarrow"></a><a name="ondrawsortarrow"></a>CMFCHeaderCtrl::OnDrawSortArrow

Chiamato dal framework per disegnare la freccia di ordinamento.

```
virtual void OnDrawSortArrow(
    CDC* pDC,
    CRect rectArrow);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*rectArrow*<br/>
[in] Rettangolo di delimitazione della freccia di ordinamento.

## <a name="cmfcheaderctrlonfillbackground"></a><a name="onfillbackground"></a>CMFCHeaderCtrl::OnFillBackground

Chiamato dal framework per riempire lo sfondo di una colonna di controllo intestazione.

```
virtual void OnFillBackground(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcheaderctrlremovesortcolumn"></a><a name="removesortcolumn"></a>CMFCHeaderCtrl::RemoveSortColumn

Rimuove la colonna specificata dall'elenco delle colonne di ordinamento.

```
void RemoveSortColumn(int iColumn);
```

### <a name="parameters"></a>Parametri

*Icolumn*<br/>
[in] Indice in base zero della colonna da rimuovere.

## <a name="cmfcheaderctrlsetsortcolumn"></a><a name="setsortcolumn"></a>CMFCHeaderCtrl::SetSortColumn

Imposta l'ordinamento di una colonna specificata in un controllo intestazione.

```
void SetSortColumn(
    int iColumn,
    BOOL bAscending=TRUE,
    BOOL bAdd=FALSE);
```

### <a name="parameters"></a>Parametri

*Icolumn*<br/>
[in] Indice in base zero di una colonna di controllo intestazione. Se questo parametro è minore di zero, questo metodo rimuove tutte le colonne dall'elenco delle colonne di ordinamento.

*bAscendente*<br/>
[in] Specifica l'ordinamento della colonna specificata dal parametro *iColumn.* TRUE per impostare l'ordine crescente; FALSE per impostare l'ordine decrescente. Il valore predefinito è TRUE.

*Baggiungi*<br/>
[in] TRUE per impostare l'ordinamento della colonna specificata dal parametro *iColumn.*

Se il controllo intestazione corrente è in modalità di *ordinamento a più* colonne, questo metodo aggiunge la colonna specificata all'elenco delle colonne di ordinamento. Utilizzare [CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort) per impostare la modalità di ordinamento di più colonne.

Se non è impostata la modalità di ordinamento di più colonne e questo metodo viene compilato in modalità di debug, questo metodo esegue l'asserzione. Se non è impostata la modalità di ordinamento di più colonne e questo metodo viene compilato in modalità di vendita al dettaglio, questo metodo rimuove prima tutte le colonne dall'elenco delle colonne di ordinamento e quindi aggiunge la colonna specificata all'elenco.

FALSE per rimuovere prima tutte le colonne dall'elenco delle colonne di ordinamento e quindi aggiungere la colonna specificata all'elenco. Il valore predefinito è FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per impostare l'ordinamento di una colonna. Se necessario, questo metodo aggiunge la colonna all'elenco delle colonne di ordinamento. Il controllo intestazione utilizza l'ordinamento per disegnare una freccia di ordinamento che punta verso l'alto o verso il basso.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCListCtrl (classe)](../../mfc/reference/cmfclistctrl-class.md)
