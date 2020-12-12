---
description: 'Altre informazioni su: classe CMFCListCtrl'
title: Classe CMFCListCtrl
ms.date: 07/30/2019
f1_keywords:
- CMFCListCtrl
- AFXLISTCTRL/CMFCListCtrl
- AFXLISTCTRL/CMFCListCtrl::EnableMarkSortedColumn
- AFXLISTCTRL/CMFCListCtrl::EnableMultipleSort
- AFXLISTCTRL/CMFCListCtrl::GetHeaderCtrl
- AFXLISTCTRL/CMFCListCtrl::IsMultipleSort
- AFXLISTCTRL/CMFCListCtrl::OnCompareItems
- AFXLISTCTRL/CMFCListCtrl::OnGetCellBkColor
- AFXLISTCTRL/CMFCListCtrl::OnGetCellFont
- AFXLISTCTRL/CMFCListCtrl::OnGetCellTextColor
- AFXLISTCTRL/CMFCListCtrl::RemoveSortColumn
- AFXLISTCTRL/CMFCListCtrl::SetSortColumn
- AFXLISTCTRL/CMFCListCtrl::Sort
helpviewer_keywords:
- CMFCListCtrl [MFC], EnableMarkSortedColumn
- CMFCListCtrl [MFC], EnableMultipleSort
- CMFCListCtrl [MFC], GetHeaderCtrl
- CMFCListCtrl [MFC], IsMultipleSort
- CMFCListCtrl [MFC], OnCompareItems
- CMFCListCtrl [MFC], OnGetCellBkColor
- CMFCListCtrl [MFC], OnGetCellFont
- CMFCListCtrl [MFC], OnGetCellTextColor
- CMFCListCtrl [MFC], RemoveSortColumn
- CMFCListCtrl [MFC], SetSortColumn
- CMFCListCtrl [MFC], Sort
ms.assetid: 50d16aee-138c-4f34-8690-cb75d544ef2e
ms.openlocfilehash: 6b62522b7b126552c3f49c423300fadb59f406f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265181"
---
# <a name="cmfclistctrl-class"></a>Classe CMFCListCtrl

La `CMFCListCtrl` classe estende la funzionalità della classe [classe CListCtrl](../../mfc/reference/clistctrl-class.md) supportando la funzionalità di controllo intestazione avanzata della [classe CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md).

## <a name="syntax"></a>Sintassi

```
class CMFCListCtrl : public CListCtrl
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCListCtrl:: EnableMarkSortedColumn](#enablemarksortedcolumn)|Consente di contrassegnare una colonna ordinata con un colore di sfondo diverso.|
|[CMFCListCtrl:: EnableMultipleSort](#enablemultiplesort)|Abilita più modalità di ordinamento.|
|[CMFCListCtrl:: GetHeaderCtrl](#getheaderctrl)|Restituisce un riferimento al controllo intestazione sottolineato.|
|[CMFCListCtrl:: IsMultipleSort](#ismultiplesort)|Verifica se il controllo elenco è in modalità di ordinamento multiplo.|
|[CMFCListCtrl:: OnCompareItems](#oncompareitems)|Chiamata eseguita dal framework quando deve confrontare due elementi di controllo elenco.|
|[CMFCListCtrl:: OnGetCellBkColor](#ongetcellbkcolor)|Chiamata eseguita dal framework quando deve determinare il colore di sfondo di una singola cella.|
|[CMFCListCtrl:: OnGetCellFont](#ongetcellfont)|Chiamata eseguita dal framework quando deve ottenere il tipo di carattere per la cella da disegnare.|
|[CMFCListCtrl:: OnGetCellTextColor](#ongetcelltextcolor)|Chiamata eseguita dal framework quando deve determinare il colore del testo di una singola cella.|
|[CMFCListCtrl:: RemoveSortColumn](#removesortcolumn)|Rimuove una colonna di ordinamento dall'elenco delle colonne ordinate.|
|[CMFCListCtrl:: SetSortColumn](#setsortcolumn)|Imposta la colonna ordinata corrente e il tipo di ordinamento.|
|[CMFCListCtrl:: Sort](#sort)|Ordina il controllo elenco.|

## <a name="remarks"></a>Commenti

`CMFCListCtrl` offre due miglioramenti alla classe di [classe CListCtrl](../../mfc/reference/clistctrl-class.md) . Indica innanzitutto che l'ordinamento delle colonne è un'opzione disponibile mediante la creazione automatica di una freccia di ordinamento nell'intestazione. In secondo luogo, supporta l'ordinamento dei dati su più colonne nello stesso momento.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCListCtrl` . Nell'esempio viene illustrato come creare un controllo elenco, inserire colonne, inserire elementi, impostare il testo di un elemento e impostare il tipo di carattere del controllo elenco. Questo frammento di codice fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#25](../../mfc/codesnippet/cpp/cmfclistctrl-class_1.h)]
[!code-cpp[NVC_MFC_VisualStudioDemo#26](../../mfc/codesnippet/cpp/cmfclistctrl-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListCtrl](../../mfc/reference/clistctrl-class.md)

[CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxlistctrl. h

## <a name="cmfclistctrlenablemarksortedcolumn"></a><a name="enablemarksortedcolumn"></a> CMFCListCtrl:: EnableMarkSortedColumn

Contrassegna le colonne ordinate con un colore di sfondo diverso.

```cpp
void EnableMarkSortedColumn(
    BOOL bMark = TRUE,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*bMark*<br/>
in Parametro booleano che determina se abilitare un colore di sfondo diverso.

*bRedraw*<br/>
in Parametro booleano che determina se ricreare immediatamente il controllo.

### <a name="remarks"></a>Commenti

`EnableMarkSortedColumn` Usa il metodo `CDrawingManager::PixelAlpha` per calcolare il colore da usare per le colonne ordinate. Il colore selezionato è basato sul colore di sfondo normale.

## <a name="cmfclistctrlenablemultiplesort"></a><a name="enablemultiplesort"></a> CMFCListCtrl:: EnableMultipleSort

Consente l'ordinamento delle righe di dati nel controllo elenco in base a più colonne.

```cpp
void EnableMultipleSort(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in Valore booleano che specifica se abilitare la modalità di ordinamento a più colonne.

### <a name="remarks"></a>Commenti

Quando si Abilita l'ordinamento in base a più colonne, le colonne dispongono di una gerarchia. Le righe di dati verranno prima ordinate in base alla colonna primaria. Tutti i valori equivalenti vengono ordinati in base a ogni colonna successiva in base alla priorità.

## <a name="cmfclistctrlgetheaderctrl"></a><a name="getheaderctrl"></a> CMFCListCtrl:: GetHeaderCtrl

Restituisce un riferimento al controllo intestazione.

```
virtual CMFCHeaderCtrl& GetHeaderCtrl();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) sottostante.

### <a name="remarks"></a>Commenti

Il controllo intestazione per un controllo elenco è la finestra che contiene i titoli per le colonne. In genere è posizionato direttamente sopra le colonne.

## <a name="cmfclistctrlismultiplesort"></a><a name="ismultiplesort"></a> CMFCListCtrl:: IsMultipleSort

Verifica se il controllo elenco supporta attualmente l'ordinamento su più colonne.

```
BOOL IsMultipleSort() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il controllo elenco supporta più tipi; In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Quando una [classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md) supporta l'ordinamento multiplo, l'utente può ordinare i dati nel controllo elenco in base a più colonne. Per abilitare l'ordinamento multiplo, chiamare [CMFCListCtrl:: EnableMultipleSort](#enablemultiplesort).

## <a name="cmfclistctrloncompareitems"></a><a name="oncompareitems"></a> CMFCListCtrl:: OnCompareItems

Il Framework chiama questo metodo quando confronta due elementi.

```
virtual int OnCompareItems(
    LPARAM lParam1,
    LPARAM lParam2,
    int iColumn);
```

### <a name="parameters"></a>Parametri

*lParam1*<br/>
in Primo elemento da confrontare.

*lParam2*<br/>
in Secondo elemento da confrontare.

*iColumn*<br/>
in Indice della colonna che questo metodo sta ordinando.

### <a name="return-value"></a>Valore restituito

Intero che indica la posizione relativa dei due elementi. Un valore negativo indica che il primo elemento deve precedere il secondo, un valore positivo indica che il primo elemento deve seguire il secondo e zero indica che i due elementi sono equivalenti.

### <a name="remarks"></a>Commenti

L'implementazione predefinita restituisce sempre 0. Eseguire l'override di questa funzione per fornire un proprio algoritmo di ordinamento.

## <a name="cmfclistctrlongetcellbkcolor"></a><a name="ongetcellbkcolor"></a> CMFCListCtrl:: OnGetCellBkColor

Il Framework chiama questo metodo quando deve determinare il colore di sfondo di una singola cella.

```
virtual COLORREF OnGetCellBkColor(
    int nRow,
    int nColumn);
```

### <a name="parameters"></a>Parametri

*nRow*<br/>
in Riga della cella in questione.

*nColumn*<br/>
in Colonna della cella in questione.

### <a name="return-value"></a>Valore restituito

Valore COLOREF che specifica il colore di sfondo della cella.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di non `OnGetCellBkColor` utilizza i parametri di input forniti, bensì semplicemente chiama `GetBkColor` . Pertanto, per impostazione predefinita, l'intero controllo elenco avrà lo stesso colore di sfondo. È possibile eseguire l'override `OnGetCellBkColor` in una classe derivata per contrassegnare le singole celle con un colore di sfondo separato.

## <a name="cmfclistctrlongetcellfont"></a><a name="ongetcellfont"></a> CMFCListCtrl:: OnGetCellFont

Il Framework chiama questo metodo quando ottiene il tipo di carattere per una singola cella.

```
virtual HFONT OnGetCellFont(
    int nRow,
    int nColumn,
    DWORD dwData = 0);
```

### <a name="parameters"></a>Parametri

*nRow*<br/>
in Riga della cella in questione.

*nColumn*<br/>
in Colonna della cella in questione.

*dwData*<br/>
in Dati definiti dall'utente. L'implementazione predefinita non utilizza questo parametro.

### <a name="return-value"></a>Valore restituito

Handle per il tipo di carattere utilizzato per la cella corrente.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, questo metodo restituisce NULL. Tutte le celle di un controllo elenco hanno lo stesso tipo di carattere. Eseguire l'override di questo metodo per fornire tipi di carattere diversi per celle diverse.

## <a name="cmfclistctrlongetcelltextcolor"></a><a name="ongetcelltextcolor"></a> CMFCListCtrl:: OnGetCellTextColor

Il Framework chiama questo metodo quando deve determinare il colore del testo di una singola cella.

```
virtual COLORREF OnGetCellTextColor(
    int nRow,
    int nColumn);
```

### <a name="parameters"></a>Parametri

*nRow*<br/>
in Riga della cella in questione.

*nColumn*<br/>
in Colonna della cella in questione.

### <a name="return-value"></a>Valore restituito

Valore COLOREF che specifica il colore del testo della cella.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, questo metodo chiama `GetTextColor` indipendentemente dai parametri di input. L'intero controllo elenco avrà lo stesso colore del testo. È possibile eseguire l'override `OnGetCellTextColor` in una classe derivata per contrassegnare le singole celle con un colore del testo separato.

## <a name="cmfclistctrlremovesortcolumn"></a><a name="removesortcolumn"></a> CMFCListCtrl:: RemoveSortColumn

Rimuove una colonna di ordinamento dall'elenco delle colonne ordinate.

```cpp
void RemoveSortColumn(int iColumn);
```

### <a name="parameters"></a>Parametri

*iColumn*<br/>
in Colonna da rimuovere.

### <a name="remarks"></a>Commenti

Questo metodo rimuove una colonna di ordinamento dal controllo intestazione. Viene chiamato [CMFCHeaderCtrl:: RemoveSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#removesortcolumn).

## <a name="cmfclistctrlsetsortcolumn"></a><a name="setsortcolumn"></a> CMFCListCtrl:: SetSortColumn

Imposta la colonna ordinata corrente e il tipo di ordinamento.

```cpp
void SetSortColumn(
    int iColumn,
    BOOL bAscending = TRUE,
    BOOL bAdd = FALSE);
```

### <a name="parameters"></a>Parametri

*iColumn*<br/>
in Colonna da ordinare.

*bAscending*<br/>
in Valore booleano che specifica il tipo di ordinamento.

*bAdd*<br/>
in Valore booleano che specifica se il metodo aggiunge la colonna indicata da *IColumn* all'elenco di colonne di ordinamento.

### <a name="remarks"></a>Commenti

Questo metodo passa i parametri di input al controllo intestazione usando il metodo [CMFCHeaderCtrl:: SetSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#setsortcolumn).

## <a name="cmfclistctrlsort"></a><a name="sort"></a> CMFCListCtrl:: Sort

Ordina il controllo elenco.

```
virtual void Sort(
    int iColumn,
    BOOL bAscending = TRUE,
    BOOL bAdd = FALSE);
```

### <a name="parameters"></a>Parametri

*iColumn*<br/>
in Colonna da ordinare.

*bAscending*<br/>
in Valore booleano che specifica il tipo di ordinamento.

*bAdd*<br/>
in Valore booleano che specifica se questo metodo aggiunge la colonna indicata da *IColumn* all'elenco di colonne di ordinamento.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)
