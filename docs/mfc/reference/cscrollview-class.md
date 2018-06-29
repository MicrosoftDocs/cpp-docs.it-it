---
title: Classe CScrollView | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CScrollView
- AFXWIN/CScrollView
- AFXWIN/CScrollView::CScrollView
- AFXWIN/CScrollView::CheckScrollBars
- AFXWIN/CScrollView::FillOutsideRect
- AFXWIN/CScrollView::GetDeviceScrollPosition
- AFXWIN/CScrollView::GetDeviceScrollSizes
- AFXWIN/CScrollView::GetScrollPosition
- AFXWIN/CScrollView::GetTotalSize
- AFXWIN/CScrollView::ResizeParentToFit
- AFXWIN/CScrollView::ScrollToPosition
- AFXWIN/CScrollView::SetScaleToFitSize
- AFXWIN/CScrollView::SetScrollSizes
dev_langs:
- C++
helpviewer_keywords:
- CScrollView [MFC], CScrollView
- CScrollView [MFC], CheckScrollBars
- CScrollView [MFC], FillOutsideRect
- CScrollView [MFC], GetDeviceScrollPosition
- CScrollView [MFC], GetDeviceScrollSizes
- CScrollView [MFC], GetScrollPosition
- CScrollView [MFC], GetTotalSize
- CScrollView [MFC], ResizeParentToFit
- CScrollView [MFC], ScrollToPosition
- CScrollView [MFC], SetScaleToFitSize
- CScrollView [MFC], SetScrollSizes
ms.assetid: 4ba16dac-1acb-4be0-bb55-5fb695b6948d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0b480ee1118551b09c705fb4f79f8a50c0a1f895
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079567"
---
# <a name="cscrollview-class"></a>CScrollView (classe)
Un [CView](../../mfc/reference/cview-class.md) con funzionalità di scorrimento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CScrollView : public CView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CScrollView::CScrollView](#cscrollview)|Costruisce un oggetto `CScrollView`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CScrollView::CheckScrollBars](#checkscrollbars)|Indica se la vista di scorrimento contiene barre di scorrimento orizzontale e verticale.|  
|[CScrollView::FillOutsideRect](#filloutsiderect)|Riempie l'area di una vista all'esterno dell'area di scorrimento.|  
|[CScrollView::GetDeviceScrollPosition](#getdevicescrollposition)|Ottiene la posizione di scorrimento corrente nell'unità di dispositivo.|  
|[CScrollView::GetDeviceScrollSizes](#getdevicescrollsizes)|Ottiene la modalità di mapping corrente, la dimensione totale e le dimensioni di riga e pagina della visualizzazione scorrevole. Le dimensioni sono espresso in unità di dispositivo.|  
|[CScrollView::GetScrollPosition](#getscrollposition)|Ottiene la posizione di scorrimento corrente in unità logiche.|  
|[CScrollView::GetTotalSize](#gettotalsize)|Ottiene le dimensioni totali della visualizzazione scorrevole in unità logiche.|  
|[CScrollView::ResizeParentToFit](#resizeparenttofit)|Fa sì che le dimensioni della vista per determinare le dimensioni della cornice.|  
|[CScrollView::ScrollToPosition](#scrolltoposition)|Consente di scorrere la visualizzazione in un determinato, specificato in unità logiche.|  
|[CScrollView::SetScaleToFitSize](#setscaletofitsize)|Inserisce la visualizzazione a scorrimento in modalità di scala di adattamento.|  
|[CScrollView::SetScrollSizes](#setscrollsizes)|Imposta la modalità di mapping, le dimensioni totali e gli importi di scorrimento orizzontale e verticale la visualizzazione di scorrimento.|  
  
## <a name="remarks"></a>Note  
 È possibile gestire standard lo scorrimento manualmente in qualsiasi classe derivata da `CView` eseguendo l'override messaggio mappato [OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) funzioni membro. Ma `CScrollView` aggiunge le funzionalità seguenti per il relativo `CView` funzionalità:  
  
-   Gestisce le modalità di mapping e le dimensioni di finestra e viewport.  
  
-   Scorre automaticamente in risposta ai messaggi della barra di scorrimento.  
  
-   Scorre automaticamente in risposta ai messaggi da tastiera, mouse non scorrono o la rotellina IntelliMouse.  
  
 Per scorrere automaticamente in risposta ai messaggi sulla tastiera, aggiungere un messaggio WM_KEYDOWN e verificare la presenza VK_DOWN, VK_PREV e chiamare [SetScrollPos](http://msdn.microsoft.com/library/windows/desktop/bb787597).  
  
 È possibile gestire rotellina di scorrimento manualmente eseguendo l'override messaggio mappato [OnMouseWheel](../../mfc/reference/cwnd-class.md#onmousewheel) e [OnRegisteredMouseWheel](../../mfc/reference/cwnd-class.md#onregisteredmousewheel) funzioni membro. Come per `CScrollView`, il comportamento consigliato per il supporto di queste funzioni membro [WM_MOUSEWHEEL](http://msdn.microsoft.com/library/windows/desktop/ms645617), il messaggio di rotazione della rotellina.  
  
 Per poter sfruttare lo scorrimento automatico, derivare la classe di visualizzazione dal `CScrollView` anziché da `CView`. Quando la vista viene innanzitutto creata, se si desidera calcolare la dimensione della visualizzazione scorrevole in base alla dimensione del documento, chiamata di `SetScrollSizes` la funzione membro dall'override di uno [CView:: OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) o [ CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate). (È necessario scrivere codice personalizzato per eseguire una query di dimensioni del documento. Per un esempio, vedere la [esempio Scribble](../../visual-cpp-samples.md).)  
  
 La chiamata al `SetScrollSizes` funzione membro imposta la modalità di mapping della vista, le dimensioni totali della visualizzazione a scorrimento e gli importi scorrere orizzontalmente e verticalmente. Tutte le dimensioni sono espresso in unità logiche. La dimensione logica della vista in genere verrà calcolata dai dati archiviati nel documento, ma in alcuni casi è possibile specificare una dimensione fissa. Per esempi di entrambi gli approcci, vedere [CScrollView::SetScrollSizes](#setscrollsizes).  
  
 Specificare la quantità di scorrere orizzontalmente e verticalmente in unità logiche. Per impostazione predefinita, se l'utente fa clic su un albero di barra di scorrimento all'esterno della casella di scorrimento, `CScrollView` scorre "pagina". Se l'utente fa clic su una freccia di scorrimento in delle estremità di una barra di scorrimento `CScrollView` scorre "riga". Per impostazione predefinita, una pagina è 1/10 della dimensione totale della visualizzazione; una riga è 1/10 delle dimensioni della pagina. Eseguire l'override di questi valori predefiniti, passando le dimensioni personalizzate nel `SetScrollSizes` funzione membro. Ad esempio, è possibile impostare la dimensione orizzontale a una frazione della larghezza della dimensione totale e la dimensione verticale l'altezza di una riga nel tipo di carattere corrente.  
  
 Invece di scorrimento, `CScrollView` possibile impostare automaticamente la scala per le dimensioni della finestra corrente. In questa modalità, la vista non dispone di alcuna barra di scorrimento e la vista logica viene estesa o ridotta per adattarsi esattamente l'area della finestra client. Per utilizzare questa funzionalità di scalabilità di adattamento, chiamare [CScrollView::SetScaleToFitSize](#setscaletofitsize). (Chiameranno `SetScaleToFitSize` o `SetScrollSizes`, ma non entrambi.)  
  
 Prima la `OnDraw` viene chiamata la funzione membro della classe vista derivata `CScrollView` regola automaticamente l'origine del viewport per il `CPaintDC` oggetto contesto di dispositivo che trasmette al `OnDraw`.  
  
 Per modificare l'origine del viewport per finestra a scorrimento `CScrollView` esegue l'override [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc). Questa regolazione è automatica per il `CPaintDC` contesto di dispositivo che `CScrollView` passa al `OnDraw`, ma è necessario chiamare `CScrollView::OnPrepareDC` manualmente per tutti gli altri contesti di dispositivo è usare, ad esempio un `CClientDC`. È possibile eseguire l'override `CScrollView::OnPrepareDC` per impostare la penna colore di sfondo e altri attributi di disegno, ma chiamare la classe base per eseguire la scalabilità.  
  
 Barre di scorrimento possono apparire in tre posizioni rispetto a una visualizzazione, come illustrato nei seguenti casi:  
  
-   Barre di scorrimento di stile di finestra standard possono essere impostate per la visualizzazione utilizzando il **WS_HSCROLL** e **WS_VSCROLL**[stili Windows](../../mfc/reference/styles-used-by-mfc.md#window-styles).  
  
-   Controlli della barra di scorrimento possono essere aggiunti anche al frame che contiene la visualizzazione, nel quale caso il framework inoltra `WM_HSCROLL` e `WM_VSCROLL` i messaggi dalla finestra cornice per la visualizzazione attualmente attiva.  
  
-   Il framework inoltra scorrere i messaggi da un `CSplitterWnd` Splitter (controllo) al riquadro barra di divisione attualmente attiva (una vista). Quando viene inserita un [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md) con le barre di scorrimento condiviso, un `CScrollView` quelli condivisi anziché creare un proprio verrà utilizzato dall'oggetto.  
  
 Per ulteriori informazioni sull'utilizzo `CScrollView`, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [derivato Visualizzazione classi disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 `CScrollView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="checkscrollbars"></a>  CScrollView::CheckScrollBars  
 Chiamare questa funzione membro per determinare se la visualizzazione a scorrimento dispone di barre orizzontali e verticali.  
  
```  
void CheckScrollBars(
    BOOL& bHasHorzBar,  
    BOOL& bHasVertBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *bHasHorzBar*  
 Indica che l'applicazione dispone di una barra di scorrimento orizzontale.  
  
 *bHasVertBar*  
 Indica che l'applicazione dispone di una barra di scorrimento verticale.  
  
##  <a name="cscrollview"></a>  CScrollView::CScrollView  
 Costruisce un oggetto `CScrollView`.  
  
```  
CScrollView();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare `SetScrollSizes` o `SetScaleToFitSize` prima lo scorrimento Vista è utilizzabile.  
  
##  <a name="filloutsiderect"></a>  CScrollView::FillOutsideRect  
 Chiamare `FillOutsideRect` per riempire l'area della vista che viene visualizzata all'esterno dell'area di scorrimento.  
  
```  
void FillOutsideRect(
    CDC* pDC,  
    CBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Contesto di dispositivo nel quale eseguire il riempimento.  
  
 *pBrush*  
 Pennello a cui è l'area da riempire.  
  
### <a name="remarks"></a>Note  
 Uso `FillOutsideRect` nella propria visualizzazione scorrimento `OnEraseBkgnd` funzione del gestore per impedire l'aggiornamento in background eccessivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#164](../../mfc/codesnippet/cpp/cscrollview-class_1.cpp)]  
  
##  <a name="getdevicescrollposition"></a>  CScrollView::GetDeviceScrollPosition  
 Chiamare `GetDeviceScrollPosition` quando occorre le posizioni correnti del orizzontale e verticale delle finestre di scorrimento nelle barre di scorrimento.  
  
```  
CPoint GetDeviceScrollPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le posizioni orizzontali e verticali (in unità dispositivo) delle finestre di scorrimento come un `CPoint` oggetto.  
  
### <a name="remarks"></a>Note  
 Questa coppia di coordinate corrispondente al percorso del documento a cui è stata scorso l'angolo superiore sinistro della vista. Ciò è utile per lo sfalsamento del posizioni dispositivo mouse per le posizioni di dispositivo di visualizzazione a scorrimento.  
  
 `GetDeviceScrollPosition` Restituisce i valori in unità di dispositivo. Se si desidera che le unità logiche, utilizzare `GetScrollPosition` invece.  
  
##  <a name="getdevicescrollsizes"></a>  CScrollView::GetDeviceScrollSizes  
 `GetDeviceScrollSizes` Ottiene la modalità di mapping corrente, la dimensione totale e le dimensioni di riga e pagina della visualizzazione scorrevole.  
  
```  
void GetDeviceScrollSizes(
    int& nMapMode,  
    SIZE& sizeTotal,  
    SIZE& sizePage,  
    SIZE& sizeLine) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nMapMode*  
 Restituisce la modalità di mapping corrente per questa vista. Per un elenco di valori possibili, vedere `SetScrollSizes`.  
  
 *sizeTotal*  
 Restituisce la dimensione totale corrente della visualizzazione scorrevole in unità di dispositivo.  
  
 *sizePage*  
 Restituisce gli importi orizzontali e verticali correnti per lo scorrimento in ciascuna direzione in risposta a un mouse fare clic in un albero di barra di scorrimento. Il **cx** membro contiene la quantità orizzontale. Il **cy** membro contiene la quantità verticale.  
  
 *sizeLine*  
 Restituisce gli importi orizzontali e verticali correnti per lo scorrimento in ciascuna direzione in risposta a un mouse fare clic su una freccia di scorrimento. Il **cx** membro contiene la quantità orizzontale. Il **cy** membro contiene la quantità verticale.  
  
### <a name="remarks"></a>Note  
 Le dimensioni sono espresso in unità di dispositivo. Questa funzione membro viene raramente chiamata.  
  
##  <a name="getscrollposition"></a>  CScrollView::GetScrollPosition  
 Chiamare `GetScrollPosition` quando occorre le posizioni correnti del orizzontale e verticale delle finestre di scorrimento nelle barre di scorrimento.  
  
```  
CPoint GetScrollPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le posizioni orizzontali e verticali (in unità logiche) delle finestre di scorrimento come un `CPoint` oggetto.  
  
### <a name="remarks"></a>Note  
 Questa coppia di coordinate corrispondente al percorso del documento a cui è stata scorso l'angolo superiore sinistro della vista.  
  
 `GetScrollPosition` Restituisce i valori in unità logiche. Unità di dispositivo, usare `GetDeviceScrollPosition` invece.  
  
##  <a name="gettotalsize"></a>  CScrollView::GetTotalSize  
 Chiamare `GetTotalSize` per recuperare le dimensioni orizzontali e verticali corrente della visualizzazione scorrevole.  
  
```  
CSize GetTotalSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni totali della visualizzazione scorrimento in unità logiche. La dimensione orizzontale è il **cx** membro del `CSize` valore restituito. La dimensione verticale è il **cy** membro.  
  
##  <a name="resizeparenttofit"></a>  CScrollView::ResizeParentToFit  
 Chiamare `ResizeParentToFit` per consentire la dimensione della vista, definiscono le dimensioni della finestra cornice.  
  
```  
void ResizeParentToFit(BOOL bShrinkOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bShrinkOnly*  
 Il tipo di ridimensionamento per l'esecuzione. Il valore predefinito **TRUE**, riduce la finestra cornice, se appropriato. Barre di scorrimento rimane comunque visualizzato per le viste di grandi dimensioni o finestre cornice di piccole dimensioni. Il valore **FALSE** fa sì che la vista sempre ridimensionare la finestra cornice esattamente. Ciò può essere pericoloso piuttosto poiché la finestra cornice è stato possibile ottenere troppo grande per adattarsi all'interno di schermata o la finestra cornice MDI (interfaccia) a documenti multipli.  
  
### <a name="remarks"></a>Note  
 Questa è consigliata solo per le viste in finestre cornice figlio MDI. Uso `ResizeParentToFit` nella `OnInitialUpdate` funzione del gestore di classe derivata `CScrollView` classe. Per un esempio di questa funzione membro, vedere [CScrollView::SetScrollSizes](#setscrollsizes).  
  
 `ResizeParentToFit` si presuppone che le dimensioni della finestra di visualizzazione sono stata impostata. Se le dimensioni della finestra visualizzazione non sono stata impostata quando `ResizeParentToFit` viene chiamato, si otterrà un'asserzione. Per garantire che ciò non accada, effettuare la chiamata seguente prima di chiamare `ResizeParentToFit`:  
  
 [!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]  
  
##  <a name="scrolltoposition"></a>  CScrollView::ScrollToPosition  
 Chiamare `ScrollToPosition` scorrere fino a un determinato punto nella vista.  
  
```  
void ScrollToPosition(POINT pt);
```  
  
### <a name="parameters"></a>Parametri  
 *pt*  
 Il punto per lo scorrimento, in unità logiche. Il **x** membro deve essere un valore positivo (maggiore o uguale a 0, fino alle dimensioni totali della vista). Lo stesso vale per il **y** membro quando la modalità di mapping è `MM_TEXT`. Il **y** membro è negativo nella modalità di mapping diverso da `MM_TEXT`.  
  
### <a name="remarks"></a>Note  
 La visualizzazione sarà possibile scorrere in modo che questo punto si trova l'angolo superiore sinistro della finestra. Questa funzione membro non deve essere chiamata se la vista viene adattata.  
  
##  <a name="setscaletofitsize"></a>  CScrollView::SetScaleToFitSize  
 Chiamare `SetScaleToFitSize` quando si desidera scalare automaticamente le dimensioni del viewport per la dimensione della finestra corrente.  
  
```  
void SetScaleToFitSize(SIZE sizeTotal);
```  
  
### <a name="parameters"></a>Parametri  
 *sizeTotal*  
 Le dimensioni orizzontali e verticali in cui la vista è prevedano la scalabilità. Le dimensioni della visualizzazione scorrimento sono misurata in unità logiche. La dimensione orizzontale è inclusa nel **cx** membro. La dimensione verticale è inclusa nel **cy** membro. Entrambi **cx** e **cy** deve essere maggiore o uguale a 0.  
  
### <a name="remarks"></a>Note  
 Con le barre di scorrimento, solo una parte della vista logica potrebbe essere visibile in qualsiasi momento. Ma con la funzionalità di scalabilità di adattamento, la vista non dispone di alcuna barra di scorrimento e la vista logica viene estesa o ridotta per adattarsi esattamente l'area della finestra client. Quando la finestra viene ridimensionata, la vista disegna i relativi dati in una scala di nuovo in base alla dimensione della finestra.  
  
 È in genere sarà effettuare la chiamata a `SetScaleToFitSize` nell'override della vista `OnInitialUpdate` funzione membro. Se non si desidera la scalabilità automatica, chiamare il `SetScrollSizes` invece funzione membro.  
  
 `SetScaleToFitSize` può essere utilizzato per implementare un'operazione "Zoom adatta". Utilizzare `SetScrollSizes` reinizializzare lo scorrimento.  
  
 `SetScaleToFitSize` si presuppone che le dimensioni della finestra di visualizzazione sono stata impostata. Se le dimensioni della finestra visualizzazione non sono stata impostata quando `SetScaleToFitSize` viene chiamato, si otterrà un'asserzione. Per garantire che ciò non accada, effettuare la chiamata seguente prima di chiamare `SetScaleToFitSize`:  
  
 [!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]  
  
##  <a name="setscrollsizes"></a>  CScrollView::SetScrollSizes  
 Chiamare `SetScrollSizes` quando la vista sta per essere aggiornato.  
  
```  
void SetScrollSizes(
    int nMapMode,  
    SIZE sizeTotal,  
    const SIZE& sizePage = sizeDefault,  
    const SIZE& sizeLine = sizeDefault);
```  
  
### <a name="parameters"></a>Parametri  
 *nMapMode*  
 La modalità di mapping da impostare per questa vista. I valori possibili includono:  
  
|Modalità di mapping|Unità logica|Estende positivi dell'asse y...|  
|------------------|------------------|---------------------------------|  
|`MM_TEXT`|1 pixel|Verso il basso|  
|`MM_HIMETRIC`|0,01 mm|Verso l'alto|  
|`MM_TWIPS`|1/1440 in|Verso l'alto|  
|`MM_HIENGLISH`|0,001 pollici|Verso l'alto|  
|`MM_LOMETRIC`|mm 0,1|Verso l'alto|  
|`MM_LOENGLISH`|in 0,01|Verso l'alto|  
  
 Tutte queste modalità sono definite da Windows. Due modalità di mapping standard, `MM_ISOTROPIC` e `MM_ANISOTROPIC`, non vengono utilizzati per `CScrollView`. La libreria di classi fornisce il `SetScaleToFitSize` funzione membro per ridimensionare la visualizzazione della dimensione della finestra. Colonna 3 nella tabella precedente descrive l'orientamento di coordinate.  
  
 *sizeTotal*  
 Le dimensioni totali della visualizzazione scorrevole. Il **cx** membro contiene extent orizzontale. Il **cy** membro contiene extent verticale. Le dimensioni sono espresso in unità logiche. Entrambi **cx** e **cy** deve essere maggiore o uguale a 0.  
  
 *sizePage*  
 Gli importi orizzontali e verticali per scorrere in tutte le direzioni in risposta a un mouse fare clic in un albero di barra di scorrimento. Il **cx** membro contiene la quantità orizzontale. Il **cy** membro contiene la quantità verticale.  
  
 *sizeLine*  
 Gli importi orizzontali e verticali per scorrere in tutte le direzioni in risposta a un mouse fare clic su una freccia di scorrimento. Il **cx** membro contiene la quantità orizzontale. Il **cy** membro contiene la quantità verticale.  
  
### <a name="remarks"></a>Note  
 Chiamare nell'override del `OnUpdate` funzione membro per regolare le caratteristiche di scorrimento quando, ad esempio, il documento deve essere visualizzato inizialmente o quando cambia le dimensioni.  
  
 Si otterrà in genere le informazioni sulle dimensioni dal documento associato della vista chiamando una funzione membro di documento, forse chiamata `GetMyDocSize`, che viene fornito con la classe del documento derivata. Il codice seguente illustra questo approccio:  
  
 [!code-cpp[NVC_MFCDocView#166](../../mfc/codesnippet/cpp/cscrollview-class_3.cpp)]  
  
 In alternativa, in alcuni casi potrebbe essere necessario impostare una dimensione fissa, come nel codice seguente:  
  
 [!code-cpp[NVC_MFCDocView#167](../../mfc/codesnippet/cpp/cscrollview-class_4.cpp)]  
  
 È necessario impostare la modalità di mapping a una delle modalità di mapping di Windows eccetto `MM_ISOTROPIC` o `MM_ANISOTROPIC`. Se si desidera utilizzare una modalità di mapping non vincolato, chiamare il `SetScaleToFitSize` funzione membro anziché `SetScrollSizes`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#168](../../mfc/codesnippet/cpp/cscrollview-class_5.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#169](../../mfc/codesnippet/cpp/cscrollview-class_6.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC immagine](../../visual-cpp-samples.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [Classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)
