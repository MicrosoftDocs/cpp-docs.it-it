---
title: Classe CSplitterWnd
ms.date: 11/04/2016
f1_keywords:
- CSplitterWnd
- AFXEXT/CSplitterWnd
- AFXEXT/CSplitterWnd::CSplitterWnd
- AFXEXT/CSplitterWnd::ActivateNext
- AFXEXT/CSplitterWnd::CanActivateNext
- AFXEXT/CSplitterWnd::Create
- AFXEXT/CSplitterWnd::CreateScrollBarCtrl
- AFXEXT/CSplitterWnd::CreateStatic
- AFXEXT/CSplitterWnd::CreateView
- AFXEXT/CSplitterWnd::DeleteColumn
- AFXEXT/CSplitterWnd::DeleteRow
- AFXEXT/CSplitterWnd::DeleteView
- AFXEXT/CSplitterWnd::DoKeyboardSplit
- AFXEXT/CSplitterWnd::DoScroll
- AFXEXT/CSplitterWnd::DoScrollBy
- AFXEXT/CSplitterWnd::GetActivePane
- AFXEXT/CSplitterWnd::GetColumnCount
- AFXEXT/CSplitterWnd::GetColumnInfo
- AFXEXT/CSplitterWnd::GetPane
- AFXEXT/CSplitterWnd::GetRowCount
- AFXEXT/CSplitterWnd::GetRowInfo
- AFXEXT/CSplitterWnd::GetScrollStyle
- AFXEXT/CSplitterWnd::IdFromRowCol
- AFXEXT/CSplitterWnd::IsChildPane
- AFXEXT/CSplitterWnd::IsTracking
- AFXEXT/CSplitterWnd::RecalcLayout
- AFXEXT/CSplitterWnd::SetActivePane
- AFXEXT/CSplitterWnd::SetColumnInfo
- AFXEXT/CSplitterWnd::SetRowInfo
- AFXEXT/CSplitterWnd::SetScrollStyle
- AFXEXT/CSplitterWnd::SplitColumn
- AFXEXT/CSplitterWnd::SplitRow
- AFXEXT/CSplitterWnd::OnDraw
- AFXEXT/CSplitterWnd::OnDrawSplitter
- AFXEXT/CSplitterWnd::OnInvertTracker
helpviewer_keywords:
- CSplitterWnd [MFC], CSplitterWnd
- CSplitterWnd [MFC], ActivateNext
- CSplitterWnd [MFC], CanActivateNext
- CSplitterWnd [MFC], Create
- CSplitterWnd [MFC], CreateScrollBarCtrl
- CSplitterWnd [MFC], CreateStatic
- CSplitterWnd [MFC], CreateView
- CSplitterWnd [MFC], DeleteColumn
- CSplitterWnd [MFC], DeleteRow
- CSplitterWnd [MFC], DeleteView
- CSplitterWnd [MFC], DoKeyboardSplit
- CSplitterWnd [MFC], DoScroll
- CSplitterWnd [MFC], DoScrollBy
- CSplitterWnd [MFC], GetActivePane
- CSplitterWnd [MFC], GetColumnCount
- CSplitterWnd [MFC], GetColumnInfo
- CSplitterWnd [MFC], GetPane
- CSplitterWnd [MFC], GetRowCount
- CSplitterWnd [MFC], GetRowInfo
- CSplitterWnd [MFC], GetScrollStyle
- CSplitterWnd [MFC], IdFromRowCol
- CSplitterWnd [MFC], IsChildPane
- CSplitterWnd [MFC], IsTracking
- CSplitterWnd [MFC], RecalcLayout
- CSplitterWnd [MFC], SetActivePane
- CSplitterWnd [MFC], SetColumnInfo
- CSplitterWnd [MFC], SetRowInfo
- CSplitterWnd [MFC], SetScrollStyle
- CSplitterWnd [MFC], SplitColumn
- CSplitterWnd [MFC], SplitRow
- CSplitterWnd [MFC], OnDraw
- CSplitterWnd [MFC], OnDrawSplitter
- CSplitterWnd [MFC], OnInvertTracker
ms.assetid: fd0de258-6dbe-4552-9e47-a39de0471d51
ms.openlocfilehash: 42913ddea7818636dce8d630ed2d79d13c19ce81
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57302104"
---
# <a name="csplitterwnd-class"></a>Classe CSplitterWnd

Fornisce la funzionalità di una finestra con separatore, ovvero una finestra che contiene più riquadri.

## <a name="syntax"></a>Sintassi

```
class CSplitterWnd : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSplitterWnd::CSplitterWnd](#csplitterwnd)|Chiamata a costruire un `CSplitterWnd` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSplitterWnd::ActivateNext](#activatenext)|Esegue il comando riquadro successivo o riquadro precedente.|
|[CSplitterWnd::CanActivateNext](#canactivatenext)|Verifica se il comando riquadro successivo o riquadro precedente. è attualmente possibile.|
|[CSplitterWnd::Create](#create)|Chiamata per creare una finestra con separatore dinamico e associarlo al `CSplitterWnd` oggetto.|
|[CSplitterWnd::CreateScrollBarCtrl](#createscrollbarctrl)|Crea un controllo barra di scorrimento condiviso.|
|[CSplitterWnd::CreateStatic](#createstatic)|Chiamata per creare una finestra con separatore statico e associarlo al `CSplitterWnd` oggetto.|
|[CSplitterWnd::CreateView](#createview)|Chiamare per creare un riquadro in una finestra con separatore.|
|[CSplitterWnd::DeleteColumn](#deletecolumn)|Elimina una colonna dalla finestra con separatore.|
|[CSplitterWnd::DeleteRow](#deleterow)|Elimina una riga dalla finestra con separatore.|
|[CSplitterWnd::DeleteView](#deleteview)|Elimina una visualizzazione dalla finestra con separatore.|
|[CSplitterWnd::DoKeyboardSplit](#dokeyboardsplit)|Esegue il comando, in genere "Dividi finestra". di divisione tastiera|
|[CSplitterWnd::DoScroll](#doscroll)|Consente lo scorrimento sincronizzato delle finestre divise.|
|[CSplitterWnd::DoScrollBy](#doscrollby)|Consente di scorrere le finestre divise di un determinato numero di pixel.|
|[CSplitterWnd::GetActivePane](#getactivepane)|Determina il riquadro attivo lo stato attivo o della vista attiva nel frame.|
|[CSplitterWnd::GetColumnCount](#getcolumncount)|Restituisce il numero di colonne riquadro corrente.|
|[CSplitterWnd::GetColumnInfo](#getcolumninfo)|Restituisce le informazioni nella colonna specificata.|
|[CSplitterWnd::GetPane](#getpane)|Restituisce il riquadro alla riga specificata e alla colonna.|
|[CSplitterWnd::GetRowCount](#getrowcount)|Restituisce il numero di riga corrente del riquadro.|
|[CSplitterWnd::GetRowInfo](#getrowinfo)|Restituisce informazioni sulla riga specificata.|
|[CSplitterWnd::GetScrollStyle](#getscrollstyle)|Restituisce lo stile della barra di scorrimento condiviso.|
|[CSplitterWnd::IdFromRowCol](#idfromrowcol)|Restituisce l'elemento figlio ID di finestra del riquadro alla riga specificata e alla colonna.|
|[CSplitterWnd::IsChildPane](#ischildpane)|Chiamare per determinare se la finestra è attualmente un riquadro figlio di questa finestra con separatore.|
|[CSplitterWnd::IsTracking](#istracking)|Determina se barra di divisione è in movimento.|
|[CSplitterWnd::RecalcLayout](#recalclayout)|Chiamata per visualizzare nuovamente la finestra con separatore dopo la regolazione delle dimensioni di riga o colonna.|
|[CSplitterWnd::SetActivePane](#setactivepane)|Imposta un riquadro come quello attivo nel frame.|
|[CSplitterWnd::SetColumnInfo](#setcolumninfo)|Chiamata per impostare le informazioni di colonna specificata.|
|[CSplitterWnd::SetRowInfo](#setrowinfo)|Chiamata a impostare le informazioni sulla riga specificata.|
|[CSplitterWnd::SetScrollStyle](#setscrollstyle)|Specifica che il nuovo stile della barra di scorrimento per la finestra con separatore condiviso il supporto della barra di scorrimento.|
|[CSplitterWnd::SplitColumn](#splitcolumn)|Indica il punto di divisione verticale di una finestra cornice.|
|[CSplitterWnd::SplitRow](#splitrow)|Indica il punto di divisione orizzontale di una finestra cornice.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CSplitterWnd::OnDraw](#ondraw)|Chiamato dal framework per disegnare la finestra con separatore.|
|[CSplitterWnd::OnDrawSplitter](#ondrawsplitter)|Esegue il rendering di un'immagine di una finestra divisa.|
|[CSplitterWnd::OnInvertTracker](#oninverttracker)|Esegue il rendering l'immagine di una finestra divisa per la stessa dimensione e forma la finestra cornice.|

## <a name="remarks"></a>Note

Un riquadro è in genere un oggetto specifico dell'applicazione derivato dalla [CView](../../mfc/reference/cview-class.md), ma può essere qualsiasi [CWnd](../../mfc/reference/cwnd-class.md) oggetto con l'ID di finestra figlio appropriate.

Oggetto `CSplitterWnd` oggetto viene in genere incorporato in un elemento padre [CFrameWnd](../../mfc/reference/cframewnd-class.md) oppure [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto. Creare un `CSplitterWnd` dell'oggetto usando la procedura seguente:

1. Incorporare un `CSplitterWnd` variabile membro nel frame padre.

2. Eseguire l'override del frame padre [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro.

3. Dall'interno sottoposto a override `OnCreateClient`, chiamare il [Create](#create) o [CreateStatic](#createstatic) funzione membro di `CSplitterWnd`.

Chiamare il `Create` funzione membro per creare una finestra con separatore dinamico. In genere viene utilizzata una finestra con separatore dinamico per creare e scorrere fino a un numero di singoli riquadri o viste, dello stesso documento. Il framework crea automaticamente un riquadro iniziale per la barra di divisione; quindi il framework crea, ridimensiona ed Elimina riquadri aggiuntivi come l'utente opera controlli della finestra con separatore.

Quando si chiama `Create`, si specifica una minimo di righe altezza e larghezza di colonna che determinano quando i riquadri sono troppo piccoli per essere interamente visualizzato. Dopo aver chiamato `Create`, è possibile modificare questi minimi chiamando il [SetColumnInfo](#setcolumninfo) e [SetRowInfo](#setrowinfo) funzioni membro.

Usare anche il `SetColumnInfo` e `SetRowInfo` funzioni membro per impostare una larghezza "ideale" per una colonna e "ideale" per una riga. Quando il framework visualizza una finestra con separatore, viene innanzitutto visualizzato il frame padre, quindi la finestra con separatore. Il framework viene disposto quindi i riquadri in colonne e righe in base alle loro dimensioni ideali, procedendo dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.

Tutti i riquadri in una finestra con separatore dinamico devono essere della stessa classe. Applicazioni note che supportano finestre con separatore dinamico includono Microsoft Word e Microsoft Excel.

Usare il `CreateStatic` funzione membro per creare una finestra con separatore statico. L'utente può modificare solo le dimensioni dei riquadri in una finestra, non il numero o ordine con separatore statico.

In particolare, è necessario creare i riquadri del tutti il separatore statico quando si crea il separatore statico. Assicurarsi di creare tutti i riquadri prima del frame padre `OnCreateClient` funzione membro restituisce, o se il framework non visualizzare correttamente la finestra.

Il `CreateStatic` funzione membro inizializza automaticamente con un separatore statico con una larghezza minima della riga di altezza e alla colonna 0. Dopo aver chiamato `Create`, modificare questi minimi chiamando il [SetColumnInfo](#setcolumninfo) e [SetRowInfo](#setrowinfo) funzioni membro. Usare anche `SetColumnInfo` e `SetRowInfo` dopo aver chiamato `CreateStatic` per indicare le dimensioni ideali riquadro desiderato.

I singoli riquadri di un separatore statico spesso appartengano a classi diverse. Per esempi di finestre con separatore statico, vedere l'editor di immagini e la gestione di File di Windows.

Una finestra con separatore supporta le barre di scorrimento speciale (tranne per le barre di scorrimento che possono avere riquadri). Queste barre di scorrimento sono elementi figlio del `CSplitterWnd` dell'oggetto e vengono condivise con i riquadri.

Creare queste barre di scorrimento speciale quando si crea la finestra con separatore. Ad esempio, un `CSplitterWnd` che ha due colonne, una riga e lo stile WS_VSCROLL verrà visualizzata una barra di scorrimento verticale che viene condiviso da due riquadri. Quando l'utente sposta la barra di scorrimento, WM_VSCROLL messaggi vengono inviati a entrambi i riquadri. Quando i riquadri di impostare la posizione della barra di scorrimento, viene impostata la barra di scorrimento condiviso.

Per ulteriori informazioni sulle finestre con separatore, vedere [29 Nota tecnica](../../mfc/tn029-splitter-windows.md).

Per altre informazioni su come creare finestre con separatore dinamico, vedere:

- Esempio MFC [Scribble](../../visual-cpp-samples.md)

- Esempio MFC [2x1 viene](../../visual-cpp-samples.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSplitterWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="activatenext"></a>  CSplitterWnd::ActivateNext

Chiamata eseguita dal framework per eseguire il comando riquadro successivo o riquadro precedente.

```
virtual void ActivateNext(BOOL bPrev = FALSE);
```

### <a name="parameters"></a>Parametri

*bPrev*<br/>
Indica quale finestra per l'attivazione. **TRUE** per precedente; **FALSE** successivo.

### <a name="remarks"></a>Note

Questa funzione membro è un comando di alto livello che viene usato per il [CView](../../mfc/reference/cview-class.md) classe delegare il `CSplitterWnd` implementazione.

##  <a name="canactivatenext"></a>  CSplitterWnd::CanActivateNext

Chiamato dal framework per verificare se il comando riquadro successivo o riquadro precedente. è attualmente possibile.

```
virtual BOOL CanActivateNext(BOOL bPrev = FALSE);
```

### <a name="parameters"></a>Parametri

*bPrev*<br/>
Indica quale finestra per l'attivazione. **TRUE** per precedente; **FALSE** successivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro è un comando di alto livello che viene usato per il [CView](../../mfc/reference/cview-class.md) classe delegare il `CSplitterWnd` implementazione.

##  <a name="create"></a>  CSplitterWnd::Create

Per creare una finestra con separatore dinamico, chiamare il `Create` funzione membro.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    int nMaxRows,
    int nMaxCols,
    SIZE sizeMin,
    CCreateContext* pContext,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_HSCROLL | WS_VSCROLL | SPLS_DYNAMIC_SPLIT,
    UINT nID = AFX_IDW_PANE_FIRST);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
La finestra cornice padre della finestra con separatore.

*nMaxRows*<br/>
Il numero massimo di righe della finestra della barra di divisione. Questo valore non deve superare i 2.

*nMaxCols*<br/>
Il numero massimo di colonne nella finestra con separatore. Questo valore non deve superare i 2.

*sizeMin*<br/>
Specifica la dimensione minima in corrispondenza del quale potrebbe essere visualizzato un riquadro.

*pContext*<br/>
Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Nella maggior parte dei casi, può essere il *pContext* passato alla finestra cornice padre.

*dwStyle*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST, a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

È possibile incorporare una `CSplitterWnd` in un elemento padre [CFrameWnd](../../mfc/reference/cframewnd-class.md) oppure [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto attenendosi alla procedura seguente:

1. Incorporare un `CSplitterWnd` variabile membro nel frame padre.

1. Eseguire l'override del frame padre [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro.

1. Chiamare il `Create` funzione di membro dall'interno sottoposto a override `OnCreateClient`.

Quando si crea una finestra con separatore all'interno di un frame padre, passare il frame padre *pContext* parametro alla finestra con separatore. In caso contrario, questo parametro può essere NULL.

La larghezza minima della riga iniziale di altezza e alla colonna di una finestra con separatore dinamico sono impostate il *sizeMin* parametro. Questi minimi, che determinano se un riquadro è troppo piccolo per essere visualizzato nel suo complesso, possono essere modificati con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro.

Per altre informazioni sulle finestre con separatore dinamico, vedere "Divisione Windows" nell'articolo [tipi di documenti multipli, visualizzazioni e Frame di Windows](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e il `CSplitterWnd` Cenni preliminari sulla classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#125](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_1.cpp)]

##  <a name="createscrollbarctrl"></a>  CSplitterWnd::CreateScrollBarCtrl

Chiamata eseguita dal framework per creare un controllo barra di scorrimento condiviso.

```
virtual BOOL CreateScrollBarCtrl(
    DWORD dwStyle,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST, a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Eseguire l'override `CreateScrollBarCtrl` per includere controlli aggiuntivi accanto a una barra di scorrimento. Il comportamento predefinito consiste nel creare controlli barra di scorrimento Windows normale.

##  <a name="createstatic"></a>  CSplitterWnd::CreateStatic

Per creare una finestra con separatore statico, chiamare il `CreateStatic` funzione membro.

```
virtual BOOL CreateStatic(
    CWnd* pParentWnd,
    int nRows,
    int nCols,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE,
    UINT nID = AFX_IDW_PANE_FIRST);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
La finestra cornice padre della finestra con separatore.

*nRows*<br/>
Numero di righe. Questo valore non può superare 16.

*nCols*<br/>
Numero di colonne. Questo valore non può superare 16.

*dwStyle*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST, a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Oggetto `CSplitterWnd` è in genere incorporato in un elemento padre `CFrameWnd` oppure [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto attenendosi alla procedura seguente:

1. Incorporare un `CSplitterWnd` variabile membro nel frame padre.

1. Eseguire l'override del frame padre `OnCreateClient` funzione membro.

1. Chiamare il `CreateStatic` funzione di membro dall'interno sottoposto a override [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient).

Una finestra con separatore statico contiene un numero fisso di riquadri, spesso da classi diverse.

Quando si crea una finestra con separatore statico, è necessario allo stesso tempo creare tutti i riquadri. Il [CreateView](#createview) funzione membro viene generalmente usata per questo scopo, ma è possibile creare altre classi nonview anche.

La larghezza minima della riga iniziale di altezza e alla colonna per una finestra con separatore statico è 0. Questi minimi, che determinano quando un riquadro è troppo piccolo per essere visualizzato nel suo complesso, possono essere modificati con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro.

Per aggiungere barre di scorrimento in una finestra con separatore statico, aggiungere gli stili WS_HSCROLL e WS_VSCROLL *dwStyle*.

Vedere "Divisione Windows" nell'articolo [tipi di documenti multipli, visualizzazioni e Frame di Windows](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e il `CSplitterWnd` Cenni preliminari sulla classe per ulteriori informazioni sulle finestre con separatore statico.

##  <a name="createview"></a>  CSplitterWnd::CreateView

Consente di creare i riquadri per una finestra con separatore statico.

```
virtual BOOL CreateView(
    int row,
    int col,
    CRuntimeClass* pViewClass,
    SIZE sizeInit,
    CCreateContext* pContext);
```

### <a name="parameters"></a>Parametri

*row*<br/>
Specifica la riga della finestra con separatore in cui inserire la nuova vista.

*col*<br/>
Specifica la colonna di finestra con separatore in cui inserire la nuova vista.

*pViewClass*<br/>
Specifica la [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) della nuova visualizzazione.

*sizeInit*<br/>
Specifica le dimensioni iniziali della nuova visualizzazione.

*pContext*<br/>
Un puntatore a un contesto di creazione considerato di creare la vista (in genere il *pContext* passati sottoposto a override del frame padre [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro in cui è la finestra con separatore Creazione in corso).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Tutti i riquadri di una finestra con separatore statico devono essere creati prima che il framework Visualizza la barra di divisione.

Inoltre, il framework chiama questa funzione membro per creare nuovi riquadri, quando l'utente di una finestra con separatore dinamico suddivide un riquadro, una riga o colonna.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#4](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_2.cpp)]

##  <a name="csplitterwnd"></a>  CSplitterWnd::CSplitterWnd

Chiamata a costruire un `CSplitterWnd` oggetto.

```
CSplitterWnd();
```

### <a name="remarks"></a>Note

Costruire un `CSplitterWnd` oggetto in due passaggi. In primo luogo, chiamare il costruttore che crea il `CSplitterWnd` dell'oggetto e quindi chiamare il [Create](#create) funzione membro, che crea la finestra con separatore e lo collega al `CSplitterWnd` oggetto.

##  <a name="deletecolumn"></a>  CSplitterWnd::DeleteColumn

Elimina una colonna dalla finestra con separatore.

```
virtual void DeleteColumn(int colDelete);
```

### <a name="parameters"></a>Parametri

*colDelete*<br/>
Specifica la colonna da eliminare.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore è applicato lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più avanzati finestre con separatore dinamici.

##  <a name="deleterow"></a>  CSplitterWnd::DeleteRow

Elimina una riga dalla finestra con separatore.

```
virtual void DeleteRow(int rowDelete);
```

### <a name="parameters"></a>Parametri

*rowDelete*<br/>
Specifica la riga da eliminare.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore è applicato lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più avanzati finestre con separatore dinamici.

##  <a name="deleteview"></a>  CSplitterWnd::DeleteView

Elimina una visualizzazione dalla finestra con separatore.

```
virtual void DeleteView(
    int row,
    int col);
```

### <a name="parameters"></a>Parametri

*row*<br/>
Specifica la riga di finestra con separatore in corrispondenza del quale eliminare la visualizzazione.

*col*<br/>
Specifica la colonna di finestra con separatore in corrispondenza del quale eliminare la visualizzazione.

### <a name="remarks"></a>Note

Se la visualizzazione attiva eliminazione, nella visualizzazione successiva diventerà attiva. L'implementazione predefinita presuppone che la vista verrà automaticamente eliminare nei [PostNcDestroy](../../mfc/reference/cwnd-class.md#postncdestroy).

Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore è applicato lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più avanzati finestre con separatore dinamici.

##  <a name="dokeyboardsplit"></a>  CSplitterWnd::DoKeyboardSplit

Esegue il comando, in genere "Dividi finestra". di divisione tastiera

```
virtual BOOL DoKeyboardSplit();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro è un comando di alto livello che viene usato per il [CView](../../mfc/reference/cview-class.md) classe delegare il `CSplitterWnd` implementazione.

##  <a name="doscroll"></a>  CSplitterWnd::DoScroll

Consente lo scorrimento sincronizzato delle finestre divise.

```
virtual BOOL DoScroll(
    CView* pViewFrom,
    UINT nScrollCode,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*pViewFrom*<br/>
Puntatore alla visualizzazione da cui proviene il messaggio di scorrimento.

*nScrollCode*<br/>
Un codice della barra di scorrimento che indica che l'utente scorrevole richiesta. Questo parametro è costituito da due parti: un byte meno significativi, che determina il tipo di scorrimento che si verificano in senso orizzontale, e un byte di ordine superiore, che determina il tipo di scorrimento verticale in corso:

    - SB_BOTTOM scorre verso il basso.

    - Una riga SB_LINEDOWN scorre verso il basso.

    - SB_LINEUP scorre la precedente riga.

    - Una sola pagina SB_PAGEDOWN scorre verso il basso.

    - Scorre SB_PAGEUP una pagina su o pagina.

    - SB_TOP scorre verso l'alto.

*bDoScroll*<br/>
Determina se si verifica l'azione di scorrimento specificata. Se *bDoScroll* è TRUE (ovvero, se esiste una finestra figlio, e se il suddivisione di windows è un intervallo di scorrimento), quindi l'azione di scorrimento specificata può avvenire; se *bDoScroll* è FALSE (vale a dire, se nessuna finestra figlio è presente, o le doppie visualizzazioni non dispone di alcun intervallo di scorrimento), quindi non si verifica lo scorrimento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scorrimento sincronizzato verrà generato. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework per eseguire lo scorrimento sincronizzato delle finestre divise. quando la visualizzazione riceve un messaggio di scorrimento. Eseguire l'override per richiedere un intervento dell'utente prima che è consentito lo scorrimento sincronizzato.

##  <a name="doscrollby"></a>  CSplitterWnd::DoScrollBy

Consente di scorrere le finestre divise di un determinato numero di pixel.

```
virtual BOOL DoScrollBy(
    CView* pViewFrom,
    CSize sizeScroll,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*pViewFrom*<br/>
Puntatore alla visualizzazione da cui proviene il messaggio di scorrimento.

*sizeScroll*<br/>
Numero di pixel da scorrere orizzontalmente e verticalmente.

*bDoScroll*<br/>
Determina se si verifica l'azione di scorrimento specificata. Se *bDoScroll* è TRUE (ovvero, se esiste una finestra figlio, e se il suddivisione di windows è un intervallo di scorrimento), quindi l'azione di scorrimento specificata può avvenire; se *bDoScroll* è FALSE (vale a dire, se nessuna finestra figlio è presente, o le doppie visualizzazioni non dispone di alcun intervallo di scorrimento), quindi non si verifica lo scorrimento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scorrimento sincronizzato verrà generato. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework in risposta a un messaggio di scorrimento, per eseguire la sincronizzazione lo scorrimento delle finestre di suddivisione della quantità, in pixel, indicato dal *sizeScroll*. I valori positivi indicano lo scorrimento verso il basso e a destra. i valori negativi indicano lo scorrimento verticale e a sinistra.

Eseguire l'override per richiedere un intervento dell'utente prima di consentire a scorrimento.

##  <a name="getactivepane"></a>  CSplitterWnd::GetActivePane

Determina il riquadro attivo lo stato attivo o della vista attiva nel frame.

```
virtual CWnd* GetActivePane(
    int* pRow = NULL,
    int* pCol = NULL);
```

### <a name="parameters"></a>Parametri

*pRow*<br/>
Un puntatore a un **int** per recuperare il numero di riga del riquadro attivo.

*pCol*<br/>
Un puntatore a un **int** per recuperare il numero di colonna del riquadro attivo.

### <a name="return-value"></a>Valore restituito

Puntatore al riquadro attivo. NULL se non esiste alcun riquadro attivo.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework per determinare il riquadro attivo in una finestra con separatore. Eseguire l'override per richiedere un intervento dell'utente prima di ottenere il riquadro attivo.

##  <a name="getcolumncount"></a>  CSplitterWnd::GetColumnCount

Restituisce il numero di colonne riquadro corrente.

```
int GetColumnCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero corrente delle colonne nella barra di divisione. Per un separatore statico, questo sarà anche il numero massimo di colonne.

##  <a name="getcolumninfo"></a>  CSplitterWnd::GetColumnInfo

Restituisce le informazioni nella colonna specificata.

```
void GetColumnInfo(
    int col,
    int& cxCur,
    int& cxMin) const;
```

### <a name="parameters"></a>Parametri

*col*<br/>
Specifica una colonna.

*cxCur*<br/>
Un riferimento a un **int** da impostare per la larghezza corrente della colonna.

*cxMin*<br/>
Un riferimento a un **int** da impostare per la larghezza minima corrente della colonna.

##  <a name="getpane"></a>  CSplitterWnd::GetPane

Restituisce il riquadro alla riga specificata e alla colonna.

```
CWnd* GetPane(
    int row,
    int col) const;
```

### <a name="parameters"></a>Parametri

*row*<br/>
Specifica una riga.

*col*<br/>
Specifica una colonna.

### <a name="return-value"></a>Valore restituito

Restituisce il riquadro alla riga specificata e alla colonna. Il riquadro restituito è in genere un [CView](../../mfc/reference/cview-class.md)-classe derivata.

##  <a name="getrowcount"></a>  CSplitterWnd::GetRowCount

Restituisce il numero di riga corrente del riquadro.

```
int GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero corrente di righe nella finestra della barra di divisione. Per una finestra con separatore statico, questo sarà anche il numero massimo di righe.

##  <a name="getrowinfo"></a>  CSplitterWnd::GetRowInfo

Restituisce informazioni sulla riga specificata.

```
void GetRowInfo(
    int row,
    int& cyCur,
    int& cyMin) const;
```

### <a name="parameters"></a>Parametri

*row*<br/>
Specifica una riga.

*cyCur*<br/>
Un riferimento **int** impostata all'altezza corrente della riga in pixel.

*cyMin*<br/>
Un riferimento **int** da impostare per l'altezza minima corrente della riga in pixel.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per ottenere informazioni sulla riga specificata. Il *cyCur* parametro viene riempito con all'altezza corrente della riga specificata, e *cyMin* viene riempita con l'altezza minima della riga.

##  <a name="getscrollstyle"></a>  CSplitterWnd::GetScrollStyle

Restituisce lo stile della barra di scorrimento condiviso per la finestra con separatore.

```
DWORD GetScrollStyle() const;
```

### <a name="return-value"></a>Valore restituito

Uno o più delle seguenti finestre in stile flag, se ha esito positivo:

    - WS_HSCROLL se che la barra di divisione gestisce attualmente condivisa le barre di scorrimento orizzontale.

    - WS_VSCROLL se che la barra di divisione gestisce attualmente condivisa le barre di scorrimento verticale.

Se è zero, la finestra con separatore non gestisce attualmente tutte le barre di scorrimento condiviso.

##  <a name="idfromrowcol"></a>  CSplitterWnd::IdFromRowCol

Ottiene l'elemento figlio ID di finestra per il riquadro alla riga specificata e alla colonna.

```
int IdFromRowCol(
    int row,
    int col) const;
```

### <a name="parameters"></a>Parametri

*row*<br/>
Specifica la riga di finestra con separatore.

*col*<br/>
Specifica la colonna di finestra con separatore.

### <a name="return-value"></a>Valore restituito

L'ID della finestra figlio per il riquadro.

### <a name="remarks"></a>Note

Questa funzione membro viene utilizzata per la creazione di nonviews sotto forma di riquadri e può essere chiamata prima che il riquadro esiste.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#5](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_3.cpp)]

##  <a name="ischildpane"></a>  CSplitterWnd::IsChildPane

Determina se *pWnd* è attualmente un riquadro figlio di questa finestra con separatore.

```
BOOL IsChildPane(
    CWnd* pWnd,
    int* pRow,
    int* pCol);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto da sottoporre a test.

*pRow*<br/>
Un puntatore a un **int** in cui archiviare il numero di riga.

*pCol*<br/>
Un puntatore a un **int** in cui archiviare un numero di colonna.

### <a name="return-value"></a>Valore restituito

Se diverso da zero *pWnd* è attualmente un riquadro figlio di questa finestra con separatore, e *pRow* e *pCol* viene compilato con la posizione del riquadro nella finestra della barra di divisione. Se *pWnd* non è un riquadro figlio di questa finestra con separatore, viene restituito 0.

### <a name="remarks"></a>Note

Nelle versioni di Visual C++ precedenti alla 6.0, questa funzione è stata definita come

`BOOL IsChildPane(CWnd* pWnd, int& row, int& col);`

Questa versione è obsoleta e non deve essere utilizzata.

##  <a name="istracking"></a>  CSplitterWnd::IsTracking

Chiamare questa funzione membro per determinare se la barra di divisione nella finestra è in movimento.

```
BOOL IsTracking();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se un'operazione di divisione è in corso; in caso contrario 0.

##  <a name="ondrawsplitter"></a>  CSplitterWnd::OnDrawSplitter

Esegue il rendering di un'immagine di una finestra divisa.

```
virtual void OnDrawSplitter(
    CDC* pDC,
    ESplitType nType,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo in cui disegnare. Se *pDC* è NULL, quindi [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) viene chiamato dal framework e nessuna suddivisione finestra viene disegnata.

*nType*<br/>
Valore di `enum ESplitType`, che può essere uno dei seguenti:

    - `splitBox` La casella di trascinamento barra di divisione.

    - `splitBar` La barra che viene visualizzata tra le finestre di divisione di due.

    - `splitIntersection` L'intersezione tra le finestre di divisione. Questo elemento non verrà chiamato durante l'esecuzione in Windows 95 o 98.

    - `splitBorder` Bordi della finestra divisa.

*rect*<br/>
Un riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le dimensioni delle finestre di divisione.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework per disegnare e specificare le caratteristiche esatte di una finestra con separatore. Eseguire l'override `OnDrawSplitter` per una personalizzazione avanzata delle immagini per i vari componenti di con interfaccia grafici di una finestra con separatore. Le immagini predefinite sono simile alla barra di divisione in Works Microsoft per Windows o Microsoft Windows 95 o 98, in quanto vengono combinate insieme intersezioni tra le barre di divisione.

Per altre informazioni sulle finestre con separatore dinamico, vedere "Divisione Windows" nell'articolo [tipi di documenti multipli, visualizzazioni e Frame di Windows](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e il `CSplitterWnd` Cenni preliminari sulla classe.

##  <a name="oninverttracker"></a>  CSplitterWnd::OnInvertTracker

Esegue il rendering l'immagine di una finestra divisa per la stessa dimensione e forma la finestra cornice.

```
virtual void OnInvertTracker(const CRect& rect);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
Fare riferimento a un `CRect` oggetto che specifica il rettangolo di rilevamento.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework durante il ridimensionamento delle barre di divisione. Eseguire l'override `OnInvertTracker` per una personalizzazione avanzata delle immagini della finestra con separatore. Le immagini predefinite sono simile alla barra di divisione in Works Microsoft per Windows o Microsoft Windows 95 o 98, in quanto vengono combinate insieme intersezioni tra le barre di divisione.

Per altre informazioni sulle finestre con separatore dinamico, vedere "Divisione Windows" nell'articolo [tipi di documenti multipli, visualizzazioni e Frame di Windows](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e il `CSplitterWnd` Cenni preliminari sulla classe.

##  <a name="recalclayout"></a>  CSplitterWnd::RecalcLayout

Chiamata per visualizzare nuovamente la finestra con separatore dopo la regolazione delle dimensioni di riga o colonna.

```
virtual void RecalcLayout();
```

### <a name="remarks"></a>Note

Chiamare questa funzione membro per visualizzare di nuovo correttamente la finestra con separatore dopo che si sono modificati dimensioni delle righe e colonne con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro. Se si modificano le dimensioni di riga e colonna come parte del processo di creazione prima che la finestra con separatore è visibile, non è necessario chiamare questa funzione membro.

Il framework chiama questa funzione membro ogni volta che l'utente ridimensiona la finestra con separatore o si sposta una divisione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CSplitterWnd::SetColumnInfo](#setcolumninfo).

##  <a name="setactivepane"></a>  CSplitterWnd::SetActivePane

Imposta un riquadro come quello attivo nel frame.

```
virtual void SetActivePane(
    int row,
    int col,
    CWnd* pWnd = NULL);
```

### <a name="parameters"></a>Parametri

*row*<br/>
Se *pWnd* è NULL, specifica la riga nel riquadro che sarà attivo.

*col*<br/>
Se *pWnd* è NULL, specifica la colonna nel riquadro che sarà attivo.

*pWnd*<br/>
Puntatore a un oggetto `CWnd` . Se NULL, il riquadro specificato da *riga* e *col* viene impostata come attiva. Se non è NULL, specifica il riquadro che viene impostato come attivo.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework per impostare un riquadro come attivo quando l'utente modifica lo stato attivo a un riquadro all'interno della finestra cornice. È possibile chiamare in modo esplicito `SetActivePane` per modificare lo stato attivo alla visualizzazione specificata.

Specificare riquadro fornendo riga e colonna **oppure** fornendo *pWnd*.

##  <a name="setcolumninfo"></a>  CSplitterWnd::SetColumnInfo

Chiamata per impostare le informazioni di colonna specificata.

```
void SetColumnInfo(
    int col,
    int cxIdeal,
    int cxMin);
```

### <a name="parameters"></a>Parametri

*col*<br/>
Specifica una colonna di finestra con separatore.

*cxIdeal*<br/>
Specifica una larghezza ideale della colonna di finestra con separatore in pixel.

*cxMin*<br/>
Specifica una larghezza minima per la colonna di finestra con separatore in pixel.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per impostare una nuova larghezza minima e la larghezza ideale per una colonna. Il valore minimo della colonna determina se la colonna è troppo piccola per essere interamente visualizzato.

Quando il framework visualizza una finestra con separatore, dispone i riquadri in colonne e righe in base alle loro dimensioni ideali, procedendo dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#6](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_4.cpp)]

##  <a name="setrowinfo"></a>  CSplitterWnd::SetRowInfo

Chiamata a impostare le informazioni sulla riga specificata.

```
void SetRowInfo(
    int row,
    int cyIdeal,
    int cyMin);
```

### <a name="parameters"></a>Parametri

*row*<br/>
Specifica una riga della finestra con separatore.

*cyIdeal*<br/>
Specifica un'altezza ideale della riga di finestra con separatore in pixel.

*cyMin*<br/>
Specifica un'altezza minima della riga di finestra con separatore in pixel.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per impostare una nuova altezza minima e un'altezza ideale per una riga. Il valore minimo di righe determina quando la riga sarà troppo piccola per essere interamente visualizzato.

Quando il framework visualizza una finestra con separatore, dispone i riquadri in colonne e righe in base alle loro dimensioni ideali, procedendo dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.

##  <a name="setscrollstyle"></a>  CSplitterWnd::SetScrollStyle

Specifica che il nuovo stile di scorrimento per la finestra con separatore condiviso il supporto della barra di scorrimento.

```
void SetScrollStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Il nuovo stile di scorrimento per la finestra con separatore condiviso il supporto della barra di scorrimento, che può essere uno dei valori seguenti:

- WS_HSCROLL Create/Mostra orizzontale condiviso barre di scorrimento.

- WS_VSCROLL Mostra/creazione condivisa di scorrimento verticale.

### <a name="remarks"></a>Note

Dopo aver creata una barra di scorrimento verrà eliminato, anche se `SetScrollStyle` viene chiamata senza tale stile; invece vengono nascoste le barre di scorrimento. In questo modo le barre di scorrimento mantenere il proprio stato anche se sono nascoste. Dopo avere chiamato `SetScrollStyle` è necessario chiamare [RecalcLayout](#recalclayout) per tutte le modifiche abbiano effetto.

##  <a name="splitcolumn"></a>  CSplitterWnd::SplitColumn

Indica il punto di divisione verticale di una finestra cornice.

```
virtual BOOL SplitColumn(int cxBefore);
```

### <a name="parameters"></a>Parametri

*cxBefore*<br/>
La posizione, in pixel, prima del quale si verifica la divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata quando viene creata una finestra di divisione verticale. `SplitColumn` indica il percorso predefinito in cui si verifica la divisione.

`SplitColumn` viene chiamato dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore è applicato lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più avanzati finestre con separatore dinamici.

##  <a name="splitrow"></a>  CSplitterWnd::SplitRow

Indica il punto di divisione orizzontale di una finestra cornice.

```
virtual BOOL SplitRow(int cyBefore);
```

### <a name="parameters"></a>Parametri

*cyBefore*<br/>
La posizione, in pixel, prima del quale si verifica la divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata quando viene creata una finestra con separatore orizzontale. `SplitRow` indica il percorso predefinito in cui si verifica la divisione.

`SplitRow` viene chiamato dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore è applicato lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più avanzati finestre con separatore dinamici.

##  <a name="ondraw"></a>  CSplitterWnd::OnDraw

Chiamato dal framework per disegnare la finestra con separatore.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Esempio MFC viene](../../visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
