---
title: Classe CSplitterWnd | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSplitterWnd
dev_langs:
- C++
helpviewer_keywords:
- static splitter windows
- multiple views
- splitter windows
- views, multiple per frame
- dynamic splitter windows
- CSplitterWnd class
ms.assetid: fd0de258-6dbe-4552-9e47-a39de0471d51
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: d015aa604c5394ccbe8c7471b70c84763cc00a5b
ms.lasthandoff: 02/24/2017

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
|[CSplitterWnd::CSplitterWnd](#csplitterwnd)|Chiamata a costruire un `CSplitterWnd` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWnd::ActivateNext](#activatenext)|Esegue il comando riquadro successivo o precedente.|  
|[CSplitterWnd::CanActivateNext](#canactivatenext)|Controlla se il comando riquadro successivo o precedente è attualmente possibile.|  
|[CSplitterWnd:: Create](#create)|Per creare una finestra con separatore dinamico e associarlo al `CSplitterWnd` oggetto.|  
|[CSplitterWnd::CreateScrollBarCtrl](#createscrollbarctrl)|Crea un controllo barra di scorrimento condiviso.|  
|[CSplitterWnd:: CreateStatic](#createstatic)|Per creare una finestra con separatore statico e associarlo al `CSplitterWnd` oggetto.|  
|[CSplitterWnd:: CreateView](#createview)|Chiamare per creare un riquadro in una finestra con separatore.|  
|[CSplitterWnd::DeleteColumn](#deletecolumn)|Elimina una colonna dalla finestra con separatore.|  
|[CSplitterWnd::DeleteRow](#deleterow)|Elimina una riga dalla finestra con separatore.|  
|[CSplitterWnd::DeleteView](#deleteview)|Elimina una visualizzazione dalla finestra con separatore.|  
|[CSplitterWnd::DoKeyboardSplit](#dokeyboardsplit)|Esegue la tastiera dividere comando, in genere "suddivisione della finestra".|  
|[CSplitterWnd::DoScroll](#doscroll)|Esegue lo scorrimento sincronizzato delle finestre divise.|  
|[CSplitterWnd::DoScrollBy](#doscrollby)|Consente di scorrere le finestre divise di un determinato numero di pixel.|  
|[CSplitterWnd::GetActivePane](#getactivepane)|Determina il riquadro attivo lo stato attivo o della vista attiva nel frame.|  
|[CSplitterWnd::GetColumnCount](#getcolumncount)|Restituisce il numero di colonna corrente del riquadro.|  
|[CSplitterWnd::GetColumnInfo](#getcolumninfo)|Restituisce le informazioni nella colonna specificata.|  
|[CSplitterWnd::GetPane](#getpane)|Restituisce il riquadro alla riga specificata e alla colonna.|  
|[CSplitterWnd::GetRowCount](#getrowcount)|Restituisce il numero di riga corrente del riquadro.|  
|[CSplitterWnd::GetRowInfo](#getrowinfo)|Restituisce informazioni sulla riga specificata.|  
|[CSplitterWnd::GetScrollStyle](#getscrollstyle)|Restituisce lo stile della barra di scorrimento condiviso.|  
|[CSplitterWnd::IdFromRowCol](#idfromrowcol)|Restituisce l'elemento figlio ID di finestra del riquadro alla riga specificata e alla colonna.|  
|[CSplitterWnd::IsChildPane](#ischildpane)|Chiamare per determinare se la finestra è attualmente un riquadro figlio di questa finestra con separatore.|  
|[CSplitterWnd::IsTracking](#istracking)|Determina se barra di divisione viene spostata.|  
|[CSplitterWnd::RecalcLayout](#recalclayout)|Chiamare per visualizzare nuovamente la finestra con separatore dopo la regolazione delle dimensioni di riga o colonna.|  
|[CSplitterWnd::SetActivePane](#setactivepane)|Imposta un riquadro come quello attivo nel frame.|  
|[CSplitterWnd::SetColumnInfo](#setcolumninfo)|Chiamata a impostare le informazioni della colonna specificata.|  
|[CSplitterWnd::SetRowInfo](#setrowinfo)|Chiamata a impostare le informazioni sulla riga specificata.|  
|[CSplitterWnd::SetScrollStyle](#setscrollstyle)|Specifica che il nuovo stile della barra di scorrimento per la finestra con separatore condiviso supporto barra di scorrimento.|  
|[CSplitterWnd::SplitColumn](#splitcolumn)|Indica il punto di divisione verticale di una finestra cornice.|  
|[CSplitterWnd::SplitRow](#splitrow)|Indica il punto di divisione orizzontale di una finestra cornice.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWnd::OnDraw](#ondraw)|Chiamato dal framework per creare la finestra con separatore.|  
|[CSplitterWnd::OnDrawSplitter](#ondrawsplitter)|Esegue il rendering di un'immagine di una finestra divisa.|  
|[CSplitterWnd::OnInvertTracker](#oninverttracker)|Esegue il rendering di immagini di una finestra divisa per la stessa dimensione e forma la finestra cornice.|  
  
## <a name="remarks"></a>Note  
 Un riquadro è in genere un oggetto specifico dell'applicazione derivata da [CView](../../mfc/reference/cview-class.md), ma può essere qualsiasi [CWnd](../../mfc/reference/cwnd-class.md) oggetto con l'ID di finestra figlio appropriato.  
  
 Oggetto `CSplitterWnd` oggetto viene in genere incorporato in un elemento padre [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto. Creare un `CSplitterWnd` utilizzando la procedura seguente:  
  
1.  Incorporare un `CSplitterWnd` variabile membro nel frame padre.  
  
2.  Eseguire l'override del frame padre [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro.  
  
3.  Dall'interno sottoposto a override `OnCreateClient`, chiamare il [crea](#create) o [CreateStatic](#createstatic) funzione membro di `CSplitterWnd`.  
  
 Chiamare il **crea** funzione membro per creare una finestra con separatore dinamico. In genere viene utilizzata una finestra con separatore dinamico per creare e scorrere un numero di singoli riquadri, o viste, dello stesso documento. Il framework crea automaticamente un riquadro iniziale per la barra di divisione; quindi il framework crea Ridimensiona ed Elimina riquadri aggiuntivi come l'utente opera controlli della finestra con separatore.  
  
 Quando si chiama **crea**, specificare una minimo di righe altezza e larghezza di colonna che determinano quando i riquadri sono troppo piccoli per essere visualizzati completamente. Dopo aver chiamato **crea**, è possibile modificare questi valori minimi chiamando il [SetColumnInfo](#setcolumninfo) e [SetRowInfo](#setrowinfo) funzioni membro.  
  
 Utilizzare inoltre la `SetColumnInfo` e `SetRowInfo` le funzioni membro per impostare una larghezza di una colonna "ideale" e "ideale" altezza di una riga. Quando il framework viene visualizzata una finestra con separatore, viene innanzitutto visualizzato il frame padre, quindi la finestra con separatore. Il framework disposto quindi i riquadri in colonne e righe in base alle dimensioni ideali, procedendo dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.  
  
 Tutti i riquadri in una finestra con separatore dinamico devono essere della stessa classe. Applicazioni note che supportano le finestre con separatore dinamico includono Microsoft Word e Microsoft Excel.  
  
 Utilizzare il `CreateStatic` funzione membro per creare una finestra con separatore statico. L'utente può modificare solo le dimensioni dei riquadri in una finestra, non il numero o l'ordine con separatore statico.  
  
 È necessario creare tutti gli statico di riquadri di divisione in particolare quando si crea il separatore statico. Assicurarsi di creare tutti i riquadri prima del frame padre `OnCreateClient` restituiti dalla funzione membro, o se il framework non visualizzare la finestra in modo corretto.  
  
 Il `CreateStatic` funzione membro inizializza automaticamente un separatore statico con un minimo di righe altezza e larghezza di colonna pari a 0. Dopo aver chiamato **crea**, modificare questi valori minimi chiamando il [SetColumnInfo](#setcolumninfo) e [SetRowInfo](#setrowinfo) funzioni membro. Utilizzare inoltre `SetColumnInfo` e `SetRowInfo` dopo aver chiamato `CreateStatic` per indicare le dimensioni riquadro ideale desiderato.  
  
 I singoli riquadri di un separatore statico spesso appartengono a classi diverse. Per esempi di finestre con separatore statico, vedere editor di immagini e la gestione di File di Windows.  
  
 Una finestra con separatore supporta le barre di scorrimento speciale (oltre le barre di scorrimento che possono avere riquadri). Queste barre di scorrimento sono figli di `CSplitterWnd` dell'oggetto e vengono condivise con i riquadri.  
  
 Creare queste barre di scorrimento speciale quando si crea la finestra con separatore. Ad esempio, un `CSplitterWnd` che dispone di una riga, due colonne e **WS_VSCROLL** stile verrà visualizzata una barra di scorrimento verticale che viene condiviso da due riquadri. Quando l'utente sposta la barra di scorrimento, `WM_VSCROLL` i messaggi vengono inviati a entrambi i riquadri. Quando i riquadri di impostare la posizione della barra di scorrimento, la barra di scorrimento condiviso.  
  
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
 **Intestazione:** AFXEXT  
  
##  <a name="a-nameactivatenexta--csplitterwndactivatenext"></a><a name="activatenext"></a>CSplitterWnd::ActivateNext  
 Chiamato dal framework di eseguire il comando riquadro successivo o precedente.  
  
```  
virtual void ActivateNext(BOOL bPrev = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `bPrev`  
 Indica quale finestra da attivare. **TRUE** per precedente; **FALSE** successivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un comando di alto livello che viene utilizzato il [CView](../../mfc/reference/cview-class.md) classe per delegare il `CSplitterWnd` implementazione.  
  
##  <a name="a-namecanactivatenexta--csplitterwndcanactivatenext"></a><a name="canactivatenext"></a>CSplitterWnd::CanActivateNext  
 Chiamato dal framework per verificare se il comando riquadro successivo o precedente è attualmente possibile.  
  
```  
virtual BOOL CanActivateNext(BOOL bPrev = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `bPrev`  
 Indica quale finestra da attivare. **TRUE** per precedente; **FALSE** successivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un comando di alto livello che viene utilizzato il [CView](../../mfc/reference/cview-class.md) classe per delegare il `CSplitterWnd` implementazione.  
  
##  <a name="a-namecreatea--csplitterwndcreate"></a><a name="create"></a>CSplitterWnd:: Create  
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
 `pParentWnd`  
 Finestra cornice padre della finestra con separatore.  
  
 *nMaxRows*  
 Numero massimo di righe nella finestra della barra di divisione. Questo valore non deve superare 2.  
  
 *nMaxCols*  
 Numero massimo di colonne nella finestra con separatore. Questo valore non deve superare 2.  
  
 `sizeMin`  
 Specifica la dimensione minima in cui potrebbe essere visualizzato un riquadro.  
  
 `pContext`  
 Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Nella maggior parte dei casi, può trattarsi di `pContext` passato alla finestra cornice padre.  
  
 `dwStyle`  
 Specifica lo stile della finestra.  
  
 `nID`  
 L'ID di finestra figlio della finestra. L'ID può essere **AFX_IDW_PANE_FIRST** , a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile incorporare un `CSplitterWnd` in un elemento padre [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto attenendosi alla procedura seguente:  
  
1.  Incorporare un `CSplitterWnd` variabile membro nel frame padre.  
  
2.  Eseguire l'override del frame padre [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro.  
  
3.  Chiamare il **crea** funzione membro dall'interno sottoposto a override `OnCreateClient`.  
  
 Quando si crea una finestra con separatore all'interno di un frame principale, passare il frame padre `pContext` parametro nella finestra della barra di divisione. In caso contrario, questo parametro può essere **NULL**.  
  
 La larghezza minima di riga iniziale di altezza e la colonna di una finestra con separatore dinamico sono impostate il `sizeMin` parametro. Questi valori minimi, che determinano se un riquadro è troppo piccolo per essere visualizzati nella sua interezza, possono essere modificati con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro.  
  
 Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [più tipi di documenti, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e `CSplitterWnd` Cenni preliminari sulla classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#125; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_1.cpp)]  
  
##  <a name="a-namecreatescrollbarctrla--csplitterwndcreatescrollbarctrl"></a><a name="createscrollbarctrl"></a>CSplitterWnd::CreateScrollBarCtrl  
 Chiamato dal framework per creare un controllo barra di scorrimento condiviso.  
  
```  
virtual BOOL CreateScrollBarCtrl(
    DWORD dwStyle,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile della finestra.  
  
 `nID`  
 L'ID di finestra figlio della finestra. L'ID può essere **AFX_IDW_PANE_FIRST** , a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `CreateScrollBarCtrl` per includere controlli aggiuntivi accanto a una barra di scorrimento. Il comportamento predefinito consiste nel creare normali controlli della barra di scorrimento Windows.  
  
##  <a name="a-namecreatestatica--csplitterwndcreatestatic"></a><a name="createstatic"></a>CSplitterWnd:: CreateStatic  
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
 `pParentWnd`  
 Finestra cornice padre della finestra con separatore.  
  
 `nRows`  
 Numero di righe. Questo valore non deve superare i 16.  
  
 *nCols*  
 Numero di colonne. Questo valore non deve superare i 16.  
  
 `dwStyle`  
 Specifica lo stile della finestra.  
  
 `nID`  
 L'ID di finestra figlio della finestra. L'ID può essere **AFX_IDW_PANE_FIRST** , a meno che la finestra con separatore è annidata all'interno di un'altra finestra con separatore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Oggetto `CSplitterWnd` in genere è incorporata in un elemento padre `CFrameWnd` o [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto attenendosi alla procedura seguente:  
  
1.  Incorporare un `CSplitterWnd` variabile membro nel frame padre.  
  
2.  Eseguire l'override del frame padre `OnCreateClient` funzione membro.  
  
3.  Chiamare il `CreateStatic` funzione membro dall'interno sottoposto a override [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient).  
  
 Una finestra con separatore statico contiene un numero fisso di riquadri, spesso da classi diverse.  
  
 Quando si crea una finestra con separatore statico, è necessario allo stesso tempo creare tutti i riquadri. Il [CreateView](#createview) funzione membro viene utilizzata generalmente per questo scopo, ma è possibile creare anche altre classi nonview.  
  
 La larghezza di altezza e la colonna iniziale minime delle righe per una finestra con separatore statico è 0. Questi valori minimi, che determinano quando un riquadro è troppo piccolo per essere visualizzati nella sua interezza, possono essere modificati con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro.  
  
 Per aggiungere barre di scorrimento in una finestra con separatore statico, aggiungere il **WS_HSCROLL** e **WS_VSCROLL** stili da `dwStyle`.  
  
 Vedere "Finestre con separatore" nell'articolo [più tipi di documenti, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e `CSplitterWnd` Cenni preliminari sulla classe per ulteriori informazioni sulle finestre con separatore statico.  
  
##  <a name="a-namecreateviewa--csplitterwndcreateview"></a><a name="createview"></a>CSplitterWnd:: CreateView  
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
 `row`  
 Specifica la riga della finestra con separatore in cui inserire la nuova vista.  
  
 `col`  
 Specifica la colonna di finestra con separatore in cui inserire la nuova vista.  
  
 `pViewClass`  
 Specifica il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) della nuova visualizzazione.  
  
 *sizeInit*  
 Specifica la dimensione iniziale della nuova visualizzazione.  
  
 `pContext`  
 Un puntatore a un contesto di creazione utilizzato per creare la vista (in genere il `pContext` passato il frame padre sottoposto a override [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro in cui viene creata la finestra con separatore).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Tutti i riquadri di una finestra con separatore statico devono essere creati prima che il framework consente di visualizzare la barra di divisione.  
  
 Inoltre, il framework chiama questa funzione membro per creare nuovi riquadri quando l'utente di una finestra con separatore dinamico suddivide un riquadro, riga o colonna.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n.&4;](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_2.cpp)]  
  
##  <a name="a-namecsplitterwnda--csplitterwndcsplitterwnd"></a><a name="csplitterwnd"></a>CSplitterWnd::CSplitterWnd  
 Chiamata a costruire un `CSplitterWnd` oggetto.  
  
```  
CSplitterWnd();
```  
  
### <a name="remarks"></a>Note  
 Costruire un `CSplitterWnd` oggetto in due passaggi. In primo luogo, chiamare il costruttore che crea il `CSplitterWnd` e quindi chiamare il [crea](#create) funzione membro, che crea la finestra con separatore e lo collega a di `CSplitterWnd` oggetto.  
  
##  <a name="a-namedeletecolumna--csplitterwnddeletecolumn"></a><a name="deletecolumn"></a>CSplitterWnd::DeleteColumn  
 Elimina una colonna dalla finestra con separatore.  
  
```  
virtual void DeleteColumn(int colDelete);
```  
  
### <a name="parameters"></a>Parametri  
 *colDelete*  
 Specifica la colonna da eliminare.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (ovvero, se la finestra con separatore ha il **SPLS_DYNAMIC_SPLIT** stile). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="a-namedeleterowa--csplitterwnddeleterow"></a><a name="deleterow"></a>CSplitterWnd::DeleteRow  
 Elimina una riga dalla finestra con separatore.  
  
```  
virtual void DeleteRow(int rowDelete);
```  
  
### <a name="parameters"></a>Parametri  
 *rowDelete*  
 Specifica la riga da eliminare.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (ovvero, se la finestra con separatore ha il **SPLS_DYNAMIC_SPLIT** stile). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="a-namedeleteviewa--csplitterwnddeleteview"></a><a name="deleteview"></a>CSplitterWnd::DeleteView  
 Elimina una visualizzazione dalla finestra con separatore.  
  
```  
virtual void DeleteView(
    int row,  
    int col);
```  
  
### <a name="parameters"></a>Parametri  
 `row`  
 Specifica la riga di finestra con separatore in cui si desidera eliminare la vista.  
  
 `col`  
 Specifica la colonna di finestra con separatore in cui si desidera eliminare la vista.  
  
### <a name="remarks"></a>Note  
 Se viene eliminata la visualizzazione attiva, la successiva visualizzazione diventerà attiva. L'implementazione predefinita presuppone automaticamente la visualizzazione eliminare [PostNcDestroy](../../mfc/reference/cwnd-class.md#postncdestroy).  
  
 Questa funzione membro viene chiamata dal framework per implementare la logica della finestra con separatore dinamico (ovvero, se la finestra con separatore ha il **SPLS_DYNAMIC_SPLIT** stile). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="a-namedokeyboardsplita--csplitterwnddokeyboardsplit"></a><a name="dokeyboardsplit"></a>CSplitterWnd::DoKeyboardSplit  
 Esegue la tastiera dividere comando, in genere "suddivisione della finestra".  
  
```  
virtual BOOL DoKeyboardSplit();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un comando di alto livello che viene utilizzato il [CView](../../mfc/reference/cview-class.md) classe per delegare il `CSplitterWnd` implementazione.  
  
##  <a name="a-namedoscrolla--csplitterwnddoscroll"></a><a name="doscroll"></a>CSplitterWnd::DoScroll  
 Esegue lo scorrimento sincronizzato delle finestre divise.  
  
```  
virtual BOOL DoScroll(
    CView* pViewFrom,  
    UINT nScrollCode,  
    BOOL bDoScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pViewFrom`  
 Puntatore alla visualizzazione da cui proviene il messaggio di scorrimento.  
  
 `nScrollCode`  
 Un codice a barre di scorrimento che indica l'utente scorrevole richiesta. Questo parametro è composta da due parti: un byte di ordine inferiore, che determina il tipo di scorrimento orizzontale in corso, e un byte di ordine superiore, che determina il tipo di scorrimento verticale in corso:  
  
- **SB_BOTTOM** scorre verso il basso.  
  
- **SB_LINEDOWN** scorre una riga verso il basso.  
  
- **SB_LINEUP** scorre una riga verso l'alto.  
  
- **SB_PAGEDOWN** scorre una pagina verso il basso.  
  
- **SB_PAGEUP** scorre una pagina verso l'alto.  
  
- **SB_TOP** scorre verso l'alto.  
  
 `bDoScroll`  
 Determina se si verifica l'azione di scorrimento specificata. Se `bDoScroll` è **TRUE** (vale a dire, se esiste una finestra figlio, e se la divisione windows dispone di un intervallo di scorrimento), quindi l'azione di scorrimento specificata può essere eseguito; se `bDoScroll` è **FALSE** (vale a dire, se è presente alcuna finestra figlio o le visualizzazioni suddivise alcun intervallo di scorrimento), quindi non si verifica lo scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo scorrimento sincronizzato generato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per eseguire lo scorrimento sincronizzato delle finestre divise quando la vista riceve un messaggio di scorrimento. Eseguire l'override per richiedere un intervento dell'utente è consentito lo scorrimento sincronizzato.  
  
##  <a name="a-namedoscrollbya--csplitterwnddoscrollby"></a><a name="doscrollby"></a>CSplitterWnd::DoScrollBy  
 Consente di scorrere le finestre divise di un determinato numero di pixel.  
  
```  
virtual BOOL DoScrollBy(
    CView* pViewFrom,  
    CSize sizeScroll,  
    BOOL bDoScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pViewFrom`  
 Puntatore alla visualizzazione da cui proviene il messaggio di scorrimento.  
  
 `sizeScroll`  
 Numero di pixel da scorrere orizzontalmente e verticalmente.  
  
 bDoScroll  
 Determina se si verifica l'azione di scorrimento specificata. Se `bDoScroll` è **TRUE** (vale a dire, se esiste una finestra figlio, e se la divisione windows dispone di un intervallo di scorrimento), quindi l'azione di scorrimento specificata può essere eseguito; se `bDoScroll` è **FALSE** (vale a dire, se è presente alcuna finestra figlio o le visualizzazioni suddivise alcun intervallo di scorrimento), quindi non si verifica lo scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo scorrimento sincronizzato generato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework in risposta a un messaggio di scorrimento, per eseguire la sincronizzazione lo scorrimento di windows la suddivisione della quantità, in pixel, indicato da `sizeScroll`. I valori positivi indicano lo scorrimento verso il basso e verso destra. i valori negativi indicano lo scorrimento verticale e a sinistra.  
  
 Eseguire l'override per richiedere un intervento dell'utente prima di consentire a scorrimento.  
  
##  <a name="a-namegetactivepanea--csplitterwndgetactivepane"></a><a name="getactivepane"></a>CSplitterWnd::GetActivePane  
 Determina il riquadro attivo lo stato attivo o della vista attiva nel frame.  
  
```  
virtual CWnd* GetActivePane(
    int* pRow = NULL,  
    int* pCol = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pRow`  
 Un puntatore a un **int** per recuperare il numero di riga del riquadro attivo.  
  
 `pCol`  
 Un puntatore a un **int** per recuperare il numero di colonna del riquadro attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al riquadro attivo. **NULL** se è presente alcun riquadro attivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per determinare il riquadro attivo in una finestra con separatore. Eseguire l'override per richiedere un intervento dell'utente prima di ottenere il riquadro attivo.  
  
##  <a name="a-namegetcolumncounta--csplitterwndgetcolumncount"></a><a name="getcolumncount"></a>CSplitterWnd::GetColumnCount  
 Restituisce il numero di colonna corrente del riquadro.  
  
```  
int GetColumnCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero corrente delle colonne nella barra di divisione. Per un separatore statico, questo sarà anche il numero massimo di colonne.  
  
##  <a name="a-namegetcolumninfoa--csplitterwndgetcolumninfo"></a><a name="getcolumninfo"></a>CSplitterWnd::GetColumnInfo  
 Restituisce le informazioni nella colonna specificata.  
  
```  
void GetColumnInfo(
    int col,  
    int& cxCur,  
    int& cxMin) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `col`  
 Specifica una colonna.  
  
 *cxCur*  
 Un riferimento a un `int` da impostare la larghezza corrente della colonna.  
  
 `cxMin`  
 Un riferimento a un `int` da impostare per la larghezza minima corrente della colonna.  
  
##  <a name="a-namegetpanea--csplitterwndgetpane"></a><a name="getpane"></a>CSplitterWnd::GetPane  
 Restituisce il riquadro alla riga specificata e alla colonna.  
  
```  
CWnd* GetPane(
    int row,  
    int col) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `row`  
 Specifica una riga.  
  
 `col`  
 Specifica una colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il riquadro alla riga specificata e alla colonna. Il riquadro restituito è in genere un [CView](../../mfc/reference/cview-class.md)-classe derivata.  
  
##  <a name="a-namegetrowcounta--csplitterwndgetrowcount"></a><a name="getrowcount"></a>CSplitterWnd::GetRowCount  
 Restituisce il numero di riga corrente del riquadro.  
  
```  
int GetRowCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero corrente di righe nella finestra della barra di divisione. Per una finestra con separatore statico, questo sarà anche il numero massimo di righe.  
  
##  <a name="a-namegetrowinfoa--csplitterwndgetrowinfo"></a><a name="getrowinfo"></a>CSplitterWnd::GetRowInfo  
 Restituisce informazioni sulla riga specificata.  
  
```  
void GetRowInfo(
    int row,  
    int& cyCur,  
    int& cyMin) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `row`  
 Specifica una riga.  
  
 `cyCur`  
 Fare riferimento a `int` per impostare l'altezza corrente della riga in pixel.  
  
 `cyMin`  
 Fare riferimento a `int` per impostare l'altezza minima corrente della riga in pixel.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per ottenere informazioni sulla riga specificata. Il `cyCur` parametro viene riempito con l'altezza corrente della riga specificata, e `cyMin` viene riempita con l'altezza minima della riga.  
  
##  <a name="a-namegetscrollstylea--csplitterwndgetscrollstyle"></a><a name="getscrollstyle"></a>CSplitterWnd::GetScrollStyle  
 Restituisce lo stile della barra di scorrimento condiviso per la finestra con separatore.  
  
```  
DWORD GetScrollStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno o più delle seguenti finestre stile flag, se ha esito positivo:  
  
- **WS_HSCROLL** se la barra di divisione gestisce correntemente le barre di scorrimento orizzontale condiviso.  
  
- **WS_VSCROLL** se la barra di divisione gestisce correntemente le barre di scorrimento verticale condiviso.  
  
 Se è zero, la finestra con separatore attualmente non gestisce le barre di scorrimento condiviso.  
  
##  <a name="a-nameidfromrowcola--csplitterwndidfromrowcol"></a><a name="idfromrowcol"></a>CSplitterWnd::IdFromRowCol  
 Ottiene l'elemento figlio ID di finestra per il riquadro nella riga specificata e della colonna.  
  
```  
int IdFromRowCol(
    int row,  
    int col) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `row`  
 Specifica la riga della finestra con separatore.  
  
 `col`  
 Specifica la colonna di finestra con separatore.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di finestra figlio per il riquadro.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene utilizzata per la creazione di nonviews come riquadri e può essere chiamata prima che il riquadro esiste.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n.&5;](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_3.cpp)]  
  
##  <a name="a-nameischildpanea--csplitterwndischildpane"></a><a name="ischildpane"></a>CSplitterWnd::IsChildPane  
 Determina se `pWnd` è attualmente un riquadro figlio di questa finestra con separatore.  
  
```  
BOOL IsChildPane(
    CWnd* pWnd,  
    int* pRow,  
    int* pCol);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto da sottoporre a test.  
  
 `pRow`  
 Un puntatore a un `int` in cui archiviare il numero di riga.  
  
 `pCol`  
 Un puntatore a un `int` in cui archiviare un numero di colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Se diverso da zero, `pWnd` è attualmente un riquadro figlio di questa finestra con separatore, e `pRow` e `pCol` vengono compilati con la posizione del riquadro nella finestra della barra di divisione. Se `pWnd` non è un figlio di questa finestra con separatore, viene restituito 0.  
  
### <a name="remarks"></a>Note  
 Nelle versioni di Visual C++ precedenti alla 6.0, questa funzione è stata definita come  
  
 `BOOL IsChildPane(CWnd* pWnd, int& row, int& col);`  
  
 Questa versione è obsoleta e non deve essere utilizzata.  
  
##  <a name="a-nameistrackinga--csplitterwndistracking"></a><a name="istracking"></a>CSplitterWnd::IsTracking  
 Chiamare questa funzione membro per determinare se la barra di divisione nella finestra viene spostata.  
  
```  
BOOL IsTracking();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è in corso un'operazione di divisione in caso contrario 0.  
  
##  <a name="a-nameondrawsplittera--csplitterwndondrawsplitter"></a><a name="ondrawsplitter"></a>CSplitterWnd::OnDrawSplitter  
 Esegue il rendering di un'immagine di una finestra divisa.  
  
```  
virtual void OnDrawSplitter(
    CDC* pDC,  
    ESplitType nType,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo in cui disegnare. Se `pDC` è **NULL**, quindi [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) viene chiamato dal framework e nessuna divisione finestra viene disegnata.  
  
 `nType`  
 Il valore di **enum ESplitType**, che può essere uno dei seguenti:  
  
- **splitBox** casella di trascinare la barra di divisione.  
  
- `splitBar`La barra che viene visualizzata tra le finestre di divisione di due.  
  
- **splitIntersection** l'intersezione delle finestre di divisione. Questo elemento non verrà chiamato durante l'esecuzione in Windows 95/98.  
  
- **splitBorder** i bordi della finestra divisa.  
  
 `rect`  
 Un riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le dimensioni delle finestre di divisione.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per creare e specificare le caratteristiche esatte di una finestra con separatore. Eseguire l'override `OnDrawSplitter` per la personalizzazione avanzata delle immagini per i vari componenti di grafici di una finestra con separatore. L'immagine predefinita è simile alla barra di divisione in Microsoft Works per Windows o Microsoft Windows 95/98, in quanto vengono fusi intersezioni tra le barre di divisione.  
  
 Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [più tipi di documenti, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e `CSplitterWnd` Cenni preliminari sulla classe.  
  
##  <a name="a-nameoninverttrackera--csplitterwndoninverttracker"></a><a name="oninverttracker"></a>CSplitterWnd::OnInvertTracker  
 Esegue il rendering di immagini di una finestra divisa per la stessa dimensione e forma la finestra cornice.  
  
```  
virtual void OnInvertTracker(const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Fare riferimento a un `CRect` oggetto che specifica il rettangolo di rilevamento.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework durante il ridimensionamento di barre di divisione. Eseguire l'override `OnInvertTracker` per la personalizzazione avanzata delle immagini della finestra con separatore. L'immagine predefinita è simile alla barra di divisione in Microsoft Works per Windows o Microsoft Windows 95/98, in quanto vengono fusi intersezioni tra le barre di divisione.  
  
 Per ulteriori informazioni sulle finestre con separatore dinamico, vedere "Finestre con separatore" nell'articolo [più tipi di documenti, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md), [29 Nota tecnica](../../mfc/tn029-splitter-windows.md)e `CSplitterWnd` Cenni preliminari sulla classe.  
  
##  <a name="a-namerecalclayouta--csplitterwndrecalclayout"></a><a name="recalclayout"></a>CSplitterWnd::RecalcLayout  
 Chiamare per visualizzare nuovamente la finestra con separatore dopo la regolazione delle dimensioni di riga o colonna.  
  
```  
virtual void RecalcLayout();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per visualizzare di nuovo correttamente la finestra con separatore una volta le dimensioni di riga e colonna con il [SetRowInfo](#setrowinfo) e [SetColumnInfo](#setcolumninfo) funzioni membro. Se si modificano le dimensioni di riga e colonna come parte del processo di creazione prima che sia visibile la finestra con separatore, non è necessario chiamare questa funzione membro.  
  
 Il framework chiama questa funzione membro ogni volta che l'utente ridimensiona la finestra con separatore o si sposta una divisione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CSplitterWnd::SetColumnInfo](#setcolumninfo).  
  
##  <a name="a-namesetactivepanea--csplitterwndsetactivepane"></a><a name="setactivepane"></a>CSplitterWnd::SetActivePane  
 Imposta un riquadro come quello attivo nel frame.  
  
```  
virtual void SetActivePane(
    int row,  
    int col,  
    CWnd* pWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `row`  
 Se `pWnd` è **NULL**, specifica la riga nel riquadro che sarà attivo.  
  
 `col`  
 Se `pWnd` è **NULL**, specifica la colonna nel riquadro che sarà attivo.  
  
 `pWnd`  
 Un puntatore a un `CWnd` oggetto. Se **NULL**, il riquadro specificato da `row` e `col` è impostata come attiva. Se non **NULL**, specifica il riquadro che viene impostato come attivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework per impostare un riquadro come attivo quando l'utente sposta lo stato attivo su un riquadro all'interno della finestra cornice. È possibile chiamare in modo esplicito `SetActivePane` per modificare lo stato attivo per la visualizzazione specificata.  
  
 Specificare riquadro fornendo riga e colonna, **o** fornendo `pWnd`.  
  
##  <a name="a-namesetcolumninfoa--csplitterwndsetcolumninfo"></a><a name="setcolumninfo"></a>CSplitterWnd::SetColumnInfo  
 Chiamata a impostare le informazioni della colonna specificata.  
  
```  
void SetColumnInfo(
    int col,  
    int cxIdeal,  
    int cxMin);
```  
  
### <a name="parameters"></a>Parametri  
 `col`  
 Specifica una colonna di finestra con separatore.  
  
 *cxIdeal*  
 Specifica una larghezza ideale della colonna di finestra con separatore in pixel.  
  
 `cxMin`  
 Specifica una larghezza minima per la colonna di finestra con separatore in pixel.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per impostare una nuova larghezza minima e la larghezza ideale per una colonna. Il valore minimo della colonna determina se la colonna sarà troppo piccola per essere visualizzati completamente.  
  
 Quando il framework viene visualizzata la finestra con separatore, disposto i riquadri in colonne e righe in base alle dimensioni ideali, procedendo dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_4.cpp)]  
  
##  <a name="a-namesetrowinfoa--csplitterwndsetrowinfo"></a><a name="setrowinfo"></a>CSplitterWnd::SetRowInfo  
 Chiamata a impostare le informazioni sulla riga specificata.  
  
```  
void SetRowInfo(
    int row,  
    int cyIdeal,  
    int cyMin);
```  
  
### <a name="parameters"></a>Parametri  
 `row`  
 Specifica una riga della finestra con separatore.  
  
 *cyIdeal*  
 Specifica un'altezza ideale della riga di finestra con separatore in pixel.  
  
 `cyMin`  
 Specifica un'altezza minima della riga di finestra con separatore in pixel.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per impostare una nuova altezza minima e l'altezza ideale per una riga. Il valore minimo di righe determina quando la riga verrà troppo piccola per essere visualizzati completamente.  
  
 Quando il framework viene visualizzata la finestra con separatore, disposto i riquadri in colonne e righe in base alle dimensioni ideali, procedendo dall'angolo superiore sinistro all'angolo inferiore destro dell'area client della finestra con separatore.  
  
##  <a name="a-namesetscrollstylea--csplitterwndsetscrollstyle"></a><a name="setscrollstyle"></a>CSplitterWnd::SetScrollStyle  
 Specifica che il nuovo stile di scorrimento per la finestra con separatore condiviso supporto barra di scorrimento.  
  
```  
void SetScrollStyle(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Il nuovo stile di scorrimento per la finestra con separatore condiviso supporto barra di scorrimento, che può essere uno dei valori seguenti:  
  
- **WS_HSCROLL** crea/Mostra orizzontale condiviso barre di scorrimento.  
  
- **WS_VSCROLL** crea/Mostra verticale condiviso barre di scorrimento.  
  
### <a name="remarks"></a>Note  
 Dopo aver creata una barra di scorrimento verrà eliminato, anche se `SetScrollStyle` viene chiamato senza lo stile; invece sono nascoste le barre di scorrimento. In questo modo le barre di scorrimento mantenere il proprio stato anche se sono nascosti. Dopo la chiamata `SetScrollStyle` è necessario chiamare [RecalcLayout](#recalclayout) per tutte le modifiche abbiano effetto.  
  
##  <a name="a-namesplitcolumna--csplitterwndsplitcolumn"></a><a name="splitcolumn"></a>CSplitterWnd::SplitColumn  
 Indica il punto di divisione verticale di una finestra cornice.  
  
```  
virtual BOOL SplitColumn(int cxBefore);
```  
  
### <a name="parameters"></a>Parametri  
 *cxBefore*  
 La posizione, espressa in pixel, prima della quale si verifica la divisione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata quando viene creata una finestra con separatore verticale. `SplitColumn`indica il percorso predefinito in cui si verifica la divisione.  
  
 `SplitColumn`viene chiamato dal framework per implementare la logica della finestra con separatore dinamico (ovvero, se la finestra con separatore ha il **SPLS_DYNAMIC_SPLIT** stile). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="a-namesplitrowa--csplitterwndsplitrow"></a><a name="splitrow"></a>CSplitterWnd::SplitRow  
 Indica il punto di divisione orizzontale di una finestra cornice.  
  
```  
virtual BOOL SplitRow(int cyBefore);
```  
  
### <a name="parameters"></a>Parametri  
 *cyBefore*  
 La posizione, espressa in pixel, prima della quale si verifica la divisione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata quando viene creata una finestra con separatore orizzontale. `SplitRow`indica il percorso predefinito in cui si verifica la divisione.  
  
 `SplitRow`viene chiamato dal framework per implementare la logica della finestra con separatore dinamico (ovvero, se la finestra con separatore ha il **SPLS_DYNAMIC_SPLIT** stile). Può essere personalizzato, con la funzione virtuale [CreateView](#createview), per implementare più separatori dinamici avanzati.  
  
##  <a name="a-nameondrawa--csplitterwndondraw"></a><a name="ondraw"></a>CSplitterWnd::OnDraw  
 Chiamato dal framework per creare la finestra con separatore.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore a un contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)

