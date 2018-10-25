---
title: Classe CRectTracker | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 98da12276e21a9619468cea3bbaba0190ac54e63
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50056867"
---
# <a name="crecttracker-class"></a>CRectTracker (classe)

Consente a un elemento da visualizzare, spostato e ridimensionato in modi diversi.

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
|[CRectTracker::DrawTrackerRect](#drawtrackerrect)|Chiamato per disegnare il bordo di un `CRectTracker` oggetto.|
|[CRectTracker::GetHandleMask](#gethandlemask)|Chiamata eseguita per ottenere la maschera di un `CRectTracker` quadratini di ridimensionamento dell'elemento.|
|[CRectTracker::GetTrueRect](#gettruerect)|Restituisce la larghezza e altezza del rettangolo, inclusi i quadratini di ridimensionamento.|
|[CRectTracker:: HitTest](#hittest)|Restituisce la posizione corrente del cursore correlato al `CRectTracker` oggetto.|
|[CRectTracker::NormalizeHit](#normalizehit)|Normalizza un codice di hit test.|
|[CRectTracker::OnChangedRect](#onchangedrect)|Chiamato quando il rettangolo è stato ridimensionato o spostato.|
|[CRectTracker:: SetCursor](#setcursor)|Imposta il cursore, in base alla propria posizione nel rettangolo.|
|[CRectTracker::Track](#track)|Consente all'utente di manipolare il rettangolo.|
|[CRectTracker](#trackrubberband)|Consente all'utente "rettangolo" la selezione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRectTracker::m_nHandleSize](#m_nhandlesize)|Determina le dimensioni dei quadratini di ridimensionamento.|
|[CRectTracker::m_nStyle](#m_nstyle)|Style(s) corrente dello strumento di rilevamento.|
|[CRectTracker::](#m_rect)|Posizione corrente, in pixel, del rettangolo.|
|[CRectTracker::m_sizeMin](#m_sizemin)|Determina l'altezza e larghezza minimo rettangolo.|

## <a name="remarks"></a>Note

`CRectTracker` non è una classe di base.

Sebbene il `CRectTracker` classe è progettata per consentire all'utente di interagire con gli elementi OLE utilizzando un'interfaccia grafica, l'uso non è limitato ad applicazioni OLE abilitate. Può essere usato ovunque sia richiesto un'interfaccia utente.

`CRectTracker` i bordi possono essere a tinta unita o linee tratteggiate. L'elemento può essere applicato un bordo tratteggiato o sovrapposta a un motivo a tratteggio per indicare i diversi stati dell'elemento. È possibile inserire otto quadratini di ridimensionamento su esterno o interno bordo dell'elemento. (Per una spiegazione dei quadratini di ridimensionamento, vedere [GetHandleMask](#gethandlemask).) Infine, un `CRectTracker` consente di modificare l'orientamento di un elemento durante il ridimensionamento.

Per utilizzare `CRectTracker`, costruire un `CRectTracker` dell'oggetto e specificare quali Stati di visualizzazione vengono inizializzati. È quindi possibile usare questa interfaccia per fornire il feedback visivo utente sullo stato corrente dell'elemento OLE associato il `CRectTracker` oggetto.

Per altre informazioni sull'uso `CRectTracker`, vedere l'articolo [rilevazioni](../../mfc/trackers.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CRectTracker`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="adjustrect"></a>  CRectTracker::AdjustRect

Chiamato dal framework quando viene ridimensionato il rettangolo di rilevamento tramite un quadratino di ridimensionamento.

```
virtual void AdjustRect(
    int nHandle,
    LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*nHandle*<br/>
Indice dell'handle utilizzato.

*lpRect*<br/>
Puntatore alla dimensione corrente del rettangolo. (La dimensione di un rettangolo viene assegnata per l'altezza e larghezza).

### <a name="remarks"></a>Note

Il comportamento predefinito di questa funzione consente l'orientamento del rettangolo da modificare solo quando `Track` e `TrackRubberBand` vengono chiamati con inversione è consentita.

Eseguire l'override di questa funzione per controllare la regolazione del rettangolo di rilevamento durante un'operazione di trascinamento. Un metodo consiste nel modificare le coordinate specificate da *lpRect* prima della restituzione.

Funzionalità speciali che non sono supportate direttamente da `CRectTracker`, ad esempio per griglia di allineamento o keep--proporzioni, può essere implementato eseguendo l'override di questa funzione.

##  <a name="crecttracker"></a>  CRectTracker::CRectTracker

Crea e Inizializza un `CRectTracker` oggetto.

```
CRectTracker();

CRectTracker(
    LPCRECT lpSrcRect,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*lpSrcRect*<br/>
Le coordinate dell'oggetto rectangle.

*nStyle*<br/>
Specifica lo stile del `CRectTracker` oggetto. Sono supportati gli stili seguenti:

- `CRectTracker::solidLine` Usare una linea continua per il bordo del rettangolo.

- `CRectTracker::dottedLine` Usare una linea punteggiata per il bordo del rettangolo.

- `CRectTracker::hatchedBorder` Usare un motivo a tratteggio per il bordo del rettangolo.

- `CRectTracker::resizeInside` Quadratini di ridimensionamento che si trova all'interno del rettangolo.

- `CRectTracker::resizeOutside` Quadratini di ridimensionamento che si trova all'esterno del rettangolo.

- `CRectTracker::hatchInside` Nati modello include l'intero rettangolo.

### <a name="remarks"></a>Note

Il costruttore predefinito inizializza le `CRectTracker` oggetto con i valori *lpSrcRect* e inizializza altre dimensioni alle impostazioni predefinite di sistema. Se l'oggetto viene creato senza parametri, il `m_rect` e `m_nStyle` i membri dati sono non inizializzati.

##  <a name="draw"></a>  CRectTracker::Draw

Chiamare questa funzione per disegnare linee esterne e area interna del rettangolo.

```
void Draw(CDC* pDC) const;
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo su cui disegnare.

### <a name="remarks"></a>Note

Lo stile dello strumento di rilevamento determina come viene eseguito il disegno. Per vedere il costruttore `CRectTracker` per altre informazioni sugli stili disponibili.

##  <a name="drawtrackerrect"></a>  CRectTracker::DrawTrackerRect

Chiamato dal framework ogni volta che la posizione dello strumento di rilevamento è stato modificato mentre all'interno di `Track` o `TrackRubberBand` funzione membro.

```
virtual void DrawTrackerRect(
    LPCRECT lpRect,
    CWnd* pWndClipTo,
    CDC* pDC,
    CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Puntatore al `RECT` che contiene il rettangolo da disegnare.

*pWndClipTo*<br/>
Puntatore alla finestra da utilizzare nel rettangolo di ritaglio.

*pDC*<br/>
Puntatore al contesto di dispositivo su cui disegnare.

*pWnd*<br/>
Puntatore alla finestra in cui verrà eseguito il disegno.

### <a name="remarks"></a>Note

L'implementazione predefinita esegue una chiamata a `CDC::DrawFocusRect`, che consente di disegnare un rettangolo punteggiato.

Eseguire l'override di questa funzione per fornire commenti e suggerimenti diverso durante l'operazione di rilevamento.

##  <a name="gethandlemask"></a>  CRectTracker::GetHandleMask

Il framework chiama questa funzione membro per recuperare la maschera per un rettangolo di ridimensionamento.

```
virtual UINT GetHandleMask() const;
```

### <a name="return-value"></a>Valore restituito

La maschera di un `CRectTracker` quadratini di ridimensionamento dell'elemento.

### <a name="remarks"></a>Note

I quadratini di ridimensionamento vengono visualizzati sui lati e angoli del rettangolo e consentono all'utente di controllare la forma e dimensioni del rettangolo.

Un rettangolo ha 8 quadratini di ridimensionamento numerati 0-7. Ogni quadratino di ridimensionamento è rappresentato da un bit della maschera. il valore di tale bit è 2 ^ *n*, dove *n* è il numero di handle di ridimensionamento. Bit 0 a 3 corrisponde a quadratini di ridimensionamento, partendo dall'alto a sinistra lo spostamento in senso orario. BITS 4-7 corrispondono al lato quadratini di ridimensionamento partendo dall'alto lo spostamento in senso orario. La figura seguente mostra il ridimensionamento di un rettangolo gestisce e i relativi ridimensionare i numeri degli handle e i valori:

![Numeri dei quadratini di ridimensionamento](../../mfc/reference/media/vc35dp1.gif "vc35dp1")

L'implementazione predefinita di `GetHandleMask` restituisce la maschera di bit in modo che vengano visualizzati i quadratini di ridimensionamento. Se il bit singolo è attivo, verrà disegnato il quadratino di ridimensionamento corrispondente.

Eseguire l'override di questa funzione membro per visualizzare o nascondere che il functoid quadratini di ridimensionamento.

##  <a name="gettruerect"></a>  CRectTracker::GetTrueRect

Chiamare questa funzione per recuperare le coordinate del rettangolo.

```
void GetTrueRect(LPRECT lpTrueRect) const;
```

### <a name="parameters"></a>Parametri

*lpTrueRect*<br/>
Puntatore per il `RECT` coordina la struttura che conterrà il dispositivo del `CRectTracker` oggetto.

### <a name="remarks"></a>Note

Le dimensioni del rettangolo includono l'altezza e larghezza di qualsiasi quadratini di ridimensionamento che si trova il bordo esterno. Al momento restituendo *lpTrueRect* è sempre un rettangolo in coordinate dispositivo normalizzato.

##  <a name="hittest"></a>  CRectTracker:: HitTest

Chiamare questa funzione per scoprire se l'utente ha catturato un quadratino di ridimensionamento.

```
int HitTest(CPoint point) const;
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Il punto, nelle coordinate del dispositivo, per eseguire il test.

### <a name="return-value"></a>Valore restituito

Il valore restituito dipende dal tipo enumerato `CRectTracker::TrackerHit` e può avere uno dei valori seguenti:

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

##  <a name="m_nhandlesize"></a>  CRectTracker::m_nHandleSize

Le dimensioni, in pixel, del `CRectTracker` quadratini di ridimensionamento.

```
int m_nHandleSize;
```

### <a name="remarks"></a>Note

Inizializzato con il valore di sistema predefinito.

##  <a name="m_rect"></a>  CRectTracker::

Posizione del rettangolo corrente nelle coordinate del client (pixel).

```
CRect m_rect;
```

##  <a name="m_sizemin"></a>  CRectTracker::m_sizeMin

Le dimensioni minime del rettangolo.

```
CSize m_sizeMin;
```

### <a name="remarks"></a>Note

Entrambi i valori predefiniti, `cx` e `cy`, vengono calcolati in base il valore di sistema predefinito per lo spessore del bordo. Questo membro dati viene utilizzato solo il `AdjustRect` funzione membro.

##  <a name="m_nstyle"></a>  CRectTracker::m_nStyle

Stile del rettangolo corrente.

```
UINT m_nStyle;
```

### <a name="remarks"></a>Note

Visualizzare [CRectTracker::CRectTracker](#crecttracker) per un elenco di possibili stili.

##  <a name="normalizehit"></a>  CRectTracker::NormalizeHit

Chiamare questa funzione per convertire un handle potenzialmente invertito.

```
int NormalizeHit(int nHandle) const;
```

### <a name="parameters"></a>Parametri

*nHandle*<br/>
Handle selezionato dall'utente.

### <a name="return-value"></a>Valore restituito

L'indice dell'handle normalizzato.

### <a name="remarks"></a>Note

Quando `CRectTracker::Track` o `CRectTracker::TrackRubberBand` viene chiamato con l'inversione consentiti, è possibile che il rettangolo deve essere invertito l'asse x, y o a entrambi. In questo caso, `HitTest` restituirà gli handle che sono anche invertiti rispetto del rettangolo. Infatti, appropriata per il disegno risposta del cursore il feedback dipende la posizione sullo schermo del rettangolo, non la parte della struttura dei dati rettangolo che verrà modificata.

##  <a name="onchangedrect"></a>  CRectTracker::OnChangedRect

Chiamato dal framework ogni volta che il rettangolo di arresto è stata modificata durante una chiamata a `Track`.

```
virtual void OnChangedRect(const CRect& rectOld);
```

### <a name="parameters"></a>Parametri

*rectOld*<br/>
Contiene le coordinate del dispositivo precedente del `CRectTracker` oggetto.

### <a name="remarks"></a>Note

Al momento questa funzione viene chiamata, tutti i commenti e suggerimenti disegnata con `DrawTrackerRect` è stata rimossa. L'implementazione predefinita di questa funzione non esegue alcuna operazione.

Eseguire l'override di questa funzione quando si desidera eseguire eventuali azioni dopo il rettangolo è stato ridimensionato.

##  <a name="setcursor"></a>  CRectTracker:: SetCursor

Chiamare questa funzione per modificare la forma del cursore mentre si trova su di `CRectTracker` area dell'oggetto.

```
BOOL SetCursor(
    CWnd* pWnd,
    UINT nHitTest) const;
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra che attualmente contiene il cursore.

*nHitTest*<br/>
Risultati dell'hit test precedente, dal messaggio WM_SETCURSOR.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il precedente hit era sul rettangolo di tracker. in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione all'interno della funzione della finestra che gestisce il messaggio WM_SETCURSOR (in genere `OnSetCursor`).

##  <a name="track"></a>  CRectTracker::Track

Chiamare questa funzione per visualizzare l'interfaccia utente per il rettangolo di ridimensionamento.

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
Coordinate della posizione corrente del mouse rispetto all'area client del dispositivo.

*bAllowInvert*<br/>
Se TRUE, è possibile invertire il rettangolo lungo l'asse x o asse y; in caso contrario, FALSE.

*pWndClipTo*<br/>
Finestra che le operazioni di disegno verranno ritagliata in base a. Se NULL, *pWnd* viene utilizzato come il rettangolo di ridimensionamento.

### <a name="return-value"></a>Valore restituito

Se viene premuto il tasto ESC, il processo di rilevamento viene interrotto, il rettangolo archiviato lo strumento di rilevamento non viene modificato e viene restituito 0. Se la modifica viene eseguito il commit, spostando il puntatore del mouse e rilasciare il pulsante sinistro del mouse, la nuova posizione e/o dimensioni viene registrato nel rettangolo del rilevamento e viene restituito diverso da zero.

### <a name="remarks"></a>Note

Ciò in genere viene chiamato all'interno della funzione dell'applicazione che gestisce il `WM_LBUTTONDOWN` messaggio (in genere `OnLButtonDown`).

Questa funzione consente di acquisire il mouse fino a quando l'utente rilascia il pulsante sinistro, preme ESC o preme il pulsante destro del mouse. Quando l'utente sposta il cursore del mouse, il feedback viene aggiornato mediante la chiamata `DrawTrackerRect` e `OnChangedRect`.

Se *bAllowInvert* è TRUE, il rettangolo di rilevamento possa essere invertito su asse x o asse y.

##  <a name="trackrubberband"></a>  CRectTracker

Chiamare questa funzione per eseguire operazioni rettangolo di selezione.

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
Coordinate della posizione corrente del mouse rispetto all'area client del dispositivo.

*bAllowInvert*<br/>
Se TRUE, è possibile invertire il rettangolo lungo l'asse x o asse y; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato spostato il mouse e il rettangolo non è vuoto. in caso contrario 0.

### <a name="remarks"></a>Note

Viene in genere chiamata da all'interno della funzione dell'applicazione che gestisce il messaggio WM_LBUTTONDOWN (in genere `OnLButtonDown`).

Questa funzione consente di acquisire il mouse fino a quando l'utente rilascia il pulsante sinistro, preme ESC o preme il pulsante destro del mouse. Quando l'utente sposta il cursore del mouse, il feedback viene aggiornato mediante la chiamata `DrawTrackerRect` e `OnChangedRect`.

Rilevamento viene eseguito con una selezione di tipo elastica-fuori banda dal punto di controllo in basso a destra. Se l'inversione è consentito, il rettangolo può essere dimensionato trascinando sia alto e a sinistra o verso il basso e a destra.

## <a name="see-also"></a>Vedere anche

[Esempio MFC TRACKER](../../visual-cpp-samples.md)<br/>
[Esempio MFC DRAWCLI](../../visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleResizeBar](../../mfc/reference/coleresizebar-class.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)
