---
description: 'Altre informazioni su: classe CMFCHeaderCtrl'
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
ms.openlocfilehash: a6be476e095dc4a013705657e259a90d7cafe0d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265376"
---
# <a name="cmfcheaderctrl-class"></a>CMFCHeaderCtrl Class

La `CMFCHeaderCtrl` classe supporta l'ordinamento di più colonne in un controllo intestazione.

## <a name="syntax"></a>Sintassi

```
class CMFCHeaderCtrl : public CHeaderCtrl
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCHeaderCtrl:: CMFCHeaderCtrl](#cmfcheaderctrl)|Costruisce un oggetto `CMFCHeaderCtrl`.|
|`CMFCHeaderCtrl::~CMFCHeaderCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCHeaderCtrl:: EnableMultipleSort](#enablemultiplesort)|Abilita o Disabilita la modalità di *ordinamento di più colonne* per il controllo intestazione corrente.|
|[CMFCHeaderCtrl:: GetColumnState](#getcolumnstate)|Indica se una colonna non è ordinata o se è ordinata in ordine crescente o decrescente.|
|[CMFCHeaderCtrl:: GetSortColumn](#getsortcolumn)|Recupera l'indice in base zero della prima colonna ordinata nel controllo intestazione.|
|`CMFCHeaderCtrl::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCHeaderCtrl:: Ascending](#isascending)|Indica se una colonna nel controllo intestazione è ordinata in ordine crescente.|
|[CMFCHeaderCtrl:: IsDialogControl](#isdialogcontrol)|Indica se la finestra padre del controllo intestazione corrente è una finestra di dialogo.|
|[CMFCHeaderCtrl:: IsMultipleSort](#ismultiplesort)|Indica se il controllo intestazione corrente è in modalità di *ordinamento a più colonne* .|
|[CMFCHeaderCtrl:: RemoveSortColumn](#removesortcolumn)|Rimuove la colonna specificata dall'elenco delle colonne di ordinamento.|
|[CMFCHeaderCtrl:: SetSortColumn](#setsortcolumn)|Imposta l'ordinamento di una colonna specificata in un controllo intestazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCHeaderCtrl:: OnDrawItem](#ondrawitem)|Chiamata eseguita dal Framework per creare una colonna di controllo intestazione.|
|[CMFCHeaderCtrl:: OnDrawSortArrow](#ondrawsortarrow)|Chiamato dal Framework per creare la freccia di ordinamento.|
|[CMFCHeaderCtrl:: OnFillBackground](#onfillbackground)|Chiamata eseguita dal Framework per riempire lo sfondo di una colonna di controllo intestazione.|

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCHeaderCtrl` classe e come abilitare la modalità di *ordinamento di più colonne* per il controllo intestazione corrente.

[!code-cpp[NVC_MFC_RibbonApp#24](../../mfc/reference/codesnippet/cpp/cmfcheaderctrl-class_1.cpp)]

## <a name="remarks"></a>Commenti

La `CMFCHeaderCtrl` classe disegna una freccia di ordinamento in una colonna di controllo intestazione per indicare che la colonna è ordinata. Usare la modalità di *ordinamento a più colonne* se un set di colonne nel controllo elenco padre ( [classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)) può essere ordinato nello stesso momento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)

[CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxheaderctrl. h

## <a name="cmfcheaderctrlcmfcheaderctrl"></a><a name="cmfcheaderctrl"></a> CMFCHeaderCtrl:: CMFCHeaderCtrl

Costruisce un oggetto `CMFCHeaderCtrl`.

```
CMFCHeaderCtrl::CMFCHeaderCtrl()
```

### <a name="remarks"></a>Commenti

Questo costruttore inizializza le variabili membro seguenti sui valori specificati:

|Variabile membro|Valore|
|---------------------|-----------|
|`m_bIsMousePressed`|FALSE|
|`m_bMultipleSort`|FALSE|
|`m_bAscending`|true|
|`m_nHighlightedItem`|-1|
|`m_bTracked`|FALSE|
|`m_bIsDlgControl`|FALSE|
|`m_hFont`|NULL|

## <a name="cmfcheaderctrlenablemultiplesort"></a><a name="enablemultiplesort"></a> CMFCHeaderCtrl:: EnableMultipleSort

Abilita o Disabilita la modalità di *ordinamento di più colonne* per il controllo intestazione corrente.

```cpp
void EnableMultipleSort(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per abilitare la modalità di ordinamento a più colonne; FALSE per disabilitare la modalità di ordinamento a più colonne e rimuovere le colonne dall'elenco delle colonne ordinate. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per abilitare o disabilitare la modalità di ordinamento di più colonne. Due o più colonne possono partecipare a un ordinamento se il controllo intestazione è in modalità di ordinamento a più colonne.

## <a name="cmfcheaderctrlgetcolumnstate"></a><a name="getcolumnstate"></a> CMFCHeaderCtrl:: GetColumnState

Indica se una colonna non è ordinata o se è ordinata in ordine crescente o decrescente.

```
int GetColumnState(int iColumn) const;
```

### <a name="parameters"></a>Parametri

*iColumn*<br/>
in Indice in base zero di una colonna.

### <a name="return-value"></a>Valore restituito

Valore che indica lo stato di ordinamento della colonna specificata. La tabella seguente elenca i possibili valori:

|Valore|Descrizione|
|-----------|-----------------|
|-1|Ordinato in ordine decrescente.|
|0|Non ordinato.|
|1|Ordinato in ordine crescente.|

### <a name="remarks"></a>Commenti

## <a name="cmfcheaderctrlgetsortcolumn"></a><a name="getsortcolumn"></a> CMFCHeaderCtrl:: GetSortColumn

Recupera l'indice in base zero della prima colonna ordinata nel controllo intestazione.

```
int GetSortColumn() const;
```

### <a name="return-value"></a>Valore restituito

Indice di una colonna ordinata oppure-1 se non viene trovata alcuna colonna ordinata.

### <a name="remarks"></a>Commenti

Se il controllo intestazione è in modalità di *ordinamento a più colonne* ed è stata compilata l'applicazione in modalità di debug, questo metodo dichiara e consiglia di usare il metodo [CMFCHeaderCtrl:: GetColumnState](#getcolumnstate) . Se il controllo intestazione è in modalità di ordinamento a più colonne ed è stata compilata l'applicazione in modalità definitiva, questo metodo restituisce-1.

## <a name="cmfcheaderctrlisascending"></a><a name="isascending"></a> CMFCHeaderCtrl:: Ascending

Indica se una colonna nel controllo intestazione è ordinata in ordine crescente.

```
BOOL IsAscending() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se una colonna nel controllo intestazione è ordinata in ordine crescente. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Il valore restituito da questo metodo viene utilizzato per visualizzare la freccia di ordinamento appropriata sull'elemento del controllo intestazione. Usare il metodo [CMFCHeaderCtrl:: SetSortColumn](#setsortcolumn) per impostare il tipo di ordinamento.

## <a name="cmfcheaderctrlisdialogcontrol"></a><a name="isdialogcontrol"></a> CMFCHeaderCtrl:: IsDialogControl

Indica se la finestra padre del controllo intestazione corrente è una finestra di dialogo.

```
BOOL IsDialogControl() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la finestra padre del controllo intestazione corrente è una finestra di dialogo; in caso contrario, FALSE.

## <a name="cmfcheaderctrlismultiplesort"></a><a name="ismultiplesort"></a> CMFCHeaderCtrl:: IsMultipleSort

Indica se il controllo intestazione corrente è in modalità di *ordinamento a più colonne* .

```
BOOL IsMultipleSort() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è abilitata la modalità di ordinamento a più colonne. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Usare il metodo [CMFCHeaderCtrl:: EnableMultipleSort](#enablemultiplesort) per abilitare o disabilitare la modalità di ordinamento di più colonne. Due o più colonne possono partecipare a un ordinamento se il controllo intestazione è in modalità di ordinamento a più colonne.

## <a name="cmfcheaderctrlondrawitem"></a><a name="ondrawitem"></a> CMFCHeaderCtrl:: OnDrawItem

Chiamata eseguita dal Framework per creare una colonna di controllo intestazione.

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
in Puntatore a un contesto di dispositivo.

*iItem*<br/>
in Indice in base zero dell'elemento da creare.

*Rect*<br/>
in Rettangolo delimitatore dell'elemento da creare.

*bIsPressed*<br/>
in TRUE per tracciare l'elemento nello stato premuto; in caso contrario, FALSE.

*bIsHighlighted*<br/>
in TRUE per tracciare l'elemento nello stato evidenziato; in caso contrario, FALSE.

## <a name="cmfcheaderctrlondrawsortarrow"></a><a name="ondrawsortarrow"></a> CMFCHeaderCtrl:: OnDrawSortArrow

Chiamato dal Framework per creare la freccia di ordinamento.

```
virtual void OnDrawSortArrow(
    CDC* pDC,
    CRect rectArrow);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*rectArrow*<br/>
in Rettangolo di delimitazione della freccia di ordinamento.

## <a name="cmfcheaderctrlonfillbackground"></a><a name="onfillbackground"></a> CMFCHeaderCtrl:: OnFillBackground

Chiamata eseguita dal Framework per riempire lo sfondo di una colonna di controllo intestazione.

```
virtual void OnFillBackground(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Commenti

## <a name="cmfcheaderctrlremovesortcolumn"></a><a name="removesortcolumn"></a> CMFCHeaderCtrl:: RemoveSortColumn

Rimuove la colonna specificata dall'elenco delle colonne di ordinamento.

```cpp
void RemoveSortColumn(int iColumn);
```

### <a name="parameters"></a>Parametri

*iColumn*<br/>
in Indice in base zero della colonna da rimuovere.

## <a name="cmfcheaderctrlsetsortcolumn"></a><a name="setsortcolumn"></a> CMFCHeaderCtrl:: SetSortColumn

Imposta l'ordinamento di una colonna specificata in un controllo intestazione.

```cpp
void SetSortColumn(
    int iColumn,
    BOOL bAscending=TRUE,
    BOOL bAdd=FALSE);
```

### <a name="parameters"></a>Parametri

*iColumn*<br/>
in Indice in base zero di una colonna di controllo intestazione. Se questo parametro è minore di zero, questo metodo rimuove tutte le colonne dall'elenco di colonne di ordinamento.

*bAscending*<br/>
in Specifica l'ordinamento della colonna specificata dal parametro *IColumn* . TRUE per impostare l'ordine crescente; FALSE per impostare l'ordine decrescente. Il valore predefinito è TRUE.

*bAdd*<br/>
in TRUE per impostare il tipo di ordinamento della colonna specificata dal parametro *IColumn* .

Se il controllo intestazione corrente è in modalità di *ordinamento a più colonne* , questo metodo aggiunge la colonna specificata all'elenco delle colonne di ordinamento. Usare [CMFCHeaderCtrl:: EnableMultipleSort](#enablemultiplesort) per impostare la modalità di ordinamento di più colonne.

Se la modalità di ordinamento a più colonne non è impostata e questo metodo viene compilato in modalità di debug, questo metodo esegue l'asserzione. Se la modalità di ordinamento a più colonne non è impostata e questo metodo viene compilato in modalità retail, questo metodo rimuove innanzitutto tutte le colonne dall'elenco di colonne di ordinamento, quindi aggiunge la colonna specificata all'elenco.

FALSE per rimuovere tutte le colonne dall'elenco di colonne di ordinamento, quindi aggiungere la colonna specificata all'elenco. Il valore predefinito è FALSE.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per impostare l'ordinamento di una colonna. Se necessario, questo metodo aggiunge la colonna all'elenco delle colonne di ordinamento. Il controllo Header usa il tipo di ordinamento per creare una freccia di ordinamento che punta verso l'alto o verso il basso.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)
