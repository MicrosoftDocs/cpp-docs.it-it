---
title: Classe CSplitterWnd | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b3d2b44c4e854a27bcc753c1403ea058b03906a8
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37123149"
---
# <a name="csplitterwnd-class"></a>CSplitterWnd (classe)
Fornisce la funzionalità di una finestra con separatore, ovvero una finestra che contiene più riquadri.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSplitterWnd : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWnd::CSplitterWnd](#csplitterwnd)|Chiamata per costruire un `CSplitterWnd` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWnd::ActivateNext](#activatenext)|Esegue il comando riquadro successivo o riquadro precedente.|  
|[CSplitterWnd::CanActivateNext](#canactivatenext)|Controlla se il comando riquadro successivo o riquadro precedente è attualmente possibile.|  
|[CSplitterWnd:: Create](#create)|Chiamata a creare una finestra con separatore dinamico e associarlo al `CSplitterWnd` oggetto.|  
|[CSplitterWnd::CreateScrollBarCtrl](#createscrollbarctrl)|Crea un controllo barra di scorrimento condiviso.|  
|[CSplitterWnd:: CreateStatic](#createstatic)|Chiamata a creare una finestra con separatore statico e associarlo al `CSplitterWnd` oggetto.|  
|[CSplitterWnd:: CreateView](#createview)|Chiamata eseguita per creare un riquadro in una finestra con separatore.|  
|[CSplitterWnd::DeleteColumn](#deletecolumn)|Elimina una colonna dalla finestra con separatore.|  
|[CSplitterWnd::DeleteRow](#deleterow)|Elimina una riga dalla finestra con separatore.|  
|[CSplitterWnd::DeleteView](#deleteview)|Elimina una visualizzazione dalla finestra con separatore.|  
|[CSplitterWnd::DoKeyboardSplit](#dokeyboardsplit)|Esegue il comando, in genere "finestra Dividi." di divisione tastiera|  
|[CSplitterWnd::DoScroll](#doscroll)|Esegue lo scorrimento sincronizzato delle finestre divise.|  
|[CSplitterWnd::DoScrollBy](#doscrollby)|Scorre le finestre divise da un determinato numero di pixel.|  
|[CSplitterWnd::GetActivePane](#getactivepane)|Determina il riquadro attivo lo stato attivo o della vista attiva nel frame.|  
|[CSplitterWnd::GetColumnCount](#getcolumncount)|Restituisce il numero di colonne riquadro corrente.|  
|[CSplitterWnd::GetColumnInfo](#getcolumninfo)|Restituisce informazioni per la colonna specificata.|  
|[CSplitterWnd::GetPane](#getpane)|Restituisce il riquadro alla riga specificata e alla colonna.|  
|[CSplitterWnd::GetRowCount](#getrowcount)|Restituisce il conteggio delle righe riquadro corrente.|  
|[CSplitterWnd::GetRowInfo](#getrowinfo)|Restituisce informazioni sulla riga specificata.|  
|[CSplitterWnd::GetScrollStyle](#getscrollstyle)|Restituisce lo stile della barra di scorrimento condiviso.|  
|[CSplitterWnd::IdFromRowCol](#idfromrowcol)|Restituisce l'elemento figlio ID della finestra del riquadro alla riga specificata e alla colonna.|  
|[CSplitterWnd::IsChildPane](#ischildpane)|Chiamata eseguita per determinare se la finestra è attualmente un riquadro figlio di questa finestra con separatore.|  
|[CSplitterWnd::IsTracking](#istracking)|Determina se barra di divisione viene spostata.|  
|[CSplitterWnd::RecalcLayout](#recalclayout)|Chiamata eseguita per visualizzare nuovamente la finestra con separatore dopo l'adattamento delle dimensioni di riga o colonna.|  
|[CSplitterWnd::SetActivePane](#setactivepane)|Imposta un riquadro per essere quello attivo nel frame.|  
|[CSplitterWnd::SetColumnInfo](#setcolumninfo)|Chiamata eseguita per impostare le informazioni sulla colonna specificata.|  
|[CSplitterWnd::SetRowInfo](#setrowinfo)|Chiamata eseguita per impostare le informazioni sulla riga specificata.|  
|[CSplitterWnd::SetScrollStyle](#setscrollstyle)|Specifica che il nuovo stile della barra di scorrimento per la finestra con separatore condivisa supporto barra di scorrimento.|  
|[CSplitterWnd::SplitColumn](#splitcolumn)|Indica il punto di divisione verticale di una finestra cornice.|  
|[CSplitterWnd::SplitRow](#splitrow)|Indica il punto di divisione in senso orizzontale di una finestra cornice.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWnd::OnDraw](#ondraw)|Chiamata eseguita dal framework per disegnare la finestra con separatore.|  
|[CSplitterWnd::OnDrawSplitter](#ondrawsplitter)|Esegue il rendering di un'immagine di una finestra divisa.|  
|[CSplitterWnd::OnInvertTracker](#oninverttracker)|Esegue il rendering l'immagine di una finestra divisa per la stessa dimensione e forma della finestra con frame.|  
  
## <a name="remarks"></a>Note  
 Un riquadro è in genere un oggetto specifico dell'applicazione derivato dalla [CView](../../mfc/reference/cview-class.md), ma può essere qualsiasi [CWnd](../../mfc/reference/cwnd-class.md) oggetto con l'ID di finestra figlio appropriato.  
  
 Un `CSplitterWnd` oggetto è in genere incorporato in un elemento padre [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto. Creare un `CSplitterWnd` oggetto usando la procedura seguente:  
  
1.  Incorporare un `CSplitterWnd` variabile membro nel frame padre.  
  
2.  Eseguire l'override del frame padre [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro.  
  
3.  All'interno di sottoposto a override `OnCreateClient`, chiamare il [Create](#create) o [CreateStatic](#createstatic) funzione membro di `CSplitterWnd`.  
  
 Chiamare il `Create` funzione membro per creare una finestra con separatore dinamico. In genere una finestra con separatore dinamico viene utilizzata per creare e scorrere un numero di singoli riquadri o viste, dello stesso documento. Il framework crea automaticamente un riquadro iniziale per la barra di divisione; quindi il framework crea Ridimensiona ed Elimina riquadri aggiuntivi come l'utente funziona controlli della finestra con separatore.  
  
 Quando si chiama `Create`, specificare una minimo di righe altezza e larghezza di colonna che determinano quando i riquadri sono troppo piccoli per essere visualizzati completamente. Dopo aver chiamato `Create`, è possibile modificare questi valori minimi chiamando il [SetColumnInfo](#setcolumninfo) e [SetRowInfo](#setrowinfo) funzioni membro.  
  
 Utilizzare anche il `SetColumnInfo` e `SetRowInfo` funzioni membro per impostare una larghezza "ideale" per una colonna e l'altezza "ideale" per una riga. Quando il framework visualizza una finestra con separatore, viene innanzitutto visualizzato il frame padre, quindi la finestra con separatore. Il framework viene disposto quindi i riquadri disponibili in colonne e righe in base alle dimensioni ideali, lavorano l'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.  
  
 Tutti i riquadri in una finestra con separatore dinamico devono essere della stessa classe. Le applicazioni comuni che supportano le finestre con separatore dinamico includono Microsoft Word e Microsoft Excel.  
  
 Utilizzare il `CreateStatic` funzione membro per creare una finestra con separatore statico. L'utente può modificare solo le dimensioni dei riquadri in una finestra, non il numero o l'ordine con separatore statico.  
  
 In particolare, è necessario creare i riquadri del tutti il separatore statico quando si crea il separatore statico. Avere cura di creare tutti i riquadri prima il frame padre `OnCreateClient` restituzione della funzione membro o verrà eseguito il framework non visualizzare correttamente la finestra.  
  
 Il `CreateStatic` funzione membro inizializza automaticamente con un separatore statico con un minimo di righe altezza e larghezza di colonna pari a 0. Dopo aver chiamato `Create`, modificare questi valori minimi chiamando il [SetColumnInfo](#setcolumninfo) e [SetRowInfo](#setrowinfo) funzioni membro. Utilizzare inoltre `SetColumnInfo` e `SetRowInfo` dopo aver chiamato `CreateStatic` per indicare lo si desidera dimensioni riquadro ideale.  
  
 I singoli riquadri di un separatore statico spesso appartengano a classi diverse. Per esempi di finestre con separatore statico, vedere l'editor di immagini e la gestione di File di Windows.  
  
 Una finestra con separatore supporta le barre di scorrimento speciale (oltre le barre di scorrimento che possono disporre di riquadri). Queste barre di scorrimento sono figli di `CSplitterWnd` dell'oggetto e vengono condivise con i riquadri.  
  
 Creare le barre di scorrimento speciali quando si crea la finestra con separatore. Ad esempio, un `CSplitterWnd` che ha due colonne, una riga e lo stile WS_VSCROLL visualizzerà una barra di scorrimento verticale condiviso da due riquadri. Quando l'utente sposta la barra di scorrimento, WM_VSCROLL messaggi vengono inviati a entrambi i riquadri. Quando i riquadri di impostare la posizione della barra di scorrimento, viene impostata la barra di scorrimento condiviso.  
  
 Per ulteriori informazioni sulle finestre con separatore, vedere:  
  
- [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)  
  
-   Articolo della Knowledge Base Q262024: HOWTO: utilizzare CPropertySheet come un figlio di CSplitterWnd  
  
 Per ulteriori informazioni su come creare finestre con separatore dinamico, vedere:  
  
-   Esempio MFC [Scribble](../../visual-cpp-samples.md)  
  
-   Esempio MFC [viene](../../visual-cpp-samples.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CSplitterWnd`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
##  <a name="activatenext"></a>  CSplitterWnd::ActivateNext  
 Chiamato dal framework per eseguire il comando riquadro successivo o riquadro precedente.  
  
```  
virtual void ActivateNext(BOOL bPrev = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *bPrev*  
 Indica quale finestra per l'attivazione. **TRUE** per precedente; **FALSE** per successivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un comando di alto livello che viene utilizzato la [CView](../../mfc/reference/cview-class.md) classe per la delega al `CSplitterWnd` implementazione.  
  
##  <a name="canactivatenext"></a>  CSplitterWnd::CanActivateNext  
 Chiamato dal framework per verificare se il comando riquadro successivo o riquadro precedente è attualmente possibile.  
  
```  
virtual BOOL CanActivateNext(BOOL bPrev = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *bPrev*  
 Indica quale finestra per l'attivazione. **TRUE** per precedente; **FALSE** per successivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un comando di alto livello che viene utilizzato la [CView](../../mfc/reference/cview-class.md) classe per la delega al `CSplitterWnd` implementazione.  
  
##  <a name="create"></a>  CSplitterWnd:: Create  
 Per creare una finestra con separatore dinamico, chiamare il **crea** funzione membro.  
  
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
 *pParentWnd*  
 La finestra cornice padre della finestra con separatore.  
  
 *nMaxRows*  
 Il numero massimo di righe nella finestra con separatore. Questo valore non deve superare 2.  
  
 *nMaxCols*  
 Il numero massimo di colonne nella finestra con separatore. Questo valore non deve superare 2.  
  
 *sizeMin*  
 Specifica la dimensione minima in corrispondenza del quale potrebbe essere visualizzato un riquadro.  
  
 *pContext*  
 Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Nella maggior parte dei casi, può essere il *pContext* passato alla finestra cornice padre.  
  
 *dwStyle*  
 Specifica lo stile della finestra.  
  
 *nID*  
 L'ID di finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST, a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile incorporare un `CSplitterWnd` in un elemento padre [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto attenendosi alla procedura seguente:  
  
1.  Incorporare un `CSplitterWnd` variabile membro nel frame padre.  
  
2.  Eseguire l'override del frame padre [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro.  
  
3.  Chiamare il `Create` funzione membro dall'interno sottoposto a override `OnCreateClient`.  
  
 Quando si crea una finestra con separatore all'interno di un frame padre, passare il frame padre *pContext* parametro alla finestra con separatore. In caso contrario, questo parametro può essere NULL.  
  
 La larghezza di altezza e la colonna iniziale minimo di righe di una finestra con separatore dinamico sono impostata tramite il *sizeMin* parametro. Questi minimi, che determinano se un riquadro è troppo piccolo per essere visualizzati nella sua interezza, possono essere modificati con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro.  
  
 Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e il `CSplitterWnd` Cenni preliminari sulla classe.  
  
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
 *dwStyle*  
 Specifica lo stile della finestra.  
  
 *nID*  
 L'ID di finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST, a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `CreateScrollBarCtrl` per includere controlli aggiuntivi accanto a una barra di scorrimento. Il comportamento predefinito consiste nel creare normali controlli di barra di scorrimento di Windows.  
  
##  <a name="createstatic"></a>  CSplitterWnd:: CreateStatic  
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
 *pParentWnd*  
 La finestra cornice padre della finestra con separatore.  
  
 *nRows*  
 Numero di righe. Questo valore non deve superare i 16.  
  
 *nCols*  
 Numero di colonne. Questo valore non deve superare i 16.  
  
 *dwStyle*  
 Specifica lo stile della finestra.  
  
 *nID*  
 L'ID di finestra figlio della finestra. L'ID può essere AFX_IDW_PANE_FIRST, a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un `CSplitterWnd` è in genere incorporato in un elemento padre `CFrameWnd` oppure [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto attenendosi alla procedura seguente:  
  
1.  Incorporare un `CSplitterWnd` variabile membro nel frame padre.  
  
2.  Eseguire l'override del frame padre `OnCreateClient` funzione membro.  
  
3.  Chiamare il `CreateStatic` funzione membro dall'interno sottoposto a override [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient).  
  
 Una finestra con separatore statico contenente un numero fisso di riquadri, spesso da classi diverse.  
  
 Quando si crea una finestra con separatore statico, è necessario allo stesso tempo creare tutti i riquadri. Il [CreateView](#createview) funzione membro viene utilizzata generalmente per questo scopo, ma è possibile creare anche altre classi nonview.  
  
 Il minimo di righe iniziale altezza e larghezza di colonna per una finestra con separatore statico è 0. Questi minimi, che determinano quando un riquadro è troppo piccolo per essere visualizzati nella sua interezza, possono essere modificati con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro.  
  
 Per aggiungere barre di scorrimento in una finestra con separatore statico, aggiungere gli stili WS_HSCROLL e WS_VSCROLL *dwStyle*.  
  
 Vedere "Finestre con separatore" nell'articolo [tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e il `CSplitterWnd` Cenni preliminari sulla classe per maggiori informazioni sulle finestre con separatore statico.  
  
##  <a name="createview"></a>  CSplitterWnd:: CreateView  
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
 *Riga*  
 Specifica la riga di finestra con separatore in cui inserire la nuova vista.  
  
 *col*  
 Specifica la colonna di finestra con separatore in cui inserire la nuova vista.  
  
 *pViewClass*  
 Specifica il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) della nuova visualizzazione.  
  
 *sizeInit*  
 Specifica le dimensioni iniziali della nuova visualizzazione.  
  
 *pContext*  
 Un puntatore a un contesto di creazione considerato di creare la vista (in genere il *pContext* passato il frame padre sottoposto a override [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro in cui la finestra con separatore Creazione in corso).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Tutti i riquadri di una finestra con separatore statico devono essere creati prima il framework Visualizza la barra di divisione.  
  
 Inoltre, il framework chiama questa funzione membro per creare nuovi riquadri quando l'utente di una finestra con separatore dinamico suddivide un riquadro, una riga o colonna.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#4](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_2.cpp)]  
  
##  <a name="csplitterwnd"></a>  CSplitterWnd::CSplitterWnd  
 Chiamata per costruire un `CSplitterWnd` oggetto.  
  
```  
CSplitterWnd();
```  
  
### <a name="remarks"></a>Note  
 Costruire un `CSplitterWnd` oggetto in due passaggi. In primo luogo, chiamare il costruttore, che crea il `CSplitterWnd` dell'oggetto e quindi chiamare il [Create](#create) la funzione membro, che crea la finestra con separatore e lo collega al `CSplitterWnd` oggetto.  
  
##  <a name="deletecolumn"></a>  CSplitterWnd::DeleteColumn  
 Elimina una colonna dalla finestra con separatore.  
  
```  
virtual void DeleteColumn(int colDelete);
```  
  
### <a name="parameters"></a>Parametri  
 *colDelete*  
 Specifica la colonna da eliminare.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT). E può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="deleterow"></a>  CSplitterWnd::DeleteRow  
 Elimina una riga dalla finestra con separatore.  
  
```  
virtual void DeleteRow(int rowDelete);
```  
  
### <a name="parameters"></a>Parametri  
 *rowDelete*  
 Specifica la riga da eliminare.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT). E può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="deleteview"></a>  CSplitterWnd::DeleteView  
 Elimina una visualizzazione dalla finestra con separatore.  
  
```  
virtual void DeleteView(
    int row,  
    int col);
```  
  
### <a name="parameters"></a>Parametri  
 *Riga*  
 Specifica la riga di finestra con separatore in cui si desidera eliminare la vista.  
  
 *col*  
 Specifica la colonna di finestra con separatore in cui si desidera eliminare la vista.  
  
### <a name="remarks"></a>Note  
 Se viene eliminata la visualizzazione attiva, nella visualizzazione successiva diventerà attiva. L'implementazione predefinita presuppone che la vista verrà automaticamente eliminare [PostNcDestroy](../../mfc/reference/cwnd-class.md#postncdestroy).  
  
 Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT). E può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="dokeyboardsplit"></a>  CSplitterWnd::DoKeyboardSplit  
 Esegue il comando, in genere "finestra Dividi." di divisione tastiera  
  
```  
virtual BOOL DoKeyboardSplit();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un comando di alto livello che viene utilizzato la [CView](../../mfc/reference/cview-class.md) classe per la delega al `CSplitterWnd` implementazione.  
  
##  <a name="doscroll"></a>  CSplitterWnd::DoScroll  
 Esegue lo scorrimento sincronizzato delle finestre divise.  
  
```  
virtual BOOL DoScroll(
    CView* pViewFrom,  
    UINT nScrollCode,  
    BOOL bDoScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *pViewFrom*  
 Puntatore alla visualizzazione da cui proviene il messaggio di scorrimento.  
  
 *nScrollCode*  
 Codice a barre di scorrimento che indica l'utente scorrevole richiesta. Questo parametro è costituito da due parti: un byte di ordine inferiore, che determina il tipo di scorrimento che si verificano in senso orizzontale, e un byte alto, che determina il tipo di scorrimento che si verificano in senso verticale:  
  
- SB_BOTTOM scorre verso il basso.  
  
- Una riga SB_LINEDOWN scorre verso il basso.  
  
- Scorre SB_LINEUP la precedente riga.  
  
- Un'unica pagina SB_PAGEDOWN scorre verso il basso.  
  
- Scorre SB_PAGEUP uno PGSU.  
  
- SB_TOP scorre verso l'alto.  
  
 *bDoScroll*  
 Determina se si verifica l'azione di scorrimento specificata. Se *bDoScroll* è TRUE (vale a dire, se esiste una finestra figlio, e se la suddivisione di windows è un intervallo di scorrimento), quindi l'azione di scorrimento specificata può avvenire; se *bDoScroll* è FALSE (vale a dire, se nessuna finestra figlio è presente, o le visualizzazioni suddivise non dispone di alcun intervallo di scorrimento), quindi non si verifica lo scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo scorrimento sincronizzato generato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per eseguire lo scorrimento sincronizzato delle finestre divise. quando la vista riceve un messaggio di scorrimento. Eseguire l'override per richiedere un intervento dell'utente prima di consentire lo scorrimento sincronizzato.  
  
##  <a name="doscrollby"></a>  CSplitterWnd::DoScrollBy  
 Scorre le finestre divise da un determinato numero di pixel.  
  
```  
virtual BOOL DoScrollBy(
    CView* pViewFrom,  
    CSize sizeScroll,  
    BOOL bDoScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *pViewFrom*  
 Puntatore alla visualizzazione da cui proviene il messaggio di scorrimento.  
  
 *sizeScroll*  
 Numero di pixel da scorrere orizzontalmente e verticalmente.  
  
 *bDoScroll*  
 Determina se si verifica l'azione di scorrimento specificata. Se *bDoScroll* è TRUE (vale a dire, se esiste una finestra figlio, e se la suddivisione di windows è un intervallo di scorrimento), quindi l'azione di scorrimento specificata può avvenire; se *bDoScroll* è FALSE (vale a dire, se nessuna finestra figlio è presente, o le visualizzazioni suddivise non dispone di alcun intervallo di scorrimento), quindi non si verifica lo scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo scorrimento sincronizzato generato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework in risposta a un messaggio di scorrimento, per eseguire la sincronizzazione lo scorrimento delle finestre della suddivisione della quantità, in pixel, indicato da *sizeScroll*. I valori positivi indicano lo scorrimento verso il basso e a destra. i valori negativi indicano lo scorrimento verticale e a sinistra.  
  
 Eseguire l'override per richiedere un intervento dell'utente prima di consentire a scorrimento.  
  
##  <a name="getactivepane"></a>  CSplitterWnd::GetActivePane  
 Determina il riquadro attivo lo stato attivo o della vista attiva nel frame.  
  
```  
virtual CWnd* GetActivePane(
    int* pRow = NULL,  
    int* pCol = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pRow*  
 Un puntatore a un **int** per recuperare il numero di riga del riquadro attivo.  
  
 *pCol*  
 Un puntatore a un **int** per recuperare il numero di colonna del riquadro attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al riquadro attivo. NULL se non esiste alcun riquadro attivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per determinare il riquadro attivo in una finestra con separatore. Eseguire l'override per richiedere un intervento dell'utente prima di visualizzare il riquadro attivo.  
  
##  <a name="getcolumncount"></a>  CSplitterWnd::GetColumnCount  
 Restituisce il numero di colonne riquadro corrente.  
  
```  
int GetColumnCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero corrente delle colonne nella barra di divisione. Per una barra di divisione statico, sarà anche il numero massimo di colonne.  
  
##  <a name="getcolumninfo"></a>  CSplitterWnd::GetColumnInfo  
 Restituisce informazioni per la colonna specificata.  
  
```  
void GetColumnInfo(
    int col,  
    int& cxCur,  
    int& cxMin) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *col*  
 Specifica una colonna.  
  
 *cxCur*  
 Un riferimento a un **int** da impostare per la larghezza corrente della colonna.  
  
 *cxMin*  
 Un riferimento a un **int** da impostare per la larghezza minima corrente della colonna.  
  
##  <a name="getpane"></a>  CSplitterWnd::GetPane  
 Restituisce il riquadro alla riga specificata e alla colonna.  
  
```  
CWnd* GetPane(
    int row,  
    int col) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *Riga*  
 Specifica una riga.  
  
 *col*  
 Specifica una colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il riquadro alla riga specificata e alla colonna. Il riquadro restituito è in genere un [CView](../../mfc/reference/cview-class.md)-classe derivata.  
  
##  <a name="getrowcount"></a>  CSplitterWnd::GetRowCount  
 Restituisce il conteggio delle righe riquadro corrente.  
  
```  
int GetRowCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero corrente di righe nella finestra con separatore. Per una finestra con separatore statico, sarà anche il numero massimo di righe.  
  
##  <a name="getrowinfo"></a>  CSplitterWnd::GetRowInfo  
 Restituisce informazioni sulla riga specificata.  
  
```  
void GetRowInfo(
    int row,  
    int& cyCur,  
    int& cyMin) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *Riga*  
 Specifica una riga.  
  
 *cyCur*  
 Riferimento a **int** da impostare per l'altezza corrente della riga in pixel.  
  
 *cyMin*  
 Riferimento a **int** da impostare per l'altezza minima corrente della riga in pixel.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per ottenere informazioni sulla riga specificata. Il *cyCur* parametro viene riempito con l'altezza corrente della riga specificata, e *cyMin* viene riempita con l'altezza minima della riga.  
  
##  <a name="getscrollstyle"></a>  CSplitterWnd::GetScrollStyle  
 Restituisce lo stile della barra di scorrimento condiviso per la finestra con separatore.  
  
```  
DWORD GetScrollStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno o più delle seguenti finestre stile flag, se ha esito positivo:  
  
- WS_HSCROLL se che la barra di divisione attualmente gestisce condiviso barre di scorrimento orizzontale.  
  
- WS_VSCROLL se che la barra di divisione attualmente gestisce condiviso barre di scorrimento verticale.  
  
 Se è zero, la finestra con separatore attualmente non gestisce le barre di scorrimento condiviso.  
  
##  <a name="idfromrowcol"></a>  CSplitterWnd::IdFromRowCol  
 Ottiene l'elemento figlio ID di finestra per il riquadro nella riga specificata e la colonna.  
  
```  
int IdFromRowCol(
    int row,  
    int col) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *Riga*  
 Specifica la riga di finestra con separatore.  
  
 *col*  
 Specifica la colonna di finestra con separatore.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di finestra figlio per il riquadro.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene utilizzata per la creazione di nonviews come riquadri e può essere chiamata prima il riquadro esiste.  
  
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
 *pWnd*  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto da testare.  
  
 *pRow*  
 Un puntatore a un **int** in cui archiviare il numero di riga.  
  
 *pCol*  
 Un puntatore a un **int** in cui archiviare un numero di colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Se diverso da zero, *pWnd* è attualmente un riquadro figlio di questa finestra con separatore, e *pRow* e *pCol* compilato con la posizione del riquadro nella finestra con separatore. Se *pWnd* non è un riquadro figlio di questa finestra con separatore, viene restituito 0.  
  
### <a name="remarks"></a>Note  
 Nelle versioni di Visual C++ precedenti alla 6.0, questa funzione è stata definita come  
  
 `BOOL IsChildPane(CWnd* pWnd, int& row, int& col);`  
  
 Questa versione è obsoleta e non deve essere utilizzata.  
  
##  <a name="istracking"></a>  CSplitterWnd::IsTracking  
 Chiamare questa funzione membro per determinare se la barra di divisione nella finestra è attualmente in corso è stata spostata.  
  
```  
BOOL IsTracking();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un'operazione di divisione è in corso. in caso contrario 0.  
  
##  <a name="ondrawsplitter"></a>  CSplitterWnd::OnDrawSplitter  
 Esegue il rendering di un'immagine di una finestra divisa.  
  
```  
virtual void OnDrawSplitter(
    CDC* pDC,  
    ESplitType nType,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Puntatore al contesto di dispositivo in cui disegnare. Se *pDC* è NULL, quindi [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) viene chiamato dal framework e nessuna divisione finestra viene disegnata.  
  
 *NLE*  
 Il valore di `enum ESplitType`, che può essere uno dei seguenti:  
  
- `splitBox` La casella di trascinamento con separatore.  
  
- `splitBar` La barra che tra le finestre due divise verrà visualizzata.  
  
- `splitIntersection` L'intersezione delle finestre divise. Questo elemento non verrà chiamato durante l'esecuzione in Windows 95/98.  
  
- `splitBorder` Bordi della finestra divisa.  
  
 *Rect*  
 Un riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le dimensioni delle finestre divise.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per disegnare e specificare le caratteristiche esatto di una finestra con separatore. Eseguire l'override `OnDrawSplitter` per la personalizzazione avanzata delle immagini per i diversi componenti con interfaccia grafici di una finestra con separatore. L'immagine predefinita è simile alla barra di divisione in Works Microsoft per Windows o Microsoft Windows 95/98, in quanto le intersezioni delle barre di divisione vengano fusi insieme.  
  
 Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e il `CSplitterWnd` Cenni preliminari sulla classe.  
  
##  <a name="oninverttracker"></a>  CSplitterWnd::OnInvertTracker  
 Esegue il rendering l'immagine di una finestra divisa per la stessa dimensione e forma della finestra con frame.  
  
```  
virtual void OnInvertTracker(const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 *Rect*  
 Riferimento a un `CRect` oggetto che specifica il rettangolo di rilevamento.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework durante il ridimensionamento di barre di divisione. Eseguire l'override `OnInvertTracker` per la personalizzazione avanzata delle immagini della finestra con separatore. L'immagine predefinita è simile alla barra di divisione in Works Microsoft per Windows o Microsoft Windows 95/98, in quanto le intersezioni delle barre di divisione vengano fusi insieme.  
  
 Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e il `CSplitterWnd` Cenni preliminari sulla classe.  
  
##  <a name="recalclayout"></a>  CSplitterWnd::RecalcLayout  
 Chiamata eseguita per visualizzare nuovamente la finestra con separatore dopo l'adattamento delle dimensioni di riga o colonna.  
  
```  
virtual void RecalcLayout();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per visualizzare correttamente nuovamente la finestra con separatore, una volta le dimensioni di riga e colonna con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro. Se si modificano le dimensioni di riga e colonna come parte del processo di creazione prima che la finestra con separatore è visibile, non è necessario chiamare questa funzione membro.  
  
 Il framework chiama questa funzione membro ogni volta che l'utente ridimensiona la finestra con separatore o si sposta una divisione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CSplitterWnd::SetColumnInfo](#setcolumninfo).  
  
##  <a name="setactivepane"></a>  CSplitterWnd::SetActivePane  
 Imposta un riquadro per essere quello attivo nel frame.  
  
```  
virtual void SetActivePane(
    int row,  
    int col,  
    CWnd* pWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *Riga*  
 Se *pWnd* è NULL, specifica la riga nel riquadro che sarà attivo.  
  
 *col*  
 Se *pWnd* è NULL, specifica la colonna nel riquadro che sarà attivo.  
  
 *pWnd*  
 Un puntatore a un `CWnd` oggetto. Se NULL, il riquadro specificato da *riga* e *col* è impostata come attiva. Se non è NULL, specifica il riquadro è impostata come attivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per impostare un riquadro come attivo quando l'utente sposta lo stato attivo su un riquadro all'interno della finestra cornice. È possibile chiamare in modo esplicito `SetActivePane` per modificare lo stato attivo per la visualizzazione specificata.  
  
 Specificare riquadro fornendo riga e colonna **oppure** fornendo *pWnd*.  
  
##  <a name="setcolumninfo"></a>  CSplitterWnd::SetColumnInfo  
 Chiamata eseguita per impostare le informazioni sulla colonna specificata.  
  
```  
void SetColumnInfo(
    int col,  
    int cxIdeal,  
    int cxMin);
```  
  
### <a name="parameters"></a>Parametri  
 *col*  
 Specifica una colonna di finestra con separatore.  
  
 *cxIdeal*  
 Specifica una larghezza ideale della colonna di finestra con separatore in pixel.  
  
 *cxMin*  
 Specifica una larghezza minima per la colonna di finestra con separatore in pixel.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per impostare una nuova larghezza minima e la larghezza ideale per una colonna. Il valore minimo della colonna determina quando la colonna è troppo piccola per essere interamente visualizzato.  
  
 Quando il framework visualizza una finestra con separatore, disposto i riquadri disponibili in colonne e righe in base alle dimensioni ideali, lavorano l'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#6](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_4.cpp)]  
  
##  <a name="setrowinfo"></a>  CSplitterWnd::SetRowInfo  
 Chiamata eseguita per impostare le informazioni sulla riga specificata.  
  
```  
void SetRowInfo(
    int row,  
    int cyIdeal,  
    int cyMin);
```  
  
### <a name="parameters"></a>Parametri  
 *Riga*  
 Specifica una riga della finestra con separatore.  
  
 *cyIdeal*  
 Specifica un'altezza ideale della riga di finestra con separatore in pixel.  
  
 *cyMin*  
 Specifica un'altezza minima per la riga di finestra con separatore in pixel.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per impostare la nuova altezza minima e l'altezza ideale per una riga. Il valore minimo di righe determina quando la riga verrà troppo piccola per essere interamente visualizzato.  
  
 Quando il framework visualizza una finestra con separatore, disposto i riquadri disponibili in colonne e righe in base alle dimensioni ideali, lavorano l'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.  
  
##  <a name="setscrollstyle"></a>  CSplitterWnd::SetScrollStyle  
 Specifica che il nuovo stile di scorrimento per la finestra con separatore condivisa supporto barra di scorrimento.  
  
```  
void SetScrollStyle(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Il nuovo stile di scorrimento per la finestra con separatore condiviso supporto barra di scorrimento, che può essere uno dei valori seguenti:  
  
- WS_HSCROLL crea/Mostra orizzontale condivisa barre di scorrimento.  
  
- WS_VSCROLL crea/Mostra condiviso di scorrimento verticale.  
  
### <a name="remarks"></a>Note  
 Non vengano eliminato una volta creata una barra di scorrimento anche se `SetScrollStyle` è stato chiamato senza lo stile selezionato; in alternativa, le barre di scorrimento sono nascosti. In questo modo le barre di scorrimento mantenere lo stato anche quando sono nascosti. Dopo la chiamata `SetScrollStyle` è necessario chiamare [RecalcLayout](#recalclayout) per tutte le modifiche diventino effettive.  
  
##  <a name="splitcolumn"></a>  CSplitterWnd::SplitColumn  
 Indica il punto di divisione verticale di una finestra cornice.  
  
```  
virtual BOOL SplitColumn(int cxBefore);
```  
  
### <a name="parameters"></a>Parametri  
 *cxBefore*  
 La posizione, in pixel, prima della quale si verifica la divisione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata quando viene creata una finestra con separatore verticale. `SplitColumn` indica il percorso predefinito in cui si verifica la divisione.  
  
 `SplitColumn` viene chiamato dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT). E può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="splitrow"></a>  CSplitterWnd::SplitRow  
 Indica il punto di divisione in senso orizzontale di una finestra cornice.  
  
```  
virtual BOOL SplitRow(int cyBefore);
```  
  
### <a name="parameters"></a>Parametri  
 *cyBefore*  
 La posizione, in pixel, prima della quale si verifica la divisione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata quando viene creata una finestra con separatore orizzontale. `SplitRow` indica il percorso predefinito in cui si verifica la divisione.  
  
 `SplitRow` viene chiamato dal framework per implementare la logica della finestra con separatore dinamico (vale a dire, se la finestra con separatore ha lo stile SPLS_DYNAMIC_SPLIT). E può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="ondraw"></a>  CSplitterWnd::OnDraw  
 Chiamata eseguita dal framework per disegnare la finestra con separatore.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Puntatore a un contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)
