---
description: 'Altre informazioni su: classe CRectTracker'
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
ms.openlocfilehash: 8406b6b45a99ca2e1816cb650f243fcea2db8ddc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343020"
---
# <a name="crecttracker-class"></a>Classe CRectTracker

Consente la visualizzazione, lo spostamento e il ridimensionamento di un elemento in modi diversi.

## <a name="syntax"></a>Sintassi

```
class CRectTracker
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CRectTracker:: CRectTracker](#crecttracker)|Costruisce un oggetto `CRectTracker`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRectTracker:: AdjustRect](#adjustrect)|Chiamato quando il rettangolo viene ridimensionato.|
|[CRectTracker::D RAW](#draw)|Esegue il rendering del rettangolo.|
|[CRectTracker::D rawTrackerRect](#drawtrackerrect)|Chiamato quando si disegna il bordo di un `CRectTracker` oggetto.|
|[CRectTracker:: GetHandleMask](#gethandlemask)|Chiamato per ottenere la maschera degli `CRectTracker` handle di ridimensionamento di un elemento.|
|[CRectTracker:: GetTrueRect](#gettruerect)|Restituisce la larghezza e l'altezza del rettangolo, inclusi gli handle di ridimensionamento.|
|[CRectTracker:: HitTest](#hittest)|Restituisce la posizione corrente del cursore correlato all' `CRectTracker` oggetto.|
|[CRectTracker:: NormalizeHit](#normalizehit)|Normalizza un codice di hit test.|
|[CRectTracker:: OnChangedRect](#onchangedrect)|Chiamato quando il rettangolo è stato ridimensionato o spostato.|
|[CRectTracker:: secursor](#setcursor)|Imposta il cursore, a seconda della posizione sul rettangolo.|
|[CRectTracker:: Track](#track)|Consente all'utente di modificare il rettangolo.|
|[CRectTracker:: TrackRubberBand](#trackrubberband)|Consente all'utente di selezionare la selezione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CRectTracker:: m_nHandleSize](#m_nhandlesize)|Determina la dimensione dei quadratini di ridimensionamento.|
|[CRectTracker:: m_nStyle](#m_nstyle)|Stili correnti dello strumento di rilevamento.|
|[CRectTracker:: m_rect](#m_rect)|Posizione corrente (in pixel) del rettangolo.|
|[CRectTracker:: m_sizeMin](#m_sizemin)|Determina la larghezza e l'altezza minime del rettangolo.|

## <a name="remarks"></a>Commenti

`CRectTracker` non dispone di una classe base.

Sebbene la `CRectTracker` classe sia progettata per consentire all'utente di interagire con gli elementi OLE tramite un'interfaccia grafica, il suo utilizzo non è limitato alle applicazioni abilitate per OLE. Può essere usato ovunque sia necessaria un'interfaccia utente.

`CRectTracker` i bordi possono essere linee solide o punteggiate. All'elemento può essere assegnato un bordo tratteggiato o sovrapposto con un motivo tratteggiato per indicare stati diversi dell'elemento. È possibile inserire otto quadratini di ridimensionamento all'esterno o al bordo interno dell'elemento. Per una spiegazione degli handle di ridimensionamento, vedere [GetHandleMask](#gethandlemask). Infine, un oggetto `CRectTracker` consente di modificare l'orientamento di un elemento durante il ridimensionamento.

Per utilizzare `CRectTracker` , costruire un `CRectTracker` oggetto e specificare gli Stati di visualizzazione inizializzati. È quindi possibile usare questa interfaccia per fornire all'utente un feedback visivo sullo stato corrente dell'elemento OLE associato all' `CRectTracker` oggetto.

Per ulteriori informazioni sull'utilizzo di `CRectTracker` , vedere l'articolo [Trackers](../../mfc/trackers.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CRectTracker`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

## <a name="crecttrackeradjustrect"></a><a name="adjustrect"></a> CRectTracker:: AdjustRect

Chiamata eseguita dal framework quando il rettangolo di rilevamento viene ridimensionato utilizzando un handle di ridimensionamento.

```
virtual void AdjustRect(
    int nHandle,
    LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*nHandle*<br/>
Indice dell'handle utilizzato.

*lpRect*<br/>
Puntatore alla dimensione corrente del rettangolo. (La dimensione di un rettangolo viene fornita in base all'altezza e alla larghezza).

### <a name="remarks"></a>Commenti

Il comportamento predefinito di questa funzione consente la modifica dell'orientamento del rettangolo solo quando `Track` e `TrackRubberBand` vengono chiamati con l'inversione consentita.

Eseguire l'override di questa funzione per controllare la regolazione del rettangolo di rilevamento durante un'operazione di trascinamento. Un metodo consiste nel modificare le coordinate specificate da *lpRect* prima di restituire.

Le funzionalità speciali che non sono supportate direttamente da `CRectTracker` , ad esempio lo snap-to-Grid o la funzione Keep-aspect-ratio, possono essere implementate eseguendo l'override di questa funzione.

## <a name="crecttrackercrecttracker"></a><a name="crecttracker"></a> CRectTracker:: CRectTracker

Crea e inizializza un oggetto `CRectTracker`.

```
CRectTracker();

CRectTracker(
    LPCRECT lpSrcRect,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*lpSrcRect*<br/>
Coordinate dell'oggetto rettangolo.

*nStyle*<br/>
Specifica lo stile dell' `CRectTracker` oggetto. Sono supportati gli stili seguenti:

- `CRectTracker::solidLine` Usare una linea continua per il bordo del rettangolo.

- `CRectTracker::dottedLine` Usare una linea tratteggiata per il bordo del rettangolo.

- `CRectTracker::hatchedBorder` Utilizzare un modello tratteggiato per il bordo del rettangolo.

- `CRectTracker::resizeInside` Ridimensionare gli handle posizionati all'interno del rettangolo.

- `CRectTracker::resizeOutside` Ridimensionare gli handle situati all'esterno del rettangolo.

- `CRectTracker::hatchInside` Il modello tratteggiato copre l'intero rettangolo.

### <a name="remarks"></a>Commenti

Il costruttore predefinito inizializza l' `CRectTracker` oggetto con i valori di *lpSrcRect* e inizializza altre dimensioni per le impostazioni predefinite di sistema. Se l'oggetto viene creato senza parametri, i `m_rect` `m_nStyle` membri dati e non vengono inizializzati.

## <a name="crecttrackerdraw"></a><a name="draw"></a> CRectTracker::D RAW

Chiamare questa funzione per creare le linee esterne e l'area interna del rettangolo.

```cpp
void Draw(CDC* pDC) const;
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo su cui creare.

### <a name="remarks"></a>Commenti

Lo stile dello strumento di rilevamento determina il modo in cui viene eseguito il disegno. `CRectTracker`Per ulteriori informazioni sugli stili disponibili, vedere il costruttore.

## <a name="crecttrackerdrawtrackerrect"></a><a name="drawtrackerrect"></a> CRectTracker::D rawTrackerRect

Chiamata eseguita dal Framework ogni volta che la posizione dello strumento di rilevamento viene modificata all'interno della `Track` `TrackRubberBand` funzione membro o.

```
virtual void DrawTrackerRect(
    LPCRECT lpRect,
    CWnd* pWndClipTo,
    CDC* pDC,
    CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Puntatore all'oggetto `RECT` che contiene il rettangolo da creare.

*pWndClipTo*<br/>
Puntatore alla finestra da utilizzare per il ritaglio del rettangolo.

*pDC*<br/>
Puntatore al contesto di dispositivo su cui creare.

*pWnd*<br/>
Puntatore alla finestra in cui si verificherà il disegno.

### <a name="remarks"></a>Commenti

L'implementazione predefinita effettua una chiamata a `CDC::DrawFocusRect` , che disegna un rettangolo tratteggiato.

Eseguire l'override di questa funzione per fornire commenti e suggerimenti diversi durante l'operazione di rilevamento.

## <a name="crecttrackergethandlemask"></a><a name="gethandlemask"></a> CRectTracker:: GetHandleMask

Il Framework chiama questa funzione membro per recuperare la maschera per gli handle di ridimensionamento di un rettangolo.

```
virtual UINT GetHandleMask() const;
```

### <a name="return-value"></a>Valore restituito

Maschera dei `CRectTracker` quadratini di ridimensionamento di un elemento.

### <a name="remarks"></a>Commenti

Gli handle di ridimensionamento vengono visualizzati sui lati e sugli angoli del rettangolo e consentono all'utente di controllare la forma e le dimensioni del rettangolo.

Un rettangolo ha 8 handle di ridimensionamento numerati 0-7. Ogni handle di ridimensionamento è rappresentato da un bit nella maschera; il valore di tale bit è 2 ^ *n*, dove *n* è il numero di handle di ridimensionamento. BITS 0-3 corrisponde ai quadratini di ridimensionamento dell'angolo, a partire dalla parte superiore sinistra in senso orario. BITS 4-7 corrisponde ai quadratini di ridimensionamento laterali a partire dal primo passaggio in senso orario. Nella figura seguente vengono mostrati gli handle di ridimensionamento di un rettangolo e i valori e i numeri di handle di ridimensionamento corrispondenti:

![Ridimensionare i numeri di handle](../../mfc/reference/media/vc35dp1.gif "Numeri dei quadratini di ridimensionamento")

L'implementazione predefinita di `GetHandleMask` restituisce la maschera dei bit in modo che vengano visualizzati gli handle di ridimensionamento. Se il bit singolo è on, viene disegnato il quadratino di ridimensionamento corrispondente.

Eseguire l'override di questa funzione membro per nascondere o visualizzare gli handle di ridimensionamento indicati.

## <a name="crecttrackergettruerect"></a><a name="gettruerect"></a> CRectTracker:: GetTrueRect

Chiamare questa funzione per recuperare le coordinate del rettangolo.

```cpp
void GetTrueRect(LPRECT lpTrueRect) const;
```

### <a name="parameters"></a>Parametri

*lpTrueRect*<br/>
Puntatore alla `RECT` struttura che conterrà le coordinate del dispositivo dell' `CRectTracker` oggetto.

### <a name="remarks"></a>Commenti

Le dimensioni del rettangolo includono l'altezza e la larghezza di tutti gli handle di ridimensionamento presenti sul bordo esterno. Al momento della restituzione, *lpTrueRect* è sempre un rettangolo normalizzato nelle coordinate del dispositivo.

## <a name="crecttrackerhittest"></a><a name="hittest"></a> CRectTracker:: HitTest

Chiamare questa funzione per verificare se l'utente ha afferrato un handle di ridimensionamento.

```
int HitTest(CPoint point) const;
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Punto, in coordinate del dispositivo, da testare.

### <a name="return-value"></a>Valore restituito

Il valore restituito è basato sul tipo enumerato `CRectTracker::TrackerHit` e può avere uno dei valori seguenti:

- `CRectTracker::hitNothing` -1

- `CRectTracker::hitTopLeft` 0

- `CRectTracker::hitTopRight` 1

- `CRectTracker::hitBottomRight` 2

- `CRectTracker::hitBottomLeft` 3

- `CRectTracker::hitTop` 4

- `CRectTracker::hitRight` 5

- `CRectTracker::hitBottom` 6

- `CRectTracker::hitLeft` 7

- `CRectTracker::hitMiddle` 8

## <a name="crecttrackerm_nhandlesize"></a><a name="m_nhandlesize"></a> CRectTracker:: m_nHandleSize

Dimensione, in pixel, dei `CRectTracker` quadratini di ridimensionamento.

```
int m_nHandleSize;
```

### <a name="remarks"></a>Commenti

Inizializzazione con il valore di sistema predefinito.

## <a name="crecttrackerm_rect"></a><a name="m_rect"></a> CRectTracker:: m_rect

Posizione corrente del rettangolo nelle coordinate del client (pixel).

```
CRect m_rect;
```

## <a name="crecttrackerm_sizemin"></a><a name="m_sizemin"></a> CRectTracker:: m_sizeMin

Dimensioni minime del rettangolo.

```
CSize m_sizeMin;
```

### <a name="remarks"></a>Commenti

Entrambi i valori predefiniti, `cx` e `cy` , vengono calcolati in base al valore di sistema predefinito per lo spessore del bordo. Questo membro dati viene utilizzato solo dalla `AdjustRect` funzione membro.

## <a name="crecttrackerm_nstyle"></a><a name="m_nstyle"></a> CRectTracker:: m_nStyle

Stile corrente del rettangolo.

```
UINT m_nStyle;
```

### <a name="remarks"></a>Commenti

Per un elenco di stili possibili, vedere [CRectTracker:: CRectTracker](#crecttracker) .

## <a name="crecttrackernormalizehit"></a><a name="normalizehit"></a> CRectTracker:: NormalizeHit

Chiamare questa funzione per convertire un handle potenzialmente invertito.

```
int NormalizeHit(int nHandle) const;
```

### <a name="parameters"></a>Parametri

*nHandle*<br/>
Handle selezionato dall'utente.

### <a name="return-value"></a>Valore restituito

Indice dell'handle normalizzato.

### <a name="remarks"></a>Commenti

Quando `CRectTracker::Track` `CRectTracker::TrackRubberBand` viene chiamato o con l'inversione consentita, è possibile che il rettangolo venga invertito sull'asse x, sull'asse y o su entrambi. Quando si verifica questa situazione, `HitTest` restituirà handle che vengono invertiti anche rispetto al rettangolo. Questo non è appropriato per il disegno del feedback del cursore perché il feedback dipende dalla posizione dello schermo del rettangolo, non dalla parte della struttura di dati del rettangolo che verrà modificata.

## <a name="crecttrackeronchangedrect"></a><a name="onchangedrect"></a> CRectTracker:: OnChangedRect

Chiamata eseguita dal Framework ogni volta che il rettangolo del Tracker viene modificato durante una chiamata a `Track` .

```
virtual void OnChangedRect(const CRect& rectOld);
```

### <a name="parameters"></a>Parametri

*rectOld*<br/>
Contiene le coordinate del dispositivo obsolete dell' `CRectTracker` oggetto.

### <a name="remarks"></a>Commenti

Al momento della chiamata a questa funzione, tutti i commenti creati con `DrawTrackerRect` sono stati rimossi. L'implementazione predefinita di questa funzione non esegue alcuna operazione.

Eseguire l'override di questa funzione quando si desidera eseguire qualsiasi azione dopo che il rettangolo è stato ridimensionato.

## <a name="crecttrackersetcursor"></a><a name="setcursor"></a> CRectTracker:: secursor

Chiamare questa funzione per modificare la forma del cursore mentre è sull' `CRectTracker` area dell'oggetto.

```
BOOL SetCursor(
    CWnd* pWnd,
    UINT nHitTest) const;
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra che attualmente contiene il cursore.

*nHitTest*<br/>
Risultati dell'hit test precedente, dal messaggio di WM_SETCURSOR.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'hit precedente è stato superato il rettangolo del Tracker; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dall'interno della funzione della finestra che gestisce il messaggio di WM_SETCURSOR (in genere `OnSetCursor` ).

## <a name="crecttrackertrack"></a><a name="track"></a> CRectTracker:: Track

Chiamare questa funzione per visualizzare l'interfaccia utente per il ridimensionamento del rettangolo.

```
BOOL Track(
    CWnd* pWnd,
    CPoint point,
    BOOL bAllowInvert = FALSE,
    CWnd* pWndClipTo = NULL);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Oggetto finestra che contiene il rettangolo.

*punto*<br/>
Coordinate del dispositivo della posizione corrente del mouse rispetto all'area client.

*bAllowInvert*<br/>
Se TRUE, il rettangolo può essere invertito lungo l'asse x o l'asse y. in caso contrario, FALSE.

*pWndClipTo*<br/>
Finestra in cui verranno ritagliate le operazioni di disegno. Se è NULL, *pWnd* viene usato come rettangolo di ridimensionamento.

### <a name="return-value"></a>Valore restituito

Se viene premuto il tasto ESC, il processo di rilevamento viene interrotto, il rettangolo archiviato in Tracker non viene modificato e viene restituito 0. Se viene eseguito il commit della modifica, spostando il mouse e rilasciando il pulsante sinistro del mouse, la nuova posizione e/o la dimensione vengono registrate nel rettangolo del Tracker e viene restituito un valore diverso da zero.

### <a name="remarks"></a>Commenti

Questa operazione viene in genere chiamata dall'interno della funzione dell'applicazione che gestisce il `WM_LBUTTONDOWN` messaggio (in genere `OnLButtonDown` ).

Questa funzione acquisisce il mouse fino a quando l'utente rilascia il pulsante sinistro del mouse, preme il tasto ESC oppure preme il pulsante destro del mouse. Quando l'utente sposta il cursore del mouse, il feedback viene aggiornato chiamando `DrawTrackerRect` e `OnChangedRect` .

Se *bAllowInvert* è true, il rettangolo di rilevamento può essere invertito sull'asse x o sull'asse y.

## <a name="crecttrackertrackrubberband"></a><a name="trackrubberband"></a> CRectTracker:: TrackRubberBand

Chiamare questa funzione per eseguire la selezione di una banda di gomma.

```
BOOL TrackRubberBand(
    CWnd* pWnd,
    CPoint point,
    BOOL bAllowInvert = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Oggetto finestra che contiene il rettangolo.

*punto*<br/>
Coordinate del dispositivo della posizione corrente del mouse rispetto all'area client.

*bAllowInvert*<br/>
Se TRUE, il rettangolo può essere invertito lungo l'asse x o l'asse y. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il mouse è stato spostato e il rettangolo non è vuoto. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Viene in genere chiamato dall'interno della funzione dell'applicazione che gestisce il messaggio di WM_LBUTTONDOWN (in genere `OnLButtonDown` ).

Questa funzione acquisisce il mouse fino a quando l'utente rilascia il pulsante sinistro del mouse, preme il tasto ESC oppure preme il pulsante destro del mouse. Quando l'utente sposta il cursore del mouse, il feedback viene aggiornato chiamando `DrawTrackerRect` e `OnChangedRect` .

Il rilevamento viene eseguito con una selezione del tipo di banda di gomma dall'handle inferiore destro. Se l'inversione è consentita, il rettangolo può essere ridimensionato trascinando verso l'alto e verso sinistra o verso il basso e verso destra.

## <a name="see-also"></a>Vedi anche

[Tracker di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[DRAWCLI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleResizeBar](../../mfc/reference/coleresizebar-class.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)
