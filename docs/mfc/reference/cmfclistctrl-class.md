---
title: Classe CMFCListCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 495bf2a3eab9ceee4ca0bab337d590c1820905e8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33369622"
---
# <a name="cmfclistctrl-class"></a>Classe CMFCListCtrl
Il `CMFCListCtrl` classe estende la funzionalità di [CListCtrl (classe)](../../mfc/reference/clistctrl-class.md) classe supportando la funzionalità di controllo di intestazione avanzate di [classe CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCListCtrl : public CListCtrl  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCListCtrl::EnableMarkSortedColumn](#enablemarksortedcolumn)|Consente di contrassegnare una colonna ordinata con un colore di sfondo diversi.|  
|[CMFCListCtrl::EnableMultipleSort](#enablemultiplesort)|Consente a più modalità di ordinamento.|  
|[CMFCListCtrl::GetHeaderCtrl](#getheaderctrl)|Restituisce un riferimento al controllo header sottolineato.|  
|[CMFCListCtrl::IsMultipleSort](#ismultiplesort)|Controlla se il controllo elenco è in modalità di ordinamento più.|  
|[CMFCListCtrl::OnCompareItems](#oncompareitems)|Chiamato dal framework quando è necessario confrontare due elementi di controllo elenco.|  
|[CMFCListCtrl::OnGetCellBkColor](#ongetcellbkcolor)|Chiamato dal framework quando deve determinare il colore di sfondo di una singola cella.|  
|[CMFCListCtrl::OnGetCellFont](#ongetcellfont)|Chiamato dal framework quando è necessario ottenere il tipo di carattere per la cella da disegnare.|  
|[CMFCListCtrl::OnGetCellTextColor](#ongetcelltextcolor)|Chiamato dal framework quando deve determinare il colore del testo di una singola cella.|  
|[CMFCListCtrl::RemoveSortColumn](#removesortcolumn)|Rimuove una colonna di ordinamento dall'elenco di colonne ordinate.|  
|[CMFCListCtrl::SetSortColumn](#setsortcolumn)|Imposta la colonna ordinata corrente e l'ordinamento.|  
|[CMFCListCtrl::Sort](#sort)|Ordina l'elenco di controllo.|  
  
## <a name="remarks"></a>Note  
 `CMFCListCtrl` offre due miglioramenti apportati alla [CListCtrl (classe)](../../mfc/reference/clistctrl-class.md) classe. In primo luogo, indica che un ordinamento di colonne è un'opzione disponibile creando automaticamente una freccia di ordinamento nell'intestazione. In secondo luogo, supporta l'ordinamento su più colonne allo stesso tempo dei dati.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCListCtrl` classe. Nell'esempio viene illustrato come creare un elenco di controllo, inserire le colonne, inserire gli elementi, impostare il testo di un elemento e impostare il tipo di carattere del controllo elenco. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
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
  
##  <a name="enablemarksortedcolumn"></a>  CMFCListCtrl::EnableMarkSortedColumn  
 Contrassegna le colonne ordinate con un colore di sfondo diversi.  
  
```  
void EnableMarkSortedColumn(
    BOOL bMark = TRUE,  
    BOOL bRedraw = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMark`  
 Un parametro booleano che determina se abilitare un colore di sfondo diversi.  
  
 [in] `bRedraw`  
 Un parametro booleano che determina se ricreare immediatamente il controllo.  
  
### <a name="remarks"></a>Note  
 `EnableMarkSortedColumn` Usa il metodo `CDrawingManager::PixelAlpha` per calcolare il colore da utilizzare per le colonne ordinate. Il colore selezionato si basa il colore di sfondo regolare.  
  
##  <a name="enablemultiplesort"></a>  CMFCListCtrl::EnableMultipleSort  
 Abilita ordinamento le righe di dati nel controllo elenco in base a più colonne.  
  
```  
void EnableMultipleSort(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Valore booleano che specifica se abilitare più modalità di ordinamento di colonna.  
  
### <a name="remarks"></a>Note  
 Quando si attiva l'ordinamento in base a più colonne, le colonne hanno una gerarchia. Le righe di dati verranno ordinate prima in base alla colonna primaria. Eventuali valori equivalenti vengono ordinati in base a ogni colonna successivi in base alla priorità.  
  
##  <a name="getheaderctrl"></a>  CMFCListCtrl::GetHeaderCtrl  
 Restituisce un riferimento al controllo header.  
  
```  
virtual CMFCHeaderCtrl& GetHeaderCtrl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto sottostante [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il controllo di intestazione per un controllo elenco è la finestra che contiene i titoli di colonne. In genere si trovi direttamente sopra le colonne.  
  
##  <a name="ismultiplesort"></a>  CMFCListCtrl::IsMultipleSort  
 Controlla se il controllo elenco supporta attualmente l'ordinamento su più colonne.  
  
```  
BOOL IsMultipleSort() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il controllo elenco supporta l'ordinamento a più; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Quando un [CMFCListCtrl classe](../../mfc/reference/cmfclistctrl-class.md) supporta l'ordinamento di più, l'utente può ordinare i dati nel controllo elenco per più colonne. Per abilitare l'ordinamento di più, chiamare [CMFCListCtrl::EnableMultipleSort](#enablemultiplesort).  
  
##  <a name="oncompareitems"></a>  CMFCListCtrl::OnCompareItems  
 Il framework chiama questo metodo quando vengono confrontati due elementi.  
  
```  
virtual int OnCompareItems(
    LPARAM lParam1,  
    LPARAM lParam2,  
    int iColumn);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lParam1`  
 Il primo elemento da confrontare.  
  
 [in] `lParam2`  
 Il secondo elemento da confrontare.  
  
 [in] `iColumn`  
 Indice della colonna di ordinamento di questo metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Valore intero che indica la posizione relativa dei due elementi. Un valore negativo indica che il primo elemento deve precedere il secondo valore positivo indica che il primo elemento deve seguire il secondo e zero significa che i due elementi sono equivalenti.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce sempre 0. È necessario eseguire l'override di questa funzione per fornire un algoritmo di ordinamento.  
  
##  <a name="ongetcellbkcolor"></a>  CMFCListCtrl::OnGetCellBkColor  
 Il framework chiama questo metodo quando è necessario determinare il colore di sfondo di una singola cella.  
  
```  
virtual COLORREF OnGetCellBkColor(
    int nRow,  
    int nColumn);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nRow`  
 La riga della cella in questione.  
  
 [in] `nColumn`  
 La colonna della cella in questione.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `COLOREF` valore che specifica il colore di sfondo della cella.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di `OnGetCellBkColor` non utilizza i parametri di input forniti e invece di chiamare semplicemente `GetBkColor`. Pertanto, per impostazione predefinita, il controllo dell'intero elenco avrà lo stesso colore dello sfondo. È possibile eseguire l'override `OnGetCellBkColor` in una classe derivata per contrassegnare singole celle con un colore di sfondo separato.  
  
##  <a name="ongetcellfont"></a>  CMFCListCtrl::OnGetCellFont  
 Il framework chiama questo metodo quando ottiene il tipo di carattere per una singola cella.  
  
```  
virtual HFONT OnGetCellFont(
    int nRow,  
    int nColumn,  
    DWORD dwData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nRow`  
 La riga della cella in questione.  
  
 [in] `nColumn`  
 La colonna della cella in questione.  
  
 [in] `dwData`  
 Dati definiti dall'utente. L'implementazione predefinita non usare questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il tipo di carattere utilizzato per la cella corrente.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo restituisce `NULL`. Tutte le celle in un controllo elenco hanno lo stesso carattere. Eseguire l'override di questo metodo per fornire tipi di carattere diversi per diverse celle.  
  
##  <a name="ongetcelltextcolor"></a>  CMFCListCtrl::OnGetCellTextColor  
 Il framework chiama questo metodo quando è necessario determinare il colore del testo di una singola cella.  
  
```  
virtual COLORREF OnGetCellTextColor(
    int nRow,  
    int nColumn);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nRow`  
 La riga della cella in questione.  
  
 [in] `nColumn`  
 La colonna della cella in questione.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `COLOREF` valore che specifica il colore del testo della cella.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo chiama `GetTextColor` indipendentemente dal fatto di parametri di input. Il controllo dell'intero elenco avrà il colore del testo stesso. È possibile eseguire l'override `OnGetCellTextColor` in una classe derivata per contrassegnare singole celle con un colore del testo separato.  
  
##  <a name="removesortcolumn"></a>  CMFCListCtrl::RemoveSortColumn  
 Rimuove una colonna di ordinamento dall'elenco di colonne ordinate.  
  
```  
void RemoveSortColumn(int iColumn);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iColumn`  
 Colonna da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove il controllo intestazione di una colonna di ordinamento. Chiama [CMFCHeaderCtrl::RemoveSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#removesortcolumn).  
  
##  <a name="setsortcolumn"></a>  CMFCListCtrl::SetSortColumn  
 Imposta la colonna ordinata corrente e l'ordinamento.  
  
```  
void SetSortColumn(
    int iColumn,  
    BOOL bAscending = TRUE,  
    BOOL bAdd = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iColumn`  
 Colonna da ordinare.  
  
 [in] `bAscending`  
 Valore booleano che specifica l'ordinamento.  
  
 [in] `bAdd`  
 Valore booleano che specifica se il metodo aggiunge la colonna indicata da `iColumn` all'elenco di colonne di ordinamento.  
  
### <a name="remarks"></a>Note  
 Questo metodo passa i parametri di input per il controllo intestazione utilizzando il metodo [CMFCHeaderCtrl::SetSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#setsortcolumn).  
  
##  <a name="sort"></a>  CMFCListCtrl::Sort  
 Ordina l'elenco di controllo.  
  
```  
virtual void Sort(
    int iColumn,  
    BOOL bAscending = TRUE,  
    BOOL bAdd = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iColumn`  
 Colonna da ordinare.  
  
 [in] `bAscending`  
 Valore booleano che specifica l'ordinamento.  
  
 [in] `bAdd`  
 Valore booleano che specifica se questo metodo aggiunge la colonna indicata da `iColumn` all'elenco di colonne di ordinamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CListCtrl](../../mfc/reference/clistctrl-class.md)
