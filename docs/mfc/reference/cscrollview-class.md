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
ms.openlocfilehash: b89daaae4bb578d328e1468cc29470825e19c670
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69502598"
---
# <a name="cscrollview-class"></a>Classe CScrollView

[CView](../../mfc/reference/cview-class.md) con funzionalità di scorrimento.

## <a name="syntax"></a>Sintassi

```
class CScrollView : public CView
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Name|Descrizione|
|----------|-----------------|
|[CScrollView:: CScrollView](#cscrollview)|Costruisce un oggetto `CScrollView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CScrollView::CheckScrollBars](#checkscrollbars)|Indica se la visualizzazione a scorrimento presenta barre di scorrimento orizzontali e verticali.|
|[CScrollView::FillOutsideRect](#filloutsiderect)|Riempie l'area di una visualizzazione all'esterno dell'area di scorrimento.|
|[CScrollView::GetDeviceScrollPosition](#getdevicescrollposition)|Ottiene la posizione di scorrimento corrente in unità dispositivo.|
|[CScrollView::GetDeviceScrollSizes](#getdevicescrollsizes)|Ottiene la modalità di mapping corrente, le dimensioni totali e le dimensioni della riga e della pagina della visualizzazione scorrevole. Le dimensioni si trovano in unità dispositivo.|
|[CScrollView::GetScrollPosition](#getscrollposition)|Ottiene la posizione di scorrimento corrente nelle unità logiche.|
|[CScrollView::GetTotalSize](#gettotalsize)|Ottiene la dimensione totale della visualizzazione a scorrimento in unità logiche.|
|[CScrollView::ResizeParentToFit](#resizeparenttofit)|Consente alle dimensioni della visualizzazione di determinare la dimensione del frame.|
|[CScrollView::ScrollToPosition](#scrolltoposition)|Scorre la visualizzazione in un punto specificato, specificato in unità logiche.|
|[CScrollView::SetScaleToFitSize](#setscaletofitsize)|Consente di posizionare la visualizzazione a scorrimento in modalità scalabile.|
|[CScrollView::SetScrollSizes](#setscrollsizes)|Imposta la modalità di mapping della visualizzazione a scorrimento, le dimensioni totali e gli importi di scorrimento orizzontale e verticale.|

## <a name="remarks"></a>Note

È possibile gestire lo scorrimento standard in qualsiasi classe derivata da `CView` eseguendo l'override delle funzioni membro [OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) mappate al messaggio. Ma `CScrollView` aggiunge le funzionalità seguenti `CView` alle funzionalità:

- Gestisce le dimensioni della finestra e del viewport e le modalità di mapping.

- Scorre automaticamente in risposta ai messaggi della barra di scorrimento.

- Scorre automaticamente in risposta ai messaggi dalla tastiera, un mouse non a scorrimento o la rotellina del IntelliMouse.

Per scorrere automaticamente in risposta ai messaggi della tastiera, aggiungere un messaggio WM_KEYDOWN e testare VK_DOWN, VK_PREV e chiamare [SetScrollPos](/windows/win32/api/winuser/nf-winuser-setscrollpos).

È possibile gestire manualmente lo scorrimento della rotellina del mouse eseguendo l'override delle funzioni membro [OnMouseWheel](../../mfc/reference/cwnd-class.md#onmousewheel) e [OnRegisteredMouseWheel](../../mfc/reference/cwnd-class.md#onregisteredmousewheel) mappate al messaggio. Come per `CScrollView`, queste funzioni membro supportano il comportamento consigliato per [WM_MOUSEWHEEL](/windows/win32/inputdev/wm-mousewheel), ovvero il messaggio di rotazione della rotellina.

Per sfruttare i vantaggi dello scorrimento automatico, derivare la classe di `CScrollView` visualizzazione da anziché `CView`da. Quando la vista viene creata per la prima volta, se si desidera calcolare la dimensione della visualizzazione scorrevole in base alle dimensioni del documento, chiamare la `SetScrollSizes` funzione membro dall'override di [CView:: OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) o [CView:: OnUpdate](../../mfc/reference/cview-class.md#onupdate). È necessario scrivere codice personalizzato per eseguire query sulle dimensioni del documento. Per un esempio, vedere l' [esempio Scribble](../../overview/visual-cpp-samples.md).

La chiamata alla `SetScrollSizes` funzione membro imposta la modalità di mapping della visualizzazione, le dimensioni totali della visualizzazione a scorrimento e gli importi da scorrere orizzontalmente e verticalmente. Tutte le dimensioni sono in unità logiche. La dimensione logica della vista viene in genere calcolata in base ai dati archiviati nel documento, ma in alcuni casi può essere necessario specificare una dimensione fissa. Per esempi di entrambi gli approcci, vedere [CScrollView:: SetScrollSizes](#setscrollsizes).

Si specificano gli importi da scorrere orizzontalmente e verticalmente in unità logiche. Per impostazione predefinita, se l'utente fa clic su un albero della barra di scorrimento all' `CScrollView` esterno della casella di scorrimento, scorre una "pagina". Se l'utente fa clic su una freccia di scorrimento a una estremità di una `CScrollView` barra di scorrimento, scorre una "riga". Per impostazione predefinita, una pagina è 1/10 della dimensione totale della vista; una linea è 1/10 della dimensione della pagina. Eseguire l'override di questi valori predefiniti passando dimensioni personalizzate `SetScrollSizes` nella funzione membro. Ad esempio, è possibile impostare la dimensione orizzontale su una frazione della larghezza delle dimensioni totali e le dimensioni verticali sull'altezza di una riga nel tipo di carattere corrente.

Anziché scorrere, `CScrollView` può ridimensionare automaticamente la visualizzazione alle dimensioni della finestra corrente. In questa modalità, la vista non dispone di barre di scorrimento e la visualizzazione logica viene allungata o compattata in modo da adattarsi esattamente all'area client della finestra. Per utilizzare questa funzionalità di scalabilità verticale, chiamare [CScrollView:: SetScaleToFitSize](#setscaletofitsize). (Chiamare `SetScaleToFitSize` o `SetScrollSizes`, ma non entrambi).

Prima che `OnDraw` venga chiamata la funzione membro della classe di visualizzazione derivata `CScrollView` , regola automaticamente l'origine del viewport per `CPaintDC` l'oggetto del contesto del dispositivo a `OnDraw`cui viene passato.

Per modificare l'origine del viewport per la finestra di scorrimento `CScrollView` , esegue l'override di [CView:: OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc). Questa rettifica è automatica per il `CPaintDC` contesto di dispositivo `CScrollView` che passa `OnDraw`a, ma è necessario `CScrollView::OnPrepareDC` chiamarsi per tutti gli `CClientDC`altri contesti di dispositivo usati, ad esempio. È possibile eseguire `CScrollView::OnPrepareDC` l'override di per impostare la penna, il colore di sfondo e altri attributi di disegno, ma chiamare la classe base per eseguire la scalabilità.

Le barre di scorrimento possono essere visualizzate in tre posizioni rispetto a una visualizzazione, come illustrato nei casi seguenti:

- È possibile impostare le barre di scorrimento standard della finestra per la visualizzazione usando gli stili di[Windows](../../mfc/reference/styles-used-by-mfc.md#window-styles)WS_HSCROLL e WS_VSCROLL.

- I controlli barra di scorrimento possono essere aggiunti anche al frame che contiene la visualizzazione, nel qual caso il Framework trasmette i messaggi WM_HSCROLL e WM_VSCROLL dalla finestra cornice alla visualizzazione attualmente attiva.

- Il Framework trasmette inoltre i messaggi di scorrimento da `CSplitterWnd` un controllo Splitter al riquadro Barra di divisione attualmente attivo (visualizzazione). Quando viene inserita in un [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md) con barre di scorrimento condivise `CScrollView` , un oggetto utilizzerà quelle condivise anziché crearne di proprie.

Per ulteriori informazioni sull'utilizzo `CScrollView`di, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [classi di visualizzazioni derivate disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

`CScrollView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="checkscrollbars"></a>CScrollView:: CheckScrollBars

Chiamare questa funzione membro per determinare se la visualizzazione a scorrimento presenta barre orizzontali e verticali.

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

##  <a name="cscrollview"></a>CScrollView:: CScrollView

Costruisce un oggetto `CScrollView`.

```
CScrollView();
```

### <a name="remarks"></a>Note

È necessario chiamare `SetScrollSizes` o `SetScaleToFitSize` prima che la visualizzazione a scorrimento sia utilizzabile.

##  <a name="filloutsiderect"></a>  CScrollView::FillOutsideRect

Chiamare `FillOutsideRect` per riempire l'area della visualizzazione visualizzata all'esterno dell'area di scorrimento.

```
void FillOutsideRect(
    CDC* pDC,
    CBrush* pBrush);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Contesto di dispositivo in cui deve essere eseguita la compilazione.

*pBrush*<br/>
Pennello con cui deve essere riempita l'area.

### <a name="remarks"></a>Note

Usare `FillOutsideRect` nella funzione del `OnEraseBkgnd` gestore della visualizzazione a scorrimento per evitare un ridisegno eccessivo dello sfondo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#164](../../mfc/codesnippet/cpp/cscrollview-class_1.cpp)]

##  <a name="getdevicescrollposition"></a>  CScrollView::GetDeviceScrollPosition

Chiamare `GetDeviceScrollPosition` quando sono necessarie le posizioni orizzontali e verticali correnti delle caselle di scorrimento nelle barre di scorrimento.

```
CPoint GetDeviceScrollPosition() const;
```

### <a name="return-value"></a>Valore restituito

Posizioni orizzontali e verticali (in unità dispositivo) delle caselle di scorrimento sotto forma `CPoint` di oggetto.

### <a name="remarks"></a>Note

Questa coppia di coordinate corrisponde alla posizione nel documento in cui è stato eseguito lo scorrimento dell'angolo superiore sinistro della visualizzazione. Questa operazione è utile per compensare le posizioni del dispositivo del mouse in modo da visualizzare le posizioni del dispositivo.

`GetDeviceScrollPosition`Restituisce i valori in unità dispositivo. Se si desiderano le unità logiche `GetScrollPosition` , utilizzare in alternativa.

##  <a name="getdevicescrollsizes"></a>  CScrollView::GetDeviceScrollSizes

`GetDeviceScrollSizes`Ottiene la modalità di mapping corrente, le dimensioni totali e le dimensioni della riga e della pagina della visualizzazione scorrevole.

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
Restituisce le dimensioni totali correnti della visualizzazione a scorrimento in unità dispositivo.

*sizePage*<br/>
Restituisce gli importi orizzontali e verticali correnti da scorrere in ogni direzione in risposta a un clic del mouse in un albero della barra di scorrimento. Il `cx` membro contiene la quantità orizzontale. Il `cy` membro contiene la quantità verticale.

*sizeLine*<br/>
Restituisce gli importi orizzontali e verticali correnti da scorrere in ogni direzione in risposta a un clic del mouse in una freccia di scorrimento. Il `cx` membro contiene la quantità orizzontale. Il `cy` membro contiene la quantità verticale.

### <a name="remarks"></a>Note

Le dimensioni si trovano in unità dispositivo. Questa funzione membro viene chiamata raramente.

##  <a name="getscrollposition"></a>  CScrollView::GetScrollPosition

Chiamare `GetScrollPosition` quando sono necessarie le posizioni orizzontali e verticali correnti delle caselle di scorrimento nelle barre di scorrimento.

```
CPoint GetScrollPosition() const;
```

### <a name="return-value"></a>Valore restituito

Posizioni orizzontali e verticali (in unità logiche) delle caselle di scorrimento sotto forma `CPoint` di oggetto.

### <a name="remarks"></a>Note

Questa coppia di coordinate corrisponde alla posizione nel documento in cui è stato eseguito lo scorrimento dell'angolo superiore sinistro della visualizzazione.

`GetScrollPosition`Restituisce i valori nelle unità logiche. Se si desiderano le unità di `GetDeviceScrollPosition` dispositivo, utilizzare in alternativa.

##  <a name="gettotalsize"></a>  CScrollView::GetTotalSize

Chiamare `GetTotalSize` per recuperare le dimensioni orizzontali e verticali correnti della visualizzazione a scorrimento.

```
CSize GetTotalSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni totali della visualizzazione a scorrimento in unità logiche. La dimensione orizzontale si trova nel `cx` membro `CSize` del valore restituito. La dimensione verticale si trova nel `cy` membro.

##  <a name="resizeparenttofit"></a>  CScrollView::ResizeParentToFit

Chiamare `ResizeParentToFit` per consentire alla dimensione della visualizzazione di determinare la dimensione della finestra cornice.

```
void ResizeParentToFit(BOOL bShrinkOnly = TRUE);
```

### <a name="parameters"></a>Parametri

*bShrinkOnly*<br/>
Tipo di ridimensionamento da eseguire. Il valore predefinito, TRUE, compatta la finestra cornice se appropriato. Le barre di scorrimento vengono comunque visualizzate per le finestre di grandi dimensioni o di piccole dimensioni. Il valore FALSE fa sì che la visualizzazione ridimensioni esattamente la finestra cornice. Questo può essere un po' pericoloso perché la finestra cornice può diventare troppo grande per adattarsi alla finestra cornice a più documenti (MDI) o allo schermo.

### <a name="remarks"></a>Note

Questa opzione è consigliata solo per le viste nelle finestre cornice figlio MDI. Utilizzare `ResizeParentToFit` `CScrollView` nella funzione handler della classe derivata. `OnInitialUpdate` Per un esempio di questa funzione membro, vedere [CScrollView:: SetScrollSizes](#setscrollsizes).

`ResizeParentToFit`presuppone che le dimensioni della finestra di visualizzazione siano state impostate. Se la dimensione della finestra di visualizzazione non è stata `ResizeParentToFit` impostata quando viene chiamato il metodo, si otterrà un'asserzione. Per assicurarsi che non si verifichi questo problema, effettuare la chiamata seguente prima `ResizeParentToFit`di chiamare:

[!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]

##  <a name="scrolltoposition"></a>CScrollView:: ScrollToPosition

Chiamare `ScrollToPosition` per scorrere fino a un determinato punto della visualizzazione.

```
void ScrollToPosition(POINT pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Punto da scorrere, in unità logiche. Il `x` membro deve essere un valore positivo (maggiore o uguale a 0, fino alla dimensione totale della visualizzazione). Lo stesso vale per il `y` membro quando la modalità di mapping è MM_TEXT. Il `y` membro è negativo nelle modalità di mapping diverse da MM_TEXT.

### <a name="remarks"></a>Note

Verrà eseguito lo scorrimento della visualizzazione in modo che questo punto si trovi nell'angolo superiore sinistro della finestra. Questa funzione membro non deve essere chiamata se la visualizzazione è adatta.

##  <a name="setscaletofitsize"></a>  CScrollView::SetScaleToFitSize

Chiamare `SetScaleToFitSize` quando si desidera ridimensionare automaticamente le dimensioni del viewport alla finestra corrente.

```
void SetScaleToFitSize(SIZE sizeTotal);
```

### <a name="parameters"></a>Parametri

*sizeTotal*<br/>
Dimensioni orizzontali e verticali in cui è necessario ridimensionare la visualizzazione. La dimensione della visualizzazione a scorrimento viene misurata in unità logiche. La dimensione orizzontale è contenuta nel `cx` membro. Le dimensioni verticali sono contenute nel `cy` membro. Sia `cx` che`cy` devono essere maggiori o uguali a 0.

### <a name="remarks"></a>Note

Con le barre di scorrimento, può essere visibile solo una parte della visualizzazione logica in qualsiasi momento. Tuttavia, con la funzionalità di scalabilità verticale, la vista non dispone di barre di scorrimento e la visualizzazione logica viene allungata o compattata in modo da adattarsi esattamente all'area client della finestra. Quando la finestra viene ridimensionata, la visualizzazione disegna i dati su una nuova scala in base alla dimensione della finestra.

In genere si inserisce la chiamata a `SetScaleToFitSize` nell'override della funzione `OnInitialUpdate` membro della vista. Se non si desidera la scalabilità automatica, chiamare `SetScrollSizes` invece la funzione membro.

`SetScaleToFitSize`può essere usato per implementare un'operazione di "zoom da adattare". Usare `SetScrollSizes` per reinizializzare lo scorrimento.

`SetScaleToFitSize`presuppone che le dimensioni della finestra di visualizzazione siano state impostate. Se la dimensione della finestra di visualizzazione non è stata `SetScaleToFitSize` impostata quando viene chiamato il metodo, si otterrà un'asserzione. Per assicurarsi che non si verifichi questo problema, effettuare la chiamata seguente prima `SetScaleToFitSize`di chiamare:

[!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]

##  <a name="setscrollsizes"></a>  CScrollView::SetScrollSizes

Chiamare `SetScrollSizes` quando la visualizzazione sta per essere aggiornata.

```
void SetScrollSizes(
    int nMapMode,
    SIZE sizeTotal,
    const SIZE& sizePage = sizeDefault,
    const SIZE& sizeLine = sizeDefault);
```

### <a name="parameters"></a>Parametri

*nMapMode*<br/>
Modalità di mapping da impostare per questa visualizzazione. I valori possibili includono:

|Modalità di mapping|Unità logica|Esteso asse y positivo...|
|------------------|------------------|---------------------------------|
|MM_TEXT|1 pixel|Discesa|
|MM_HIMETRIC|0,01 mm|Verso l'alto|
|MM_TWIPS|1/1440 in|Verso l'alto|
|MM_HIENGLISH|0,001 in|Verso l'alto|
|MM_LOMETRIC|0,1 mm|Verso l'alto|
|MM_LOENGLISH|0,01 in|Verso l'alto|

Tutte queste modalità sono definite da Windows. Due modalità di mapping standard, MM_ISOTROPIC e MM_ANISOTROPIC, non vengono utilizzate `CScrollView`per. La libreria di classi fornisce `SetScaleToFitSize` la funzione membro per ridimensionare la visualizzazione alle dimensioni della finestra. Nella colonna 3 della tabella precedente viene descritto l'orientamento della coordinata.

*sizeTotal*<br/>
Dimensioni totali della visualizzazione a scorrimento. Il `cx` membro contiene l'extent orizzontale. Il `cy` membro contiene l'extent verticale. Le dimensioni sono in unità logiche. Sia `cx` che`cy` devono essere maggiori o uguali a 0.

*sizePage*<br/>
Gli importi orizzontali e verticali da scorrere in ogni direzione in risposta a un clic del mouse in un albero della barra di scorrimento. Il `cx` membro contiene la quantità orizzontale. Il `cy` membro contiene la quantità verticale.

*sizeLine*<br/>
Gli importi orizzontali e verticali da scorrere in ogni direzione in risposta a un clic del mouse in una freccia di scorrimento. Il `cx` membro contiene la quantità orizzontale. Il `cy` membro contiene la quantità verticale.

### <a name="remarks"></a>Note

Chiamarlo nell'override della `OnUpdate` funzione membro per modificare le caratteristiche di scorrimento quando, ad esempio, il documento viene inizialmente visualizzato o quando cambia dimensione.

Le informazioni sulle dimensioni vengono in genere ottenute dal documento associato della vista chiamando una funzione membro del documento, `GetMyDocSize`probabilmente chiamata, fornita con la classe del documento derivato. Il codice seguente illustra questo approccio:

[!code-cpp[NVC_MFCDocView#166](../../mfc/codesnippet/cpp/cscrollview-class_3.cpp)]

In alternativa, è possibile che a volte sia necessario impostare una dimensione fissa, come nel codice seguente:

[!code-cpp[NVC_MFCDocView#167](../../mfc/codesnippet/cpp/cscrollview-class_4.cpp)]

È necessario impostare la modalità di mapping su una qualsiasi delle modalità di mapping di Windows, ad eccezione di MM_ISOTROPIC o MM_ANISOTROPIC. Se si desidera utilizzare una modalità di mapping non vincolata, chiamare la `SetScaleToFitSize` funzione membro `SetScrollSizes`anziché.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#168](../../mfc/codesnippet/cpp/cscrollview-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#169](../../mfc/codesnippet/cpp/cscrollview-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[DIBLOOK di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)
