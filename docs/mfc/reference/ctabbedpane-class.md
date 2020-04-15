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
ms.openlocfilehash: 17351eaed585ec34117a2ef825964fd51bd0d86b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365943"
---
# <a name="ctabbedpane-class"></a>Classe CTabbedPane

Implementa la funzionalità di un riquadro con schede staccabili.

o più in dettaglio vedere il codice sorgente che si trova nella cartella **vc\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

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
|[CTabbedPane::DetachPane](#detachpane)|(Overrides [CBaseTabbedPane::DetachPane](../../mfc/reference/cbasetabbedpane-class.md#detachpane).)|
|[CTabbedPane::EnableTabAutoColor](#enabletabautocolor)|Abilita o disabilita la colorazione automatica delle schede.|
|[CTabbedPane::FloatTab](#floattab)|Sposta un riquadro, ma solo se il riquadro si trova attualmente in una scheda rimovibile. (Overrides [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).)|
|[CTabbedPane::GetTabArea](#gettabarea)|Restituisce le dimensioni e la posizione dell'area della scheda nella finestra a schede.|
|[CTabbedPane::GetTabWnd](#gettabwnd)||
|[CTabbedPane::HasAutoHideMode](#hasautohidemode)|Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente. (Overrides [CBaseTabbedPane::HasAutoHideMode](../../mfc/reference/cbasetabbedpane-class.md#hasautohidemode).)|
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

Per specificare schede normali anziché schede in stile Outlook, passare lo stile di AFX_CBRS_REGULAR_TABS al metodo [CDockablePane::CreateEx.](../../mfc/reference/cdockablepane-class.md#createex)

Se si crea un riquadro a schede con schede rimovibili, il riquadro può essere eliminato definitivamente in modo automatico dal framework. Non è pertanto consigliabile archiviare il puntatore. Per passare un puntatore al riquadro a schede, chiamare il metodo `CBasePane::GetParentTabbedPane`.

## <a name="example"></a>Esempio

In questo esempio viene creato un oggetto `CTabbedPane`. Successivamente, si utilizza [CBaseTabbedPane::AddTab](../../mfc/reference/cbasetabbedpane-class.md#addtab) per associare schede aggiuntive.

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

Un altro modo per creare un oggetto barra di controllo a schede consiste [nell'utilizzare CDockablePane::AttachToTabWnd](../../mfc/reference/cdockablepane-class.md#attachtotabwnd). Il `AttachToTabWnd` metodo crea dinamicamente un oggetto riquadro a schede utilizzando le informazioni sulla classe di runtime impostate da [CDockablePane::SetTabbedPaneRTC](../../mfc/reference/cdockablepane-class.md#settabbedpanertc).

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

**Intestazione:** afxTabbedPane.h

## <a name="ctabbedpanedetachpane"></a><a name="detachpane"></a>CTabbedPane::DetachPane

```
virtual BOOL DetachPane(
    CWnd* pBar,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *pBar (Barra)*<br/>

[in] *bNascondi*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpaneenabletabautocolor"></a><a name="enabletabautocolor"></a>CTabbedPane::EnableTabAutoColor

Abilita o disabilita la colorazione automatica delle schede.

```
static void EnableTabAutoColor(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare la colorazione automatica delle schede; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo statico per abilitare o disabilitare la colorazione automatica delle schede in tutti i riquadri a schede dell'applicazione. Quando questa funzione è abilitata, ogni scheda viene riempita con il proprio colore. È possibile trovare l'elenco di colori utilizzati per colorare le schede chiamando il [CMFCBaseTabCtrl::GetAutoColors](../../mfc/reference/cmfcbasetabctrl-class.md#getautocolors) metodo.

È possibile specificare l'elenco di colori che verranno utilizzati per le schede chiamando [CTabbedPane::SetTabAutoColors](#settabautocolors).

Questa opzione è disabilitata per impostazione predefinita.

## <a name="ctabbedpanefloattab"></a><a name="floattab"></a>CTabbedPane::FloatTab

```
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *pBar (Barra)*<br/>
[in] *nTabID (informazioni in stato in cui* è stato<br/>
[in] *dockMethod*<br/>
[in] *bNascondi*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpanegettabarea"></a><a name="gettabarea"></a>CTabbedPane::GetTabArea

Restituisce le dimensioni e la posizione dell'area delle schede nella finestra a schede.

```
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### <a name="parameters"></a>Parametri

*rectTabAreaTop*<br/>
[fuori] Contiene le dimensioni e la posizione, in coordinate dello schermo, dell'area della scheda superiore.

*rectTabAreaBottom*<br/>
[fuori] Contiene le dimensioni e la posizione, in coordinate dello schermo, dell'area della scheda inferiore.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo per determinare come ancorare un riquadro che un utente sta trascinando. Quando l'utente trascina un riquadro sull'area della scheda del riquadro di destinazione, il framework tenta di aggiungerlo come una nuova scheda del riquadro di destinazione. In caso contrario, tenta di ancorare il riquadro al lato del riquadro di destinazione, che comporta la creazione di un nuovo contenitore di riquadro con un divisore di riquadro che separa i due riquadri.

Eseguire l'override `CTabbedPane`di questo metodo in una classe derivata per modificare questo comportamento.

## <a name="ctabbedpanegettabwnd"></a><a name="gettabwnd"></a>CTabbedPane::GetTabWnd

```
CMFCTabCtrl* GetTabWnd() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpanehasautohidemode"></a><a name="hasautohidemode"></a>CTabbedPane::HasAutoHideMode

```
virtual BOOL HasAutoHideMode() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpaneistablocationbottom"></a><a name="istablocationbottom"></a>CTabbedPane::IsTabLocationBottom

Determina se le schede si trovano nella parte inferiore della finestra.

```
virtual BOOL IsTabLocationBottom() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe l'area della scheda si trova nella parte inferiore della finestra a schede; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="ctabbedpanem_btabsalwaystop"></a><a name="m_btabsalwaystop"></a>CTabbedPane::m_bTabsAlwaysTop

Posizione predefinita delle schede nell'applicazione.

```
AFX_IMPORT_DATA static BOOL m_bTabsAlwaysTop;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro statico su TRUE per forzare la visualizzazione di tutte le schede dell'applicazione nella parte superiore del riquadro a schede.

È necessario impostare questo valore prima che sia stato creato un riquadro a schede.

Il valore predefinito è FALSE.

## <a name="ctabbedpanem_ptabwndrtc"></a><a name="m_ptabwndrtc"></a>CTabbedPane::m_pTabWndRTC

Informazioni sulla classe di runtime per un oggetto personalizzato derivato da `CMFCTabCtrl`.

```
AFX_IMPORT_DATA static CRuntimeClass* m_pTabWndRTC;
```

### <a name="remarks"></a>Osservazioni

Impostare questa variabile membro statica su un `CMFCTabCtrl`puntatore alle informazioni sulla classe di runtime di un oggetto derivato da un oggetto derivato se si utilizza una finestra a schede personalizzata all'interno di un riquadro a schede.

## <a name="ctabbedpaneresettabs"></a><a name="resettabs"></a>CTabbedPane::ResetTabs

Reimposta lo stato predefinito di tutti i riquadri a schede.

```
static void ResetTabs();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per ripristinare lo stato predefinito di tutti i riquadri a schede. Quando viene chiamato, questo metodo reimposta le dimensioni dei bordi e lo stato di colore automatico di tutti i riquadri a schede.

## <a name="ctabbedpanesettabautocolors"></a><a name="settabautocolors"></a>CTabbedPane::SetTabAutoColors

Imposta un elenco di colori personalizzati utilizzati quando è attivata la funzione di colore automatico.

```
static void SetTabAutoColors(const CArray<COLORREF, COLORREF>& arColors);
```

### <a name="parameters"></a>Parametri

*arColors*<br/>
[in] Contiene la matrice di colori da impostare.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per personalizzare l'elenco dei colori utilizzati quando è attivata la funzionalità di colore automatico. Si tratta di una funzione statica e influisce su tutti i riquadri a schede nell'applicazione.

Utilizzare [CTabbedPane::EnableTabAutoColor](#enabletabautocolor) per abilitare o disabilitare la funzionalità di colore automatico.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)<br/>
[Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)
