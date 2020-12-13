---
description: 'Altre informazioni su: struttura CPrintInfo'
title: Struttura CPrintInfo
ms.date: 11/04/2016
f1_keywords:
- CPrintInfo
helpviewer_keywords:
- CPrintInfo structure [MFC]
ms.assetid: 0b3de849-d050-4386-9a14-f4c1a25684f7
ms.openlocfilehash: 355bcf2f04b32756ae16147465054e945d70cf78
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343388"
---
# <a name="cprintinfo-structure"></a>Struttura CPrintInfo

Archivia le informazioni su un processo di stampa o di anteprima di stampa.

## <a name="syntax"></a>Sintassi

```
struct CPrintInfo
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CPrintInfo:: GetFromPage](#getfrompage)|Restituisce il numero della prima pagina da stampare.|
|[CPrintInfo:: GetMaxPage](#getmaxpage)|Restituisce il numero dell'ultima pagina del documento.|
|[CPrintInfo:: GetMinPage](#getminpage)|Restituisce il numero della prima pagina del documento.|
|[CPrintInfo:: GetOffsetPage](#getoffsetpage)|Restituisce il numero di pagine che precede la prima pagina di un elemento DocObject stampato in un processo di stampa DocObject combinato.|
|[CPrintInfo:: GetToPage](#gettopage)|Restituisce il numero dell'ultima pagina da stampare.|
|[CPrintInfo:: SetMaxPage](#setmaxpage)|Imposta il numero dell'ultima pagina del documento.|
|[CPrintInfo:: SetMinPage](#setminpage)|Imposta il numero della prima pagina del documento.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CPrintInfo:: m_bContinuePrinting](#m_bcontinueprinting)|Contiene un flag che indica se il Framework deve continuare il ciclo di stampa.|
|[CPrintInfo:: m_bDirect](#m_bdirect)|Contiene un flag che indica se il documento viene stampato direttamente (senza visualizzare la finestra di dialogo Stampa).|
|[CPrintInfo:: m_bDocObject](#m_bdocobject)|Contiene un flag che indica se il documento da stampare è un DocObject.|
|[CPrintInfo:: m_bPreview](#m_bpreview)|Contiene un flag che indica se il documento viene visualizzato in anteprima.|
|[CPrintInfo:: m_dwFlags](#m_dwflags)|Specifica le operazioni di stampa DocObject.|
|[CPrintInfo:: m_lpUserData](#m_lpuserdata)|Contiene un puntatore a una struttura creata dall'utente.|
|[CPrintInfo:: m_nCurPage](#m_ncurpage)|Identifica il numero della pagina attualmente stampata.|
|[CPrintInfo:: m_nJobNumber](#m_njobnumber)|Specifica il numero di processo assegnato dal sistema operativo per il processo di stampa corrente|
|[CPrintInfo:: m_nNumPreviewPages](#m_nnumpreviewpages)|Identifica il numero di pagine visualizzate nella finestra di anteprima; 1 o 2.|
|[CPrintInfo:: m_nOffsetPage](#m_noffsetpage)|Specifica l'offset della prima pagina di un DocObject in un processo di stampa DocObject combinato.|
|[CPrintInfo:: m_pPD](#m_ppd)|Contiene un puntatore all' `CPrintDialog` oggetto utilizzato per la finestra di dialogo Stampa.|
|[CPrintInfo:: m_rectDraw](#m_rectdraw)|Specifica un rettangolo che definisce l'area utilizzabile della pagina corrente.|
|[CPrintInfo:: m_strPageDesc](#m_strpagedesc)|Contiene una stringa di formato per la visualizzazione dei numeri di pagina.|

## <a name="remarks"></a>Commenti

`CPrintInfo` è una struttura e non dispone di una classe base.

Il Framework crea un oggetto di `CPrintInfo` ogni volta che viene scelto il comando stampa o anteprima di stampa e lo elimina quando il comando viene completato.

`CPrintInfo` contiene informazioni sul processo di stampa nel suo complesso, ad esempio l'intervallo di pagine da stampare e lo stato corrente del processo di stampa, ad esempio la pagina attualmente stampata. Alcune informazioni sono archiviate in un oggetto [CPrintDialog](../../mfc/reference/cprintdialog-class.md) associato; Questo oggetto contiene i valori immessi dall'utente nella finestra di dialogo Stampa.

Un `CPrintInfo` oggetto viene passato tra il Framework e la classe di visualizzazione durante il processo di stampa e viene utilizzato per scambiare informazioni tra i due. Il Framework, ad esempio, informa la classe View della pagina del documento da stampare assegnando un valore al `m_nCurPage` membro di `CPrintInfo` ; la classe View Recupera il valore ed esegue la stampa effettiva della pagina specificata.

Un altro esempio è il caso in cui la lunghezza del documento non è nota fino a quando non viene stampata. In questa situazione, la classe View testa la fine del documento ogni volta che viene stampata una pagina. Quando viene raggiunta la fine, la classe View imposta il `m_bContinuePrinting` membro di `CPrintInfo` su false. in questo modo viene informato il Framework per arrestare il ciclo di stampa.

`CPrintInfo` viene usato dalle funzioni membro di `CView` elencate in "vedere anche". Per ulteriori informazioni sull'architettura di stampa fornita dalla libreria Microsoft Foundation Class, vedere l'articolo relativo alle [finestre cornice](../../mfc/frame-windows.md) e all' [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e agli articoli [stampa](../../mfc/printing.md) e [stampa: documenti](../../mfc/multipage-documents.md)a più pagine.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CPrintInfo`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

## <a name="cprintinfogetfrompage"></a><a name="getfrompage"></a> CPrintInfo:: GetFromPage

Chiamare questa funzione per recuperare il numero della prima pagina da stampare.

```
UINT GetFromPage() const;
```

### <a name="return-value"></a>Valore restituito

Il numero della prima pagina da stampare.

### <a name="remarks"></a>Commenti

Si tratta del valore specificato dall'utente nella finestra di dialogo Stampa e viene archiviato nell' `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro. Se l'utente non ha specificato un valore, il valore predefinito è la prima pagina del documento.

## <a name="cprintinfogetmaxpage"></a><a name="getmaxpage"></a> CPrintInfo:: GetMaxPage

Chiamare questa funzione per recuperare il numero dell'ultima pagina del documento.

```
UINT GetMaxPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero dell'ultima pagina del documento.

### <a name="remarks"></a>Commenti

Questo valore viene archiviato nell' `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro.

## <a name="cprintinfogetminpage"></a><a name="getminpage"></a> CPrintInfo:: GetMinPage

Chiamare questa funzione per recuperare il numero della prima pagina del documento.

```
UINT GetMinPage() const;
```

### <a name="return-value"></a>Valore restituito

Il numero della prima pagina del documento.

### <a name="remarks"></a>Commenti

Questo valore viene archiviato nell' `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro.

## <a name="cprintinfogetoffsetpage"></a><a name="getoffsetpage"></a> CPrintInfo:: GetOffsetPage

Chiamare questa funzione per recuperare l'offset durante la stampa di più elementi DocObject da un client DocObject.

```
UINT GetOffsetPage() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di pagine che precede la prima pagina di un elemento DocObject stampato in un processo di stampa DocObject combinato.

### <a name="remarks"></a>Commenti

Il membro fa riferimento a questo valore `m_nOffsetPage` . La prima pagina del documento verrà numerata `m_nOffsetPage` come valore + 1 quando viene stampata come DocObject con altri documenti attivi. Il `m_nOffsetPage` membro è valido solo se il `m_bDocObject` valore è true.

## <a name="cprintinfogettopage"></a><a name="gettopage"></a> CPrintInfo:: GetToPage

Chiamare questa funzione per recuperare il numero dell'ultima pagina da stampare.

```
UINT GetToPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero dell'ultima pagina da stampare.

### <a name="remarks"></a>Commenti

Si tratta del valore specificato dall'utente nella finestra di dialogo Stampa e viene archiviato nell' `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro. Se l'utente non ha specificato un valore, l'impostazione predefinita è l'ultima pagina del documento.

## <a name="cprintinfom_bcontinueprinting"></a><a name="m_bcontinueprinting"></a> CPrintInfo:: m_bContinuePrinting

Contiene un flag che indica se il Framework deve continuare il ciclo di stampa.

### <a name="remarks"></a>Commenti

Se si sta eseguendo la paginazione dell'ora di stampa, è possibile impostare questo membro su FALSE nell'override di `CView::OnPrepareDC` dopo che è stata raggiunta la fine del documento. Non è necessario modificare questa variabile se è stata specificata la lunghezza del documento all'inizio del processo di stampa utilizzando la `SetMaxPage` funzione membro. Il `m_bContinuePrinting` membro è una variabile pubblica di tipo bool.

## <a name="cprintinfom_bdirect"></a><a name="m_bdirect"></a> CPrintInfo:: m_bDirect

Il Framework imposta questo membro su TRUE se la finestra di dialogo stampa verrà ignorata per la stampa diretta; In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

La finestra di dialogo stampa viene in genere ignorata quando si esegue la stampa dalla shell o quando si esegue la stampa utilizzando l'ID comando ID_FILE_PRINT_DIRECT.

Normalmente non si modifica questo membro, ma se lo si modifica, modificarlo prima di chiamare [CView::D oprepareprinting](../../mfc/reference/cview-class.md#doprepareprinting) nell'override di [CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting).

## <a name="cprintinfom_bdocobject"></a><a name="m_bdocobject"></a> CPrintInfo:: m_bDocObject

Contiene un flag che indica se il documento da stampare è un DocObject.

### <a name="remarks"></a>Commenti

I membri dati `m_dwFlags` e `m_nOffsetPage` non sono validi a meno che questo flag non sia true.

## <a name="cprintinfom_bpreview"></a><a name="m_bpreview"></a> CPrintInfo:: m_bPreview

Contiene un flag che indica se il documento viene visualizzato in anteprima.

### <a name="remarks"></a>Commenti

Questa impostazione viene impostata dal Framework a seconda del comando eseguito dall'utente. La finestra di dialogo stampa non viene visualizzata per un processo di anteprima di stampa. Il `m_bPreview` membro è una variabile pubblica di tipo bool.

## <a name="cprintinfom_dwflags"></a><a name="m_dwflags"></a> CPrintInfo:: m_dwFlags

Contiene una combinazione di flag che specificano le operazioni di stampa DocObject.

### <a name="remarks"></a>Commenti

Valido solo se il membro dati `m_bDocObject` è true.

I flag possono essere uno o più dei valori seguenti:

- PRINTFLAG_MAYBOTHERUSER

- PRINTFLAG_PROMPTUSER

- PRINTFLAG_USERMAYCHANGEPRINTER

- PRINTFLAG_RECOMPOSETODEVICE

- PRINTFLAG_DONTACTUALLYPRINT

- PRINTFLAG_FORCEPROPERTIES

- PRINTFLAG_PRINTTOFILE

## <a name="cprintinfom_lpuserdata"></a><a name="m_lpuserdata"></a> CPrintInfo:: m_lpUserData

Contiene un puntatore a una struttura creata dall'utente.

### <a name="remarks"></a>Commenti

È possibile usarlo per archiviare i dati specifici della stampa che non si vuole archiviare nella classe di visualizzazione. Il `m_lpUserData` membro è una variabile pubblica di tipo LPVOID.

## <a name="cprintinfom_ncurpage"></a><a name="m_ncurpage"></a> CPrintInfo:: m_nCurPage

Contiene il numero della pagina corrente.

### <a name="remarks"></a>Commenti

Il Framework chiama `CView::OnPrepareDC` e `CView::OnPrint` una volta per ogni pagina del documento, specificando ogni volta un valore diverso per il membro; i relativi valori variano dal valore restituito da `GetFromPage` a quello restituito da `GetToPage` . Utilizzare questo membro nelle sostituzioni di `CView::OnPrepareDC` e `CView::OnPrint` per stampare la pagina specificata del documento.

Quando la modalità di anteprima viene richiamata per la prima volta, il Framework legge il valore di questo membro per determinare la pagina del documento da visualizzare in anteprima inizialmente. È possibile impostare il valore di questo membro nell'override di `CView::OnPreparePrinting` per mantenere la posizione corrente dell'utente nel documento quando si entra in modalità di anteprima. Il `m_nCurPage` membro è una variabile pubblica di tipo uint.

## <a name="cprintinfom_njobnumber"></a><a name="m_njobnumber"></a> CPrintInfo:: m_nJobNumber

Indica il numero di processo assegnato dal sistema operativo per il processo di stampa corrente.

### <a name="remarks"></a>Commenti

Questo valore può essere SP_ERROR se il processo non è ancora stato stampato, ovvero se l' `CPrintInfo` oggetto è stato appena costruito e non è ancora stato utilizzato per la stampa, oppure se si è verificato un errore durante l'avvio del processo.

## <a name="cprintinfom_nnumpreviewpages"></a><a name="m_nnumpreviewpages"></a> CPrintInfo:: m_nNumPreviewPages

Contiene il numero di pagine visualizzate in modalità anteprima; può essere 1 o 2.

### <a name="remarks"></a>Commenti

Il `m_nNumPreviewPages` membro è una variabile pubblica di tipo uint.

## <a name="cprintinfom_noffsetpage"></a><a name="m_noffsetpage"></a> CPrintInfo:: m_nOffsetPage

Contiene il numero di pagine che precede la prima pagina di un particolare DocObject in un processo di stampa DocObject combinato.

## <a name="cprintinfom_ppd"></a><a name="m_ppd"></a> CPrintInfo:: m_pPD

Contiene un puntatore all' `CPrintDialog` oggetto utilizzato per visualizzare la finestra di dialogo Stampa per il processo di stampa.

### <a name="remarks"></a>Commenti

Il `m_pPD` membro è una variabile pubblica dichiarata come puntatore a `CPrintDialog` .

## <a name="cprintinfom_rectdraw"></a><a name="m_rectdraw"></a> CPrintInfo:: m_rectDraw

Specifica l'area di disegno utilizzabile della pagina nelle coordinate logiche.

### <a name="remarks"></a>Commenti

È consigliabile fare riferimento a questo nell'override di `CView::OnPrint` . È possibile utilizzare questo membro per tenere traccia dell'area che rimane utilizzabile dopo la stampa di intestazioni, piè di pagina e così via. Il `m_rectDraw` membro è una variabile pubblica di tipo `CRect` .

## <a name="cprintinfom_strpagedesc"></a><a name="m_strpagedesc"></a> CPrintInfo:: m_strPageDesc

Contiene una stringa di formato utilizzata per visualizzare i numeri di pagina durante l'anteprima di stampa. Questa stringa è costituita da due sottostringhe, una per la visualizzazione a pagina singola e una per la visualizzazione a doppia pagina, ciascuna terminata da un carattere "\n".

### <a name="remarks"></a>Commenti

Il Framework USA "pagina%u\nPages% u-%u\n" come valore predefinito. Se si desidera un formato diverso per i numeri di pagina, specificare una stringa di formato nell'override di `CView::OnPreparePrinting` . Il `m_strPageDesc` membro è una variabile pubblica di tipo `CString` .

## <a name="cprintinfosetmaxpage"></a><a name="setmaxpage"></a> CPrintInfo:: SetMaxPage

Chiamare questa funzione per specificare il numero dell'ultima pagina del documento.

```cpp
void SetMaxPage(UINT nMaxPage);
```

### <a name="parameters"></a>Parametri

*nMaxPage*<br/>
Numero dell'ultima pagina del documento.

### <a name="remarks"></a>Commenti

Questo valore viene archiviato nell' `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro. Se la lunghezza del documento è nota prima di essere stampata, chiamare questa funzione dall'override di `CView::OnPreparePrinting` . Se la lunghezza del documento dipende da un'impostazione specificata dall'utente nella finestra di dialogo Stampa, chiamare questa funzione dall'override di `CView::OnBeginPrinting` . Se la lunghezza del documento non è nota fino a quando non viene stampata, utilizzare il `m_bContinuePrinting` membro per controllare il ciclo di stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting).

## <a name="cprintinfosetminpage"></a><a name="setminpage"></a> CPrintInfo:: SetMinPage

Chiamare questa funzione per specificare il numero della prima pagina del documento.

```cpp
void SetMinPage(UINT nMinPage);
```

### <a name="parameters"></a>Parametri

*nMinPage*<br/>
Numero della prima pagina del documento.

### <a name="remarks"></a>Commenti

I numeri di pagina iniziano normalmente da 1. Questo valore viene archiviato nell' `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro.

## <a name="see-also"></a>Vedi anche

[DIBLOOK di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CView::OnBeginPrinting](../../mfc/reference/cview-class.md#onbeginprinting)<br/>
[CView:: OnEndPrinting](../../mfc/reference/cview-class.md#onendprinting)<br/>
[CView:: OnEndPrintPreview](../../mfc/reference/cview-class.md#onendprintpreview)<br/>
[CView:: OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc)<br/>
[CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting)<br/>
[CView:: OnPrint](../../mfc/reference/cview-class.md#onprint)
