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
ms.openlocfilehash: cfc0a3099b1d5ff9bd1093cc911745bd61cde64c
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686639"
---
# <a name="ctabbedpane-class"></a>Classe CTabbedPane

Implementa la funzionalità di un riquadro con schede staccabili.

Per ulteriori dettagli, vedere il codice sorgente disponibile nella **cartella \\ \\ MFC atlmfc src \\ MFC** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CTabbedPane : public CBaseTabbedPane
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CTabbedPane::CTabbedPane`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTabbedPane::DetachPane](#detachpane)|Esegue l'override di [CBaseTabbedPane::D etachpane](../../mfc/reference/cbasetabbedpane-class.md#detachpane).|
|[CTabbedPane::EnableTabAutoColor](#enabletabautocolor)|Abilita o disabilita la colorazione automatica delle schede.|
|[CTabbedPane::FloatTab](#floattab)|Esegue il Floating di un riquadro, ma solo se il riquadro attualmente si trova in una scheda scollegabile. esegue l'override di [CBaseTabbedPane:: FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).|
|[CTabbedPane::GetTabArea](#gettabarea)|Restituisce le dimensioni e la posizione dell'area della scheda nella finestra a schede.|
|[CTabbedPane::GetTabWnd](#gettabwnd)||
|[CTabbedPane::HasAutoHideMode](#hasautohidemode)|Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente. Esegue l'override di [CBaseTabbedPane:: HasAutoHideMode](../../mfc/reference/cbasetabbedpane-class.md#hasautohidemode).|
|[CTabbedPane::IsTabLocationBottom](#istablocationbottom)|Determina se le schede si trovano nella parte inferiore della finestra.|
|[CTabbedPane::ResetTabs](#resettabs)|Reimposta lo stato predefinito di tutti i riquadri a schede.|
|[CTabbedPane::SetTabAutoColors](#settabautocolors)|Imposta un elenco di colori personalizzati può essere usato quando è abilitata la funzionalità Colore automatico.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CTabbedPane::m_bTabsAlwaysTop](#m_btabsalwaystop)|Posizione predefinita delle schede nell'applicazione.|
|[CTabbedPane::m_pTabWndRTC](#m_ptabwndrtc)|Informazioni sulla classe di runtime per un oggetto personalizzato derivato da `CMFCTabCtrl`.|

## <a name="remarks"></a>Osservazioni

Il framework crea automaticamente un'istanza di questa classe quando un utente collega un riquadro a un altro posizionando il puntatore del mouse sul titolo del secondo riquadro. Tutti i riquadri a schede create dal framework dispongono di un ID -1.

Per specificare le schede normali anziché le schede di tipo Outlook, passare lo stile AFX_CBRS_REGULAR_TABS al metodo [CDockablePane:: CreateEx](../../mfc/reference/cdockablepane-class.md#createex) .

Se si crea un riquadro a schede con schede rimovibili, il riquadro può essere eliminato definitivamente in modo automatico dal framework. Non è pertanto consigliabile archiviare il puntatore. Per passare un puntatore al riquadro a schede, chiamare il metodo `CBasePane::GetParentTabbedPane`.

## <a name="examples"></a>Esempi

In questo esempio viene creato un oggetto `CTabbedPane`. Viene quindi usato [CBaseTabbedPane:: AddTab](../../mfc/reference/cbasetabbedpane-class.md#addtab) per alleghi schede aggiuntive.

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

Un altro modo per creare un oggetto della barra di controllo a schede consiste nell'usare [CDockablePane:: AttachToTabWnd](../../mfc/reference/cdockablepane-class.md#attachtotabwnd). Il `AttachToTabWnd` metodo crea dinamicamente un oggetto riquadro a schede usando le informazioni sulla classe di runtime impostate da [CDockablePane:: SetTabbedPaneRTC](../../mfc/reference/cdockablepane-class.md#settabbedpanertc).

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

**Intestazione:** afxTabbedPane. h

## <a name="ctabbedpanedetachpane"></a><a name="detachpane"></a> CTabbedPane::D etachPane

```
virtual BOOL DetachPane(
    CWnd* pBar,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>

in *bHide*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpaneenabletabautocolor"></a><a name="enabletabautocolor"></a> CTabbedPane:: EnableTabAutoColor

Abilita o disabilita la colorazione automatica delle schede.

```
static void EnableTabAutoColor(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per abilitare la colorazione automatica delle schede; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo statico per abilitare o disabilitare la colorazione automatica delle schede in tutti i riquadri a schede nell'applicazione. Quando questa funzionalità è abilitata, ogni scheda viene compilata in base al colore corrispondente. È possibile trovare l'elenco dei colori usati per colorare le schede chiamando il metodo [CMFCBaseTabCtrl:: GetAutoColors](../../mfc/reference/cmfcbasetabctrl-class.md#getautocolors) .

È possibile specificare l'elenco dei colori che verranno usati per le schede chiamando [CTabbedPane:: SetTabAutoColors](#settabautocolors).

Questa opzione è disabilitata per impostazione predefinita.

## <a name="ctabbedpanefloattab"></a><a name="floattab"></a> CTabbedPane:: FloatTab

```
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>
in *nTabID*<br/>
in *dockMethod*<br/>
in *bHide*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpanegettabarea"></a><a name="gettabarea"></a> CTabbedPane:: GetTabArea

Restituisce le dimensioni e la posizione dell'area della scheda nella finestra a schede.

```
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### <a name="parameters"></a>Parametri

*rectTabAreaTop*<br/>
out Contiene le dimensioni e la posizione, nelle coordinate dello schermo, dell'area della scheda superiore.

*rectTabAreaBottom*<br/>
out Contiene le dimensioni e la posizione, nelle coordinate dello schermo, dell'area della scheda in basso.

### <a name="remarks"></a>Osservazioni

Il Framework chiama questo metodo per determinare come ancorare un riquadro che un utente sta trascinando. Quando l'utente trascina un riquadro sull'area della scheda del riquadro di destinazione, il Framework tenta di aggiungerlo come una nuova scheda del riquadro di destinazione. In caso contrario, tenta di ancorare il riquadro al lato del riquadro di destinazione, che prevede la creazione di un nuovo contenitore di riquadri con un divisore di riquadro che separa i due riquadri.

Per modificare questo comportamento, eseguire l'override di questo metodo in una `CTabbedPane` classe derivata da.

## <a name="ctabbedpanegettabwnd"></a><a name="gettabwnd"></a> CTabbedPane:: GetTabWnd

```
CMFCTabCtrl* GetTabWnd() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpanehasautohidemode"></a><a name="hasautohidemode"></a> CTabbedPane:: HasAutoHideMode

```
virtual BOOL HasAutoHideMode() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpaneistablocationbottom"></a><a name="istablocationbottom"></a> CTabbedPane:: IsTabLocationBottom

Determina se le schede si trovano nella parte inferiore della finestra.

```
virtual BOOL IsTabLocationBottom() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se l'area della scheda si trova nella parte inferiore della finestra a schede; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpanem_btabsalwaystop"></a><a name="m_btabsalwaystop"></a> CTabbedPane:: m_bTabsAlwaysTop

Posizione predefinita delle schede nell'applicazione.

```
AFX_IMPORT_DATA static BOOL m_bTabsAlwaysTop;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro statico su TRUE per forzare la visualizzazione di tutte le schede nell'applicazione nella parte superiore del riquadro a schede.

È necessario impostare questo valore prima della creazione di un riquadro a schede.

Il valore predefinito è FALSE.

## <a name="ctabbedpanem_ptabwndrtc"></a><a name="m_ptabwndrtc"></a> CTabbedPane:: m_pTabWndRTC

Informazioni sulla classe di runtime per un oggetto personalizzato derivato da `CMFCTabCtrl`.

```
AFX_IMPORT_DATA static CRuntimeClass* m_pTabWndRTC;
```

### <a name="remarks"></a>Osservazioni

Impostare questa variabile membro statico su un puntatore alle informazioni sulla classe di runtime di un `CMFCTabCtrl` oggetto derivato da se si utilizza una finestra a schede personalizzata all'interno di un riquadro a schede.

## <a name="ctabbedpaneresettabs"></a><a name="resettabs"></a> CTabbedPane:: ResetTabs

Reimposta lo stato predefinito di tutti i riquadri a schede.

```
static void ResetTabs();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per ripristinare lo stato predefinito di tutti i riquadri a schede. Quando viene chiamato, questo metodo reimposta le dimensioni dei bordi e lo stato di colore automatico di tutti i riquadri a schede.

## <a name="ctabbedpanesettabautocolors"></a><a name="settabautocolors"></a> CTabbedPane:: SetTabAutoColors

Imposta un elenco di colori personalizzati utilizzati quando la funzionalità colore automatico è abilitata.

```
static void SetTabAutoColors(const CArray<COLORREF, COLORREF>& arColors);
```

### <a name="parameters"></a>Parametri

*arColors*<br/>
in Contiene la matrice di colori da impostare.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per personalizzare l'elenco di colori utilizzati quando la funzionalità colore automatico è abilitata. Si tratta di una funzione statica che interessa tutti i riquadri a schede nell'applicazione.

Usare [CTabbedPane:: EnableTabAutoColor](#enabletabautocolor) per abilitare o disabilitare la funzionalità di colore automatico.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)<br/>
[Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)
