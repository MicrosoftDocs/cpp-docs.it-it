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
ms.openlocfilehash: 5d0eb163fae2aa5fc63470e1c499311ab1a402a6
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754414"
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
|[CScrollView::CheckScrollBars](#checkscrollbars)|Indica se la visualizzazione di scorrimento include barre di scorrimento orizzontali e verticali.|
|[CScrollView::FillOutsideRect](#filloutsiderect)|Riempie l'area di una vista all'esterno dell'area di scorrimento.|
|[CScrollView::GetDeviceScrollPosition](#getdevicescrollposition)|Ottiene la posizione di scorrimento corrente in unità di dispositivo.|
|[CScrollView::GetDeviceScrollSizes](#getdevicescrollsizes)|Ottiene la modalità di mapping corrente, le dimensioni totali e le dimensioni di riga e pagina della visualizzazione scorrevole. Le dimensioni sono in unità di dispositivo.|
|[CScrollView::GetScrollPosition](#getscrollposition)|Ottiene la posizione di scorrimento corrente in unità logiche.|
|[CScrollView::GetTotalSize](#gettotalsize)|Ottiene la dimensione totale della visualizzazione di scorrimento in unità logiche.|
|[CScrollView::ResizeParentToFit](#resizeparenttofit)|Fa in modo che le dimensioni della vista dimichelvano le dimensioni della cornice.|
|[CScrollView::ScrollToPosition](#scrolltoposition)|Scorre la visualizzazione fino a un punto specificato, specificato in unità logiche.|
|[CScrollView::SetScaleToFitSize](#setscaletofitsize)|Mette la visualizzazione di scorrimento in modalità di adattamento.|
|[CScrollView::SetScrollSizes](#setscrollsizes)|Imposta la modalità di mappatura della visualizzazione di scorrimento, le dimensioni totali e gli importi di scorrimento orizzontale e verticale.|

## <a name="remarks"></a>Osservazioni

È possibile gestire lo scorrimento standard `CView` in qualsiasi classe derivata da eseguendo l'override delle funzioni membro [OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) mappate ai messaggi. Ma `CScrollView` aggiunge le seguenti `CView` caratteristiche alle sue capacità:

- Gestisce le dimensioni delle finestre e delle finestre e le modalità di mappatura.

- Scorre automaticamente in risposta ai messaggi della barra di scorrimento.

- Scorre automaticamente in risposta ai messaggi dalla tastiera, da un mouse non scorrevole o dalla rotellina di IntelliMouse.

Per scorrere automaticamente in risposta ai messaggi della tastiera, aggiungere un messaggio di WM_KEYDOWN e verificare VK_DOWN, VK_PREV e chiamare [SetScrollPos](/windows/win32/api/winuser/nf-winuser-setscrollpos).

È possibile gestire lo scorrimento della rotellina del mouse eseguendo l'override delle funzioni membro [OnMouseWheel](../../mfc/reference/cwnd-class.md#onmousewheel) e [OnRegisteredMouseWheel](../../mfc/reference/cwnd-class.md#onregisteredmousewheel) mappate ai messaggi. Come sono `CScrollView`per , queste funzioni membro supportano il comportamento consigliato per [WM_MOUSEWHEEL](/windows/win32/inputdev/wm-mousewheel), il messaggio di rotazione della rotellina.

Per sfruttare i vantaggi dello scorrimento `CScrollView` automatico, `CView`derivare la classe di visualizzazione da anziché da . Quando la visualizzazione viene creata per la prima volta, se si desidera calcolare la `SetScrollSizes` dimensione della visualizzazione scorrevole in base alle dimensioni del documento, chiamare la funzione membro dall'override di [CView::OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) o [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate). È necessario scrivere codice personalizzato per eseguire una query sulle dimensioni del documento. Per un esempio, vedere [l'esempio Scribble](../../overview/visual-cpp-samples.md).)

La chiamata `SetScrollSizes` alla funzione membro imposta la modalità di mapping della visualizzazione, le dimensioni totali della visualizzazione di scorrimento e gli importi per scorrere orizzontalmente e verticalmente. Tutte le dimensioni sono in unità logiche. La dimensione logica della vista viene in genere calcolata dai dati archiviati nel documento, ma in alcuni casi è possibile specificare una dimensione fissa. Per esempi di entrambi gli approcci, vedere [CScrollView::SetScrollSizes](#setscrollsizes).

Specificare gli importi per scorrere orizzontalmente e verticalmente in unità logiche. Per impostazione predefinita, se l'utente fa clic `CScrollView` su un albero della barra di scorrimento all'esterno della casella di scorrimento, scorre una "pagina". Se l'utente fa clic su una freccia `CScrollView` di scorrimento alle estremità di una barra di scorrimento, scorre una "linea". Per impostazione predefinita, una pagina è 1/10 della dimensione totale della visualizzazione; una riga è 1/10 delle dimensioni della pagina. Eseguire l'override di questi `SetScrollSizes` valori predefiniti passando dimensioni personalizzate nella funzione membro. Ad esempio, è possibile impostare la dimensione orizzontale su una frazione della larghezza della dimensione totale e la dimensione verticale sull'altezza di una riga nel tipo di carattere corrente.

Invece di `CScrollView` scorrere, è possibile ridimensionare automaticamente la visualizzazione in base alle dimensioni della finestra corrente. In questa modalità, la visualizzazione non dispone di barre di scorrimento e la visualizzazione logica viene estesa o rimpicciolita per adattarsi esattamente all'area client della finestra. Per utilizzare questa funzionalità di adattamento, chiamare [CScrollView::SetScaleToFitSize](#setscaletofitsize). (Chiamare `SetScaleToFitSize` uno `SetScrollSizes`o , ma non entrambi.)

Prima `OnDraw` che venga chiamata la funzione `CScrollView` membro della classe di visualizzazione `CPaintDC` derivata, regola automaticamente `OnDraw`l'origine del viewport per l'oggetto contesto di dispositivo che passa a .

Per regolare l'origine della finestra `CScrollView` di visualizzazione per la finestra a scorrimento, esegue l'override di [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc). Questa regolazione è `CPaintDC` automatica `CScrollView` per `OnDraw`il contesto `CScrollView::OnPrepareDC` di periferica che passa a , ma `CClientDC`è necessario chiamare se stessi per qualsiasi altro contesto di periferica utilizzato, ad esempio un oggetto . È possibile `CScrollView::OnPrepareDC` eseguire l'override per impostare la penna, il colore di sfondo e altri attributi di disegno, ma chiamare la classe base per eseguire il ridimensionamento.

Le barre di scorrimento possono essere visualizzate in tre posizioni rispetto a una visualizzazione, come illustrato nei seguenti casi:

- Le barre di scorrimento standard in stile finestra possono essere impostate per la visualizzazione utilizzando il WS_HSCROLL e WS_VSCROLL stili di[Windows](../../mfc/reference/styles-used-by-mfc.md#window-styles).

- I controlli barra di scorrimento possono anche essere aggiunti al frame contenente la visualizzazione, nel qual caso il framework inoltra WM_HSCROLL e WM_VSCROLL messaggi dalla finestra cornice alla visualizzazione attualmente attiva.

- Il framework inoltra anche `CSplitterWnd` i messaggi di scorrimento da un controllo barra di divisione al riquadro con separatore attualmente attivo (una visualizzazione). Quando viene inserito in un [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md) con barre di scorrimento condivise, un `CScrollView` oggetto utilizzerà quelli condivisi anziché creare il proprio.

Per ulteriori informazioni `CScrollView`sull'utilizzo di , vedere [Architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [Classi di visualizzazione derivata disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

`CScrollView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cscrollviewcheckscrollbars"></a><a name="checkscrollbars"></a>CScrollView::CheckScrollBars

Chiamare questa funzione membro per determinare se la visualizzazione di scorrimento dispone di barre orizzontali e verticali.

```cpp
void CheckScrollBars(
    BOOL& bHasHorzBar,
    BOOL& bHasVertBar) const;
```

### <a name="parameters"></a>Parametri

*bHasHorzBar*<br/>
Indica che l'applicazione dispone di una barra di scorrimento orizzontale.

*bHasVertBar*<br/>
Indica che l'applicazione dispone di una barra di scorrimento verticale.

## <a name="cscrollviewcscrollview"></a><a name="cscrollview"></a>CScrollView::CScrollView

Costruisce un oggetto `CScrollView`.

```
CScrollView();
```

### <a name="remarks"></a>Osservazioni

È necessario `SetScrollSizes` chiamare `SetScaleToFitSize` o prima che la visualizzazione di scorrimento sia utilizzabile.

## <a name="cscrollviewfilloutsiderect"></a><a name="filloutsiderect"></a>CScrollView::FillOutsideRect

Chiamata `FillOutsideRect` per riempire l'area della vista visualizzata all'esterno dell'area di scorrimento.

```cpp
void FillOutsideRect(
    CDC* pDC,
    CBrush* pBrush);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Contesto di dispositivo in cui deve essere eseguita la riempimento.

*Pbrush*<br/>
Spazzolare con cui l'area deve essere riempita.

### <a name="remarks"></a>Osservazioni

Utilizzare `FillOutsideRect` nella funzione di `OnEraseBkgnd` gestione della visualizzazione di scorrimento per evitare un'eccessiva riprogettazione in background.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#164](../../mfc/codesnippet/cpp/cscrollview-class_1.cpp)]

## <a name="cscrollviewgetdevicescrollposition"></a><a name="getdevicescrollposition"></a>CScrollView::GetDeviceScrollPosition

Chiama `GetDeviceScrollPosition` quando hai bisogno delle posizioni orizzontali e verticali correnti delle caselle di scorrimento nelle barre di scorrimento.

```
CPoint GetDeviceScrollPosition() const;
```

### <a name="return-value"></a>Valore restituito

Le posizioni orizzontale e verticale (in unità `CPoint` di dispositivo) delle caselle di scorrimento come oggetto.

### <a name="remarks"></a>Osservazioni

Questa coppia di coordinate corrisponde alla posizione nel documento in cui è stato fatto scorrere l'angolo superiore sinistro della visualizzazione. Ciò è utile per disattivare le posizioni del dispositivo del mouse alle posizioni del dispositivo di scorrimento.This is useful for offsetting mouse-device positions to scroll-view device positions.

`GetDeviceScrollPosition`restituisce i valori nelle unità di dispositivo. Se si desidera che `GetScrollPosition` le unità logiche, utilizzare invece.

## <a name="cscrollviewgetdevicescrollsizes"></a><a name="getdevicescrollsizes"></a>CScrollView::GetDeviceScrollSizes

`GetDeviceScrollSizes`ottiene la modalità di mapping corrente, la dimensione totale e le dimensioni di riga e di pagina della visualizzazione scorrevole.

```cpp
void GetDeviceScrollSizes(
    int& nMapMode,
    SIZE& sizeTotal,
    SIZE& sizePage,
    SIZE& sizeLine) const;
```

### <a name="parameters"></a>Parametri

*nMapMode (modalità di modifica)*<br/>
Restituisce la modalità di mapping corrente per questa visualizzazione. Per un elenco di valori possibili, vedere `SetScrollSizes`.

*sizeTotal*<br/>
Restituisce la dimensione totale corrente della visualizzazione di scorrimento in unità di dispositivo.

*dimensionePagina*<br/>
Restituisce gli importi orizzontali e verticali correnti da scorrere in ogni direzione in risposta a un clic del mouse in un albero della barra di scorrimento. Il `cx` membro contiene l'importo orizzontale. Il `cy` membro contiene l'importo verticale.

*dimensioneLinea*<br/>
Restituisce gli importi orizzontali e verticali correnti da scorrere in ogni direzione in risposta a un clic del mouse in una freccia di scorrimento. Il `cx` membro contiene l'importo orizzontale. Il `cy` membro contiene l'importo verticale.

### <a name="remarks"></a>Osservazioni

Le dimensioni sono in unità di dispositivo. Questa funzione membro viene chiamata raramente.

## <a name="cscrollviewgetscrollposition"></a><a name="getscrollposition"></a>CScrollView::GetScrollPosition

Chiama `GetScrollPosition` quando hai bisogno delle posizioni orizzontali e verticali correnti delle caselle di scorrimento nelle barre di scorrimento.

```
CPoint GetScrollPosition() const;
```

### <a name="return-value"></a>Valore restituito

Le posizioni orizzontale e verticale (in unità `CPoint` logiche) delle caselle di scorrimento come oggetto.

### <a name="remarks"></a>Osservazioni

Questa coppia di coordinate corrisponde alla posizione nel documento in cui è stato fatto scorrere l'angolo superiore sinistro della visualizzazione.

`GetScrollPosition`restituisce valori in unità logiche. Se si desidera che `GetDeviceScrollPosition` le unità di dispositivo, utilizzare invece.

## <a name="cscrollviewgettotalsize"></a><a name="gettotalsize"></a>CScrollView::GetTotalSize

Chiamare `GetTotalSize` per recuperare le dimensioni orizzontali e verticali correnti della visualizzazione di scorrimento.

```
CSize GetTotalSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione totale della visualizzazione di scorrimento in unità logiche. La dimensione orizzontale `cx` è `CSize` nel membro del valore restituito. La dimensione verticale `cy` è nel membro.

## <a name="cscrollviewresizeparenttofit"></a><a name="resizeparenttofit"></a>CScrollView::ResizeParentToFit

Chiamare `ResizeParentToFit` per consentire alle dimensioni della visualizzazione di determinare le dimensioni della finestra cornice.

```cpp
void ResizeParentToFit(BOOL bShrinkOnly = TRUE);
```

### <a name="parameters"></a>Parametri

*bShrinkOnly (informazioni in due)*<br/>
Tipo di ridimensionamento da eseguire. Il valore predefinito, TRUE, riduce la finestra cornice, se appropriato. Le barre di scorrimento verranno comunque visualizzate per le visualizzazioni di grandi dimensioni o le piccole finestre cornice. Il valore FALSE fa sì che la visualizzazione ridimensioni sempre esattamente la finestra cornice. Questo può essere un po 'pericoloso poiché la finestra cornice potrebbe diventare troppo grande per adattarsi all'interno della finestra cornice interfaccia di documenti multipli (MDI) o lo schermo.

### <a name="remarks"></a>Osservazioni

Questa operazione è consigliata solo per le visualizzazioni nelle finestre cornice figlio MDI. Utilizzare `ResizeParentToFit` nella `OnInitialUpdate` funzione del `CScrollView` gestore della classe derivata. Per un esempio di questa funzione membro, vedere [CScrollView::SetScrollSizes](#setscrollsizes).

`ResizeParentToFit`presuppone che la dimensione della finestra di visualizzazione sia stata impostata. Se le dimensioni della finestra `ResizeParentToFit` di visualizzazione non sono state impostate quando viene chiamato, si otterrà un'asserzione. Per assicurarsi che ciò non accada, effettuare la seguente chiamata prima di chiamare `ResizeParentToFit`:

[!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]

## <a name="cscrollviewscrolltoposition"></a><a name="scrolltoposition"></a>CScrollView::ScrollToPosition

Chiamata `ScrollToPosition` per scorrere fino a un determinato punto nella visualizzazione.

```cpp
void ScrollToPosition(POINT pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Punto in cui scorrere, in unità logiche. Il `x` membro deve essere un valore positivo (maggiore o uguale a 0, fino alla dimensione totale della visualizzazione). Lo stesso vale `y` per il membro quando la modalità di mapping è MM_TEXT. Il `y` membro è negativo nelle modalità di mapping diverse da MM_TEXT.

### <a name="remarks"></a>Osservazioni

La vista verrà scorrota in modo che questo punto si trova nell'angolo superiore sinistro della finestra. Questa funzione membro non deve essere chiamata se la visualizzazione viene ridimensionata per adattarsi.

## <a name="cscrollviewsetscaletofitsize"></a><a name="setscaletofitsize"></a>CScrollView::SetScaleToFitSize

Chiamare `SetScaleToFitSize` quando si desidera ridimensionare automaticamente le dimensioni della finestra in base alle dimensioni correnti della finestra.

```cpp
void SetScaleToFitSize(SIZE sizeTotal);
```

### <a name="parameters"></a>Parametri

*sizeTotal*<br/>
Le dimensioni orizzontale e verticale a cui deve essere scalata la vista. Le dimensioni della visualizzazione di scorrimento vengono misurate in unità logiche. La dimensione orizzontale `cx` è contenuta nel membro. La dimensione verticale `cy` è contenuta nel membro. Entrambi `cx` `cy` e devono essere maggiori o uguali a 0.

### <a name="remarks"></a>Osservazioni

Con le barre di scorrimento, solo una parte della visualizzazione logica può essere visibile in qualsiasi momento. Ma con la funzionalità di adattamento, la visualizzazione non dispone di barre di scorrimento e la visualizzazione logica viene allungata o ridotta per adattarsi esattamente all'area client della finestra. Quando la finestra viene ridimensionata, la visualizzazione disegna i dati in una nuova scala in base alle dimensioni della finestra.

In genere si inserisce `SetScaleToFitSize` la chiamata a nell'override della funzione membro della `OnInitialUpdate` visualizzazione. Se non si desidera il `SetScrollSizes` ridimensionamento automatico, chiamare invece la funzione membro.

`SetScaleToFitSize`può essere utilizzato per implementare un'operazione di "zoom per adattare". Utilizzare `SetScrollSizes` per reinizializzare lo scorrimento.

`SetScaleToFitSize`presuppone che la dimensione della finestra di visualizzazione sia stata impostata. Se le dimensioni della finestra `SetScaleToFitSize` di visualizzazione non sono state impostate quando viene chiamato, si otterrà un'asserzione. Per assicurarsi che ciò non accada, effettuare la seguente chiamata prima di chiamare `SetScaleToFitSize`:

[!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]

## <a name="cscrollviewsetscrollsizes"></a><a name="setscrollsizes"></a>CScrollView::SetScrollSizes

Chiamare `SetScrollSizes` quando la vista sta per essere aggiornata.

```cpp
void SetScrollSizes(
    int nMapMode,
    SIZE sizeTotal,
    const SIZE& sizePage = sizeDefault,
    const SIZE& sizeLine = sizeDefault);
```

### <a name="parameters"></a>Parametri

*nMapMode (modalità di modifica)*<br/>
Modalità di mapping da impostare per questa visualizzazione. I valori possibili sono:

|Modalità mappatura|Unità logica|Interfacce positive dell'asse y...|
|------------------|------------------|---------------------------------|
|MM_TEXT|1 pixel|Discesa|
|MM_HIMETRIC|0,01 mm|Ascendente|
|MM_TWIPS|1/1440 in|Ascendente|
|MM_HIENGLISH|0.001 in|Ascendente|
|MM_LOMETRIC|0,1 mm|Ascendente|
|MM_LOENGLISH|0,01 in|Ascendente|

Tutte queste modalità sono definite da Windows. Due modalità di mapping standard, MM_ISOTROPIC `CScrollView`e MM_ANISOTROPIC, non vengono utilizzate per . La libreria di `SetScaleToFitSize` classi fornisce la funzione membro per ridimensionare la visualizzazione in base alle dimensioni della finestra. La colonna tre della tabella precedente descrive l'orientamento delle coordinate.

*sizeTotal*<br/>
Dimensione totale della visualizzazione di scorrimento. Il `cx` membro contiene l'estensione orizzontale. Il `cy` membro contiene l'estensione verticale. Le dimensioni sono in unità logiche. Entrambi `cx` `cy` e devono essere maggiori o uguali a 0.

*dimensionePagina*<br/>
Gli importi orizzontale e verticale per scorrere in ogni direzione in risposta a un clic del mouse in un albero della barra di scorrimento. Il `cx` membro contiene l'importo orizzontale. Il `cy` membro contiene l'importo verticale.

*dimensioneLinea*<br/>
Le quantità orizzontali e verticali per scorrere in ogni direzione in risposta a un clic del mouse in una freccia di scorrimento. Il `cx` membro contiene l'importo orizzontale. Il `cy` membro contiene l'importo verticale.

### <a name="remarks"></a>Osservazioni

Chiamare nell'override `OnUpdate` della funzione membro per regolare le caratteristiche di scorrimento quando, ad esempio, il documento viene visualizzato inizialmente o quando cambia dimensione.

In genere si ottengono informazioni sulle dimensioni dal documento associato della `GetMyDocSize`visualizzazione chiamando una funzione membro del documento, ad esempio denominata , fornita con la classe documento derivata. Il codice seguente illustra questo approccio:The following code shows this approach:

[!code-cpp[NVC_MFCDocView#166](../../mfc/codesnippet/cpp/cscrollview-class_3.cpp)]

In alternativa, a volte potrebbe essere necessario impostare una dimensione fissa, come nel codice seguente:Alternatively, you might sometimes need to set a fixed size, as in the following code:

[!code-cpp[NVC_MFCDocView#167](../../mfc/codesnippet/cpp/cscrollview-class_4.cpp)]

È necessario impostare la modalità di mapping su una delle modalità di mapping di Windows, ad eccezione di MM_ISOTROPIC o MM_ANISOTROPIC. Se si desidera utilizzare una modalità `SetScaleToFitSize` di mapping `SetScrollSizes`non vincolata, chiamare la funzione membro anziché .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#168](../../mfc/codesnippet/cpp/cscrollview-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#169](../../mfc/codesnippet/cpp/cscrollview-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC DIBLOOK](../../overview/visual-cpp-samples.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)
