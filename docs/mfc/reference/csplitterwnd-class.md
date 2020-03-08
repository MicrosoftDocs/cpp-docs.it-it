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
ms.openlocfilehash: 065735c13a3e763208142eb6bc989d3a496221f0
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78890954"
---
# <a name="csplitterwnd-class"></a>Classe CSplitterWnd

Fornisce la funzionalità di una finestra con separatore, ovvero una finestra che contiene più riquadri.

## <a name="syntax"></a>Sintassi

```
class CSplitterWnd : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CSplitterWnd:: CSplitterWnd](#csplitterwnd)|Chiamare per costruire un oggetto `CSplitterWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CSplitterWnd:: ActivateNext](#activatenext)|Esegue il comando riquadro successivo o riquadro precedente.|
|[CSplitterWnd:: CanActivateNext](#canactivatenext)|Verifica se è attualmente possibile il comando riquadro successivo o riquadro precedente.|
|[CSplitterWnd:: create](#create)|Chiamare per creare una finestra con separatore dinamico e collegarla all'oggetto `CSplitterWnd`.|
|[CSplitterWnd:: CreateScrollBarCtrl](#createscrollbarctrl)|Crea un controllo barra di scorrimento condiviso.|
|[CSplitterWnd:: CreateStatic](#createstatic)|Chiamare per creare una finestra con separatore statico e collegarla all'oggetto `CSplitterWnd`.|
|[CSplitterWnd:: CreateView](#createview)|Chiamare per creare un riquadro in una finestra con separatore.|
|[CSplitterWnd::D eleteColumn](#deletecolumn)|Elimina una colonna dalla finestra con separatore.|
|[CSplitterWnd::D eleteRow](#deleterow)|Elimina una riga dalla finestra con separatore.|
|[CSplitterWnd::D eleteView](#deleteview)|Elimina una visualizzazione dalla finestra con separatore.|
|[CSplitterWnd::D oKeyboardSplit](#dokeyboardsplit)|Esegue il comando di suddivisione della tastiera, in genere "Split della finestra".|
|[CSplitterWnd::D oScroll](#doscroll)|Esegue lo scorrimento sincronizzato delle finestre divise.|
|[CSplitterWnd::D oScrollBy](#doscrollby)|Scorre le finestre divise di un determinato numero di pixel.|
|[CSplitterWnd:: GetActivePane](#getactivepane)|Determina il riquadro attivo in base allo stato attivo o alla visualizzazione attiva nel frame.|
|[CSplitterWnd:: GetColumnCount](#getcolumncount)|Restituisce il conteggio delle colonne del riquadro corrente.|
|[CSplitterWnd:: GetColumnInfo](#getcolumninfo)|Restituisce informazioni sulla colonna specificata.|
|[CSplitterWnd:: GetPane](#getpane)|Restituisce il riquadro in corrispondenza della riga e della colonna specificate.|
|[CSplitterWnd:: GetRowCount](#getrowcount)|Restituisce il conteggio delle righe del riquadro corrente.|
|[CSplitterWnd:: GetRowInfo](#getrowinfo)|Restituisce informazioni sulla riga specificata.|
|[CSplitterWnd:: GetScrollStyle](#getscrollstyle)|Restituisce lo stile della barra di scorrimento condivisa.|
|[CSplitterWnd:: IdFromRowCol](#idfromrowcol)|Restituisce l'ID della finestra figlio del riquadro in corrispondenza della riga e della colonna specificate.|
|[CSplitterWnd:: IsChildPane](#ischildpane)|Chiamare per determinare se la finestra è attualmente un riquadro figlio della finestra con separatore.|
|[CSplitterWnd:: untracking](#istracking)|Determina se è in corso lo spostamento della barra di divisione.|
|[CSplitterWnd:: RecalcLayout](#recalclayout)|Chiamare per visualizzare nuovamente la finestra con separatore dopo la modifica delle dimensioni di riga o colonna.|
|[CSplitterWnd:: SetActivePane](#setactivepane)|Imposta un riquadro in modo che sia quello attivo nel frame.|
|[CSplitterWnd:: SetRowInfo](#setcolumninfo)|Chiamare per impostare le informazioni sulla colonna specificata.|
|[CSplitterWnd:: SetColumnInfo](#setrowinfo)|Chiamare per impostare le informazioni sulla riga specificate.|
|[CSplitterWnd:: SetScrollStyle](#setscrollstyle)|Specifica il nuovo stile della barra di scorrimento per il supporto della barra di scorrimento condiviso della finestra di divisione.|
|[CSplitterWnd:: SplitColumn](#splitcolumn)|Indica il punto in cui una finestra cornice si divide verticalmente.|
|[CSplitterWnd:: SplitRow](#splitrow)|Indica il punto in cui una finestra cornice si divide orizzontalmente.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[CSplitterWnd:: onpare](#ondraw)|Chiamato dal Framework per creare la finestra con separatore.|
|[CSplitterWnd:: OnDrawSplitter](#ondrawsplitter)|Esegue il rendering di un'immagine di una finestra divisa.|
|[CSplitterWnd:: OnInvertTracker](#oninverttracker)|Esegue il rendering dell'immagine di una finestra divisa in modo che abbia le stesse dimensioni e la stessa forma della finestra cornice.|

## <a name="remarks"></a>Osservazioni

Un riquadro è in genere un oggetto specifico dell'applicazione derivato da [CView](../../mfc/reference/cview-class.md), ma può essere qualsiasi oggetto [CWND](../../mfc/reference/cwnd-class.md) con l'ID della finestra figlio appropriato.

Un oggetto `CSplitterWnd` in genere è incorporato in un oggetto padre [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) . Creare un oggetto `CSplitterWnd` usando la procedura seguente:

1. Incorporare una variabile membro `CSplitterWnd` nel frame padre.

2. Eseguire l'override della funzione membro [CFrameWnd:: OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) del frame padre.

3. Dall'interno della `OnCreateClient`sottoposta a override, chiamare la funzione membro [create](#create) o [CreateStatic](#createstatic) di `CSplitterWnd`.

Chiamare la funzione membro `Create` per creare una finestra con separatore dinamico. Una finestra con separatore dinamico viene in genere usata per creare ed eseguire lo scorrimento di un numero di singoli riquadri, o visualizzazioni, dello stesso documento. Il Framework crea automaticamente un riquadro iniziale per la barra di divisione; il Framework crea, ridimensiona ed Elimina i riquadri aggiuntivi quando l'utente gestisce i controlli della finestra con separatore.

Quando si chiama `Create`, si specificano un'altezza minima della riga e la larghezza della colonna che determinano quando i riquadri sono troppo piccoli per essere visualizzati completamente. Dopo aver chiamato `Create`, è possibile modificare questi valori minimi chiamando le funzioni membro [SetRowInfo](#setcolumninfo) e [SetColumnInfo](#setrowinfo) .

Usare inoltre le funzioni membro `SetColumnInfo` e `SetRowInfo` per impostare una larghezza "ideale" per una colonna e l'altezza "ideale" per una riga. Quando il Framework Visualizza una finestra con separatore, Visualizza prima di tutto il frame padre, quindi la finestra con separatore. Il Framework delinea quindi i riquadri in colonne e righe in base alle rispettive dimensioni ideali, lavorando dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.

Tutti i riquadri in una finestra con separatore dinamico devono essere della stessa classe. Le applicazioni note che supportano le finestre con separatore dinamico includono Microsoft Word e Microsoft Excel.

Usare la funzione membro `CreateStatic` per creare una finestra con separatore statico. L'utente può modificare solo le dimensioni dei riquadri in una finestra con separatore statico, non il numero o l'ordine.

Quando si crea la barra di divisione statica, è necessario creare in modo specifico tutti i riquadri della barra di divisione statica. Assicurarsi di creare tutti i riquadri prima della restituzione della funzione membro `OnCreateClient` del frame padre o che la finestra non venga visualizzata correttamente dal Framework.

La funzione membro `CreateStatic` Inizializza automaticamente una barra di divisione statica con un'altezza minima della riga e la larghezza della colonna pari a 0. Dopo aver chiamato `Create`, modificare questi valori minimi chiamando le funzioni membro [SetRowInfo](#setcolumninfo) e [SetColumnInfo](#setrowinfo) . Usare anche `SetColumnInfo` e `SetRowInfo` dopo aver chiamato `CreateStatic` per indicare le dimensioni del riquadro ideale desiderate.

I singoli riquadri di un separatore statico spesso appartengono a classi diverse. Per esempi di finestre con separatore statico, vedere Editor di grafica e gestione file di Windows.

Una finestra con separatore supporta barre di scorrimento speciali (a parte le barre di scorrimento che possono avere i riquadri). Queste barre di scorrimento sono elementi figlio dell'oggetto `CSplitterWnd` e vengono condivise con i riquadri.

Queste barre di scorrimento speciali vengono create quando si crea la finestra con separatore. Ad esempio, un `CSplitterWnd` con una riga, due colonne e lo stile WS_VSCROLL visualizzerà una barra di scorrimento verticale condivisa dai due riquadri. Quando l'utente sposta la barra di scorrimento, WM_VSCROLL messaggi vengono inviati a entrambi i riquadri. Quando i riquadri impostano la posizione della barra di scorrimento, viene impostata la barra di scorrimento condivisa.

Per ulteriori informazioni sulle finestre con separatore, vedere la [Nota tecnica 29](../../mfc/tn029-splitter-windows.md).

Per ulteriori informazioni sulla creazione di finestre con separatore dinamico, vedere:

- [Scribble](../../overview/visual-cpp-samples.md) di esempio MFC

- [Sample](../../overview/visual-cpp-samples.md)di esempio MFC.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSplitterWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="activatenext"></a>CSplitterWnd:: ActivateNext

Viene chiamato dal Framework per eseguire il comando riquadro successivo o riquadro precedente.

```
virtual void ActivateNext(BOOL bPrev = FALSE);
```

### <a name="parameters"></a>Parametri

*bPrev*<br/>
Indica la finestra da attivare. **True** per il valore precedente; **False** per Next.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è un comando di alto livello usato dalla classe [CView](../../mfc/reference/cview-class.md) per delegare all'implementazione del `CSplitterWnd`.

##  <a name="canactivatenext"></a>CSplitterWnd:: CanActivateNext

Chiamata eseguita dal Framework per verificare se è attualmente possibile il comando riquadro successivo o riquadro precedente.

```
virtual BOOL CanActivateNext(BOOL bPrev = FALSE);
```

### <a name="parameters"></a>Parametri

*bPrev*<br/>
Indica la finestra da attivare. **True** per il valore precedente; **False** per Next.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è un comando di alto livello usato dalla classe [CView](../../mfc/reference/cview-class.md) per delegare all'implementazione del `CSplitterWnd`.

##  <a name="create"></a>CSplitterWnd:: create

Per creare una finestra con separatore dinamico, chiamare la funzione membro `Create`.

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
Finestra cornice padre della finestra con separatore.

*nMaxRows*<br/>
Numero massimo di righe nella finestra con separatore. Questo valore non deve essere maggiore di 2.

*nMaxCols*<br/>
Numero massimo di colonne nella finestra con separatore. Questo valore non deve essere maggiore di 2.

*sizeMin*<br/>
Specifica la dimensione minima in corrispondenza della quale può essere visualizzato un riquadro.

*pContext*<br/>
Puntatore a una struttura [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) . Nella maggior parte dei casi, può trattarsi del *pContext* passato alla finestra cornice padre.

*dwStyle*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID della finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST a meno che la finestra con separatore non sia annidata all'interno di un'altra finestra di divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per incorporare un `CSplitterWnd` in un oggetto padre [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) , seguire questa procedura:

1. Incorporare una variabile membro `CSplitterWnd` nel frame padre.

1. Eseguire l'override della funzione membro [CFrameWnd:: OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) del frame padre.

1. Chiamare la funzione membro `Create` dall'interno della `OnCreateClient`sottoposta a override.

Quando si crea una finestra con separatore dall'interno di un frame padre, passare il parametro *pContext* del frame padre alla finestra con separatore. In caso contrario, questo parametro può essere NULL.

Il valore iniziale di altezza di riga e la larghezza della colonna di una finestra con separatore dinamico vengono impostati dal parametro *sizeMin* . Questi minimi, che determinano se un riquadro è troppo piccolo per essere visualizzato completamente, può essere modificato con le funzioni membro [SetColumnInfo](#setrowinfo) e [SetRowInfo](#setcolumninfo) .

Per ulteriori informazioni sulle finestre con separatore dinamico, vedere la sezione relativa alle finestre con separatore nell'articolo [più tipi di documenti, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)e panoramica della classe `CSplitterWnd`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#125](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_1.cpp)]

##  <a name="createscrollbarctrl"></a>CSplitterWnd:: CreateScrollBarCtrl

Chiamata eseguita dal Framework per creare un controllo barra di scorrimento condiviso.

```
virtual BOOL CreateScrollBarCtrl(
    DWORD dwStyle,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID della finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST a meno che la finestra con separatore non sia annidata all'interno di un'altra finestra di divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override `CreateScrollBarCtrl` per includere controlli aggiuntivi accanto a una barra di scorrimento. Il comportamento predefinito consiste nel creare i normali controlli della barra di scorrimento di Windows.

##  <a name="createstatic"></a>CSplitterWnd:: CreateStatic

Per creare una finestra con separatore statico, chiamare la funzione membro `CreateStatic`.

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
Finestra cornice padre della finestra con separatore.

*nRows*<br/>
Numero di righe. Questo valore non deve superare i 16.

*nCols*<br/>
Numero di colonne. Questo valore non deve superare i 16.

*dwStyle*<br/>
Specifica lo stile della finestra.

*nID*<br/>
ID della finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST a meno che la finestra con separatore non sia annidata all'interno di un'altra finestra di divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Una `CSplitterWnd` viene in genere incorporata in un oggetto padre `CFrameWnd` o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) attenendosi alla procedura seguente:

1. Incorporare una variabile membro `CSplitterWnd` nel frame padre.

1. Eseguire l'override della funzione membro `OnCreateClient` del frame padre.

1. Chiamare la funzione membro `CreateStatic` dall'interno di [CFrameWnd:: OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient)sottoposto a override.

Una finestra con separatore statico contiene un numero fisso di riquadri, spesso da classi diverse.

Quando si crea una finestra con separatore statico, è necessario creare contemporaneamente tutti i riquadri. La funzione membro [CreateView](#createview) viene in genere utilizzata a questo scopo, ma è possibile creare anche altre classi non visualizzazione.

L'altezza minima della riga iniziale e la larghezza di colonna per una finestra con separatore statico sono pari a 0. Questi minimi, che determinano quando un riquadro è troppo piccolo per essere visualizzato completamente, può essere modificato con le funzioni membro [SetColumnInfo](#setrowinfo) e [SetRowInfo](#setcolumninfo) .

Per aggiungere barre di scorrimento a una finestra con separatore statico, aggiungere gli stili WS_HSCROLL e WS_VSCROLL a *dwStyle*.

Per altre informazioni sulle finestre con separatore statico, vedere la sezione relativa alle finestre con separatore nell'articolo [più tipi di documenti, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)e panoramica della classe `CSplitterWnd`.

##  <a name="createview"></a>CSplitterWnd:: CreateView

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

*row*<br/>
Specifica la riga della finestra con separatore in cui inserire la nuova visualizzazione.

*col*<br/>
Specifica la colonna della finestra con separatore in cui inserire la nuova visualizzazione.

*pViewClass*<br/>
Specifica il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) della nuova visualizzazione.

*sizeInit*<br/>
Specifica la dimensione iniziale della nuova visualizzazione.

*pContext*<br/>
Puntatore a un contesto di creazione utilizzato per creare la visualizzazione, in genere *pContext* passato nella funzione membro [CFrameWnd:: OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) sottoposta a override del frame padre in cui viene creata la finestra di divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Tutti i riquadri di una finestra con separatore statico devono essere creati prima che il Framework visualizzi la barra di divisione.

Il Framework chiama anche questa funzione membro per creare nuovi riquadri quando l'utente di una finestra con separatore dinamico suddivide un riquadro, una riga o una colonna.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#4](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_2.cpp)]

##  <a name="csplitterwnd"></a>CSplitterWnd:: CSplitterWnd

Chiamare per costruire un oggetto `CSplitterWnd`.

```
CSplitterWnd();
```

### <a name="remarks"></a>Osservazioni

Costruire un oggetto `CSplitterWnd` in due passaggi. In primo luogo, chiamare il costruttore, che crea l'oggetto `CSplitterWnd`, quindi chiamare la funzione membro [create](#create) , che crea la finestra con separatore e la collega all'oggetto `CSplitterWnd`.

##  <a name="deletecolumn"></a>CSplitterWnd::D eleteColumn

Elimina una colonna dalla finestra con separatore.

```
virtual void DeleteColumn(int colDelete);
```

### <a name="parameters"></a>Parametri

*colDelete*<br/>
Specifica la colonna da eliminare.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal Framework per implementare la logica della finestra con separatore dinamico, ovvero se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT. Può essere personalizzata, insieme alla funzione virtuale [CreateView](#createview), per implementare Splitter dinamici più avanzati.

##  <a name="deleterow"></a>CSplitterWnd::D eleteRow

Elimina una riga dalla finestra con separatore.

```
virtual void DeleteRow(int rowDelete);
```

### <a name="parameters"></a>Parametri

*rowDelete*<br/>
Specifica la riga da eliminare.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal Framework per implementare la logica della finestra con separatore dinamico, ovvero se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT. Può essere personalizzata, insieme alla funzione virtuale [CreateView](#createview), per implementare Splitter dinamici più avanzati.

##  <a name="deleteview"></a>CSplitterWnd::D eleteView

Elimina una visualizzazione dalla finestra con separatore.

```
virtual void DeleteView(
    int row,
    int col);
```

### <a name="parameters"></a>Parametri

*row*<br/>
Specifica la riga della finestra con separatore in corrispondenza della quale eliminare la visualizzazione.

*col*<br/>
Specifica la colonna della finestra con separatore in corrispondenza della quale eliminare la visualizzazione.

### <a name="remarks"></a>Osservazioni

Se è in corso l'eliminazione della visualizzazione attiva, la visualizzazione successiva diventerà attiva. L'implementazione predefinita presuppone che la vista venga eliminata automaticamente in [PostNcDestroy](../../mfc/reference/cwnd-class.md#postncdestroy).

Questa funzione membro viene chiamata dal Framework per implementare la logica della finestra con separatore dinamico, ovvero se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT. Può essere personalizzata, insieme alla funzione virtuale [CreateView](#createview), per implementare Splitter dinamici più avanzati.

##  <a name="dokeyboardsplit"></a>CSplitterWnd::D oKeyboardSplit

Esegue il comando di suddivisione della tastiera, in genere "Split della finestra".

```
virtual BOOL DoKeyboardSplit();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è un comando di alto livello usato dalla classe [CView](../../mfc/reference/cview-class.md) per delegare all'implementazione del `CSplitterWnd`.

##  <a name="doscroll"></a>CSplitterWnd::D oScroll

Esegue lo scorrimento sincronizzato delle finestre divise.

```
virtual BOOL DoScroll(
    CView* pViewFrom,
    UINT nScrollCode,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*pViewFrom*<br/>
Puntatore alla visualizzazione da cui ha origine il messaggio di scorrimento.

*nScrollCode*<br/>
Codice A barre di scorrimento che indica la richiesta di scorrimento dell'utente. Questo parametro è costituito da due parti: un byte di ordine inferiore, che determina il tipo di scorrimento che si verifica orizzontalmente e un byte di ordine superiore, che determina il tipo di scorrimento che si verifica verticalmente:

    - SB_BOTTOM scorre verso il basso.

    - SB_LINEDOWN scorre una riga verso il basso.

    - SB_LINEUP scorre una riga verso l'alto.

    - SB_PAGEDOWN scorre verso il basso di una pagina.

    - SB_PAGEUP scorre una pagina verso l'alto.

    - SB_TOP scorre verso l'alto.

*bDoScroll*<br/>
Determina se l'azione di scorrimento specificata si verifica. Se *bDoScroll* è true (ovvero se è presente una finestra figlio e se le finestre divise hanno un intervallo di scorrimento), è possibile che venga eseguita l'azione di scorrimento specificata. Se *bDoScroll* è false (ovvero se non è presente alcuna finestra figlio o se le visualizzazioni suddivise non includono alcun intervallo di scorrimento), lo scorrimento non viene eseguito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se si verifica lo scorrimento sincronizzato; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal Framework per eseguire lo scorrimento sincronizzato delle finestre divise quando la visualizzazione riceve un messaggio di scorrimento. Eseguire l'override per richiedere un'azione da parte dell'utente prima che lo scorrimento sincronizzato sia consentito.

##  <a name="doscrollby"></a>CSplitterWnd::D oScrollBy

Scorre le finestre divise di un determinato numero di pixel.

```
virtual BOOL DoScrollBy(
    CView* pViewFrom,
    CSize sizeScroll,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*pViewFrom*<br/>
Puntatore alla visualizzazione da cui ha origine il messaggio di scorrimento.

*sizeScroll*<br/>
Numero di pixel da scorrere orizzontalmente e verticalmente.

*bDoScroll*<br/>
Determina se l'azione di scorrimento specificata si verifica. Se *bDoScroll* è true (ovvero se è presente una finestra figlio e se le finestre divise hanno un intervallo di scorrimento), è possibile che venga eseguita l'azione di scorrimento specificata. Se *bDoScroll* è false (ovvero se non è presente alcuna finestra figlio o se le visualizzazioni suddivise non includono alcun intervallo di scorrimento), lo scorrimento non viene eseguito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se si verifica lo scorrimento sincronizzato; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal Framework in risposta a un messaggio di scorrimento, per eseguire lo scorrimento sincronizzato delle finestre divise in base alla quantità, espressa in pixel, indicata da *sizeScroll*. I valori positivi indicano lo scorrimento verso il basso e verso destra; i valori negativi indicano lo scorrimento verso l'alto e verso sinistra.

Eseguire l'override per richiedere un'azione da parte dell'utente prima di consentire lo scorrimento.

##  <a name="getactivepane"></a>CSplitterWnd:: GetActivePane

Determina il riquadro attivo in base allo stato attivo o alla visualizzazione attiva nel frame.

```
virtual CWnd* GetActivePane(
    int* pRow = NULL,
    int* pCol = NULL);
```

### <a name="parameters"></a>Parametri

*Prua*<br/>
Puntatore a **int** per recuperare il numero di riga del riquadro attivo.

*pCol*<br/>
Puntatore a un **int** per recuperare il numero di colonna del riquadro attivo.

### <a name="return-value"></a>Valore restituito

Puntatore al riquadro attivo. NULL se non esiste alcun riquadro attivo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal Framework per determinare il riquadro attivo in una finestra con separatore. Eseguire l'override per richiedere un'azione da parte dell'utente prima di ottenere il riquadro attivo.

##  <a name="getcolumncount"></a>CSplitterWnd:: GetColumnCount

Restituisce il conteggio delle colonne del riquadro corrente.

```
int GetColumnCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero corrente di colonne nella barra di divisione. Per una barra di divisione statica, sarà anche il numero massimo di colonne.

##  <a name="getcolumninfo"></a>CSplitterWnd:: GetColumnInfo

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
Riferimento a un oggetto **int** da impostare sulla larghezza corrente della colonna.

*cxMin*<br/>
Riferimento a un oggetto **int** da impostare sulla larghezza minima corrente della colonna.

##  <a name="getpane"></a>CSplitterWnd:: GetPane

Restituisce il riquadro in corrispondenza della riga e della colonna specificate.

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

Restituisce il riquadro in corrispondenza della riga e della colonna specificate. Il riquadro restituito è in genere una classe derivata da [CView](../../mfc/reference/cview-class.md).

##  <a name="getrowcount"></a>CSplitterWnd:: GetRowCount

Restituisce il conteggio delle righe del riquadro corrente.

```
int GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero corrente di righe nella finestra con separatore. Per una finestra con separatore statico, sarà anche il numero massimo di righe.

##  <a name="getrowinfo"></a>CSplitterWnd:: GetRowInfo

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
Riferimento a **int** da impostare sull'altezza corrente della riga in pixel.

*cyMin*<br/>
Riferimento a **int** da impostare sull'altezza minima corrente della riga in pixel.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per ottenere informazioni sulla riga specificata. Il parametro *cyCur* viene riempito con l'altezza corrente della riga specificata e *Cymin* viene riempito con l'altezza minima della riga.

##  <a name="getscrollstyle"></a>CSplitterWnd:: GetScrollStyle

Restituisce lo stile della barra di scorrimento condiviso per la finestra con separatore.

```
DWORD GetScrollStyle() const;
```

### <a name="return-value"></a>Valore restituito

Uno o più dei seguenti flag di stile di Windows, in caso di esito positivo:

    - WS_HSCROLL se la barra di divisione gestisce attualmente le barre di scorrimento orizzontali condivise.

    - WS_VSCROLL se la barra di divisione gestisce attualmente le barre di scorrimento verticali condivise.

Se è zero, la finestra con separatore non gestisce attualmente alcuna barra di scorrimento condivisa.

##  <a name="idfromrowcol"></a>CSplitterWnd:: IdFromRowCol

Ottiene l'ID della finestra figlio per il riquadro in corrispondenza della riga e della colonna specificate.

```
int IdFromRowCol(
    int row,
    int col) const;
```

### <a name="parameters"></a>Parametri

*row*<br/>
Specifica la riga della finestra con separatore.

*col*<br/>
Specifica la colonna della finestra con separatore.

### <a name="return-value"></a>Valore restituito

ID della finestra figlio per il riquadro.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene utilizzata per la creazione di non viste come riquadri e può essere chiamata prima che il riquadro esista.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#5](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_3.cpp)]

##  <a name="ischildpane"></a>CSplitterWnd:: IsChildPane

Determina se *pWnd* è attualmente un riquadro figlio della finestra con separatore.

```
BOOL IsChildPane(
    CWnd* pWnd,
    int* pRow,
    int* pCol);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) da testare.

*Prua*<br/>
Puntatore a un **int** in cui archiviare il numero di riga.

*pCol*<br/>
Puntatore a un valore **int** in cui archiviare un numero di colonna.

### <a name="return-value"></a>Valore restituito

Se è diverso da zero, *pWnd* è attualmente un riquadro figlio della finestra con separatore e *prua* e *pCol* vengono compilati con la posizione del riquadro nella finestra con separatore. Se *pWnd* non è un riquadro figlio della finestra con separatore, viene restituito 0.

### <a name="remarks"></a>Osservazioni

Nelle versioni C++ di visuali precedenti alla 6,0, questa funzione è stata definita come

`BOOL IsChildPane(CWnd* pWnd, int& row, int& col);`

Questa versione è obsoleta e non deve essere usata.

##  <a name="istracking"></a>CSplitterWnd:: untracking

Chiamare questa funzione membro per determinare se la barra di divisione nella finestra è attualmente in fase di spostamento.

```
BOOL IsTracking();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è in corso un'operazione di divisione. in caso contrario, 0.

##  <a name="ondrawsplitter"></a>CSplitterWnd:: OnDrawSplitter

Esegue il rendering di un'immagine di una finestra divisa.

```
virtual void OnDrawSplitter(
    CDC* pDC,
    ESplitType nType,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo in cui eseguire il progetto. Se *PDC* è null, [CWnd:: RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) viene chiamato dal Framework e non viene disegnata alcuna finestra divisa.

*nType*<br/>
Valore della `enum ESplitType`, che può essere uno dei seguenti:

    - `splitBox` casella di trascinamento della barra di divisione.

    - `splitBar` la barra visualizzata tra le due finestre divise.

    - `splitIntersection` l'intersezione delle finestre divise. Questo elemento non verrà chiamato quando viene eseguito in Windows 95/98.

    - `splitBorder` i bordi della finestra divisa.

*rect*<br/>
Riferimento a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che specifica le dimensioni e la forma delle finestre divise.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal Framework per creare e specificare le caratteristiche esatte di una finestra con separatore. Eseguire l'override di `OnDrawSplitter` per la personalizzazione avanzata delle immagini per i vari componenti grafici di una finestra con separatore. Le immagini predefinite sono simili alla barra di divisione in Microsoft Works per Windows o Microsoft Windows 95/98, in quanto le intersezioni delle barre di divisione vengono combinate insieme.

Per ulteriori informazioni sulle finestre con separatore dinamico, vedere la sezione relativa alle finestre con separatore nell'articolo [più tipi di documenti, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)e panoramica della classe `CSplitterWnd`.

##  <a name="oninverttracker"></a>CSplitterWnd:: OnInvertTracker

Esegue il rendering dell'immagine di una finestra divisa in modo che abbia le stesse dimensioni e la stessa forma della finestra cornice.

```
virtual void OnInvertTracker(const CRect& rect);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
Riferimento a un oggetto `CRect` che specifica il rettangolo di rilevamento.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal Framework durante il ridimensionamento dei separatori. Eseguire l'override di `OnInvertTracker` per la personalizzazione avanzata delle immagini della finestra con separatore. Le immagini predefinite sono simili alla barra di divisione in Microsoft Works per Windows o Microsoft Windows 95/98, in quanto le intersezioni delle barre di divisione vengono combinate insieme.

Per ulteriori informazioni sulle finestre con separatore dinamico, vedere la sezione relativa alle finestre con separatore nell'articolo [più tipi di documenti, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)e panoramica della classe `CSplitterWnd`.

##  <a name="recalclayout"></a>CSplitterWnd:: RecalcLayout

Chiamare per visualizzare nuovamente la finestra con separatore dopo la modifica delle dimensioni di riga o colonna.

```
virtual void RecalcLayout();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per visualizzare correttamente la finestra con separatore dopo aver modificato le dimensioni di riga e colonna con le funzioni membro [SetColumnInfo](#setrowinfo) e [SetRowInfo](#setcolumninfo) . Se si modificano le dimensioni di riga e colonna come parte del processo di creazione prima che la finestra di divisione sia visibile, non è necessario chiamare questa funzione membro.

Il Framework chiama questa funzione membro ogni volta che l'utente ridimensiona la finestra con separatore o sposta una divisione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CSplitterWnd:: SetRowInfo](#setcolumninfo).

##  <a name="setactivepane"></a>CSplitterWnd:: SetActivePane

Imposta un riquadro in modo che sia quello attivo nel frame.

```
virtual void SetActivePane(
    int row,
    int col,
    CWnd* pWnd = NULL);
```

### <a name="parameters"></a>Parametri

*row*<br/>
Se *pWnd* è null, specifica la riga nel riquadro che sarà attiva.

*col*<br/>
Se *pWnd* è null, specifica la colonna nel riquadro che sarà attiva.

*pWnd*<br/>
Puntatore a un oggetto `CWnd`. Se è NULL, il riquadro specificato da *Row* e *col* è impostato su Active. Se non è NULL, specifica il riquadro impostato come attivo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal Framework per impostare un riquadro come attivo quando l'utente imposta lo stato attivo su un riquadro all'interno della finestra cornice. È possibile chiamare in modo esplicito `SetActivePane` per impostare lo stato attivo sulla visualizzazione specificata.

Specificare il riquadro fornendo una riga e una colonna **oppure** fornendo *pWnd*.

##  <a name="setcolumninfo"></a>CSplitterWnd:: SetRowInfo

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
Specifica la larghezza ideale per la colonna della finestra con separatore in pixel.

*cxMin*<br/>
Specifica una larghezza minima per la colonna della finestra con separatore in pixel.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per impostare una nuova larghezza minima e una larghezza ideale per una colonna. Il valore minimo della colonna determina se la colonna sarà troppo piccola per essere visualizzata completamente.

Quando il Framework Visualizza la finestra con separatore, i riquadri vengono posizionati in colonne e righe in base alle dimensioni ideali, lavorando dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra di divisione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#6](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_4.cpp)]

##  <a name="setrowinfo"></a>CSplitterWnd:: SetColumnInfo

Chiamare per impostare le informazioni sulla riga specificate.

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
Specifica un'altezza ideale per la riga della finestra con separatore in pixel.

*cyMin*<br/>
Specifica un'altezza minima per la riga della finestra con separatore in pixel.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per impostare una nuova altezza minima e l'altezza ideale per una riga. Il valore minimo della riga determina quando la riga sarà troppo piccola per essere visualizzata completamente.

Quando il Framework Visualizza la finestra con separatore, i riquadri vengono posizionati in colonne e righe in base alle dimensioni ideali, lavorando dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra di divisione.

##  <a name="setscrollstyle"></a>CSplitterWnd:: SetScrollStyle

Specifica il nuovo stile di scorrimento per il supporto della barra di scorrimento condiviso della finestra di divisione.

```
void SetScrollStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Nuovo stile di scorrimento per il supporto della barra di scorrimento condiviso della finestra di divisione. i possibili valori sono i seguenti:

- WS_HSCROLL crea/Mostra barre di scorrimento condivise orizzontali.

- WS_VSCROLL Crea/Mostra barre di scorrimento condivise verticali.

### <a name="remarks"></a>Osservazioni

Una volta creata, la barra di scorrimento non verrà distrutta anche se `SetScrollStyle` viene chiamata senza tale stile; ma le barre di scorrimento sono nascoste. In questo modo, le barre di scorrimento manterranno il proprio stato anche se sono nascoste. Dopo aver chiamato `SetScrollStyle` è necessario chiamare [RecalcLayout](#recalclayout) per rendere effettive tutte le modifiche.

##  <a name="splitcolumn"></a>CSplitterWnd:: SplitColumn

Indica il punto in cui una finestra cornice si divide verticalmente.

```
virtual BOOL SplitColumn(int cxBefore);
```

### <a name="parameters"></a>Parametri

*cxBefore*<br/>
Posizione, in pixel, prima della quale si verifica la divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata quando viene creata una finestra con separatore verticale. `SplitColumn` indica il percorso predefinito in cui si verifica la divisione.

`SplitColumn` viene chiamato dal Framework per implementare la logica della finestra con separatore dinamico, ovvero se la finestra con separatore presenta lo stile SPLS_DYNAMIC_SPLIT. Può essere personalizzata, insieme alla funzione virtuale [CreateView](#createview), per implementare Splitter dinamici più avanzati.

##  <a name="splitrow"></a>CSplitterWnd:: SplitRow

Indica il punto in cui una finestra cornice si divide orizzontalmente.

```
virtual BOOL SplitRow(int cyBefore);
```

### <a name="parameters"></a>Parametri

*cyBefore*<br/>
Posizione, in pixel, prima della quale si verifica la divisione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata quando viene creata una finestra con barra di divisione orizzontale. `SplitRow` indica il percorso predefinito in cui si verifica la divisione.

`SplitRow` viene chiamato dal Framework per implementare la logica della finestra con separatore dinamico, ovvero se la finestra con separatore presenta lo stile SPLS_DYNAMIC_SPLIT. Può essere personalizzata, insieme alla funzione virtuale [CreateView](#createview), per implementare Splitter dinamici più avanzati.

##  <a name="ondraw"></a>CSplitterWnd:: onpare

Chiamato dal Framework per creare la finestra con separatore.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[SAMPLE di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
