---
title: Classe CRectTracker
ms.date: 11/19/2018
f1_keywords:
- CRectTracker
- AFXEXT/CRectTracker
- AFXEXT/CRectTracker::CRectTracker
- AFXEXT/CRectTracker::AdjustRect
- AFXEXT/CRectTracker::Draw
- AFXEXT/CRectTracker::DrawTrackerRect
- AFXEXT/CRectTracker::GetHandleMask
- AFXEXT/CRectTracker::GetTrueRect
- AFXEXT/CRectTracker::HitTest
- AFXEXT/CRectTracker::NormalizeHit
- AFXEXT/CRectTracker::OnChangedRect
- AFXEXT/CRectTracker::SetCursor
- AFXEXT/CRectTracker::Track
- AFXEXT/CRectTracker::TrackRubberBand
- AFXEXT/CRectTracker::m_nHandleSize
- AFXEXT/CRectTracker::m_nStyle
- AFXEXT/CRectTracker::m_rect
- AFXEXT/CRectTracker::m_sizeMin
helpviewer_keywords:
- CRectTracker [MFC], CRectTracker
- CRectTracker [MFC], AdjustRect
- CRectTracker [MFC], Draw
- CRectTracker [MFC], DrawTrackerRect
- CRectTracker [MFC], GetHandleMask
- CRectTracker [MFC], GetTrueRect
- CRectTracker [MFC], HitTest
- CRectTracker [MFC], NormalizeHit
- CRectTracker [MFC], OnChangedRect
- CRectTracker [MFC], SetCursor
- CRectTracker [MFC], Track
- CRectTracker [MFC], TrackRubberBand
- CRectTracker [MFC], m_nHandleSize
- CRectTracker [MFC], m_nStyle
- CRectTracker [MFC], m_rect
- CRectTracker [MFC], m_sizeMin
ms.assetid: 99caa7f2-3c0d-4a42-bbee-e5d1d342d4ee
ms.openlocfilehash: 4d262ab5f88481d56de1c236effb66fcbf6a706a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368385"
---
# <a name="crecttracker-class"></a>Classe CRectTracker

Consente a un elemento di essere visualizzato, spostato e ridimensionato in modo diverso.

## <a name="syntax"></a>Sintassi

```
class CRectTracker
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRectTracker::CRectTracker](#crecttracker)|Costruisce un oggetto `CRectTracker`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRectTracker::AdjustRect](#adjustrect)|Chiamato quando il rettangolo viene ridimensionato.|
|[CRectTracker::Draw](#draw)|Esegue il rendering del rettangolo.|
|[CRectTracker::DrawTrackerRect](#drawtrackerrect)|Chiamato quando si disegna il bordo di un `CRectTracker` oggetto.|
|[CRectTracker::GetHandleMask](#gethandlemask)|Chiamato per ottenere la `CRectTracker` maschera delle maniglie di ridimensionamento di un elemento.|
|[CRectTracker::GetTrueRect](#gettruerect)|Restituisce la larghezza e l'altezza del rettangolo, incluse le maniglie di ridimensionamento.|
|[CRectTracker::HitTest](#hittest)|Restituisce la posizione corrente del `CRectTracker` cursore correlato all'oggetto.|
|[CRectTracker::NormalizeHit](#normalizehit)|Normalizza un codice di hit test.|
|[CRectTracker::OnChangedRect](#onchangedrect)|Chiamato quando il rettangolo è stato ridimensionato o spostato.|
|[CRectTracker::SetCursor](#setcursor)|Imposta il cursore, a seconda della sua posizione sul rettangolo.|
|[CRectTracker::Traccia](#track)|Consente all'utente di modificare il rettangolo.|
|[CRectTracker::TrackRubberBand](#trackrubberband)|Consente all'utente di "elastico" la selezione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRectTracker::m_nHandleSize](#m_nhandlesize)|Determina le dimensioni delle maniglie di ridimensionamento.|
|[CRectTracker::m_nStyle](#m_nstyle)|Stile/i corrente del tracker.|
|[CRectTracker::m_rect](#m_rect)|Posizione corrente (in pixel) del rettangolo.|
|[CRectTracker::m_sizeMin](#m_sizemin)|Determina la larghezza e l'altezza minime del rettangolo.|

## <a name="remarks"></a>Osservazioni

`CRectTracker`non dispone di una classe base.

Anche `CRectTracker` se la classe è progettata per consentire all'utente di interagire con gli elementi OLE utilizzando un'interfaccia grafica, il relativo utilizzo non è limitato alle applicazioni abilitate per OLE. Può essere utilizzato ovunque sia necessaria un'interfaccia utente di questo tipo.

`CRectTracker`i bordi possono essere linee continue o punteggiate. All'elemento può essere assegnato un bordo tratteggiato o sovrapposto con un motivo tratteggiato per indicare diversi stati dell'elemento. È possibile posizionare otto quadratini di ridimensionamento sul bordo esterno o interno dell'elemento. Per una spiegazione dei quadratini di ridimensionamento, vedere [GetHandleMask](#gethandlemask). Infine, `CRectTracker` un oggetto consente di modificare l'orientamento di un elemento durante il ridimensionamento.

Per `CRectTracker`utilizzare , `CRectTracker` costruire un oggetto e specificare gli stati di visualizzazione da inizializzare. È quindi possibile utilizzare questa interfaccia per fornire all'utente un feedback `CRectTracker` visivo sullo stato corrente dell'elemento OLE associato all'oggetto.

Per ulteriori informazioni `CRectTracker`sull'utilizzo di , consultate l'articolo [Trackers](../../mfc/trackers.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CRectTracker`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="crecttrackeradjustrect"></a><a name="adjustrect"></a>CRectTracker::AdjustRect

Chiamato dal framework quando il rettangolo di rilevamento viene ridimensionato utilizzando un quadratino di ridimensionamento.

```
virtual void AdjustRect(
    int nHandle,
    LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*nHandle*<br/>
Indice dell'handle utilizzato.

*Lprect*<br/>
Puntatore alla dimensione corrente del rettangolo. La dimensione di un rettangolo è data dalla sua altezza e larghezza.

### <a name="remarks"></a>Osservazioni

Il comportamento predefinito di questa funzione consente all'orientamento del rettangolo di cambiare solo quando `Track` e `TrackRubberBand` vengono chiamati con l'inversione consentita.

Eseguire l'override di questa funzione per controllare la regolazione del rettangolo di rilevamento durante un'operazione di trascinamento. Un metodo consiste nel regolare le coordinate specificate da *lpRect* prima della restituzione.

È possibile implementare funzionalità `CRectTracker`speciali non supportate direttamente da , ad esempio snap-to-grid o keep-aspect-ratio, eseguendo l'override di questa funzione.

## <a name="crecttrackercrecttracker"></a><a name="crecttracker"></a>CRectTracker::CRectTracker

Crea e inizializza un oggetto `CRectTracker`.

```
CRectTracker();

CRectTracker(
    LPCRECT lpSrcRect,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*LpSrcRect*<br/>
Coordinate dell'oggetto rettangolo.

*nStyle*<br/>
Specifica lo stile `CRectTracker` dell'oggetto. Sono supportati gli stili seguenti:

- `CRectTracker::solidLine`Utilizzare una linea continua per il bordo del rettangolo.

- `CRectTracker::dottedLine`Utilizzare una linea tratteggiata per il bordo del rettangolo.

- `CRectTracker::hatchedBorder`Utilizzare un motivo tratteggiato per il bordo del rettangolo.

- `CRectTracker::resizeInside`Ridimensionare le maniglie situate all'interno del rettangolo.

- `CRectTracker::resizeOutside`Ridimensionare le maniglie situate all'esterno del rettangolo.

- `CRectTracker::hatchInside`Il motivo tratteggiato copre l'intero rettangolo.

### <a name="remarks"></a>Osservazioni

Il costruttore predefinito `CRectTracker` inizializza l'oggetto con i valori di *lpSrcRect* e inizializza altri valori predefiniti del sistema. Se l'oggetto viene creato `m_rect` senza `m_nStyle` parametri, i membri dati e non sono inizializzati.

## <a name="crecttrackerdraw"></a><a name="draw"></a>CRectTracker::Draw

Chiamare questa funzione per disegnare le linee esterne del rettangolo e l'area interna.

```
void Draw(CDC* pDC) const;
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo in cui disegnare.

### <a name="remarks"></a>Osservazioni

Lo stile del tracker determina la modalità di elaborazione del disegno. Vedere il `CRectTracker` costruttore per ulteriori informazioni sugli stili disponibili.

## <a name="crecttrackerdrawtrackerrect"></a><a name="drawtrackerrect"></a>CRectTracker::DrawTrackerRect

Chiamato dal framework ogni volta che la posizione `Track` `TrackRubberBand` del tracker è stata modificata all'interno della funzione membro o .

```
virtual void DrawTrackerRect(
    LPCRECT lpRect,
    CWnd* pWndClipTo,
    CDC* pDC,
    CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Puntatore `RECT` all'oggetto che contiene il rettangolo da disegnare.

*pWndClipTo (informazioni in stato in stato in cui è inuso)*<br/>
Puntatore alla finestra da utilizzare per ritagliare il rettangolo.

*pDC*<br/>
Puntatore al contesto di dispositivo in cui disegnare.

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra in cui verrà eseguito il disegno.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita `CDC::DrawFocusRect`effettua una chiamata a , che disegna un rettangolo punteggiato.

Eseguire l'override di questa funzione per fornire feedback diversi durante l'operazione di rilevamento.

## <a name="crecttrackergethandlemask"></a><a name="gethandlemask"></a>CRectTracker::GetHandleMask

Il framework chiama questa funzione membro per recuperare la maschera per gli handle di ridimensionamento di un rettangolo.

```
virtual UINT GetHandleMask() const;
```

### <a name="return-value"></a>Valore restituito

Maschera delle `CRectTracker` maniglie di ridimensionamento di un elemento.

### <a name="remarks"></a>Osservazioni

I quadratini di ridimensionamento vengono visualizzati sui lati e sugli angoli del rettangolo e consentono all'utente di controllare la forma e le dimensioni del rettangolo.

Un rettangolo ha 8 quadratini di ridimensionamento numerati da 0 a 7. Ogni quadratino di ridimensionamento è rappresentato da un bit nella maschera; il valore di tale bit è 2 *n*, dove *n* è il numero della maniglia di ridimensionamento. I bit 0-3 corrispondono alle maniglie di ridimensionamento degli angoli, a partire dall'angolo superiore sinistro che si muove in senso orario. I bit 4-7 corrispondono alle maniglie di ridimensionamento laterali a partire dalla parte superiore in senso orario. La figura seguente mostra le maniglie di ridimensionamento di un rettangolo e i numeri e i valori delle maniglie di ridimensionamento corrispondenti:

![Ridimensionare i numeri delle maniglie](../../mfc/reference/media/vc35dp1.gif "Numeri dei quadratini di ridimensionamento")

L'implementazione `GetHandleMask` predefinita di restituisce la maschera dei bit in modo che vengano visualizzati i quadratini di ridimensionamento. Se il bit singolo è attivato, verrà disegnato il quadratino di ridimensionamento corrispondente.

Eseguire l'override di questa funzione membro per nascondere o visualizzare le maniglie di ridimensionamento indicate.

## <a name="crecttrackergettruerect"></a><a name="gettruerect"></a>CRectTracker::GetTrueRect

Chiamare questa funzione per recuperare le coordinate del rettangolo.

```
void GetTrueRect(LPRECT lpTrueRect) const;
```

### <a name="parameters"></a>Parametri

*LpTrueRect*<br/>
Puntatore `RECT` alla struttura che conterrà `CRectTracker` le coordinate del dispositivo dell'oggetto.

### <a name="remarks"></a>Osservazioni

Le dimensioni del rettangolo includono l'altezza e la larghezza di qualsiasi quadratino di ridimensionamento situato sul bordo esterno. Al ritorno, *lpTrueRect* è sempre un rettangolo normalizzato nelle coordinate del dispositivo.

## <a name="crecttrackerhittest"></a><a name="hittest"></a>CRectTracker::HitTest

Chiamare questa funzione per scoprire se l'utente ha afferrato un quadratino di ridimensionamento.

```
int HitTest(CPoint point) const;
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
Punto, in coordinate del dispositivo, da testare.

### <a name="return-value"></a>Valore restituito

Il valore restituito è basato `CRectTracker::TrackerHit` sul tipo enumerato e può avere uno dei valori seguenti:

- `CRectTracker::hitNothing` -1

- `CRectTracker::hitTopLeft` 0

- `CRectTracker::hitTopRight`1

- `CRectTracker::hitBottomRight`2

- `CRectTracker::hitBottomLeft`3

- `CRectTracker::hitTop`4

- `CRectTracker::hitRight`5

- `CRectTracker::hitBottom`6

- `CRectTracker::hitLeft`7

- `CRectTracker::hitMiddle`8

## <a name="crecttrackerm_nhandlesize"></a><a name="m_nhandlesize"></a>CRectTracker::m_nHandleSize

Dimensioni, in pixel, `CRectTracker` delle maniglie di ridimensionamento.

```
int m_nHandleSize;
```

### <a name="remarks"></a>Osservazioni

Inizializzato con il valore di sistema predefinito.

## <a name="crecttrackerm_rect"></a><a name="m_rect"></a>CRectTracker::m_rect

Posizione corrente del rettangolo nelle coordinate client (pixel).

```
CRect m_rect;
```

## <a name="crecttrackerm_sizemin"></a><a name="m_sizemin"></a>CRectTracker::m_sizeMin

Dimensione minima del rettangolo.

```
CSize m_sizeMin;
```

### <a name="remarks"></a>Osservazioni

Entrambi i `cx` valori `cy`predefiniti, e , vengono calcolati dal valore di sistema predefinito per la larghezza del bordo. Questo membro dati viene `AdjustRect` utilizzato solo dalla funzione membro.

## <a name="crecttrackerm_nstyle"></a><a name="m_nstyle"></a>CRectTracker::m_nStyle

Stile corrente del rettangolo.

```
UINT m_nStyle;
```

### <a name="remarks"></a>Osservazioni

Vedere [CRectTracker::CRectTracker](#crecttracker) per un elenco di possibili stili.

## <a name="crecttrackernormalizehit"></a><a name="normalizehit"></a>CRectTracker::NormalizeHit

Chiamare questa funzione per convertire un handle potenzialmente invertito.

```
int NormalizeHit(int nHandle) const;
```

### <a name="parameters"></a>Parametri

*nHandle*<br/>
Maniglia selezionata dall'utente.

### <a name="return-value"></a>Valore restituito

Indice dell'handle normalizzato.

### <a name="remarks"></a>Osservazioni

Quando `CRectTracker::Track` `CRectTracker::TrackRubberBand` o viene chiamato con l'inversione consentita, è possibile che il rettangolo venga invertito sull'asse x, sull'asse y o su entrambi. In questo `HitTest` caso, restituirà le maniglie che sono anche invertite rispetto al rettangolo. Ciò non è appropriato per il feedback del cursore perché dipende dalla posizione dello schermo del rettangolo, non dalla parte della struttura di dati del rettangolo che verrà modificata.

## <a name="crecttrackeronchangedrect"></a><a name="onchangedrect"></a>CRectTracker::OnChangedRect

Chiamato dal framework ogni volta che il `Track`rettangolo del tracker è stato modificato durante una chiamata a .

```
virtual void OnChangedRect(const CRect& rectOld);
```

### <a name="parameters"></a>Parametri

*rectOld*<br/>
Contiene le coordinate del `CRectTracker` dispositivo precedente dell'oggetto.

### <a name="remarks"></a>Osservazioni

Al momento questa funzione viene chiamata, `DrawTrackerRect` tutti i feedback disegnati con è stato rimosso. L'implementazione predefinita di questa funzione non esegue alcuna operazione.

Eseguire l'override di questa funzione quando si desidera eseguire azioni dopo il redimensionare il rettangolo.

## <a name="crecttrackersetcursor"></a><a name="setcursor"></a>CRectTracker::SetCursor

Chiamare questa funzione per modificare la forma `CRectTracker` del cursore mentre si trova sull'area dell'oggetto.

```
BOOL SetCursor(
    CWnd* pWnd,
    UINT nHitTest) const;
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra che attualmente contiene il cursore.

*nHitTest (informazioni in base al test)*<br/>
Risultati dell'hit test precedente, dal messaggio di WM_SETCURSOR.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'hit precedente era sopra il rettangolo del tracker; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione dall'interno della funzione della finestra `OnSetCursor`che gestisce il messaggio WM_SETCURSOR (in genere ).

## <a name="crecttrackertrack"></a><a name="track"></a>CRectTracker::Traccia

Chiamare questa funzione per visualizzare l'interfaccia utente per il ridimensionamento del rettangolo.

```
BOOL Track(
    CWnd* pWnd,
    CPoint point,
    BOOL bAllowInvert = FALSE,
    CWnd* pWndClipTo = NULL);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Oggetto finestra che contiene il rettangolo.

*Punto*<br/>
Coordinate del dispositivo della posizione corrente del mouse rispetto all'area client.

*bConsentireInvert*<br/>
Se TRUE, il rettangolo può essere invertito lungo l'asse x o l'asse y; in caso contrario, FALSE.

*pWndClipTo (informazioni in stato in stato in cui è inuso)*<br/>
Finestra a cui verranno ritagliate le operazioni di disegno. Se NULL, *pWnd* viene utilizzato come rettangolo di ritaglio.

### <a name="return-value"></a>Valore restituito

Se viene premuto il tasto ESC, il processo di tracciamento viene interrotto, il rettangolo memorizzato nel tracker non viene modificato e viene restituito 0. Se viene eseguito il commit della modifica, spostando il mouse e rilasciando il pulsante sinistro del mouse, la nuova posizione e/o la dimensione viene registrata nel rettangolo del tracker e non è zero.

### <a name="remarks"></a>Osservazioni

Viene in genere chiamato dall'interno della `WM_LBUTTONDOWN` funzione dell'applicazione che gestisce il messaggio (in genere `OnLButtonDown`).

Questa funzione acquisirà il mouse fino a quando l'utente rilascia il pulsante sinistro del mouse, preme il tasto ESC o preme il pulsante destro del mouse. Quando l'utente sposta il cursore del `DrawTrackerRect` `OnChangedRect`mouse, il feedback viene aggiornato chiamando e .

Se *bAllowInvert* è TRUE, il rettangolo di rilevamento può essere invertito sull'asse x o y.

## <a name="crecttrackertrackrubberband"></a><a name="trackrubberband"></a>CRectTracker::TrackRubberBand

Chiamare questa funzione per eseguire la selezione elastica.

```
BOOL TrackRubberBand(
    CWnd* pWnd,
    CPoint point,
    BOOL bAllowInvert = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Oggetto finestra che contiene il rettangolo.

*Punto*<br/>
Coordinate del dispositivo della posizione corrente del mouse rispetto all'area client.

*bConsentireInvert*<br/>
Se TRUE, il rettangolo può essere invertito lungo l'asse x o l'asse y; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il mouse è stato spostato e il rettangolo non è vuoto; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Viene in genere chiamato dall'interno della funzione dell'applicazione che gestisce il messaggio WM_LBUTTONDOWN (in genere `OnLButtonDown`).

Questa funzione acquisirà il mouse fino a quando l'utente rilascia il pulsante sinistro del mouse, preme il tasto ESC o preme il pulsante destro del mouse. Quando l'utente sposta il cursore del `DrawTrackerRect` `OnChangedRect`mouse, il feedback viene aggiornato chiamando e .

Il rilevamento viene eseguito con una selezione di tipo elastico dalla maniglia inferiore destra. Se l'inversione è consentita, il rettangolo può essere ridimensionato trascinando verso l'alto e verso sinistra o verso il basso e verso destra.

## <a name="see-also"></a>Vedere anche

[Esempio MFC TRACKER](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC DRAWCLI](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleResizeBar](../../mfc/reference/coleresizebar-class.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)
