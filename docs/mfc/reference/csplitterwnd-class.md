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
ms.openlocfilehash: 8c8ce90f5e36d6cdc2592233588bc3bd7bf2c9d6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371689"
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
|[CSplitterWnd::CSplitterWndCSplitterWnd::CSplitterWnd](#csplitterwnd)|Chiamata per `CSplitterWnd` costruire un oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSplitterWnd::ActivateNext](#activatenext)|Esegue il comando Riquadro successivo o Riquadro precedente.|
|[CSplitterWnd::CanActivateNext (Successivo)](#canactivatenext)|Verifica se il comando Riquadro successivo o Riquadro precedente è attualmente possibile.|
|[CSplitterWnd::Crea](#create)|Chiamata per creare una finestra con separatore dinamico e associarla all'oggetto. `CSplitterWnd`|
|[CSplitterWnd::CreateScrollBarCtrl](#createscrollbarctrl)|Crea un controllo barra di scorrimento condiviso.|
|[CSplitterWnd::CreateStaticCSplitterWnd::CreateStatic](#createstatic)|Chiamata per creare una finestra con separatore statico e associarla all'oggetto. `CSplitterWnd`|
|[CSplitterWnd::CreateView](#createview)|Chiamata per creare un riquadro in una finestra con separatore.|
|[CSplitterWnd:colonnaeleteColonnaCSplitterWnd::DeleteColumn](#deletecolumn)|Elimina una colonna dalla finestra con separatore.|
|[CSplitterWnd::DeleteRow](#deleterow)|Elimina una riga dalla finestra con separatore.|
|[CSplitterWnd::DeleteView](#deleteview)|Elimina una visualizzazione dalla finestra con separatore.|
|[CSplitterWnd::DoKeyboardSplit](#dokeyboardsplit)|Esegue il comando di divisione della tastiera, in genere "Window Split".|
|[CSplitterWnd::DoScroll](#doscroll)|Esegue lo scorrimento sincronizzato delle finestre divise.|
|[CSplitterWnd::DoScrollBy](#doscrollby)|Scorre le finestre divise di un determinato numero di pixel.|
|[CSplitterWnd::GetActivePane](#getactivepane)|Determina il riquadro attivo dallo stato attivo o dalla visualizzazione attiva nel frame.|
|[CSplitterWnd::GetColumnCountCSplitterWnd::GetColumnCount](#getcolumncount)|Restituisce il conteggio delle colonne del riquadro corrente.|
|[CSplitterWnd::GetColumnInfo](#getcolumninfo)|Restituisce informazioni sulla colonna specificata.|
|[CSplitterWnd::GetPane](#getpane)|Restituisce il riquadro in corrispondenza della riga e della colonna specificate.|
|[CSplitterWnd::GetRowCountCSplitterWnd::GetRowCount](#getrowcount)|Restituisce il conteggio delle righe del riquadro corrente.|
|[CSplitterWnd::GetRowInfo](#getrowinfo)|Restituisce informazioni sulla riga specificata.|
|[CSplitterWnd::GetScrollStyle](#getscrollstyle)|Restituisce lo stile della barra di scorrimento condivisa.|
|[CSplitterWnd::IdFromRowCol](#idfromrowcol)|Restituisce l'ID di finestra figlio del riquadro in corrispondenza della riga e della colonna specificate.|
|[CSplitterWnd::IsChildPane](#ischildpane)|Chiamata per determinare se la finestra è attualmente un riquadro figlio di questa finestra con separatore.|
|[CSplitterWnd::IsTracking](#istracking)|Determina se la barra di divisione è attualmente in fase di spostamento.|
|[CSplitterWnd::RecalcLayout](#recalclayout)|Chiamata a visualizzare nuovamente la finestra della barra di divisione dopo aver regolato le dimensioni della riga o della colonna.|
|[CSplitterWnd::SetActivePane](#setactivepane)|Imposta un riquadro come attivo nella cornice.|
|[CSplitterWnd::SetColumnInfo](#setcolumninfo)|Chiamare per impostare le informazioni sulla colonna specificata.|
|[CSplitterWnd::SetRowInfo](#setrowinfo)|Chiamare per impostare le informazioni di riga specificate.|
|[CSplitterWnd::SetScrollStyle](#setscrollstyle)|Specifica il nuovo stile della barra di scorrimento per il supporto della barra di scorrimento condivisa della finestra con separatore.|
|[Colonna cSplitterWnd::SplitColumnCSplitterWnd::SplitColumn](#splitcolumn)|Indica dove una finestra cornice viene divisa verticalmente.|
|[CSplitterWnd::SplitRow](#splitrow)|Indica il punto in cui una finestra cornice viene divisa orizzontalmente.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CSplitterWnd::OnDraw](#ondraw)|Chiamato dal framework per disegnare la finestra con separatore.|
|[CSplitterWnd::OnDrawSplitter](#ondrawsplitter)|Esegue il rendering di un'immagine di una finestra divisa.|
|[CSplitterWnd::OnInvertTracker](#oninverttracker)|Esegue il rendering dell'immagine di una finestra divisa in modo che sia uguale alle stesse dimensioni e forma della finestra cornice.|

## <a name="remarks"></a>Osservazioni

Un riquadro è in genere un oggetto specifico dell'applicazione derivato da [CView](../../mfc/reference/cview-class.md), ma può essere qualsiasi oggetto [CWnd](../../mfc/reference/cwnd-class.md) con l'ID di finestra figlio appropriato.

Un `CSplitterWnd` oggetto è in genere incorporato in un oggetto [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) padre. Creare `CSplitterWnd` un oggetto attenendosi alla seguente procedura:

1. Incorporare `CSplitterWnd` una variabile membro nel frame padre.

2. Eseguire l'override della funzione membro [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) del frame padre.

3. Dall'interno della `OnCreateClient`funzione membro [Create](#create) o [CreateStatic](#createstatic) sottoposta a override di `CSplitterWnd`.

Chiamare `Create` la funzione membro per creare una finestra con separatore dinamico. Una finestra con separatore dinamico viene in genere utilizzata per creare e scorrere un numero di singoli riquadri, o visualizzazioni, dello stesso documento. Il framework crea automaticamente un riquadro iniziale per la barra di divisione; quindi il framework crea, ridimensiona ed elimina i riquadri aggiuntivi come l'utente gestisce i controlli della finestra con separatore.

Quando si `Create`chiama , si specifica un'altezza minima della riga e la larghezza della colonna che determinano quando i riquadri sono troppo piccoli per essere visualizzati completamente. Dopo aver `Create`chiamato , è possibile modificare questi valori minimi chiamando il [SetColumnInfo](#setcolumninfo) e [SetRowInfo](#setrowinfo) funzioni membro .

Utilizzare anche `SetColumnInfo` `SetRowInfo` le funzioni membro e per impostare una larghezza "ideale" per una colonna e l'altezza "ideale" per una riga. Quando il framework visualizza una finestra con separatore, viene innanzitutto visualizzato il frame padre, quindi la finestra con separatore. Il framework dispone quindi i riquadri in colonne e righe in base alle dimensioni ideali, lavorando dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.

Tutti i riquadri in una finestra con separatore dinamico devono essere della stessa classe. Le applicazioni familiari che supportano le finestre con separatore dinamico includono Microsoft Word e Microsoft Excel.

Utilizzare `CreateStatic` la funzione membro per creare una finestra con separatore statico. L'utente può modificare solo le dimensioni dei riquadri in una finestra con separatore statico, non il numero o l'ordine.

È necessario creare in modo specifico tutti i riquadri della barra di divisione statica quando si crea la barra di divisione statica. Assicurarsi di creare tutti i riquadri `OnCreateClient` prima che la funzione membro del frame padre restituisce, altrimenti il framework non verrà visualizzata correttamente la finestra.

La `CreateStatic` funzione membro inizializza automaticamente una barra di divisione statica con un'altezza minima della riga e la larghezza della colonna pari a 0.The member function automatically initializes a static splitter with a minimum row height and column width of 0. Dopo aver `Create`chiamato , regolare questi valori minimi chiamando le funzioni membro [SetColumnInfo](#setcolumninfo) e [SetRowInfo](#setrowinfo) . Utilizzare `SetColumnInfo` anche `SetRowInfo` e `CreateStatic` dopo la chiamata per indicare le dimensioni del riquadro ideali desiderate.

I singoli riquadri di una barra di divisione statica spesso appartengono a classi diverse. Per esempi di finestre con separatore statico, vedere l'editor grafico e Gestione file di Windows.For examples of static splitter windows, see the graphics editor and the Windows File Manager.

Una finestra con separatore supporta barre di scorrimento speciali (a parte le barre di scorrimento che i riquadri possono avere). Queste barre di scorrimento `CSplitterWnd` sono elementi figlio dell'oggetto e sono condivise con i riquadri.

Queste barre di scorrimento speciali vengono create quando si crea la finestra con separatore. Ad esempio, `CSplitterWnd` un oggetto che dispone di una riga, due colonne e lo stile WS_VSCROLL visualizzerà una barra di scorrimento verticale condivisa dai due riquadri. Quando l'utente sposta la barra di scorrimento, WM_VSCROLL messaggi vengono inviati a entrambi i riquadri. Quando i riquadri impostano la posizione della barra di scorrimento, viene impostata la barra di scorrimento condivisa.

Per ulteriori informazioni sulle finestre con separatore, vedere [Nota tecnica 29](../../mfc/tn029-splitter-windows.md).

Per altre informazioni su come creare finestre con separatore dinamico, vedere:For more information on how to create dynamic splitter windows, see:

- Esempio MFC [Scribble](../../overview/visual-cpp-samples.md)

- Esempio MFC [VIEWEX](../../overview/visual-cpp-samples.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSplitterWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="csplitterwndactivatenext"></a><a name="activatenext"></a>CSplitterWnd::ActivateNext

Chiamato dal framework per eseguire il comando Riquadro successivo o Riquadro precedente.

```
virtual void ActivateNext(BOOL bPrev = FALSE);
```

### <a name="parameters"></a>Parametri

*bPrev (informazioni in base al tallin*<br/>
Indica la finestra da attivare. **TRUE** per il precedente; **FALSE** per il prossimo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è un comando di alto livello che `CSplitterWnd` viene utilizzato dal [CView](../../mfc/reference/cview-class.md) classe per delegare all'implementazione.

## <a name="csplitterwndcanactivatenext"></a><a name="canactivatenext"></a>CSplitterWnd::CanActivateNext (Successivo)

Chiamato dal framework per verificare se il comando Riquadro successivo o Riquadro precedente è attualmente possibile.

```
virtual BOOL CanActivateNext(BOOL bPrev = FALSE);
```

### <a name="parameters"></a>Parametri

*bPrev (informazioni in base al tallin*<br/>
Indica la finestra da attivare. **TRUE** per il precedente; **FALSE** per il prossimo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è un comando di alto livello che `CSplitterWnd` viene utilizzato dal [CView](../../mfc/reference/cview-class.md) classe per delegare all'implementazione.

## <a name="csplitterwndcreate"></a><a name="create"></a>CSplitterWnd::Crea

Per creare una finestra con `Create` separatore dinamico, chiamare la funzione membro.

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

*pParentWnd (informazioni in due)*<br/>
Finestra cornice padre della finestra con separatore.

*nMaxRows (informazioni in base al valore maxRows*<br/>
Numero massimo di righe nella finestra con separatore. Questo valore non deve essere superiore a 2.

*nMaxCols*<br/>
Numero massimo di colonne nella finestra con separatore. Questo valore non deve essere superiore a 2.

*sizeMin*<br/>
Specifica le dimensioni minime con cui può essere visualizzato un riquadro.

*pContext*<br/>
Puntatore a una struttura [CCreateContext.](../../mfc/reference/ccreatecontext-structure.md) Nella maggior parte dei casi, può trattarsi del *pContext* passato alla finestra cornice padre.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID della finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST a meno che la finestra con separatore non sia nidificata all'interno di un'altra finestra con separatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile `CSplitterWnd` incorporare un oggetto in un oggetto [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) padre attenendosi alla seguente procedura:

1. Incorporare `CSplitterWnd` una variabile membro nel frame padre.

1. Eseguire l'override della funzione membro [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) del frame padre.

1. Chiamare `Create` la funzione membro dall'interno di sottoposto a override `OnCreateClient`.

Quando si crea una finestra con separatore dall'interno di un frame padre, passare il parametro *pContext* del frame padre alla finestra con separatore. In caso contrario, questo parametro può essere NULL.

L'altezza minima iniziale della riga e la larghezza della colonna di una finestra con separatore dinamico sono impostate dal parametro *sizeMin.* Questi minimi, che determinano se un riquadro è troppo piccolo per essere visualizzato nella sua interezza, può essere modificato con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro.

Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [Più tipi di documento, visualizzazioni e finestre](../../mfc/multiple-document-types-views-and-frame-windows.md)cornice , [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)e cenni preliminari sulla `CSplitterWnd` classe .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#125](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_1.cpp)]

## <a name="csplitterwndcreatescrollbarctrl"></a><a name="createscrollbarctrl"></a>CSplitterWnd::CreateScrollBarCtrl

Chiamato dal framework per creare un controllo barra di scorrimento condiviso.

```
virtual BOOL CreateScrollBarCtrl(
    DWORD dwStyle,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID della finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST a meno che la finestra con separatore non sia nidificata all'interno di un'altra finestra con separatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire `CreateScrollBarCtrl` l'override per includere controlli aggiuntivi accanto a una barra di scorrimento. Il comportamento predefinito prevede la creazione di normali controlli barra di scorrimento di Windows.The default behavior is to create normal Windows scroll bar controls.

## <a name="csplitterwndcreatestatic"></a><a name="createstatic"></a>CSplitterWnd::CreateStaticCSplitterWnd::CreateStatic

Per creare una finestra con `CreateStatic` separatore statico, chiamare la funzione membro.

```
virtual BOOL CreateStatic(
    CWnd* pParentWnd,
    int nRows,
    int nCols,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE,
    UINT nID = AFX_IDW_PANE_FIRST);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Finestra cornice padre della finestra con separatore.

*nRows*<br/>
Numero di righe. Questo valore non deve superare 16.

*nCols*<br/>
Numero di colonne. Questo valore non deve superare 16.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID della finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST a meno che la finestra con separatore non sia nidificata all'interno di un'altra finestra con separatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un `CSplitterWnd` oggetto è in `CFrameWnd` genere incorporato in un oggetto padre o CMDIChildWnd eseguendo la procedura seguente:A is usually embedded in a parent or [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) object by taking the following steps:

1. Incorporare `CSplitterWnd` una variabile membro nel frame padre.

1. Eseguire l'override `OnCreateClient` della funzione membro del frame padre.

1. Chiamare `CreateStatic` la funzione membro dall'interno dell'oggetto [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient)sottoposto a override.

Una finestra con separatore statico contiene un numero fisso di riquadri, spesso da classi diverse.

Quando si crea una finestra con separatore statico, è necessario creare contemporaneamente tutti i relativi riquadri. Il [CreateView](#createview) funzione membro viene in genere utilizzata a questo scopo, ma è possibile creare anche altre classi non view.

L'altezza minima iniziale della riga e la larghezza della colonna per una finestra con separatore statico è 0.The initial minimum row height and column width for a static splitter window is 0. Questi minimi, che determinano quando un riquadro è troppo piccolo per essere visualizzato nella sua interezza, può essere modificato con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro.

Per aggiungere barre di scorrimento a una finestra con separatore statico, aggiungere gli stili WS_HSCROLL e WS_VSCROLL a *dwStyle*.

Vedere "Finestre con separatore" nell'articolo [Più tipi di documento, visualizzazioni e finestre con frame](../../mfc/multiple-document-types-views-and-frame-windows.md), [nota tecnica 29](../../mfc/tn029-splitter-windows.md)e cenni `CSplitterWnd` preliminari sulla classe per ulteriori informazioni sulle finestre con separatore statico.

## <a name="csplitterwndcreateview"></a><a name="createview"></a>CSplitterWnd::CreateView

Crea i riquadri per una finestra con separatore statico.

```
virtual BOOL CreateView(
    int row,
    int col,
    CRuntimeClass* pViewClass,
    SIZE sizeInit,
    CCreateContext* pContext);
```

### <a name="parameters"></a>Parametri

*Riga*<br/>
Specifica la riga della finestra con separatore in cui posizionare la nuova vista.

*col*<br/>
Specifica la colonna della finestra con separatore in cui posizionare la nuova vista.

*pViewClass (classe pViewClass)*<br/>
Specifica il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) della nuova visualizzazione.

*sizeInit*<br/>
Specifica la dimensione iniziale della nuova vista.

*pContext*<br/>
Puntatore a un contesto di creazione utilizzato per creare la visualizzazione (in genere il *pContext* passato nella funzione membro [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) sottoposto a override del frame padre in cui viene creata la finestra con separatore).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Tutti i riquadri di una finestra con separatore statico devono essere creati prima che il framework visualizzi la barra di divisione.

Il framework chiama anche questa funzione membro per creare nuovi riquadri quando l'utente di una finestra con separatore dinamico divide un riquadro, riga o colonna.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#4](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_2.cpp)]

## <a name="csplitterwndcsplitterwnd"></a><a name="csplitterwnd"></a>CSplitterWnd::CSplitterWndCSplitterWnd::CSplitterWnd

Chiamata per `CSplitterWnd` costruire un oggetto.

```
CSplitterWnd();
```

### <a name="remarks"></a>Osservazioni

Costruire `CSplitterWnd` un oggetto in due passaggi. In primo luogo, chiamare `CSplitterWnd` il costruttore, che crea l'oggetto, quindi chiamare il [Create](#create) `CSplitterWnd` funzione membro, che crea la finestra con separatore e lo associa all'oggetto.

## <a name="csplitterwnddeletecolumn"></a><a name="deletecolumn"></a>CSplitterWnd:colonnaeleteColonnaCSplitterWnd::DeleteColumn

Elimina una colonna dalla finestra con separatore.

```
virtual void DeleteColumn(int colDelete);
```

### <a name="parameters"></a>Parametri

*colCancella*<br/>
Specifica la colonna da eliminare.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, insieme alla funzione virtuale [CreateView](#createview), per implementare separatori dinamici più avanzati.

## <a name="csplitterwnddeleterow"></a><a name="deleterow"></a>CSplitterWnd::DeleteRow

Elimina una riga dalla finestra con separatore.

```
virtual void DeleteRow(int rowDelete);
```

### <a name="parameters"></a>Parametri

*rowElimina*<br/>
Specifica la riga da eliminare.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, insieme alla funzione virtuale [CreateView](#createview), per implementare separatori dinamici più avanzati.

## <a name="csplitterwnddeleteview"></a><a name="deleteview"></a>CSplitterWnd::DeleteView

Elimina una visualizzazione dalla finestra con separatore.

```
virtual void DeleteView(
    int row,
    int col);
```

### <a name="parameters"></a>Parametri

*Riga*<br/>
Specifica la riga della finestra con separatore in corrispondenza della quale eliminare la visualizzazione.

*col*<br/>
Specifica la colonna della finestra con separatore in corrispondenza della quale eliminare la visualizzazione.

### <a name="remarks"></a>Osservazioni

Se la vista attiva viene eliminata, la vista successiva diventerà attiva. L'implementazione predefinita presuppone che la visualizzazione verrà eliminata automaticamente in [PostNcDestroy](../../mfc/reference/cwnd-class.md#postncdestroy).

Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, insieme alla funzione virtuale [CreateView](#createview), per implementare separatori dinamici più avanzati.

## <a name="csplitterwnddokeyboardsplit"></a><a name="dokeyboardsplit"></a>CSplitterWnd::DoKeyboardSplit

Esegue il comando di divisione della tastiera, in genere "Window Split".

```
virtual BOOL DoKeyboardSplit();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è un comando di alto livello che `CSplitterWnd` viene utilizzato dal [CView](../../mfc/reference/cview-class.md) classe per delegare all'implementazione.

## <a name="csplitterwnddoscroll"></a><a name="doscroll"></a>CSplitterWnd::DoScroll

Esegue lo scorrimento sincronizzato delle finestre divise.

```
virtual BOOL DoScroll(
    CView* pViewFrom,
    UINT nScrollCode,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*pViewFrom*<br/>
Puntatore alla visualizzazione da cui ha origine il messaggio a scorrimento.

*nScrollCode (Codice degli effetti su inequi*<br/>
Codice a barre di scorrimento che indica la richiesta di scorrimento dell'utente. Questo parametro è composto da due parti: un byte meno significativo, che determina il tipo di scorrimento che si verifica orizzontalmente, e un byte di ordine superiore, che determina il tipo di scorrimento verticale:

- SB_BOTTOM scorre verso il basso.

- SB_LINEDOWN Scorre una riga verso il basso.

- SB_LINEUP Scorre di una riga verso l'alto.

- SB_PAGEDOWN Scorre di una pagina verso il basso.

- SB_PAGEUP Scorre di una pagina verso l'alto.

- SB_TOP Scorre verso l'alto.

*bScorrere*<br/>
Determina se si verifica l'azione di scorrimento specificata. Se *bDoScroll* è TRUE (ovvero, se esiste una finestra figlio e se le finestre divise hanno un intervallo di scorrimento), l'azione di scorrimento specificata può avere luogo; se *bDoScroll* è FALSE (ovvero, se non esiste alcuna finestra figlio o le visualizzazioni suddivise non hanno alcun intervallo di scorrimento), lo scorrimento non si verifica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se si verifica lo scorrimento sincronizzato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework per eseguire lo scorrimento sincronizzato delle finestre divise quando la visualizzazione riceve un messaggio di scorrimento. Eseguire l'override per richiedere un'azione da parte dell'utente prima che sia consentito lo scorrimento sincronizzato.

## <a name="csplitterwnddoscrollby"></a><a name="doscrollby"></a>CSplitterWnd::DoScrollBy

Scorre le finestre divise di un determinato numero di pixel.

```
virtual BOOL DoScrollBy(
    CView* pViewFrom,
    CSize sizeScroll,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*pViewFrom*<br/>
Puntatore alla visualizzazione da cui ha origine il messaggio a scorrimento.

*sizeScroll*<br/>
Numero di pixel da scorrere orizzontalmente e verticalmente.

*bScorrere*<br/>
Determina se si verifica l'azione di scorrimento specificata. Se *bDoScroll* è TRUE (ovvero, se esiste una finestra figlio e se le finestre divise hanno un intervallo di scorrimento), l'azione di scorrimento specificata può avere luogo; se *bDoScroll* è FALSE (ovvero, se non esiste alcuna finestra figlio o le visualizzazioni suddivise non hanno alcun intervallo di scorrimento), lo scorrimento non si verifica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se si verifica lo scorrimento sincronizzato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework in risposta a un messaggio di scorrimento, per eseguire lo scorrimento sincronizzato delle finestre divise per la quantità, in pixel, indicata da *sizeScroll*. I valori positivi indicano lo scorrimento verso il basso e verso destra; i valori negativi indicano lo scorrimento verso l'alto e verso sinistra.

Eseguire l'override per richiedere un'azione da parte dell'utente prima di consentire lo scorrimento.

## <a name="csplitterwndgetactivepane"></a><a name="getactivepane"></a>CSplitterWnd::GetActivePane

Determina il riquadro attivo dallo stato attivo o dalla visualizzazione attiva nel frame.

```
virtual CWnd* GetActivePane(
    int* pRow = NULL,
    int* pCol = NULL);
```

### <a name="parameters"></a>Parametri

*pRow*<br/>
Puntatore a un **int** per recuperare il numero di riga del riquadro attivo.

*pCol*<br/>
Puntatore a un **int** per recuperare il numero di colonna del riquadro attivo.

### <a name="return-value"></a>Valore restituito

Puntatore al riquadro attivo. NULL se non esiste alcun riquadro attivo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework per determinare il riquadro attivo in una finestra con separatore. Eseguire l'override per richiedere un'azione da parte dell'utente prima di ottenere il riquadro attivo.

## <a name="csplitterwndgetcolumncount"></a><a name="getcolumncount"></a>CSplitterWnd::GetColumnCountCSplitterWnd::GetColumnCount

Restituisce il conteggio delle colonne del riquadro corrente.

```
int GetColumnCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero corrente di colonne nella barra di divisione. Per una barra di divisione statica, questo sarà anche il numero massimo di colonne.

## <a name="csplitterwndgetcolumninfo"></a><a name="getcolumninfo"></a>CSplitterWnd::GetColumnInfo

Restituisce informazioni sulla colonna specificata.

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
Riferimento a un **int** da impostare sulla larghezza corrente della colonna.

*cxMin*<br/>
Riferimento a un **int** da impostare sulla larghezza minima corrente della colonna.

## <a name="csplitterwndgetpane"></a><a name="getpane"></a>CSplitterWnd::GetPane

Restituisce il riquadro in corrispondenza della riga e della colonna specificate.

```
CWnd* GetPane(
    int row,
    int col) const;
```

### <a name="parameters"></a>Parametri

*Riga*<br/>
Specifica una riga.

*col*<br/>
Specifica una colonna.

### <a name="return-value"></a>Valore restituito

Restituisce il riquadro in corrispondenza della riga e della colonna specificate. Il riquadro restituito è in genere una classe derivata da CView.The returned pane is usually a [CView-derived](../../mfc/reference/cview-class.md)class.

## <a name="csplitterwndgetrowcount"></a><a name="getrowcount"></a>CSplitterWnd::GetRowCountCSplitterWnd::GetRowCount

Restituisce il conteggio delle righe del riquadro corrente.

```
int GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero corrente di righe nella finestra con separatore. Per una finestra con separatore statico, questo sarà anche il numero massimo di righe.

## <a name="csplitterwndgetrowinfo"></a><a name="getrowinfo"></a>CSplitterWnd::GetRowInfo

Restituisce informazioni sulla riga specificata.

```
void GetRowInfo(
    int row,
    int& cyCur,
    int& cyMin) const;
```

### <a name="parameters"></a>Parametri

*Riga*<br/>
Specifica una riga.

*cyCur*<br/>
Riferimento a **int** da impostare sull'altezza corrente della riga in pixel.

*cyMin*<br/>
Riferimento a **int** da impostare sull'altezza minima corrente della riga in pixel.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per ottenere informazioni sulla riga specificata. Il parametro *cyCur* viene riempito con l'altezza corrente della riga specificata e *cyMin* viene riempito con l'altezza minima della riga.

## <a name="csplitterwndgetscrollstyle"></a><a name="getscrollstyle"></a>CSplitterWnd::GetScrollStyle

Restituisce lo stile della barra di scorrimento condivisa per la finestra con separatore.

```
DWORD GetScrollStyle() const;
```

### <a name="return-value"></a>Valore restituito

Uno o più dei seguenti flag di stile di windows, se ha esito positivo:

- WS_HSCROLL Se la barra di divisione gestisce attualmente le barre di scorrimento orizzontali condivise.

- WS_VSCROLL Se la barra di divisione gestisce attualmente le barre di scorrimento verticali condivise.

Se è zero, la finestra con separatore non gestisce attualmente le barre di scorrimento condivise.

## <a name="csplitterwndidfromrowcol"></a><a name="idfromrowcol"></a>CSplitterWnd::IdFromRowCol

Ottiene l'ID della finestra figlio per il riquadro in corrispondenza della riga e della colonna specificate.

```
int IdFromRowCol(
    int row,
    int col) const;
```

### <a name="parameters"></a>Parametri

*Riga*<br/>
Specifica la riga della finestra con separatore.

*col*<br/>
Specifica la colonna della finestra con separatore.

### <a name="return-value"></a>Valore restituito

ID della finestra figlio per il riquadro.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene utilizzata per la creazione di non visualizzazioni come riquadri e può essere chiamata prima che il riquadro esista.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#5](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_3.cpp)]

## <a name="csplitterwndischildpane"></a><a name="ischildpane"></a>CSplitterWnd::IsChildPane

Determina se *pWnd* è attualmente un riquadro figlio di questa finestra con separatore.

```
BOOL IsChildPane(
    CWnd* pWnd,
    int* pRow,
    int* pCol);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore a un [cWnd](../../mfc/reference/cwnd-class.md) oggetto da testare.

*pRow*<br/>
Puntatore a un **int** in cui archiviare il numero di riga.

*pCol*<br/>
Puntatore a un **int** in cui archiviare un numero di colonna.

### <a name="return-value"></a>Valore restituito

Se diverso da zero, *pWnd* è attualmente un riquadro figlio di questa finestra con separatore e *pRow* e *pCol* vengono compilati con la posizione del riquadro nella finestra con separatore. Se *pWnd* non è un riquadro figlio di questa finestra con separatore, viene restituito 0.

### <a name="remarks"></a>Osservazioni

Nelle versioni di Visual C

`BOOL IsChildPane(CWnd* pWnd, int& row, int& col);`

Questa versione è obsoleta e non deve essere utilizzata.

## <a name="csplitterwndistracking"></a><a name="istracking"></a>CSplitterWnd::IsTracking

Chiamare questa funzione membro per determinare se la barra di divisione nella finestra è attualmente in fase di spostamento.

```
BOOL IsTracking();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è in corso un'operazione di divisione; in caso contrario 0.

## <a name="csplitterwndondrawsplitter"></a><a name="ondrawsplitter"></a>CSplitterWnd::OnDrawSplitter

Esegue il rendering di un'immagine di una finestra divisa.

```
virtual void OnDrawSplitter(
    CDC* pDC,
    ESplitType nType,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo in cui disegnare. Se *pDC* è NULL, [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) viene chiamato dal framework e non viene disegnata alcuna finestra divisa.

*nType*<br/>
Valore di `enum ESplitType`, che può essere uno dei seguenti:

- `splitBox`Casella di trascinamento della barra di divisione.

- `splitBar`Barra visualizzata tra le due finestre divise.

- `splitIntersection`Intersezione delle finestre divise. Questo elemento non verrà chiamato quando viene eseguito su Windows 95/98.

- `splitBorder`Bordi della finestra divisa.

*Rect*<br/>
Riferimento a un [cRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le dimensioni e la forma delle finestre divise.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework per disegnare e specificare le caratteristiche esatte di una finestra con separatore. Eseguire `OnDrawSplitter` l'override per la personalizzazione avanzata delle immagini per i vari componenti grafici di una finestra con separatore. L'immagine predefinita è simile alla barra di divisione in Microsoft Works per Windows o Microsoft Windows 95/98, in quanto le intersezioni delle barre di divisione vengono fuse insieme.

Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [Più tipi di documento, visualizzazioni e finestre](../../mfc/multiple-document-types-views-and-frame-windows.md)cornice , [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)e cenni preliminari sulla `CSplitterWnd` classe .

## <a name="csplitterwndoninverttracker"></a><a name="oninverttracker"></a>CSplitterWnd::OnInvertTracker

Esegue il rendering dell'immagine di una finestra divisa in modo che sia uguale alle stesse dimensioni e forma della finestra cornice.

```
virtual void OnInvertTracker(const CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Riferimento a `CRect` un oggetto che specifica il rettangolo di rilevamento.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework durante il ridimensionamento delle finestre di divisione. Eseguire `OnInvertTracker` l'override per la personalizzazione avanzata delle immagini della finestra con separatore. L'immagine predefinita è simile alla barra di divisione in Microsoft Works per Windows o Microsoft Windows 95/98, in quanto le intersezioni delle barre di divisione vengono fuse insieme.

Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [Più tipi di documento, visualizzazioni e finestre](../../mfc/multiple-document-types-views-and-frame-windows.md)cornice , [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)e cenni preliminari sulla `CSplitterWnd` classe .

## <a name="csplitterwndrecalclayout"></a><a name="recalclayout"></a>CSplitterWnd::RecalcLayout

Chiamata a visualizzare nuovamente la finestra della barra di divisione dopo aver regolato le dimensioni della riga o della colonna.

```
virtual void RecalcLayout();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per visualizzare nuovamente correttamente la finestra con separatore dopo aver modificato le dimensioni di riga e colonna con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro. Se si modificano le dimensioni di riga e colonna come parte del processo di creazione prima che la finestra con separatore sia visibile, non è necessario chiamare questa funzione membro.

Il framework chiama questa funzione membro ogni volta che l'utente ridimensiona la finestra con separatore o sposta una divisione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CSplitterWnd::SetColumnInfo](#setcolumninfo).

## <a name="csplitterwndsetactivepane"></a><a name="setactivepane"></a>CSplitterWnd::SetActivePane

Imposta un riquadro come attivo nella cornice.

```
virtual void SetActivePane(
    int row,
    int col,
    CWnd* pWnd = NULL);
```

### <a name="parameters"></a>Parametri

*Riga*<br/>
Se *pWnd* è NULL, specifica la riga nel riquadro che sarà attiva.

*col*<br/>
Se *pWnd* è NULL, specifica la colonna nel riquadro che sarà attiva.

*pWnd (in questo stato di windows*<br/>
Puntatore a un oggetto `CWnd`. Se NULL, il riquadro specificato da *row* e *col* è impostato su attivo. Se non NULL, specifica il riquadro impostato come attivo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework per impostare un riquadro come attivo quando l'utente modifica lo stato attivo in un riquadro all'interno della finestra cornice. È possibile `SetActivePane` chiamare in modo esplicito per modificare lo stato attivo sulla visualizzazione specificata.

Specificare il riquadro specificando una riga e una colonna **oppure** fornendo *pWnd*.

## <a name="csplitterwndsetcolumninfo"></a><a name="setcolumninfo"></a>CSplitterWnd::SetColumnInfo

Chiamare per impostare le informazioni sulla colonna specificata.

```
void SetColumnInfo(
    int col,
    int cxIdeal,
    int cxMin);
```

### <a name="parameters"></a>Parametri

*col*<br/>
Specifica una colonna della finestra con separatore.

*cxIdeal*<br/>
Specifica una larghezza ideale per la colonna della finestra con separatore in pixel.

*cxMin*<br/>
Specifica una larghezza minima per la colonna della finestra con separatore in pixel.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per impostare una nuova larghezza minima e larghezza ideale per una colonna. Il valore minimo della colonna determina quando la colonna sarà troppo piccola per essere visualizzata completamente.

Quando il framework visualizza la finestra con separatore, dispone i riquadri in colonne e righe in base alle dimensioni ideali, lavorando dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#6](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_4.cpp)]

## <a name="csplitterwndsetrowinfo"></a><a name="setrowinfo"></a>CSplitterWnd::SetRowInfo

Chiamare per impostare le informazioni di riga specificate.

```
void SetRowInfo(
    int row,
    int cyIdeal,
    int cyMin);
```

### <a name="parameters"></a>Parametri

*Riga*<br/>
Specifica una riga della finestra con separatore.

*cyIdeal*<br/>
Specifica un'altezza ideale per la riga della finestra con separatore in pixel.

*cyMin*<br/>
Specifica un'altezza minima per la riga della finestra con separatore in pixel.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per impostare una nuova altezza minima e l'altezza ideale per una riga. Il valore minimo della riga determina quando la riga sarà troppo piccola per essere visualizzata completamente.

Quando il framework visualizza la finestra con separatore, dispone i riquadri in colonne e righe in base alle dimensioni ideali, lavorando dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.

## <a name="csplitterwndsetscrollstyle"></a><a name="setscrollstyle"></a>CSplitterWnd::SetScrollStyle

Specifica il nuovo stile di scorrimento per il supporto della barra di scorrimento condivisa della finestra con separatore.

```
void SetScrollStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Nuovo stile di scorrimento per il supporto della barra di scorrimento condivisa della finestra con separatore, che può essere uno dei valori seguenti:

- WS_HSCROLL Crea/mostra barre di scorrimento condivise orizzontali.

- WS_VSCROLL Crea/mostra barre di scorrimento condivise verticali.

### <a name="remarks"></a>Osservazioni

Una volta creata, una barra di scorrimento `SetScrollStyle` non verrà distrutta anche se viene chiamata senza tale stile; invece quelle barre di scorrimento sono nascoste. Ciò consente alle barre di scorrimento di mantenere lo stato anche se sono nascoste. Dopo `SetScrollStyle` aver chiamato è necessario chiamare [RecalcLayout](#recalclayout) per rendere effettive tutte le modifiche.

## <a name="csplitterwndsplitcolumn"></a><a name="splitcolumn"></a>Colonna cSplitterWnd::SplitColumnCSplitterWnd::SplitColumn

Indica dove una finestra cornice viene divisa verticalmente.

```
virtual BOOL SplitColumn(int cxBefore);
```

### <a name="parameters"></a>Parametri

*CxPrima*<br/>
Posizione, in pixel, prima della quale si verifica la divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata quando viene creata una finestra con separatore verticale. `SplitColumn`indica la posizione predefinita in cui si verifica la divisione.

`SplitColumn`viene chiamato dal framework per implementare la logica della finestra con separatore dinamico (ovvero, se la finestra con separatore dinamico ha lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, insieme alla funzione virtuale [CreateView](#createview), per implementare separatori dinamici più avanzati.

## <a name="csplitterwndsplitrow"></a><a name="splitrow"></a>CSplitterWnd::SplitRow

Indica il punto in cui una finestra cornice viene divisa orizzontalmente.

```
virtual BOOL SplitRow(int cyBefore);
```

### <a name="parameters"></a>Parametri

*cyPrima di*<br/>
Posizione, in pixel, prima della quale si verifica la divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata quando viene creata una finestra con separatore orizzontale. `SplitRow`indica la posizione predefinita in cui si verifica la divisione.

`SplitRow`viene chiamato dal framework per implementare la logica della finestra con separatore dinamico (ovvero, se la finestra con separatore dinamico ha lo stile SPLS_DYNAMIC_SPLIT). Può essere personalizzato, insieme alla funzione virtuale [CreateView](#createview), per implementare separatori dinamici più avanzati.

## <a name="csplitterwndondraw"></a><a name="ondraw"></a>CSplitterWnd::OnDraw

Chiamato dal framework per disegnare la finestra con separatore.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Esempio MFC VIEWEX](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
