---
title: CRectTracker (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- displaying items
- CRectTracker class
- resizing items
ms.assetid: 99caa7f2-3c0d-4a42-bbee-e5d1d342d4ee
caps.latest.revision: 23
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 21fbd5457b6a3294a2925c88a72c32d568cce5e4
ms.lasthandoff: 04/04/2017

---
# <a name="crecttracker-class"></a>CRectTracker (classe)
Consente a un elemento visualizzato, spostare e ridimensionare in modi diversi.  
  
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
|[CRectTracker::AdjustRect](#adjustrect)|Chiamato quando viene ridimensionato il rettangolo.|  
|[CRectTracker::Draw](#draw)|Esegue il rendering del rettangolo.|  
|[CRectTracker::DrawTrackerRect](#drawtrackerrect)|Chiamata eseguita per disegnare il bordo di un `CRectTracker` oggetto.|  
|[CRectTracker::GetHandleMask](#gethandlemask)|Chiamata eseguita per ottenere la maschera di un `CRectTracker` quadratini di ridimensionamento dell'elemento.|  
|[CRectTracker::GetTrueRect](#gettruerect)|Restituisce la larghezza e altezza del rettangolo, inclusi i quadratini di ridimensionamento.|  
|[CRectTracker:: HitTest](#hittest)|Restituisce la posizione corrente del cursore alla riga di `CRectTracker` oggetto.|  
|[CRectTracker::NormalizeHit](#normalizehit)|Normalizza il codice di un hit test.|  
|[CRectTracker::OnChangedRect](#onchangedrect)|Chiamata eseguita quando è stato il rettangolo di ridimensionamento o spostamento.|  
|[CRectTracker:: SetCursor](#setcursor)|Imposta il cursore, a seconda della posizione sul rettangolo.|  
|[CRectTracker::Track](#track)|Consente all'utente di modificare il rettangolo.|  
|[TrackRubberBand](#trackrubberband)|Consente all'utente di "rettangolo" la selezione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRectTracker::m_nHandleSize](#m_nhandlesize)|Determina le dimensioni dei quadratini di ridimensionamento.|  
|[CRectTracker::m_nStyle](#m_nstyle)|Style(s) corrente dello strumento di rilevamento.|  
|[CRectTracker:: M_rect](#m_rect)|Posizione corrente, in pixel, del rettangolo.|  
|[CRectTracker::m_sizeMin](#m_sizemin)|Determina l'altezza e larghezza minima rettangolo.|  
  
## <a name="remarks"></a>Note  
 `CRectTracker`non dispone di una classe di base.  
  
 Sebbene la `CRectTracker` classe è progettata per consentire all'utente di interagire con gli elementi OLE utilizzando un'interfaccia grafica, l'uso non è limitato alle applicazioni abilitate per OLE. E può essere utilizzato in un punto qualsiasi interfaccia utente è obbligatoria.  
  
 `CRectTracker`bordi possono essere a tinta unita o linee tratteggiate. L'elemento può essere assegnato un bordo tratteggiato o presenta un motivo tratteggiato per indicare stati diversi dell'elemento. È possibile inserire otto quadratini di ridimensionamento in all'interno o all'esterno del bordo dell'elemento. (Per una spiegazione dei quadratini di ridimensionamento, vedere [GetHandleMask](#gethandlemask).) Infine, un `CRectTracker` consente di modificare l'orientamento di un elemento durante il ridimensionamento.  
  
 Per utilizzare `CRectTracker`, costruire un `CRectTracker` e specificare quali Stati di visualizzazione vengono inizializzati. È quindi possibile utilizzare questa interfaccia per fornire il feedback visivo utente sullo stato corrente dell'elemento OLE associato il `CRectTracker` oggetto.  
  
 Per ulteriori informazioni sull'utilizzo `CRectTracker`, vedere l'articolo [Tracker](../../mfc/trackers.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CRectTracker`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
##  <a name="adjustrect"></a>CRectTracker::AdjustRect  
 Chiamato dal framework quando viene ridimensionato il rettangolo di rilevamento tramite un quadratino di ridimensionamento.  
  
```  
virtual void AdjustRect(
    int nHandle,  
    LPRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `nHandle`  
 Indice dell'handle utilizzato.  
  
 `lpRect`  
 Puntatore alla dimensione corrente del rettangolo. (Le dimensioni di un rettangolo sono assegnata per l'altezza e larghezza.)  
  
### <a name="remarks"></a>Note  
 Il comportamento predefinito di questa funzione consente l'orientamento del rettangolo da modificare solo quando `Track` e `TrackRubberBand` vengono chiamati con inversione consentito.  
  
 Eseguire l'override di questa funzione per controllare la regolazione del rettangolo di rilevamento durante un'operazione di trascinamento. È possibile modificare le coordinate specificate dalle `lpRect` prima della restituzione.  
  
 Funzioni speciali che non sono supportati direttamente dal `CRectTracker`, ad esempio lo snap-in formato griglia o keep-rapporto di aspetto, può essere implementata da questa funzione viene sottoposto a override.  
  
##  <a name="crecttracker"></a>CRectTracker::CRectTracker  
 Crea e Inizializza un `CRectTracker` oggetto.  
  
```  
CRectTracker();

 
CRectTracker(
    LPCRECT lpSrcRect,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `lpSrcRect`  
 Le coordinate dell'oggetto rettangolo.  
  
 `nStyle`  
 Specifica lo stile del `CRectTracker` oggetto. Sono supportati gli stili seguenti:  
  
- **CRectTracker::solidLine** utilizzare una linea a tinta unita per il bordo del rettangolo.  
  
- **CRectTracker::dottedLine** utilizzare una linea punteggiata per il bordo del rettangolo.  
  
- **CRectTracker::hatchedBorder** usano un modello tratteggiato per il bordo del rettangolo.  
  
- **CRectTracker::resizeInside** si trova all'interno del rettangolo di ridimensionamento.  
  
- **CRectTracker::resizeOutside** si trova all'esterno del rettangolo di ridimensionamento.  
  
- **CRectTracker::hatchInside** modello Hatched copre l'intero rettangolo.  
  
### <a name="remarks"></a>Note  
 Il costruttore predefinito inizializza il `CRectTracker` oggetto con i valori da `lpSrcRect` e inizializza le altre dimensioni per i valori predefiniti di sistema. Se l'oggetto viene creato senza parametri, il `m_rect` e `m_nStyle` i membri dati sono non inizializzati.  
  
##  <a name="draw"></a>CRectTracker::Draw  
 Chiamare questa funzione per disegnare il rettangolo esterne righe e area interna.  
  
```  
void Draw(CDC* pDC) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo su cui disegnare.  
  
### <a name="remarks"></a>Note  
 Lo stile dello strumento di rilevamento determina come viene eseguito il disegno. Per vedere il costruttore `CRectTracker` per ulteriori informazioni sugli stili disponibili.  
  
##  <a name="drawtrackerrect"></a>CRectTracker::DrawTrackerRect  
 Chiamato dal framework ogni volta che la posizione dello strumento di rilevamento è stato modificato mentre all'interno di `Track` o `TrackRubberBand` funzione membro.  
  
```  
virtual void DrawTrackerRect(
    LPCRECT lpRect,  
    CWnd* pWndClipTo,  
    CDC* pDC,  
    CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Puntatore al `RECT` che contiene il rettangolo da disegnare.  
  
 `pWndClipTo`  
 Puntatore alla finestra da usare nel rettangolo di ritaglio.  
  
 `pDC`  
 Puntatore al contesto di dispositivo su cui disegnare.  
  
 `pWnd`  
 Puntatore alla finestra in cui si verificherà il disegno.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita esegue una chiamata a `CDC::DrawFocusRect`, che disegna un rettangolo punteggiato.  
  
 Eseguire l'override di questa funzione per fornire commenti e suggerimenti diversi durante l'operazione di rilevamento.  
  
##  <a name="gethandlemask"></a>CRectTracker::GetHandleMask  
 Il framework chiama questa funzione membro per recuperare la maschera per un rettangolo di ridimensionamento.  
  
```  
virtual UINT GetHandleMask() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La maschera di un `CRectTracker` quadratini di ridimensionamento dell'elemento.  
  
### <a name="remarks"></a>Note  
 I quadratini di ridimensionamento vengono visualizzati sui lati e angoli del rettangolo e consentono all'utente di controllare la forma e dimensioni del rettangolo.  
  
 Un rettangolo ha 8 quadratini di ridimensionamento numerate 0-7. Ogni quadratino di ridimensionamento è rappresentato da un bit della maschera. il valore di tale bit è 2 ^ *n*, dove *n* è il numero di handle di ridimensionamento. Bit 0-3 corrispondono ai quadratini di ridimensionamento, a partire dall'alto a sinistra lo spostamento in senso orario. Corrisponde al lato 4 a 7 bit quadratini di ridimensionamento a partire dall'alto lo spostamento in senso orario. Nella figura seguente viene illustrato il ridimensionamento di un rettangolo gestisce e le relative ridimensionare i numeri degli handle e i valori:  
  
 ![Numeri dei quadratini di ridimensionamento](../../mfc/reference/media/vc35dp1.gif "vc35dp1")  
  
 L'implementazione predefinita di **GetHandleMask** restituisce la maschera di bit in modo che vengano visualizzati i quadratini di ridimensionamento. Se il singolo bit è attivo, verrà disegnato il quadratino di ridimensionamento corrispondente.  
  
 Eseguire l'override di questa funzione membro per nascondere o mostrare che il functoid quadratini di ridimensionamento.  
  
##  <a name="gettruerect"></a>CRectTracker::GetTrueRect  
 Chiamare questa funzione per recuperare le coordinate del rettangolo.  
  
```  
void GetTrueRect(LPRECT lpTrueRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpTrueRect`  
 Puntatore al `RECT` struttura che conterrà il dispositivo le coordinate del `CRectTracker` oggetto.  
  
### <a name="remarks"></a>Note  
 Le dimensioni del rettangolo includono l'altezza e larghezza di qualsiasi quadratini di ridimensionamento sul bordo esterno. All'uscita, `lpTrueRect` è sempre un rettangolo in coordinate dispositivo normalizzato.  
  
##  <a name="hittest"></a>CRectTracker:: HitTest  
 Chiamare questa funzione per scoprire se l'utente ha catturato un quadratino di ridimensionamento.  
  
```  
int HitTest(CPoint point) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Il punto nelle coordinate del dispositivo, per eseguire il test.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito dipende dal tipo enumerato **CRectTracker::TrackerHit** e può avere uno dei valori seguenti:  
  
- **CRectTracker::hitNothing** -1  
  
- **CRectTracker::hitTopLeft** 0  
  
- **CRectTracker::hitTopRight** 1  
  
- **CRectTracker::hitBottomRight** 2  
  
- **CRectTracker::hitBottomLeft** 3  
  
- **CRectTracker::hitTop** 4  
  
- **CRectTracker::hitRight** 5  
  
- **CRectTracker::hitBottom** 6  
  
- **CRectTracker::hitLeft** 7  
  
- **CRectTracker::hitMiddle** 8  
  
##  <a name="m_nhandlesize"></a>CRectTracker::m_nHandleSize  
 Le dimensioni, in pixel, del `CRectTracker` quadratini di ridimensionamento.  
  
```  
int m_nHandleSize;  
```  
  
### <a name="remarks"></a>Note  
 Inizializzato con il valore di sistema predefinito.  
  
##  <a name="m_rect"></a>CRectTracker:: M_rect  
 La posizione corrente del rettangolo nelle coordinate client (pixel).  
  
```  
CRect m_rect;  
```  
  
##  <a name="m_sizemin"></a>CRectTracker::m_sizeMin  
 La dimensione minima del rettangolo.  
  
```  
CSize m_sizeMin;  
```  
  
### <a name="remarks"></a>Note  
 Entrambi i valori predefiniti, **cx** e **cy**, vengono calcolati dal valore di sistema predefinito per lo spessore del bordo. Questo membro dati viene utilizzato solo il `AdjustRect` funzione membro.  
  
##  <a name="m_nstyle"></a>CRectTracker::m_nStyle  
 Stile corrente del rettangolo.  
  
```  
UINT m_nStyle;  
```  
  
### <a name="remarks"></a>Note  
 Vedere [CRectTracker::CRectTracker](#crecttracker) per un elenco dei modelli.  
  
##  <a name="normalizehit"></a>CRectTracker::NormalizeHit  
 Chiamare questa funzione per convertire un handle potenzialmente invertito.  
  
```  
int NormalizeHit(int nHandle) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nHandle`  
 Handle selezionate dall'utente.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'handle normalizzato.  
  
### <a name="remarks"></a>Note  
 Quando `CRectTracker::Track` o `CRectTracker::TrackRubberBand` viene chiamato con inversione consentito, è possibile per il rettangolo deve essere invertito l'asse x, l'asse y o entrambi. In questo caso, `HitTest` restituirà gli handle che sono anche invertiti rispetto del rettangolo. In questo modo non appropriato per il disegno feedback cursore i commenti e suggerimenti dipende dalla posizione dello schermo del rettangolo, non la parte della struttura di data rettangolo che verrà modificata.  
  
##  <a name="onchangedrect"></a>CRectTracker::OnChangedRect  
 Chiamato dal framework quando il rettangolo di arresto è stata modificata durante una chiamata a `Track`.  
  
```  
virtual void OnChangedRect(const CRect& rectOld);
```  
  
### <a name="parameters"></a>Parametri  
 *rectOld*  
 Contiene le coordinate dispositivo precedente del `CRectTracker` oggetto.  
  
### <a name="remarks"></a>Note  
 Al momento questa funzione viene chiamata, tutti i commenti e suggerimenti disegnata con `DrawTrackerRect` è stato rimosso. L'implementazione predefinita di questa funzione non esegue alcuna operazione.  
  
 Eseguire l'override di questa funzione quando si desidera eseguire azioni dopo il rettangolo è stato ridimensionato.  
  
##  <a name="setcursor"></a>CRectTracker:: SetCursor  
 Chiamare questa funzione per modificare la forma di cursore è posizionato il `CRectTracker` area dell'oggetto.  
  
```  
BOOL SetCursor(
    CWnd* pWnd,  
    UINT nHitTest) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra che contiene attualmente il cursore.  
  
 `nHitTest`  
 Risultati dell'hit test precedente, dal `WM_SETCURSOR` messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il precedente hit sul rettangolo tracker; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione all'interno della funzione della finestra che gestisce il `WM_SETCURSOR` messaggio (in genere `OnSetCursor`).  
  
##  <a name="track"></a>CRectTracker::Track  
 Chiamare questa funzione per visualizzare l'interfaccia utente per il rettangolo di ridimensionamento.  
  
```  
BOOL Track(
    CWnd* pWnd,  
    CPoint point,  
    BOOL bAllowInvert = FALSE,  
    CWnd* pWndClipTo = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 L'oggetto finestra che contiene il rettangolo.  
  
 `point`  
 Coordinate dispositivo della posizione del mouse corrente relativo all'area client.  
  
 `bAllowInvert`  
 Se **TRUE**, il rettangolo può essere invertita lungo l'asse x o asse y; in caso contrario **FALSE**.  
  
 `pWndClipTo`  
 La finestra che le operazioni di disegno verranno ritagliata. Se **NULL**, `pWnd` viene utilizzato come il rettangolo di ridimensionamento.  
  
### <a name="return-value"></a>Valore restituito  
 Se viene premuto il tasto ESC, il processo di rilevamento viene interrotto, il rettangolo archiviato nel tracker non viene modificato e viene restituito 0. Se la modifica viene eseguito il commit, spostando il puntatore del mouse e rilasciare il pulsante sinistro del mouse, la nuova posizione e/o dimensioni viene registrato nel rettangolo della registrazione e viene restituito diverso da zero.  
  
### <a name="remarks"></a>Note  
 Viene chiamato in genere da all'interno della funzione dell'applicazione che gestisce il `WM_LBUTTONDOWN` messaggio (in genere `OnLButtonDown`).  
  
 Questa funzione consente di acquisire il mouse fino a quando l'utente rilascia il pulsante sinistro del mouse, preme ESC o preme il pulsante destro del mouse. Quando l'utente sposta il cursore del mouse, il feedback viene aggiornato chiamando `DrawTrackerRect` e `OnChangedRect`.  
  
 Se `bAllowInvert` è **TRUE**, il rettangolo di rilevamento può essere invertito su asse x o asse y.  
  
##  <a name="trackrubberband"></a>TrackRubberBand  
 Chiamare questa funzione per eseguire rettangolo di selezione.  
  
```  
BOOL TrackRubberBand(
    CWnd* pWnd,  
    CPoint point,  
    BOOL bAllowInvert = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 L'oggetto finestra che contiene il rettangolo.  
  
 `point`  
 Coordinate dispositivo della posizione del mouse corrente relativo all'area client.  
  
 `bAllowInvert`  
 Se **TRUE,** il rettangolo può essere invertita lungo l'asse x o asse y; in caso contrario **FALSE**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il mouse viene spostato e il rettangolo non è vuoto. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Viene chiamato in genere all'interno della funzione dell'applicazione che gestisce il `WM_LBUTTONDOWN` messaggio (in genere `OnLButtonDown`).  
  
 Questa funzione consente di acquisire il mouse fino a quando l'utente rilascia il pulsante sinistro del mouse, preme ESC o preme il pulsante destro del mouse. Quando l'utente sposta il cursore del mouse, il feedback viene aggiornato chiamando `DrawTrackerRect` e `OnChangedRect`.  
  
 Rilevamento viene eseguito con una selezione tipo di banda gomma dall'handle in basso a destra. Se è consentito l'inversione, il rettangolo può essere dimensionato trascinando il backup e a sinistra o verso il basso e a destra.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC TRACKER](../../visual-cpp-samples.md)   
 [Esempio MFC DRAWCLI](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleResizeBar](../../mfc/reference/coleresizebar-class.md)   
 [Classe CRect](../../atl-mfc-shared/reference/crect-class.md)

