---
title: Classe CTabbedPane
ms.date: 11/04/2016
f1_keywords:
- CTabbedPane
- AFXTABBEDPANE/CTabbedPane
- AFXTABBEDPANE/CTabbedPane::DetachPane
- AFXTABBEDPANE/CTabbedPane::EnableTabAutoColor
- AFXTABBEDPANE/CTabbedPane::FloatTab
- AFXTABBEDPANE/CTabbedPane::GetTabArea
- AFXTABBEDPANE/CTabbedPane::GetTabWnd
- AFXTABBEDPANE/CTabbedPane::HasAutoHideMode
- AFXTABBEDPANE/CTabbedPane::IsTabLocationBottom
- AFXTABBEDPANE/CTabbedPane::ResetTabs
- AFXTABBEDPANE/CTabbedPane::SetTabAutoColors
- AFXTABBEDPANE/CTabbedPane::m_bTabsAlwaysTop
- AFXTABBEDPANE/CTabbedPane::m_pTabWndRTC
helpviewer_keywords:
- CTabbedPane [MFC], DetachPane
- CTabbedPane [MFC], EnableTabAutoColor
- CTabbedPane [MFC], FloatTab
- CTabbedPane [MFC], GetTabArea
- CTabbedPane [MFC], GetTabWnd
- CTabbedPane [MFC], HasAutoHideMode
- CTabbedPane [MFC], IsTabLocationBottom
- CTabbedPane [MFC], ResetTabs
- CTabbedPane [MFC], SetTabAutoColors
- CTabbedPane [MFC], m_bTabsAlwaysTop
- CTabbedPane [MFC], m_pTabWndRTC
ms.assetid: f4dc5215-b789-4f2d-8c62-477aceda3578
ms.openlocfilehash: af9c65e51f7230b0fc6a59d0eed42eca08d24837
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57263351"
---
# <a name="ctabbedpane-class"></a>Classe CTabbedPane

Implementa la funzionalità di un riquadro con schede staccabili.

o altri dettagli vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CTabbedPane : public CBaseTabbedPane
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CTabbedPane::CTabbedPane`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTabbedPane::DetachPane](#detachpane)|(Esegue l'override [cbasetabbedpane:: Detachpane](../../mfc/reference/cbasetabbedpane-class.md#detachpane).)|
|[CTabbedPane::EnableTabAutoColor](#enabletabautocolor)|Abilita o disabilita la colorazione automatica delle schede.|
|[CTabbedPane::FloatTab](#floattab)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile. (Esegue l'override [cbasetabbedpane:: Floattab](../../mfc/reference/cbasetabbedpane-class.md#floattab).)|
|[CTabbedPane::GetTabArea](#gettabarea)|Restituisce le dimensioni e la posizione dell'area della scheda nella finestra a schede.|
|[CTabbedPane::GetTabWnd](#gettabwnd)||
|[CTabbedPane::HasAutoHideMode](#hasautohidemode)|Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente. (Esegue l'override [cbasetabbedpane:: Hasautohidemode](../../mfc/reference/cbasetabbedpane-class.md#hasautohidemode).)|
|[CTabbedPane::IsTabLocationBottom](#istablocationbottom)|Determina se le schede si trovano nella parte inferiore della finestra.|
|[CTabbedPane::ResetTabs](#resettabs)|Reimposta lo stato predefinito di tutti i riquadri a schede.|
|[CTabbedPane::SetTabAutoColors](#settabautocolors)|Imposta un elenco di colori personalizzati può essere usato quando è abilitata la funzionalità Colore automatico.|

### <a name="data-members"></a>Membri di dati

|nome|Descrizione|
|----------|-----------------|
|[CTabbedPane::m_bTabsAlwaysTop](#m_btabsalwaystop)|Posizione predefinita delle schede nell'applicazione.|
|[CTabbedPane::m_pTabWndRTC](#m_ptabwndrtc)|Informazioni sulla classe di runtime per un oggetto personalizzato derivato da `CMFCTabCtrl`.|

## <a name="remarks"></a>Note

Il framework crea automaticamente un'istanza di questa classe quando un utente collega un riquadro a un altro posizionando il puntatore del mouse sul titolo del secondo riquadro. Tutti i riquadri a schede create dal framework dispongono di un ID -1.

Per specificare schede normali anziché schede con lo stile di Outlook, passare lo stile di AFX_CBRS_REGULAR_TABS il [CDockablePane:: CreateEx](../../mfc/reference/cdockablepane-class.md#createex) (metodo).

Se si crea un riquadro a schede con schede rimovibili, il riquadro può essere eliminato definitivamente in modo automatico dal framework. Non è pertanto consigliabile archiviare il puntatore. Per passare un puntatore al riquadro a schede, chiamare il metodo `CBasePane::GetParentTabbedPane`.

## <a name="example"></a>Esempio

In questo esempio viene creato un oggetto `CTabbedPane`. Quindi, utilizziamo [cbasetabbedpane:: addTab](../../mfc/reference/cbasetabbedpane-class.md#addtab) per collegare le schede aggiuntive.

```cpp
CTabbedPane* pTabbededBar = new CTabbedPane (TRUE);

if (!pTabbededBar->Create (_T(""),
    this,
    CRect (0,
    0,
    200,
    200),
    TRUE,
    (UINT) -1,
    WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS |
    WS_CLIPCHILDREN | CBRS_LEFT |
    CBRS_FLOAT_MULTI))
{
    TRACE0("Failed to create Solution Explorer bar\n");

    return FALSE;      // fail to create
}

pTabbededBar->AddTab (&m_wndClassView);
pTabbededBar->AddTab (&m_wndResourceView);

pTabbededBar->AddTab (&m_wndFileView);
pTabbededBar->EnableDocking(CBRS_ALIGN_ANY);

DockPane(pTabbededBar);
```

## <a name="example"></a>Esempio

Un altro modo per creare un oggetto della barra di controllo a schede consiste nell'usare [CDockablePane:: Attachtotabwnd](../../mfc/reference/cdockablepane-class.md#attachtotabwnd). Il `AttachToTabWnd` metodo crea dinamicamente un oggetto riquadro a schede usando le informazioni sulle classi di runtime impostate [CDockablePane:: Settabbedpanertc](../../mfc/reference/cdockablepane-class.md#settabbedpanertc).

In questo esempio viene creato dinamicamente un riquadro a schede, vengono collegate due schede e la seconda scheda viene impostata come non rimovibile.

```cpp
DockPane(&m_wndClassView);

CTabbedPane* pTabbedBar = NULL;
m_wndResourceView.AttachToTabWnd (&m_wndClassView,
    DM_SHOW,
    TRUE,
    (CDockablePane**) &pTabbedBar);

m_wndFileView.AttachToTabWnd (pTabbedBar,
    DM_SHOW,
    TRUE,
    (CDockablePane**) &pTabbedBar);

pTabbedBar->GetUnderlyingWindow ()->EnableTabDetach (1,
    FALSE);
```

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

[CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)

[CTabbedPane](../../mfc/reference/ctabbedpane-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtabbedpane. H

##  <a name="detachpane"></a>  CTabbedPane::DetachPane

```
virtual BOOL DetachPane(
    CWnd* pBar,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *pBar*<br/>

[in] *bHide*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="enabletabautocolor"></a>  CTabbedPane::EnableTabAutoColor

Abilita o disabilita la colorazione automatica delle schede.

```
static void EnableTabAutoColor(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare la colorazione automatica delle schede. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare questo metodo statico per abilitare o disabilitare la colorazione automatica delle schede in tutti i riquadri a schede nell'applicazione. Quando questa funzionalità è abilitata, ciascuna scheda viene compilato tramite il proprio colore. È possibile trovare l'elenco di colori utilizzati per colorare le schede chiamando il [CMFCBaseTabCtrl::GetAutoColors](../../mfc/reference/cmfcbasetabctrl-class.md#getautocolors) (metodo).

È possibile specificare l'elenco dei colori che verrà usato per le schede, chiamare [CTabbedPane::SetTabAutoColors](#settabautocolors).

Per impostazione predefinita, questa opzione è disabilitata.

##  <a name="floattab"></a>  CTabbedPane::FloatTab

```
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *pBar*<br/>
[in] *nTabID*<br/>
[in] *dockMethod*<br/>
[in] *bHide*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="gettabarea"></a>  CTabbedPane::GetTabArea

Restituisce le dimensioni e posizione dell'area della scheda nella finestra a schede.

```
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### <a name="parameters"></a>Parametri

*rectTabAreaTop*<br/>
[out] Contiene le dimensioni e posizione, nelle coordinate dello schermo, dell'area della scheda superiore.

*rectTabAreaBottom*<br/>
[out] Contiene le dimensioni e posizione, in coordinate dello schermo, dell'area della scheda nella parte inferiore.

### <a name="remarks"></a>Note

Il framework chiama questo metodo per determinare la modalità ancorare un riquadro in cui un utente sta trascinando. Quando l'utente trascina un riquadro sull'area della scheda del riquadro di destinazione, il framework tenta di aggiungerlo come nuova scheda del riquadro di destinazione. In caso contrario, tenta di ancoraggio del riquadro sul lato del riquadro di destinazione, che comporta la creazione di un nuovo contenitore riquadro con un divisore che separa i due riquadri.

L'override del metodo in un `CTabbedPane`-classe per modificare questo comportamento derivata.

##  <a name="gettabwnd"></a>  CTabbedPane::GetTabWnd

```
CMFCTabCtrl* GetTabWnd() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="hasautohidemode"></a>  CTabbedPane::HasAutoHideMode

```
virtual BOOL HasAutoHideMode() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="istablocationbottom"></a>  CTabbedPane::IsTabLocationBottom

Determina se le schede si trovano nella parte inferiore della finestra.

```
virtual BOOL IsTabLocationBottom() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se l'area della scheda si trova nella parte inferiore della finestra a schede. in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="m_btabsalwaystop"></a>  CTabbedPane::m_bTabsAlwaysTop

Posizione predefinita delle schede nell'applicazione.

```
AFX_IMPORT_DATA static BOOL m_bTabsAlwaysTop;
```

### <a name="remarks"></a>Note

Impostare il membro statico a true per forzare tutte le schede nell'applicazione da visualizzare nella parte superiore del riquadro a schede.

È necessario impostare questo valore prima che venga creato un riquadro a schede.

Il valore predefinito è FALSE.

##  <a name="m_ptabwndrtc"></a>  CTabbedPane::m_pTabWndRTC

Informazioni sulla classe di runtime per un oggetto personalizzato derivato da `CMFCTabCtrl`.

```
AFX_IMPORT_DATA static CRuntimeClass* m_pTabWndRTC;
```

### <a name="remarks"></a>Note

Impostare questa variabile membro statico in un puntatore alle informazioni sulla classe di runtime di un `CMFCTabCtrl`-oggetto derivato da se si usa una finestra a schede personalizzata all'interno di un riquadro a schede.

##  <a name="resettabs"></a>  CTabbedPane::ResetTabs

Reimposta lo stato predefinito di tutti i riquadri a schede.

```
static void ResetTabs();
```

### <a name="remarks"></a>Note

Chiamare questo metodo per ripristinare tutti i riquadri a schede sul relativo stato predefinito. Quando viene chiamato, questo metodo reimposta le dimensioni del bordo e lo stato di colore automatico di tutti i riquadri a schede.

##  <a name="settabautocolors"></a>  CTabbedPane::SetTabAutoColors

Imposta un elenco di colori personalizzati che vengono usate quando è abilitata la funzionalità colore automatico.

```
static void SetTabAutoColors(const CArray<COLORREF, COLORREF>& arColors);
```

### <a name="parameters"></a>Parametri

*arColors*<br/>
[in] Contiene la matrice di colori da impostare.

### <a name="remarks"></a>Note

Utilizzare questo metodo per personalizzare l'elenco dei colori utilizzati quando è abilitata la funzionalità colore automatico. Si tratta di una funzione statica che influisce su tutte le schede nell'applicazione.

Uso [CTabbedPane::EnableTabAutoColor](#enabletabautocolor) per abilitare o disabilitare la funzionalità colore automatico.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)<br/>
[Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)
