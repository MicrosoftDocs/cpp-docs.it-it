---
title: Struttura CPrintInfo
ms.date: 11/04/2016
f1_keywords:
- CPrintInfo
helpviewer_keywords:
- CPrintInfo structure [MFC]
ms.assetid: 0b3de849-d050-4386-9a14-f4c1a25684f7
ms.openlocfilehash: cf0a1e6b7e742e950663f1ed9cc9ff2ddabd9d6f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364029"
---
# <a name="cprintinfo-structure"></a>Struttura CPrintInfo

Memorizza le informazioni su un lavoro di stampa o anteprima di stampa.

## <a name="syntax"></a>Sintassi

```
struct CPrintInfo
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintInfo::GetFromPage](#getfrompage)|Restituisce il numero della prima pagina stampata.|
|[CPrintInfo::GetMaxPage](#getmaxpage)|Restituisce il numero dell'ultima pagina del documento.|
|[CPrintInfo::GetMinPage](#getminpage)|Restituisce il numero della prima pagina del documento.|
|[CPrintInfo::GetOffsetPage](#getoffsetpage)|Restituisce il numero di pagine che precedono la prima pagina di un elemento DocObject stampato in un processo di stampa DocObject combinato.|
|[CPrintInfo::GetToPage](#gettopage)|Restituisce il numero dell'ultima pagina stampata.|
|[CPrintInfo::SetMaxPage](#setmaxpage)|Imposta il numero dell'ultima pagina del documento.|
|[CPrintInfo::SetMinPage](#setminpage)|Imposta il numero della prima pagina del documento.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintInfo::m_bContinuePrinting](#m_bcontinueprinting)|Contiene un flag che indica se il framework deve continuare il ciclo di stampa.|
|[CPrintInfo::m_bDirect](#m_bdirect)|Contiene un flag che indica se il documento viene stampato direttamente (senza visualizzare la finestra di dialogo Stampa).|
|[CPrintInfo::m_bDocObject](#m_bdocobject)|Contiene un flag che indica se il documento da stampare è un oggetto DocObject.|
|[CPrintInfo::m_bPreview](#m_bpreview)|Contiene un flag che indica se il documento è in anteprima.|
|[CPrintInfo::m_dwFlags](#m_dwflags)|Specifica le operazioni di stampa DocObject.|
|[CPrintInfo::m_lpUserData](#m_lpuserdata)|Contiene un puntatore a una struttura creata dall'utente.|
|[CPrintInfo::m_nCurPage](#m_ncurpage)|Identifica il numero della pagina attualmente stampata.|
|[CPrintInfo::m_nJobNumber](#m_njobnumber)|Specifica il numero di lavoro assegnato dal sistema operativo per il processo di stampa corrente|
|[CPrintInfo::m_nNumPreviewPages](#m_nnumpreviewpages)|Identifica il numero di pagine visualizzate nella finestra di anteprima; 1 o 2.|
|[CPrintInfo::m_nOffsetPage](#m_noffsetpage)|Specifica l'offset della prima pagina di un particolare DocObject in un processo di stampa DocObject combinato.|
|[CPrintInfo::m_pPD](#m_ppd)|Contiene un puntatore all'oggetto `CPrintDialog` utilizzato per la finestra di dialogo Stampa.|
|[CPrintInfo::m_rectDraw](#m_rectdraw)|Specifica un rettangolo che definisce l'area della pagina utilizzabile corrente.|
|[CPrintInfo::m_strPageDesc](#m_strpagedesc)|Contiene una stringa di formato per la visualizzazione dei numeri di pagina.|

## <a name="remarks"></a>Osservazioni

`CPrintInfo`è una struttura e non dispone di una classe base.

Il framework crea `CPrintInfo` un oggetto di ogni volta che viene scelto il comando Stampa o Anteprima di stampa e lo elimina quando il comando viene completato.

`CPrintInfo`contiene informazioni sia sul lavoro di stampa nel suo complesso, ad esempio l'intervallo di pagine da stampare, sia lo stato corrente del lavoro di stampa, ad esempio la pagina attualmente in fase di stampa. Alcune informazioni vengono archiviate in un oggetto associato [CPrintDialog](../../mfc/reference/cprintdialog-class.md) oggetto; questo oggetto contiene i valori immessi dall'utente nella finestra di dialogo Stampa.

Un `CPrintInfo` oggetto viene passato tra il framework e la classe di visualizzazione durante il processo di stampa e viene utilizzato per lo scambio di informazioni tra i due. Ad esempio, il framework informa la classe di visualizzazione quale pagina `m_nCurPage` del `CPrintInfo`documento da stampare assegnando un valore al membro di ; la classe di visualizzazione recupera il valore ed esegue la stampa effettiva della pagina specificata.

Un altro esempio è il caso in cui la lunghezza del documento non è nota fino a quando non viene stampato. In questo caso, la classe di visualizzazione verifica la fine del documento ogni volta che viene stampata una pagina. Quando viene raggiunta la fine, `m_bContinuePrinting` la `CPrintInfo` classe di visualizzazione imposta il membro di FALSE; questo informa il framework per arrestare il ciclo di stampa.

`CPrintInfo`viene utilizzato dalle funzioni `CView` membro elencate in "Vedere anche". Per ulteriori informazioni sull'architettura di stampa fornita dalla libreria Microsoft Foundation Class, vedere Frame Windows and Document/View Architecture (Architettura di [Frame Windows](../../mfc/frame-windows.md) e [Documento/Visualizzazione)](../../mfc/document-view-architecture.md) e gli articoli [Printing](../../mfc/printing.md) and [Printing: Multipage Documents](../../mfc/multipage-documents.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CPrintInfo`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="cprintinfogetfrompage"></a><a name="getfrompage"></a>CPrintInfo::GetFromPage

Chiamare questa funzione per recuperare il numero della prima pagina da stampare.

```
UINT GetFromPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero della prima pagina da stampare.

### <a name="remarks"></a>Osservazioni

Questo è il valore specificato dall'utente nella finestra di `CPrintDialog` dialogo Stampa `m_pPD` e viene memorizzato nell'oggetto a cui fa riferimento il membro. Se l'utente non ha specificato un valore, il valore predefinito è la prima pagina del documento.

## <a name="cprintinfogetmaxpage"></a><a name="getmaxpage"></a>CPrintInfo::GetMaxPage

Chiamare questa funzione per recuperare il numero dell'ultima pagina del documento.

```
UINT GetMaxPage() const;
```

### <a name="return-value"></a>Valore restituito

Il numero dell'ultima pagina del documento.

### <a name="remarks"></a>Osservazioni

Questo valore viene `CPrintDialog` archiviato nell'oggetto a cui fa riferimento il `m_pPD` membro.

## <a name="cprintinfogetminpage"></a><a name="getminpage"></a>CPrintInfo::GetMinPage

Chiamare questa funzione per recuperare il numero della prima pagina del documento.

```
UINT GetMinPage() const;
```

### <a name="return-value"></a>Valore restituito

Il numero della prima pagina del documento.

### <a name="remarks"></a>Osservazioni

Questo valore viene `CPrintDialog` archiviato nell'oggetto a cui fa riferimento il `m_pPD` membro.

## <a name="cprintinfogetoffsetpage"></a><a name="getoffsetpage"></a>CPrintInfo::GetOffsetPage

Chiamare questa funzione per recuperare l'offset durante la stampa di più elementi DocObject da un client DocObject.Call this function to retrieve the offset when printing multiple DocObject items from a DocObject client.

```
UINT GetOffsetPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pagine che precedono la prima pagina di un elemento DocObject stampato in un processo di stampa DocObject combinato.

### <a name="remarks"></a>Osservazioni

Questo valore fa riferimento `m_nOffsetPage` al membro. La prima pagina del documento verrà `m_nOffsetPage` numerato con il valore 1 quando viene stampato come DocObject con altri documenti attivi. Il `m_nOffsetPage` membro è valido `m_bDocObject` solo se il valore è TRUE.

## <a name="cprintinfogettopage"></a><a name="gettopage"></a>CPrintInfo::GetToPage

Chiamare questa funzione per recuperare il numero dell'ultima pagina da stampare.

```
UINT GetToPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero dell'ultima pagina da stampare.

### <a name="remarks"></a>Osservazioni

Questo è il valore specificato dall'utente nella finestra di `CPrintDialog` dialogo Stampa `m_pPD` e viene memorizzato nell'oggetto a cui fa riferimento il membro. Se l'utente non ha specificato un valore, il valore predefinito è l'ultima pagina del documento.

## <a name="cprintinfom_bcontinueprinting"></a><a name="m_bcontinueprinting"></a>CPrintInfo::m_bContinuePrinting

Contiene un flag che indica se il framework deve continuare il ciclo di stampa.

### <a name="remarks"></a>Osservazioni

Se si esegue l'impaginazione in fase di stampa, `CView::OnPrepareDC` è possibile impostare questo membro su FALSE nell'override di una volta raggiunta la fine del documento. Non è necessario modificare questa variabile se è stata specificata la lunghezza del `SetMaxPage` documento all'inizio del processo di stampa utilizzando la funzione membro. Il `m_bContinuePrinting` membro è una variabile pubblica di tipo BOOL.

## <a name="cprintinfom_bdirect"></a><a name="m_bdirect"></a>CPrintInfo::m_bDirect

Il framework imposta questo membro su TRUE se la finestra di dialogo Stampa verrà ignorata per la stampa diretta; FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

La finestra di dialogo Stampa viene in genere ignorata quando si stampa dalla shell o quando la stampa viene eseguita utilizzando l'ID comando ID_FILE_PRINT_DIRECT.

In genere non si modifica questo membro, ma se lo si modifica, modificarlo prima di chiamare [CView::DoPreparePrinting](../../mfc/reference/cview-class.md#doprepareprinting) nell'override di [CView::OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting).

## <a name="cprintinfom_bdocobject"></a><a name="m_bdocobject"></a>CPrintInfo::m_bDocObject

Contiene un flag che indica se il documento da stampare è un oggetto DocObject.

### <a name="remarks"></a>Osservazioni

Membri `m_dwFlags` dati `m_nOffsetPage` e non sono validi a meno che questo flag non sia TRUE.

## <a name="cprintinfom_bpreview"></a><a name="m_bpreview"></a>CPrintInfo::m_bPreview

Contiene un flag che indica se il documento è in anteprima.

### <a name="remarks"></a>Osservazioni

Questo viene impostato dal framework a seconda del comando eseguito dall'utente. La finestra di dialogo Stampa non viene visualizzata per un lavoro di anteprima di stampa. Il `m_bPreview` membro è una variabile pubblica di tipo BOOL.

## <a name="cprintinfom_dwflags"></a><a name="m_dwflags"></a>CPrintInfo::m_dwFlags

Contiene una combinazione di flag che specificano le operazioni di stampa DocObject.

### <a name="remarks"></a>Osservazioni

Valido solo se `m_bDocObject` il membro dati è TRUE.

I flag possono essere uno o più dei seguenti valori:

- PRINTFLAG_MAYBOTHERUSER

- PRINTFLAG_PROMPTUSER

- PRINTFLAG_USERMAYCHANGEPRINTER

- PRINTFLAG_RECOMPOSETODEVICE

- PRINTFLAG_DONTACTUALLYPRINT

- PRINTFLAG_FORCEPROPERTIES

- PRINTFLAG_PRINTTOFILE

## <a name="cprintinfom_lpuserdata"></a><a name="m_lpuserdata"></a>CPrintInfo::m_lpUserData

Contiene un puntatore a una struttura creata dall'utente.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questa opzione per archiviare i dati specifici della stampa che non si desidera archiviare nella classe di visualizzazione. Il `m_lpUserData` membro è una variabile pubblica di tipo LPVOID.

## <a name="cprintinfom_ncurpage"></a><a name="m_ncurpage"></a>CPrintInfo::m_nCurPage

Contiene il numero della pagina corrente.

### <a name="remarks"></a>Osservazioni

Il framework `CView::OnPrepareDC` `CView::OnPrint` chiama e una volta per ogni pagina del documento, specificando un valore diverso per questo membro ogni volta; i relativi valori vanno dal `GetFromPage` valore restituito `GetToPage`da a quello restituito da . Utilizzare questo membro nelle `CView::OnPrepareDC` sostituzioni di e `CView::OnPrint` per stampare la pagina specificata del documento.

Quando la modalità di anteprima viene richiamata per la prima volta, il framework legge il valore di questo membro per determinare quale pagina del documento deve essere visualizzata in anteprima inizialmente. È possibile impostare il valore di `CView::OnPreparePrinting` questo membro nella sostituzione di per mantenere la posizione corrente dell'utente nel documento quando si attiva la modalità di anteprima. Il `m_nCurPage` membro è una variabile pubblica di tipo UINT.

## <a name="cprintinfom_njobnumber"></a><a name="m_njobnumber"></a>CPrintInfo::m_nJobNumber

Indica il numero di lavoro assegnato dal sistema operativo per il lavoro di stampa corrente.

### <a name="remarks"></a>Osservazioni

Questo valore può essere SP_ERROR se il lavoro non è `CPrintInfo` ancora stato stampato (ovvero, se l'oggetto è stato appena costruito e non è ancora stato utilizzato per stampare) o se si è verificato un errore nell'avvio del processo.

## <a name="cprintinfom_nnumpreviewpages"></a><a name="m_nnumpreviewpages"></a>CPrintInfo::m_nNumPreviewPages

Contiene il numero di pagine visualizzate in modalità anteprima; può essere 1 o 2.

### <a name="remarks"></a>Osservazioni

Il `m_nNumPreviewPages` membro è una variabile pubblica di tipo UINT.

## <a name="cprintinfom_noffsetpage"></a><a name="m_noffsetpage"></a>CPrintInfo::m_nOffsetPage

Contiene il numero di pagine che precedono la prima pagina di un particolare oggetto DocObject in un processo di stampa DocObject combinato.

## <a name="cprintinfom_ppd"></a><a name="m_ppd"></a>CPrintInfo::m_pPD

Contiene un puntatore all'oggetto `CPrintDialog` utilizzato per visualizzare la finestra di dialogo Stampa per il processo di stampa.

### <a name="remarks"></a>Osservazioni

Il `m_pPD` membro è una variabile pubblica `CPrintDialog`dichiarata come puntatore a .

## <a name="cprintinfom_rectdraw"></a><a name="m_rectdraw"></a>CPrintInfo::m_rectDraw

Specifica l'area di disegno utilizzabile della pagina in coordinate logiche.

### <a name="remarks"></a>Osservazioni

È possibile fare riferimento a questo `CView::OnPrint`nell'override di . È possibile utilizzare questo membro per tenere traccia dell'area che rimane utilizzabile dopo la stampa di intestazioni, piè di pagina e così via. Il `m_rectDraw` membro è una `CRect`variabile pubblica di tipo .

## <a name="cprintinfom_strpagedesc"></a><a name="m_strpagedesc"></a>CPrintInfo::m_strPageDesc

Contiene una stringa di formato utilizzata per visualizzare i numeri di pagina durante l'anteprima di stampa. questa stringa è costituita da due sottostringhe, una per la visualizzazione a pagina singola e una per la visualizzazione a pagina doppia, ognuna terminata da un carattere 'n'.

### <a name="remarks"></a>Osservazioni

Il framework utilizza "Pagina %u nPagine %u-%u" come valore predefinito. Se si desidera un formato diverso per i numeri di `CView::OnPreparePrinting`pagina, specificare una stringa di formato nella sostituzione di . Il `m_strPageDesc` membro è una `CString`variabile pubblica di tipo .

## <a name="cprintinfosetmaxpage"></a><a name="setmaxpage"></a>CPrintInfo::SetMaxPage

Chiamare questa funzione per specificare il numero dell'ultima pagina del documento.

```
void SetMaxPage(UINT nMaxPage);
```

### <a name="parameters"></a>Parametri

*nMaxPagina*<br/>
Numero dell'ultima pagina del documento.

### <a name="remarks"></a>Osservazioni

Questo valore viene `CPrintDialog` archiviato nell'oggetto a cui fa riferimento il `m_pPD` membro. Se la lunghezza del documento è nota prima della stampa, `CView::OnPreparePrinting`chiamare questa funzione dall'override di . Se la lunghezza del documento dipende da un'impostazione specificata dall'utente nella `CView::OnBeginPrinting`finestra di dialogo Stampa, chiamare questa funzione dall'override di . Se la lunghezza del documento non è nota `m_bContinuePrinting` fino a quando non viene stampato, utilizzare il membro per controllare il ciclo di stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CView::OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting).

## <a name="cprintinfosetminpage"></a><a name="setminpage"></a>CPrintInfo::SetMinPage

Chiamare questa funzione per specificare il numero della prima pagina del documento.

```
void SetMinPage(UINT nMinPage);
```

### <a name="parameters"></a>Parametri

*NMinPage (informazioni in bosnia)*<br/>
Numero della prima pagina del documento.

### <a name="remarks"></a>Osservazioni

I numeri di pagina normalmente iniziano da 1. Questo valore viene `CPrintDialog` archiviato nell'oggetto a cui fa riferimento il `m_pPD` membro.

## <a name="see-also"></a>Vedere anche

[Esempio MFC DIBLOOK](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CView::OnBeginPrinting](../../mfc/reference/cview-class.md#onbeginprinting)<br/>
[CView::OnEndPrinting](../../mfc/reference/cview-class.md#onendprinting)<br/>
[CView::OnEndPrintPreview](../../mfc/reference/cview-class.md#onendprintpreview)<br/>
[CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc)<br/>
[CView::OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting)<br/>
[CView::OnPrint](../../mfc/reference/cview-class.md#onprint)
