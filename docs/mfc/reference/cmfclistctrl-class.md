---
title: CMFCListCtrl (classe)
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
ms.openlocfilehash: 63fbfd236ed98eee3b90f4a20b191817026903c7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370777"
---
# <a name="cmfclistctrl-class"></a>CMFCListCtrl (classe)

La `CMFCListCtrl` classe estende la funzionalità della classe [CListCtrl](../../mfc/reference/clistctrl-class.md) supportando la funzionalità avanzata del controllo intestazione della [classe CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md).

## <a name="syntax"></a>Sintassi

```
class CMFCListCtrl : public CListCtrl
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCListCtrl::EnableMarkSortedColumn](#enablemarksortedcolumn)|Consente di contrassegnare una colonna ordinata con un colore di sfondo diverso.|
|[CMFCListCtrl::EnableMultipleSort](#enablemultiplesort)|Attiva la modalità di ordinamento multiplo.|
|[CMFCListCtrl::GetHeaderCtrl](#getheaderctrl)|Restituisce un riferimento al controllo intestazione sottolineato.|
|[CMFCListCtrl::IsMultipleSort](#ismultiplesort)|Controlla se il controllo elenco è in modalità di ordinamento multiplo.|
|[CMFCListCtrl::OnCompareItems](#oncompareitems)|Chiamato dal framework quando è necessario confrontare due elementi del controllo elenco.|
|[CMFCListCtrl::OnGetCellBkColor](#ongetcellbkcolor)|Chiamato dal framework quando deve determinare il colore di sfondo di una singola cella.|
|[CMFCListCtrl::OnGetCellFont](#ongetcellfont)|Chiamato dal framework quando deve ottenere il tipo di carattere per la cella da disegnare.|
|[CMFCListCtrl::OnGetCellTextColor](#ongetcelltextcolor)|Chiamato dal framework quando deve determinare il colore del testo di una singola cella.|
|[CMFCListCtrl::RemoveSortColumn](#removesortcolumn)|Rimuove una colonna di ordinamento dall'elenco delle colonne ordinate.|
|[CMFCListCtrl::SetSortColumn](#setsortcolumn)|Imposta la colonna ordinata corrente e l'ordinamento.|
|[CMFCListCtrl::Sort](#sort)|Ordina il controllo elenco.|

## <a name="remarks"></a>Osservazioni

`CMFCListCtrl`offre due miglioramenti alla classe [CListCtrl](../../mfc/reference/clistctrl-class.md) Class. In primo luogo, indica che l'ordinamento delle colonne è un'opzione disponibile disegnando automaticamente una freccia di ordinamento sull'intestazione. In secondo luogo, supporta l'ordinamento dei dati su più colonne contemporaneamente.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCListCtrl` . Nell'esempio viene illustrato come creare un controllo elenco, inserire colonne, inserire elementi, impostare il testo di un elemento e impostare il tipo di carattere del controllo elenco. Questo frammento di codice fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#25](../../mfc/codesnippet/cpp/cmfclistctrl-class_1.h)]
[!code-cpp[NVC_MFC_VisualStudioDemo#26](../../mfc/codesnippet/cpp/cmfclistctrl-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListCtrl](../../mfc/reference/clistctrl-class.md)

[CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxlistctrl.h

## <a name="cmfclistctrlenablemarksortedcolumn"></a><a name="enablemarksortedcolumn"></a>CMFCListCtrl::EnableMarkSortedColumn

Contrassegna le colonne ordinate con un colore di sfondo diverso.

```
void EnableMarkSortedColumn(
    BOOL bMark = TRUE,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*bMarchio*<br/>
[in] Parametro booleano che determina se abilitare un colore di sfondo diverso.

*bRedraw*<br/>
[in] Parametro booleano che determina se ridisegnare immediatamente il controllo.

### <a name="remarks"></a>Osservazioni

`EnableMarkSortedColumn`utilizza il `CDrawingManager::PixelAlpha` metodo per calcolare il colore da utilizzare per le colonne ordinate. Il colore selezionato si basa sul colore di sfondo normale.

## <a name="cmfclistctrlenablemultiplesort"></a><a name="enablemultiplesort"></a>CMFCListCtrl::EnableMultipleSort

Abilita l'ordinamento delle righe di dati nel controllo elenco in base a più colonne.

```
void EnableMultipleSort(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Valore Boolean che specifica se abilitare la modalità di ordinamento di più colonne.

### <a name="remarks"></a>Osservazioni

Quando si abilita l'ordinamento in base a più colonne, le colonne hanno una gerarchia. Le righe di dati verranno prima ordinate in base alla colonna primaria. Eventuali valori equivalenti vengono quindi ordinati in base a ogni colonna successiva in base alla priorità.

## <a name="cmfclistctrlgetheaderctrl"></a><a name="getheaderctrl"></a>CMFCListCtrl::GetHeaderCtrl

Restituisce un riferimento al controllo intestazione.

```
virtual CMFCHeaderCtrl& GetHeaderCtrl();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) sottostante.

### <a name="remarks"></a>Osservazioni

Il controllo intestazione per un controllo elenco è la finestra che contiene i titoli per le colonne. Di solito è posizionato direttamente sopra le colonne.

## <a name="cmfclistctrlismultiplesort"></a><a name="ismultiplesort"></a>CMFCListCtrl::IsMultipleSort

Controlla se il controllo elenco supporta attualmente l'ordinamento su più colonne.

```
BOOL IsMultipleSort() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il controllo elenco supporta l'ordinamento multiplo. FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Quando un [CMFCListCtrl classe](../../mfc/reference/cmfclistctrl-class.md) supporta l'ordinamento multiplo, l'utente può ordinare i dati nel controllo elenco in base a più colonne. Per abilitare l'ordinamento multiplo, chiamare [CMFCListCtrl::EnableMultipleSort](#enablemultiplesort).

## <a name="cmfclistctrloncompareitems"></a><a name="oncompareitems"></a>CMFCListCtrl::OnCompareItems

Il framework chiama questo metodo quando confronta due elementi.

```
virtual int OnCompareItems(
    LPARAM lParam1,
    LPARAM lParam2,
    int iColumn);
```

### <a name="parameters"></a>Parametri

*lParam1 (informazioni in base al taè*<br/>
[in] Primo elemento da confrontare.

*lParam2 (informazioni in base al taè*<br/>
[in] Secondo elemento da confrontare.

*Icolumn*<br/>
[in] Indice della colonna di cui questo metodo è ordinato.

### <a name="return-value"></a>Valore restituito

Intero che indica la posizione relativa dei due elementi. Un valore negativo indica che il primo elemento deve precedere il secondo, un valore positivo indica che il primo elemento deve seguire il secondo e zero indica che i due elementi sono equivalenti.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita restituisce sempre 0.The default implementation always returns 0. Eseguire l'override di questa funzione per fornire il proprio algoritmo di ordinamento.

## <a name="cmfclistctrlongetcellbkcolor"></a><a name="ongetcellbkcolor"></a>CMFCListCtrl::OnGetCellBkColor

Il framework chiama questo metodo quando deve determinare il colore di sfondo di una singola cella.

```
virtual COLORREF OnGetCellBkColor(
    int nRow,
    int nColumn);
```

### <a name="parameters"></a>Parametri

*nRiga*<br/>
[in] Riga della cella in questione.

*nColonna*<br/>
[in] Colonna della cella in questione.

### <a name="return-value"></a>Valore restituito

Un valore COLOREF che specifica il colore di sfondo della cella.

### <a name="remarks"></a>Osservazioni

L'implementazione `OnGetCellBkColor` predefinita di non utilizza i parametri `GetBkColor`di input forniti e chiama semplicemente . Pertanto, per impostazione predefinita, l'intero controllo elenco avrà lo stesso colore di sfondo. È possibile `OnGetCellBkColor` eseguire l'override in una classe derivata per contrassegnare singole celle con un colore di sfondo separato.

## <a name="cmfclistctrlongetcellfont"></a><a name="ongetcellfont"></a>CMFCListCtrl::OnGetCellFont

Il framework chiama questo metodo quando ottiene il tipo di carattere per una singola cella.

```
virtual HFONT OnGetCellFont(
    int nRow,
    int nColumn,
    DWORD dwData = 0);
```

### <a name="parameters"></a>Parametri

*nRiga*<br/>
[in] Riga della cella in questione.

*nColonna*<br/>
[in] Colonna della cella in questione.

*dwData (dati)*<br/>
[in] Dati definiti dall'utente. L'implementazione predefinita non utilizza questo parametro.

### <a name="return-value"></a>Valore restituito

Handle per il tipo di carattere utilizzato per la cella corrente.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo restituisce NULL. Tutte le celle in un controllo elenco hanno lo stesso tipo di carattere. Eseguire l'override di questo metodo per fornire tipi di carattere diversi per celle diverse.

## <a name="cmfclistctrlongetcelltextcolor"></a><a name="ongetcelltextcolor"></a>CMFCListCtrl::OnGetCellTextColor

Il framework chiama questo metodo quando deve determinare il colore del testo di una singola cella.

```
virtual COLORREF OnGetCellTextColor(
    int nRow,
    int nColumn);
```

### <a name="parameters"></a>Parametri

*nRiga*<br/>
[in] Riga della cella in questione.

*nColonna*<br/>
[in] Colonna della cella in questione.

### <a name="return-value"></a>Valore restituito

Un valore COLOREF che specifica il colore del testo della cella.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo chiama `GetTextColor` indipendentemente dai parametri di input. L'intero controllo elenco avrà lo stesso colore del testo. È possibile `OnGetCellTextColor` eseguire l'override in una classe derivata per contrassegnare singole celle con un colore di testo separato.

## <a name="cmfclistctrlremovesortcolumn"></a><a name="removesortcolumn"></a>CMFCListCtrl::RemoveSortColumn

Rimuove una colonna di ordinamento dall'elenco delle colonne ordinate.

```
void RemoveSortColumn(int iColumn);
```

### <a name="parameters"></a>Parametri

*Icolumn*<br/>
[in] Colonna da rimuovere.

### <a name="remarks"></a>Osservazioni

Questo metodo rimuove una colonna di ordinamento dal controllo intestazione. Chiama [CMFCHeaderCtrl::RemoveSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#removesortcolumn).

## <a name="cmfclistctrlsetsortcolumn"></a><a name="setsortcolumn"></a>CMFCListCtrl::SetSortColumn

Imposta la colonna ordinata corrente e l'ordinamento.

```
void SetSortColumn(
    int iColumn,
    BOOL bAscending = TRUE,
    BOOL bAdd = FALSE);
```

### <a name="parameters"></a>Parametri

*Icolumn*<br/>
[in] Colonna da ordinare.

*bAscendente*<br/>
[in] Valore booleano che specifica l'ordinamento.

*Baggiungi*<br/>
[in] Valore Boolean che specifica se il metodo aggiunge la colonna indicata da *iColumn* all'elenco delle colonne di ordinamento.

### <a name="remarks"></a>Osservazioni

Questo metodo passa i parametri di input al controllo intestazione utilizzando il metodo [CMFCHeaderCtrl::SetSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#setsortcolumn).

## <a name="cmfclistctrlsort"></a><a name="sort"></a>CMFCListCtrl::Sort

Ordina il controllo elenco.

```
virtual void Sort(
    int iColumn,
    BOOL bAscending = TRUE,
    BOOL bAdd = FALSE);
```

### <a name="parameters"></a>Parametri

*Icolumn*<br/>
[in] Colonna da ordinare.

*bAscendente*<br/>
[in] Valore booleano che specifica l'ordinamento.

*Baggiungi*<br/>
[in] Valore Boolean che specifica se questo metodo aggiunge la colonna indicata da *iColumn* all'elenco delle colonne di ordinamento.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)
