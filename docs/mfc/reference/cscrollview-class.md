---
title: Classe CScrollView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- CScrollView class
- views, scrolling
- scrolling views
ms.assetid: 4ba16dac-1acb-4be0-bb55-5fb695b6948d
caps.latest.revision: 24
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 0dc937a9559306ff527779c45af9fdb62cf602df
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cscrollview-class"></a>CScrollView (classe)
Oggetto [CView](../../mfc/reference/cview-class.md) con funzionalità di scorrimento.  
  
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
|[CScrollView::CheckScrollBars](#checkscrollbars)|Indica se la visualizzazione a scorrimento dispone di barre di scorrimento orizzontale e verticale.|  
|[CScrollView::FillOutsideRect](#filloutsiderect)|Riempie l'area di una vista all'esterno dell'area di scorrimento.|  
|[CScrollView::GetDeviceScrollPosition](#getdevicescrollposition)|Ottiene la posizione di scorrimento corrente nell'unità di dispositivo.|  
|[CScrollView::GetDeviceScrollSizes](#getdevicescrollsizes)|Ottiene la modalità di mapping corrente, la dimensione totale e le dimensioni di riga e pagina della visualizzazione scorrevole. Le dimensioni sono espressi in unità di dispositivo.|  
|[CScrollView::GetScrollPosition](#getscrollposition)|Ottiene la posizione di scorrimento corrente in unità logiche.|  
|[CScrollView::GetTotalSize](#gettotalsize)|Ottiene le dimensioni totali della visualizzazione scorrevole in unità logiche.|  
|[CScrollView::ResizeParentToFit](#resizeparenttofit)|Determina le dimensioni della vista per determinare le dimensioni della cornice.|  
|[CScrollView::ScrollToPosition](#scrolltoposition)|Scorre la visualizzazione in un determinato, specificato in unità logiche.|  
|[CScrollView::SetScaleToFitSize](#setscaletofitsize)|Attiva la visualizzazione a scorrimento modalità scala di adattamento.|  
|[CScrollView::SetScrollSizes](#setscrollsizes)|Imposta modalità di mapping, dimensione totale e quantità di scorrimento orizzontale e verticale della visualizzazione scorrevole.|  
  
## <a name="remarks"></a>Note  
 È possibile gestire autonomamente lo scorrimento in qualsiasi classe derivata da standard `CView` eseguendo l'override messaggio mappato [OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) funzioni membro. Ma `CScrollView` aggiunge le funzionalità seguenti per il relativo `CView` funzionalità:  
  
-   Gestisce le dimensioni di finestra e viewport e modalità di mapping.  
  
-   Scorre automaticamente in risposta ai messaggi della barra di scorrimento.  
  
-   Scorre automaticamente in risposta ai messaggi da tastiera, non a scorrimento del mouse o la rotellina IntelliMouse.  
  
 Per scorrere automaticamente in risposta ai messaggi dalla tastiera, aggiungere un messaggio WM_KEYDOWN e test per VK_DOWN, VK_PREV e chiamare [SetScrollPos](http://msdn.microsoft.com/library/windows/desktop/bb787597).  
  
 È possibile gestire rotellina di scorrimento manualmente eseguendo l'override messaggio mappato [OnMouseWheel](../../mfc/reference/cwnd-class.md#onmousewheel) e [OnRegisteredMouseWheel](../../mfc/reference/cwnd-class.md#onregisteredmousewheel) funzioni membro. Come per `CScrollView`, il comportamento consigliato per il supporto di queste funzioni membro [WM_MOUSEWHEEL](http://msdn.microsoft.com/library/windows/desktop/ms645617), il messaggio di rotazione della rotellina.  
  
 Per poter sfruttare lo scorrimento automatico, derivare la classe di visualizzazione da `CScrollView` anziché da `CView`. Quando la vista viene innanzitutto creata, se si desidera calcolare la dimensione della visualizzazione scorrevole in base alla dimensione del documento, chiamata di `SetScrollSizes` la funzione membro dalla sostituzione di entrambi [CView:: OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) o [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate). (È necessario scrivere codice personalizzato per eseguire una query di dimensioni del documento. Per un esempio, vedere il [esempio Scribble](../../visual-cpp-samples.md).)  
  
 La chiamata al `SetScrollSizes` funzione membro imposta la modalità di mapping della vista, le dimensioni totali della visualizzazione scorrevole e gli importi da scorrere orizzontalmente e verticalmente. Tutte le dimensioni sono in unità logiche. La dimensione logica della vista è in genere calcolata dai dati archiviati nel documento, ma in alcuni casi si desidera specificare una dimensione fissa. Per esempi di entrambi gli approcci, vedere [CScrollView::SetScrollSizes](#setscrollsizes).  
  
 Specificare la quantità di scorrere orizzontalmente e verticalmente in unità logiche. Per impostazione predefinita, se l'utente fa clic su un albero di barra di scorrimento fuori dalla casella di scorrimento, `CScrollView` scorre una "pagina". Se l'utente fa clic su una freccia di scorrimento in delle estremità di una barra di scorrimento `CScrollView` scorre "riga". Per impostazione predefinita, una pagina è 1/10 della dimensione totale della visualizzazione; una riga è 1/10 della dimensione della pagina. Eseguire l'override di questi valori predefiniti con il passaggio di dimensioni personalizzate nel `SetScrollSizes` funzione membro. Ad esempio, è possibile impostare la dimensione orizzontale di una frazione della larghezza della dimensione totale e la dimensione verticale per l'altezza di una riga nel tipo di carattere corrente.  
  
 Anziché lo scorrimento, `CScrollView` consente di adattare automaticamente la visualizzazione alle dimensioni della finestra corrente. In questa modalità, la vista non dispone di alcuna barra di scorrimento e la vista logica viene estesa o ridotta per adattarsi esattamente dell'area client della finestra. Per utilizzare questa funzionalità di scalabilità di adattamento, chiamare [CScrollView::SetScaleToFitSize](#setscaletofitsize). (Chiameranno `SetScaleToFitSize` o `SetScrollSizes`, ma non entrambi.)  
  
 Prima di `OnDraw` viene chiamata la funzione membro della classe di visualizzazione derivate, `CScrollView` regola automaticamente l'origine del riquadro di visualizzazione per il `CPaintDC` oggetto contesto di dispositivo che viene passato alla `OnDraw`.  
  
 Per modificare l'origine del riquadro di visualizzazione della finestra scorrevole, `CScrollView` sostituzioni [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc). Questa regolazione è automatica per il `CPaintDC` contesto di dispositivo che `CScrollView` passa a `OnDraw`, ma è necessario chiamare **CScrollView::OnPrepareDC** manualmente per tutti gli altri contesti di dispositivo è utilizzare, ad esempio un `CClientDC`. È possibile eseguire l'override **CScrollView::OnPrepareDC** per impostare la penna, colore di sfondo e altri attributi di disegno, ma chiamare la classe base per eseguire la scalabilità.  
  
 Barre di scorrimento possono essere visualizzati in tre posizioni relativo a una vista, come illustrato nei seguenti casi:  
  
-   Barre di scorrimento di stile di finestra standard possono essere impostate per la visualizzazione utilizzando il **WS_HSCROLL** e **WS_VSCROLL**[gli stili di Windows](../../mfc/reference/window-styles.md).  
  
-   Sono inoltre possibile aggiungere controlli della barra di scorrimento al frame che contiene la visualizzazione, nel quale caso il framework inoltra `WM_HSCROLL` e `WM_VSCROLL` i messaggi dalla finestra cornice per la visualizzazione attualmente attiva.  
  
-   Il framework inoltra scorrere i messaggi da un `CSplitterWnd` controllo splitter al riquadro barra di divisione attualmente attivo (una vista). Quando viene inserita un [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md) con barre di scorrimento condiviso, un `CScrollView` verrà utilizzato dall'oggetto quelle condivise anziché crearne una nuova.  
  
 Per ulteriori informazioni sull'utilizzo di `CScrollView`, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [derivato Visualizzazione classi disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 `CScrollView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="checkscrollbars"></a>CScrollView::CheckScrollBars  
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
  
##  <a name="cscrollview"></a>CScrollView::CScrollView  
 Costruisce un oggetto `CScrollView`.  
  
```  
CScrollView();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare `SetScrollSizes` o `SetScaleToFitSize` prima di scorrimento Visualizza è utilizzabile.  
  
##  <a name="filloutsiderect"></a>CScrollView::FillOutsideRect  
 Chiamare `FillOutsideRect` per riempire l'area della vista che viene visualizzato all'esterno dell'area di scorrimento.  
  
```  
void FillOutsideRect(
    CDC* pDC,  
    CBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Contesto di dispositivo in cui è necessario svolgere il riempimento.  
  
 `pBrush`  
 Pennello a cui è l'area da riempire.  
  
### <a name="remarks"></a>Note  
 Utilizzare `FillOutsideRect` nella propria visualizzazione scorrimento `OnEraseBkgnd` funzione del gestore per impedire l'aggiornamento in background eccessivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#164; NVC_MFCDocView](../../mfc/codesnippet/cpp/cscrollview-class_1.cpp)]  
  
##  <a name="getdevicescrollposition"></a>CScrollView::GetDeviceScrollPosition  
 Chiamare `GetDeviceScrollPosition` quando è necessario il corrente orizzontali e verticali posizioni delle caselle di scorrimento in barre di scorrimento.  
  
```  
CPoint GetDeviceScrollPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le posizioni orizzontali e verticali (in unità di dispositivo) delle caselle di scorrimento come un `CPoint` oggetto.  
  
### <a name="remarks"></a>Note  
 Questa coppia di coordinate corrispondente al percorso del documento a cui scorrimento nell'angolo superiore sinistro della visualizzazione. Ciò è utile per l'offset di posizione dispositivo mouse alle posizioni di dispositivo di visualizzazione a scorrimento.  
  
 `GetDeviceScrollPosition`Restituisce i valori in unità di dispositivo. Se si desidera che le unità logiche, utilizzare `GetScrollPosition` invece.  
  
##  <a name="getdevicescrollsizes"></a>CScrollView::GetDeviceScrollSizes  
 `GetDeviceScrollSizes`Ottiene la modalità di mapping corrente, la dimensione totale e le dimensioni di riga e pagina della visualizzazione scorrevole.  
  
```  
void GetDeviceScrollSizes(
    int& nMapMode,  
    SIZE& sizeTotal,  
    SIZE& sizePage,  
    SIZE& sizeLine) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nMapMode`  
 Restituisce la modalità di mapping corrente per la visualizzazione. Per un elenco di valori possibili, vedere `SetScrollSizes`.  
  
 `sizeTotal`  
 Restituisce la dimensione totale corrente della visualizzazione scorrevole in unità di dispositivo.  
  
 `sizePage`  
 Restituisce gli importi correnti orizzontali e verticali per scorrere in ciascuna direzione in risposta a un mouse fare clic in un albero di barra di scorrimento. Il **cx** membro contiene la quantità orizzontale. Il **cy** membro contiene la quantità verticale.  
  
 `sizeLine`  
 Restituisce gli importi correnti orizzontali e verticali per scorrere in ciascuna direzione in risposta a un mouse fare clic in una freccia di scorrimento. Il **cx** membro contiene la quantità orizzontale. Il **cy** membro contiene la quantità verticale.  
  
### <a name="remarks"></a>Note  
 Le dimensioni sono espressi in unità di dispositivo. Questa funzione membro viene raramente chiamata.  
  
##  <a name="getscrollposition"></a>CScrollView::GetScrollPosition  
 Chiamare `GetScrollPosition` quando è necessario il corrente orizzontali e verticali posizioni delle caselle di scorrimento in barre di scorrimento.  
  
```  
CPoint GetScrollPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le posizioni orizzontali e verticali (in unità logiche) delle caselle di scorrimento come un `CPoint` oggetto.  
  
### <a name="remarks"></a>Note  
 Questa coppia di coordinate corrispondente al percorso del documento a cui scorrimento nell'angolo superiore sinistro della visualizzazione.  
  
 `GetScrollPosition`Restituisce i valori in unità logiche. Se si desidera unità della periferica, utilizzare `GetDeviceScrollPosition` invece.  
  
##  <a name="gettotalsize"></a>CScrollView::GetTotalSize  
 Chiamare `GetTotalSize` per recuperare le dimensioni orizzontali e verticali corrente della visualizzazione scorrevole.  
  
```  
CSize GetTotalSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni totali della visualizzazione scorrevole in unità logiche. La dimensione orizzontale è il **cx** membro del `CSize` valore restituito. La dimensione verticale è la **cy** membro.  
  
##  <a name="resizeparenttofit"></a>CScrollView::ResizeParentToFit  
 Chiamare `ResizeParentToFit` per consentire la dimensione della visualizzazione determinano le dimensioni della finestra cornice.  
  
```  
void ResizeParentToFit(BOOL bShrinkOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bShrinkOnly*  
 Il tipo di ridimensionamento per l'esecuzione. Il valore predefinito, **TRUE**, si riduce la finestra cornice, se appropriato. Barre di scorrimento verranno ancora visualizzati per le viste di grandi dimensioni o finestre cornice di piccole dimensioni. Un valore di **FALSE** provoca la visualizzazione sempre ridimensionare la finestra cornice esattamente. Questo può essere piuttosto pericoloso poiché la finestra cornice è riuscito a ottenere troppo grande per adattarlo schermata o la finestra cornice MDI (interfaccia) documenti multipli.  
  
### <a name="remarks"></a>Note  
 Questa è consigliata solo per le visualizzazioni in finestre cornice figlio MDI. Utilizzare `ResizeParentToFit` nel `OnInitialUpdate` funzione del gestore di classe derivata `CScrollView` (classe). Per un esempio di questa funzione membro, vedere [CScrollView::SetScrollSizes](#setscrollsizes).  
  
 `ResizeParentToFit`si presuppone che sia stata impostata la dimensione della finestra di visualizzazione. Se la dimensione della finestra di visualizzazione non è stata impostata quando `ResizeParentToFit` viene chiamato, si otterrà un'asserzione. Per garantire che ciò non accada, effettuare la chiamata seguente prima di chiamare `ResizeParentToFit`:  
  
 [!code-cpp[&#165; NVC_MFCDocView](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]  
  
##  <a name="scrolltoposition"></a>CScrollView::ScrollToPosition  
 Chiamare `ScrollToPosition` scorrere fino a un determinato punto della visualizzazione.  
  
```  
void ScrollToPosition(POINT pt);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 Il punto di scorrimento, in unità logiche. Il **x** membro deve essere un valore positivo (maggiore o uguale a 0, fino alle dimensioni totali della vista). Lo stesso vale per il **y** membro quando la modalità di mapping è `MM_TEXT`. Il **y** membro è negativo nella modalità di mapping diverso da `MM_TEXT`.  
  
### <a name="remarks"></a>Note  
 La visualizzazione verrà scorso in modo che questo punto si trova nell'angolo superiore sinistro della finestra. Questa funzione membro non deve essere chiamata se la vista viene adattata.  
  
##  <a name="setscaletofitsize"></a>CScrollView::SetScaleToFitSize  
 Chiamare `SetScaleToFitSize` quando si desidera ridimensionare automaticamente la dimensione del viewport per la dimensione della finestra corrente.  
  
```  
void SetScaleToFitSize(SIZE sizeTotal);
```  
  
### <a name="parameters"></a>Parametri  
 `sizeTotal`  
 Le dimensioni orizzontali e verticali in cui la vista è scalare. Dimensione della visualizzazione scorrevole viene misurato in unità logiche. La dimensione orizzontale è contenuta nel **cx** membro. La dimensione verticale è contenuta nel **cy** membro. Entrambi **cx** e **cy** deve essere maggiore o uguale a 0.  
  
### <a name="remarks"></a>Note  
 Barre di scorrimento, solo una parte della struttura logica di potrebbe essere visibile in qualsiasi momento. Ma con la funzionalità di scalabilità di adattamento, la vista non dispone di alcuna barra di scorrimento e la vista logica è ingrandita o ridotta per adattarsi esattamente dell'area client della finestra. Quando la finestra viene ridimensionata, la vista disegna i dati in una nuova scala in base alla dimensione della finestra.  
  
 In genere inserire la chiamata a `SetScaleToFitSize` nell'override della vista `OnInitialUpdate` funzione membro. Se si preferisce non ridimensionamento automatico, chiamare il `SetScrollSizes` funzione membro.  
  
 `SetScaleToFitSize`può essere utilizzato per implementare un'operazione "Zoom e adatta". Utilizzare `SetScrollSizes` per reinizializzare lo scorrimento.  
  
 `SetScaleToFitSize`si presuppone che sia stata impostata la dimensione della finestra di visualizzazione. Se la dimensione della finestra di visualizzazione non è stata impostata quando `SetScaleToFitSize` viene chiamato, si otterrà un'asserzione. Per garantire che ciò non accada, effettuare la chiamata seguente prima di chiamare `SetScaleToFitSize`:  
  
 [!code-cpp[&#165; NVC_MFCDocView](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]  
  
##  <a name="setscrollsizes"></a>CScrollView::SetScrollSizes  
 Chiamare `SetScrollSizes` quando la vista sta per essere aggiornato.  
  
```  
void SetScrollSizes(
    int nMapMode,  
    SIZE sizeTotal,  
    const SIZE& sizePage = sizeDefault,  
    const SIZE& sizeLine = sizeDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `nMapMode`  
 La modalità di mapping da impostare per la visualizzazione. I valori possibili includono:  
  
|Modalità di mapping|Unità logica|Extends positivi dell'asse y...|  
|------------------|------------------|---------------------------------|  
|`MM_TEXT`|1 pixel|Verso il basso|  
|`MM_HIMETRIC`|0,01 mm|Verso l'alto|  
|`MM_TWIPS`|1/1440 in|Verso l'alto|  
|`MM_HIENGLISH`|0,001 pollici|Verso l'alto|  
|`MM_LOMETRIC`|0,1 mm|Verso l'alto|  
|`MM_LOENGLISH`|in&0;,01|Verso l'alto|  
  
 Queste modalità sono definite da Windows. Due modalità di mapping standard, `MM_ISOTROPIC` e `MM_ANISOTROPIC`, non vengono utilizzati per `CScrollView`. La libreria di classi fornisce la `SetScaleToFitSize` funzione membro per ridimensionare la visualizzazione della dimensione della finestra. Colonna&3; nella tabella precedente descrive l'orientamento di coordinate.  
  
 `sizeTotal`  
 Le dimensioni totali della visualizzazione scorrevole. Il **cx** membro contiene la misura orizzontale. Il **cy** membro contiene l'estensione verticale. Le dimensioni sono in unità logiche. Entrambi **cx** e **cy** deve essere maggiore o uguale a 0.  
  
 `sizePage`  
 Le quantità orizzontale e verticale per scorrere in ciascuna direzione in risposta a un mouse fare clic in un albero di barra di scorrimento. Il **cx** membro contiene la quantità orizzontale. Il **cy** membro contiene la quantità verticale.  
  
 `sizeLine`  
 Le quantità orizzontale e verticale per scorrere in ciascuna direzione in risposta a un mouse fare clic su una freccia di scorrimento. Il **cx** membro contiene la quantità orizzontale. Il **cy** membro contiene la quantità verticale.  
  
### <a name="remarks"></a>Note  
 Nell'override della chiamata di `OnUpdate` funzione membro per modificare le caratteristiche di scorrimento quando, ad esempio, il documento viene inizialmente visualizzato o cambia dimensioni.  
  
 Si otterrà in genere informazioni sulle dimensioni di documento associato della vista chiamando la funzione membro documento, ad esempio chiamato `GetMyDocSize`, che viene fornito con la classe documento derivata. Il codice seguente viene illustrato questo approccio:  
  
 [!code-cpp[&#166; NVC_MFCDocView](../../mfc/codesnippet/cpp/cscrollview-class_3.cpp)]  
  
 In alternativa, in alcuni casi potrebbe essere necessario impostare una dimensione fissa, come nel codice seguente:  
  
 [!code-cpp[167 NVC_MFCDocView](../../mfc/codesnippet/cpp/cscrollview-class_4.cpp)]  
  
 È necessario impostare la modalità di mapping per tutte le modalità di mapping di Windows eccetto `MM_ISOTROPIC` o `MM_ANISOTROPIC`. Se si desidera utilizzare una modalità di mapping non vincolato, chiamare il `SetScaleToFitSize` funzione membro anziché `SetScrollSizes`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#168;](../../mfc/codesnippet/cpp/cscrollview-class_5.cpp)]  
  
 [!code-cpp[NVC_MFCDocView&#169;](../../mfc/codesnippet/cpp/cscrollview-class_6.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC immagine](../../visual-cpp-samples.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [CSplitterWnd (classe)](../../mfc/reference/csplitterwnd-class.md)

