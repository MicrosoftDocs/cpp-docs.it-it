---
title: Classe CScrollView
ms.date: 11/04/2016
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
ms.openlocfilehash: ea95de2bceab290f94bb7c0e7bbc94a90048ee13
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57259256"
---
# <a name="cscrollview-class"></a>Classe CScrollView

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
|[CScrollView::CheckScrollBars](#checkscrollbars)|Indica se la visualizzazione a scorrimento ha le barre di scorrimento orizzontale e verticale.|
|[CScrollView::FillOutsideRect](#filloutsiderect)|Riempie l'area di una vista all'esterno dell'area di scorrimento.|
|[CScrollView::GetDeviceScrollPosition](#getdevicescrollposition)|Ottiene la posizione di scorrimento corrente in unità di dispositivo.|
|[CScrollView::GetDeviceScrollSizes](#getdevicescrollsizes)|Ottiene la modalità di mapping corrente, la dimensione totale e le dimensioni di riga e pagina della visualizzazione scorrevole. Le dimensioni sono in unità di dispositivo.|
|[CScrollView::GetScrollPosition](#getscrollposition)|Ottiene la posizione di scorrimento corrente in unità logiche.|
|[CScrollView::GetTotalSize](#gettotalsize)|Ottiene le dimensioni totali della visualizzazione scorrimento in unità logiche.|
|[CScrollView::ResizeParentToFit](#resizeparenttofit)|Fa sì che la dimensione della vista per determinare le dimensioni del relativo frame.|
|[CScrollView::ScrollToPosition](#scrolltoposition)|Scorre la visualizzazione in un determinato, specificato in unità logiche.|
|[CScrollView::SetScaleToFitSize](#setscaletofitsize)|Inserisce la visualizzazione a scorrimento in modalità di scalabilità di adattamento.|
|[CScrollView::SetScrollSizes](#setscrollsizes)|Imposta modalità di mapping della visualizzazione scorrimento, dimensione totale e quantità di scorrimento orizzontale e verticale.|

## <a name="remarks"></a>Note

È possibile gestire standard personalmente lo scorrimento in qualsiasi classe derivata da `CView` eseguendo l'override di messaggio mappato [OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) funzioni membro. Ma `CScrollView` aggiunge le funzionalità seguenti per relativo `CView` funzionalità:

- Gestisce le dimensioni di finestra e del viewport e modalità di mapping.

- Scorre automaticamente in risposta ai messaggi della barra di scorrimento.

- Scorre automaticamente in risposta ai messaggi dalla tastiera, mouse non scorrono o la rotellina di IntelliMouse.

Per scorrere automaticamente in risposta ai messaggi dalla tastiera, aggiungere un messaggio WM_KEYDOWN e di test per VK_DOWN, VK_PREV e chiamare [SetScrollPos](/windows/desktop/api/winuser/nf-winuser-setscrollpos).

È possibile gestire la rotellina del mouse lo scorrimento manualmente eseguendo l'override di messaggio mappato [OnMouseWheel](../../mfc/reference/cwnd-class.md#onmousewheel) e [OnRegisteredMouseWheel](../../mfc/reference/cwnd-class.md#onregisteredmousewheel) funzioni membro. Come lo sono per `CScrollView`, il comportamento consigliato per il supporto di queste funzioni membro [WM_MOUSEWHEEL](/windows/desktop/inputdev/wm-mousewheel), il messaggio di rotazione della rotellina.

Per poter sfruttare lo scorrimento automatico, derivare la classe di visualizzazione da `CScrollView` anziché da `CView`. Quando la vista viene innanzitutto creata, se si desidera calcolare la dimensione della visualizzazione scorrevole in base alla dimensione del documento, chiamata di `SetScrollSizes` funzione di membro dalla sostituzione di entrambi [CView:: OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) o [ CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate). (È necessario scrivere codice personalizzato per eseguire una query di dimensioni del documento. Per un esempio, vedere la [esempio Scribble](../../visual-cpp-samples.md).)

La chiamata al `SetScrollSizes` membro funzione imposta la modalità di mapping della visualizzazione, le dimensioni totali della visualizzazione a scorrimento e la quantità da scorrere orizzontalmente e verticalmente. Tutte le dimensioni sono in unità logiche. La dimensione logica della vista in genere verrà calcolata dai dati archiviati nel documento, ma in alcuni casi è possibile specificare una dimensione fissa. Per esempi di entrambi gli approcci, vedere [CScrollView::SetScrollSizes](#setscrollsizes).

Si specifica la quantità da scorrere orizzontalmente e verticalmente in unità logiche. Per impostazione predefinita, se l'utente fa clic su un albero di barra di scorrimento all'esterno della casella di scorrimento, `CScrollView` scorre una "pagina". Se l'utente fa clic su una freccia di scorrimento in delle estremità dell'indicatore di avanzamento, `CScrollView` scorre "riga". Per impostazione predefinita, una pagina è 1/10 delle dimensioni totali della visualizzazione. una riga è 1/10 delle dimensioni della pagina. Eseguire l'override di questi valori predefiniti passando le dimensioni personalizzate nel `SetScrollSizes` funzione membro. Ad esempio, è possibile impostare la dimensione orizzontale a una frazione della larghezza della dimensione totale e la dimensione verticale all'altezza di una riga nel tipo di carattere corrente.

Anziché lo scorrimento, `CScrollView` può ridimensionare automaticamente la visualizzazione per le dimensioni della finestra corrente. In questa modalità, la vista non dispone di alcuna barra di scorrimento e la visualizzazione logica è ingrandita o rimpicciolita per adattarsi esattamente l'area client della finestra. Per usare questa funzionalità di scalabilità di adattamento, chiamare [CScrollView::SetScaleToFitSize](#setscaletofitsize). (Chiameranno `SetScaleToFitSize` o `SetScrollSizes`, ma non entrambi.)

Prima la `OnDraw` viene chiamata la funzione membro della classe derivata di visualizzazione, `CScrollView` converte automaticamente l'origine del riquadro di visualizzazione per il `CPaintDC` oggetto contesto di dispositivo che viene passato alla `OnDraw`.

Per modificare l'origine del viewport per la finestra scorrevole `CScrollView` esegue l'override [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc). Questa regolazione è automatica per il `CPaintDC` contesto di dispositivo che `CScrollView` passa a `OnDraw`, ma è necessario chiamare `CScrollView::OnPrepareDC` manualmente per tutti gli altri contesti di dispositivo usare, ad esempio un `CClientDC`. È possibile eseguire l'override `CScrollView::OnPrepareDC` per impostare la penna colore di sfondo e altri attributi di disegno, ma chiamare la classe di base per eseguire l'operazione di ridimensionamento.

Le barre di scorrimento possono essere visualizzati in tre posizioni relativo una visualizzazione, come illustrato nei seguenti casi:

- Le barre di scorrimento di stile di finestra standard possono essere impostate per la visualizzazione utilizzando il WS_HSCROLL e WS_VSCROLL[stili Windows](../../mfc/reference/styles-used-by-mfc.md#window-styles).

- Controlli della barra di scorrimento possono essere aggiunti anche per la cornice contenente la vista, nel qual caso il framework inoltra i messaggi WM_HSCROLL e WM_VSCROLL dalla finestra cornice per la visualizzazione attualmente attiva.

- Inoltra il framework di scorrere i messaggi da un `CSplitterWnd` controllo splitter al riquadro barra di divisione attualmente attivo (una vista). Quando viene inserita una [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md) con le barre di scorrimento condiviso, un `CScrollView` oggetto userà quelli condivisi anziché creare un proprio.

Per altre informazioni sull'uso `CScrollView`, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [derivato Visualizzazione classi disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

`CScrollView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="checkscrollbars"></a>  CScrollView::CheckScrollBars

Chiamare questa funzione membro per determinare se la visualizzazione a scorrimento con barre orizzontali e verticali.

```
void CheckScrollBars(
    BOOL& bHasHorzBar,
    BOOL& bHasVertBar) const;
```

### <a name="parameters"></a>Parametri

*bHasHorzBar*<br/>
Indica che l'applicazione dispone di una barra di scorrimento orizzontale.

*bHasVertBar*<br/>
Indica che l'applicazione dispone di una barra di scorrimento verticale.

##  <a name="cscrollview"></a>  CScrollView::CScrollView

Costruisce un oggetto `CScrollView`.

```
CScrollView();
```

### <a name="remarks"></a>Note

È necessario chiamare `SetScrollSizes` o `SetScaleToFitSize` prima lo scorrimento della visualizzazione è utilizzabile.

##  <a name="filloutsiderect"></a>  CScrollView::FillOutsideRect

Chiamare `FillOutsideRect` per riempire l'area della vista che viene visualizzata all'esterno dell'area di scorrimento.

```
void FillOutsideRect(
    CDC* pDC,
    CBrush* pBrush);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Contesto di dispositivo in cui deve essere eseguito il riempimento.

*pBrush*<br/>
Pennello con cui l'area deve essere compilato.

### <a name="remarks"></a>Note

Uso `FillOutsideRect` nella propria visualizzazione di scorrimento `OnEraseBkgnd` funzione del gestore per impedire l'aggiornamento in background di un numero eccessivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#164](../../mfc/codesnippet/cpp/cscrollview-class_1.cpp)]

##  <a name="getdevicescrollposition"></a>  CScrollView::GetDeviceScrollPosition

Chiamare `GetDeviceScrollPosition` quando è necessario il corrente orizzontali e verticali le posizioni delle finestre di scorrimento nelle barre di scorrimento.

```
CPoint GetDeviceScrollPosition() const;
```

### <a name="return-value"></a>Valore restituito

Le posizioni verticale e orizzontale (in unità di dispositivo) delle finestre di scorrimento come un `CPoint` oggetto.

### <a name="remarks"></a>Note

Questa coppia di coordinate corrispondente al percorso del documento a cui è stata scorso l'angolo superiore sinistro della visualizzazione. Ciò è utile per lo sfalsamento posizioni dispositivo mouse nelle posizioni di dispositivo di visualizzazione a scorrimento.

`GetDeviceScrollPosition` Restituisce i valori in unità di dispositivo. Se si desidera che le unità logiche, utilizzo `GetScrollPosition` invece.

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

*nMapMode*<br/>
Restituisce la modalità di mapping corrente per questa visualizzazione. Per un elenco di valori possibili, vedere `SetScrollSizes`.

*sizeTotal*<br/>
Restituisce la dimensione totale corrente della visualizzazione scorrimento in unità di dispositivo.

*sizePage*<br/>
Restituisce le quantità orizzontale e verticale corrente per lo scorrimento in ciascuna direzione in risposta a un mouse fare clic in un albero della barra di scorrimento. Il `cx` membro contiene la quantità orizzontale. Il `cy` membro contiene la quantità verticale.

*sizeLine*<br/>
Restituisce le quantità orizzontale e verticale corrente per lo scorrimento in ciascuna direzione in risposta a un mouse fare clic in una freccia di scorrimento. Il `cx` membro contiene la quantità orizzontale. Il `cy` membro contiene la quantità verticale.

### <a name="remarks"></a>Note

Le dimensioni sono in unità di dispositivo. Questa funzione membro viene raramente chiamata.

##  <a name="getscrollposition"></a>  CScrollView::GetScrollPosition

Chiamare `GetScrollPosition` quando è necessario il corrente orizzontali e verticali le posizioni delle finestre di scorrimento nelle barre di scorrimento.

```
CPoint GetScrollPosition() const;
```

### <a name="return-value"></a>Valore restituito

Le posizioni verticale e orizzontale (in unità logiche) delle finestre di scorrimento come un `CPoint` oggetto.

### <a name="remarks"></a>Note

Questa coppia di coordinate corrispondente al percorso del documento a cui è stata scorso l'angolo superiore sinistro della visualizzazione.

`GetScrollPosition` Restituisce i valori in unità logiche. Unità di dispositivo, usare `GetDeviceScrollPosition` invece.

##  <a name="gettotalsize"></a>  CScrollView::GetTotalSize

Chiamare `GetTotalSize` per recuperare le dimensioni orizzontali e verticali correnti della visualizzazione a scorrimento.

```
CSize GetTotalSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni totali della visualizzazione scorrimento in unità logiche. La dimensione orizzontale è nel `cx` membro del `CSize` valore restituito. La dimensione verticale è nel `cy` membro.

##  <a name="resizeparenttofit"></a>  CScrollView::ResizeParentToFit

Chiamare `ResizeParentToFit` per consentire la dimensione della vista di determinare le dimensioni di finestra cornice.

```
void ResizeParentToFit(BOOL bShrinkOnly = TRUE);
```

### <a name="parameters"></a>Parametri

*bShrinkOnly*<br/>
Tipo di ridimensionamento per l'esecuzione. Il valore predefinito, TRUE, si riduce la finestra cornice se appropriato. Le barre di scorrimento rimarrà sempre per le viste di grandi dimensioni o finestre cornice di piccole dimensioni. Il valore FALSE, la visualizzazione sempre ridimensionare la finestra cornice esattamente. Ciò può essere risultare pericolosa perché la finestra cornice è stato possibile ottenere troppo grande per adattarsi all'interno di schermo o la finestra cornice MDI (interfaccia) a documenti multipli.

### <a name="remarks"></a>Note

Ciò è consigliata solo per le viste nelle finestre cornice figlio MDI. Uso `ResizeParentToFit` nella `OnInitialUpdate` funzione del gestore di derivato `CScrollView` classe. Per un esempio di questa funzione membro, vedere [CScrollView::SetScrollSizes](#setscrollsizes).

`ResizeParentToFit` si presuppone che le dimensioni della finestra di visualizzazione sono stata impostata. Se le dimensioni della finestra visualizzazione non è stata impostata quando `ResizeParentToFit` viene chiamato, si otterrà un'asserzione. Per garantire che ciò non accada, effettuare la chiamata seguente prima di chiamare `ResizeParentToFit`:

[!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]

##  <a name="scrolltoposition"></a>  CScrollView::ScrollToPosition

Chiamare `ScrollToPosition` scorrere fino a un punto specificato nella visualizzazione.

```
void ScrollToPosition(POINT pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Il punto di scorrimento, in unità logiche. Il `x` membro deve essere un valore positivo (maggiore o uguale a 0, fino alla dimensione totale della vista). Lo stesso vale per il `y` membro quando la modalità di mapping è MM_TEXT. Il `y` membro è un valore negativo in modalità di mapping diverso da MM_TEXT.

### <a name="remarks"></a>Note

La visualizzazione avverrà in modo che questo punto si trova l'angolo superiore sinistro della finestra. Questa funzione membro non deve essere chiamata se la vista viene adattata.

##  <a name="setscaletofitsize"></a>  CScrollView::SetScaleToFitSize

Chiamare `SetScaleToFitSize` quando si desidera ridimensionare automaticamente le dimensioni del viewport per la dimensione della finestra corrente.

```
void SetScaleToFitSize(SIZE sizeTotal);
```

### <a name="parameters"></a>Parametri

*sizeTotal*<br/>
Le dimensioni orizzontali e verticali a cui è necessario ridimensionare la visualizzazione. Le dimensioni della visualizzazione scorrimento viene misurata in unità logiche. La dimensione orizzontale è contenuta nel `cx` membro. La dimensione verticale è contenuta nel `cy` membro. Entrambe `cx` e `cy` deve essere maggiore o uguale a 0.

### <a name="remarks"></a>Note

Con le barre di scorrimento, potrebbe essere visibile solo una parte della visualizzazione logica in qualsiasi momento. Ma con la funzionalità di scalabilità di adattamento, la vista non dispone di alcuna barra di scorrimento e la visualizzazione logica è ingrandita o rimpicciolita per adattarsi esattamente l'area client della finestra. Quando la finestra viene ridimensionata, la visualizzazione consente di disegnare i dati su scala nuova in base alla dimensione della finestra.

In genere è possibile inserire la chiamata a `SetScaleToFitSize` nell'override della visualizzazione `OnInitialUpdate` funzione membro. Se non si desidera la scalabilità automatica, chiamare il `SetScrollSizes` membro funzione.

`SetScaleToFitSize` può essere utilizzato per implementare un'operazione di "Eseguire lo zoom avanti e adatta". Usare `SetScrollSizes` reinizializzare lo scorrimento.

`SetScaleToFitSize` si presuppone che le dimensioni della finestra di visualizzazione sono stata impostata. Se le dimensioni della finestra visualizzazione non è stata impostata quando `SetScaleToFitSize` viene chiamato, si otterrà un'asserzione. Per garantire che ciò non accada, effettuare la chiamata seguente prima di chiamare `SetScaleToFitSize`:

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

*nMapMode*<br/>
La modalità di mapping da impostare per questa visualizzazione. I valori possibili includono:

|Modalità di mapping|Unità logica|Extends positivi dell'asse y...|
|------------------|------------------|---------------------------------|
|MM_TEXT|1 pixel|Verso il basso|
|MM_HIMETRIC|0,01 mm|Verso l'alto|
|MM_TWIPS|1/1440 in|Verso l'alto|
|MM_HIENGLISH|0,001 pollici|Verso l'alto|
|MM_LOMETRIC|0,1 mm|Verso l'alto|
|MM_LOENGLISH|0,01 pollici|Verso l'alto|

Queste modalità sono definite da Windows. Due modalità di mapping standard, MM_ISOTROPIC e MM_ANISOTROPIC, non vengono usate per `CScrollView`. La libreria di classi fornisce il `SetScaleToFitSize` funzione membro per ridimensionare la visualizzazione della dimensione della finestra. Colonna 3 nella tabella precedente descrive l'orientamento di coordinate.

*sizeTotal*<br/>
Le dimensioni totali della visualizzazione scorrimento. Il `cx` membro contiene extent orizzontale. Il `cy` membro contiene l'ambito verticale. Le dimensioni sono in unità logiche. Entrambe `cx` e `cy` deve essere maggiore o uguale a 0.

*sizePage*<br/>
Le quantità orizzontale e verticale per lo scorrimento in ciascuna direzione in risposta a un mouse fare clic in un albero della barra di scorrimento. Il `cx` membro contiene la quantità orizzontale. Il `cy` membro contiene la quantità verticale.

*sizeLine*<br/>
Le quantità orizzontale e verticale per lo scorrimento in ciascuna direzione in risposta a un mouse fare clic su una freccia di scorrimento. Il `cx` membro contiene la quantità orizzontale. Il `cy` membro contiene la quantità verticale.

### <a name="remarks"></a>Note

Chiamarlo nell'override del `OnUpdate` funzione membro per regolare le caratteristiche dello scorrimento quando, ad esempio, il documento viene inizialmente visualizzato o in caso di modifica delle dimensioni.

Si otterranno in genere informazioni sulle dimensioni di documento associato della visualizzazione chiamando una funzione membro di documento, forse chiamata `GetMyDocSize`, che viene fornito con la classe del documento derivata. Il codice seguente illustra questo approccio:

[!code-cpp[NVC_MFCDocView#166](../../mfc/codesnippet/cpp/cscrollview-class_3.cpp)]

In alternativa, in alcuni casi potrebbe essere necessario impostare una dimensione fissa, come nel codice seguente:

[!code-cpp[NVC_MFCDocView#167](../../mfc/codesnippet/cpp/cscrollview-class_4.cpp)]

È necessario impostare la modalità di mapping per tutte le modalità di mapping di Windows eccetto MM_ISOTROPIC o MM_ANISOTROPIC. Se si desidera utilizzare una modalità di mapping non vincolato, chiamare il `SetScaleToFitSize` la funzione membro anziché `SetScrollSizes`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#168](../../mfc/codesnippet/cpp/cscrollview-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#169](../../mfc/codesnippet/cpp/cscrollview-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC immagine](../../visual-cpp-samples.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)
