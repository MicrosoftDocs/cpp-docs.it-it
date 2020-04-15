---
title: Classe CMFCAutoHideBar
ms.date: 10/18/2018
f1_keywords:
- CMFCAutoHideBar
- AFXAUTOHIDEBAR/CMFCAutoHideBar
- AFXAUTOHIDEBAR/CMFCAutoHideBar::CMFCAutoHideBar
- AFXAUTOHIDEBAR/CMFCAutoHideBar::AddAutoHideWindow
- AFXAUTOHIDEBAR/CMFCAutoHideBar::AllowShowOnPaneMenu
- AFXAUTOHIDEBAR/CMFCAutoHideBar::CalcFixedLayout
- AFXAUTOHIDEBAR/CMFCAutoHideBar::Create
- AFXAUTOHIDEBAR/CMFCAutoHideBar::GetFirstAHWindow
- AFXAUTOHIDEBAR/CMFCAutoHideBar::GetVisibleCount
- AFXAUTOHIDEBAR/CMFCAutoHideBar::OnShowControlBarMenu
- AFXAUTOHIDEBAR/CMFCAutoHideBar::RemoveAutoHideWindow
- AFXAUTOHIDEBAR/CMFCAutoHideBar::SetActiveInGroup
- AFXAUTOHIDEBAR/CMFCAutoHideBar::SetRecentVisibleState
- AFXAUTOHIDEBAR/CMFCAutoHideBar::ShowAutoHideWindow
- AFXAUTOHIDEBAR/CMFCAutoHideBar::StretchPane
- AFXAUTOHIDEBAR/CMFCAutoHideBar::UnSetAutoHideMode
- AFXAUTOHIDEBAR/CMFCAutoHideBar::UpdateVisibleState
- AFXAUTOHIDEBAR/CMFCAutoHideBar::m_nShowAHWndDelay
helpviewer_keywords:
- CMFCAutoHideBar [MFC], CMFCAutoHideBar
- CMFCAutoHideBar [MFC], AddAutoHideWindow
- CMFCAutoHideBar [MFC], AllowShowOnPaneMenu
- CMFCAutoHideBar [MFC], CalcFixedLayout
- CMFCAutoHideBar [MFC], Create
- CMFCAutoHideBar [MFC], GetFirstAHWindow
- CMFCAutoHideBar [MFC], GetVisibleCount
- CMFCAutoHideBar [MFC], OnShowControlBarMenu
- CMFCAutoHideBar [MFC], RemoveAutoHideWindow
- CMFCAutoHideBar [MFC], SetActiveInGroup
- CMFCAutoHideBar [MFC], SetRecentVisibleState
- CMFCAutoHideBar [MFC], ShowAutoHideWindow
- CMFCAutoHideBar [MFC], StretchPane
- CMFCAutoHideBar [MFC], UnSetAutoHideMode
- CMFCAutoHideBar [MFC], UpdateVisibleState
- CMFCAutoHideBar [MFC], m_nShowAHWndDelay
ms.assetid: 54c8d84f-de64-4efd-8a47-3ea0ade40a70
ms.openlocfilehash: 62750f4fb1261f4f30286297c3a240ab67e6df1c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369906"
---
# <a name="cmfcautohidebar-class"></a>Classe CMFCAutoHideBar

La classe `CMFCAutoHideBar` è una classe della barra degli strumenti speciale che implementa la funzionalità Nascondi automaticamente.

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCAutoHideBar : public CPane
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCAutoHideBar::CMFCAutoHideBar](#cmfcautohidebar)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCAutoHideBar::AddAutoHideWindow](#addautohidewindow)||
|[CMFCAutoHideBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|Esegue l'override di `CPane::AllowShowOnPaneMenu`.|
|[CMFCAutoHideBar::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|
|[CMFCAutoHideBar::Create](#create)|Crea una barra di controllo e la associa all'oggetto [CPane.](../../mfc/reference/cpane-class.md) (Sostituisce [CPane::Create](../../mfc/reference/cpane-class.md#create).)|
|[CMFCAutoHideBar::GetFirstAHWindow](#getfirstahwindow)||
|[CMFCAutoHideBar::GetVisibleCount](#getvisiblecount)||
|[CMFCAutoHideBar::OnShowControlBarMenu](#onshowcontrolbarmenu)|Chiamata eseguita dal framework quando un menu di riquadri speciale sta per essere visualizzato. (Esegue l'override di [CPane::OnShowControlBarMenu](../../mfc/reference/cpane-class.md#onshowcontrolbarmenu).)|
|[CMFCAutoHideBar::RemoveAutoHideWindow](#removeautohidewindow)||
|[CMFCAutoHideBar::SetActiveInGroup](#setactiveingroup)|(Esegue l'override di [CPane::SetActiveInGroup](../../mfc/reference/cpane-class.md#setactiveingroup).)|
|[CMFCAutoHideBar::SetRecentVisibleState](#setrecentvisiblestate)||
|[CMFCAutoHideBar::ShowAutoHideWindow](#showautohidewindow)||
|[CMFCAutoHideBar::StretchPane](#stretchpane)|Adatta un riquadro in verticale o in orizzontale. (Esegue l'override di [CBasePane::StretchPane](../../mfc/reference/cbasepane-class.md#stretchpane).)|
|[CMFCAutoHideBar::UnSetAutoHideMode](#unsetautohidemode)||
|[CMFCAutoHideBar::UpdateVisibleState](#updatevisiblestate)||

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCAutoHideBar::m_nShowAHWndDelay](#m_nshowahwnddelay)|Ritardo tra il momento in cui l'utente posiziona il cursore del mouse su una [classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) e il momento in cui il framework visualizza la finestra associata.|

## <a name="remarks"></a>Osservazioni

Quando l'utente attiva un pannello dock di modalità Nascondi automaticamente, il framework crea automaticamente un oggetto `CMFCAutoHideBar`. Crea inoltre gli oggetti [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) e [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) necessari. Ogni oggetto `CAutoHideDockSite` viene associato a un singolo `CMFCAutoHideButton`.

La classe `CMFCAutoHideBar` implementa la visualizzazione di un `CAutoHideDockSite` quando il mouse di un utente passa sopra a un `CMFCAutoHideButton`. Quando la barra degli strumenti riceve un messaggio di WM_MOUSEMOVE, `CMFCAutoHideBar` avvia un timer. Quando il timer completa, invia alla barra degli strumenti una notifica degli eventi di WM_TIMER. La barra degli strumenti gestisce questo evento controllando che il puntatore del mouse sia posizionato sullo stesso pulsante Nascondi automaticamente inserito quando il timer è stato avviato. In tal caso, viene visualizzato l'oggetto `CAutoHideDockSite` allegato.

È possibile controllare la durata del ritardo del timer impostando `m_nShowAHWndDelay`. Il valore predefinito è 400 ms.

## <a name="example"></a>Esempio

L'esempio seguente illustra come costruire un oggetto `CMFCAutoHideBar` e usare il relativo metodo `GetDockSiteRow`.

[!code-cpp[NVC_MFC_RibbonApp#26](../../mfc/reference/codesnippet/cpp/cmfcautohidebar-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxautohidebar.h

## <a name="cmfcautohidebaraddautohidewindow"></a><a name="addautohidewindow"></a>CMFCAutoHideBar::AddAutoHideWindow

Aggiunge a una finestra `CDockablePane` la funzionalità per abilitare Nascondi automaticamente.

```
CMFCAutoHideButton* AddAutoHideWindow(
    CDockablePane* pAutoHideWnd,
    DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

*pAutoHideWnd*<br/>
[in] Finestra che si desidera nascondere.

*dwAllineamento*<br/>
[in] Valore che specifica l'allineamento del pulsante Nascondi automaticamente con la finestra dell'applicazione.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Il parametro *dwAlignment* indica la posizione del pulsante Nascondi automaticamente nell'applicazione. Il parametro può essere su uno dei valori seguenti:

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

## <a name="cmfcautohidebarallowshowonpanemenu"></a><a name="allowshowonpanemenu"></a>CMFCAutoHideBar::AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarcalcfixedlayout"></a><a name="calcfixedlayout"></a>CMFCAutoHideBar::CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

[in] *bAllunga*<br/>

[in] *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarcmfcautohidebar"></a><a name="cmfcautohidebar"></a>CMFCAutoHideBar::CMFCAutoHideBar

Costruisce un oggetto CMFCAutoHideBar.

```
CMFCAutoHideBar();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarcreate"></a><a name="create"></a>CMFCAutoHideBar::Create

```
virtual BOOL Create(
    LPCTSTR lpszClassName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    DWORD dwControlBarStyle = AFX_DEFAULT_PANE_STYLE,
    CCreateContext* pContext = NULL);
```

### <a name="parameters"></a>Parametri

*lpszClassName (nome di classe)*<br/>

*DwStyle (in stile dwStyle)*<br/>

*Rect*<br/>

*pParentWnd (informazioni in due)*<br/>

*nID*<br/>

*dwControlBarStyle (stile dwControlBarStyle)*<br/>

*pContext*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebargetfirstahwindow"></a><a name="getfirstahwindow"></a>CMFCAutoHideBar::GetFirstAHWindow

Restituisce un puntatore alla prima finestra Nascondi automaticamente nell'applicazione.

```
CDockablePane* GetFirstAHWindow();
```

### <a name="return-value"></a>Valore restituito

Prima finestra Nascondi automaticamente nell'applicazione oppure NULL se non ne è presente nessuna.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebargetvisiblecount"></a><a name="getvisiblecount"></a>CMFCAutoHideBar::GetVisibleCount

Ottiene il numero di pulsanti Nascondi automaticamente visibili.

```
int GetVisibleCount();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di pulsanti Nascondi automaticamente visibili.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarm_nshowahwnddelay"></a><a name="m_nshowahwnddelay"></a>CMFCAutoHideBar::m_nShowAHWndDelay

Ritardo tra il momento in cui l'utente posiziona il cursore del mouse su una [classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) e il momento in cui il framework visualizza la finestra associata.

```
int CMFCAutoHideBar::m_nShowAHWndDelay = 400;
```

### <a name="remarks"></a>Osservazioni

Quando l'utente posiziona il `CMFCAutoHideButton`cursore del mouse su un oggetto , si verifica un leggero ritardo prima che il framework visualizzi la finestra associata. Questo parametro determina la lunghezza di tale ritardo in millisecondi.

## <a name="cmfcautohidebaronshowcontrolbarmenu"></a><a name="onshowcontrolbarmenu"></a>CMFCAutoHideBar::OnShowControlBarMenu

```
virtual BOOL OnShowControlBarMenu(CPoint);
```

### <a name="parameters"></a>Parametri

[in] *CPoint*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarremoveautohidewindow"></a><a name="removeautohidewindow"></a>CMFCAutoHideBar::RemoveAutoHideWindow

Rimuove ed elimina la finestra Nascondi automaticamente.

```
    BOOL RemoveAutoHideWindow(CDockablePane* pAutoHideWnd);
```

### <a name="parameters"></a>Parametri

CDockablePane *pAutoHideWnd* La finestra Nascondi automaticamente da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarsetactiveingroup"></a><a name="setactiveingroup"></a>CMFCAutoHideBar::SetActiveInGroup

Contrassegna una barra Nascondi automaticamente come attiva.

```
virtual void SetActiveInGroup(BOOL bActive);
```

### <a name="parameters"></a>Parametri

[in] BOOL *bActive* TRUE per impostare attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Vedere [CPane::SetActiveInGroup](../../mfc/reference/cpane-class.md#setactiveingroup).

## <a name="cmfcautohidebarsetrecentvisiblestate"></a><a name="setrecentvisiblestate"></a>CMFCAutoHideBar::SetRecentVisibleState

```
void SetRecentVisibleState(BOOL bState);
```

### <a name="parameters"></a>Parametri

*bState*<br/>
[in] Stato da impostare.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarshowautohidewindow"></a><a name="showautohidewindow"></a>CMFCAutoHideBar::ShowAutoHideWindow

Mostra la finestra Nascondi automaticamente.

```
BOOL ShowAutoHideWindow(
    CDockablePane* pAutoHideWnd,
    BOOL bShow,
    BOOL bDelay);
```

### <a name="parameters"></a>Parametri

*pAutoHideWnd*<br/>
[in] Finestra da visualizzare.

*bShow*<br/>
[in] TRUE per visualizzare la finestra.

*bRitarda*<br/>
[in] Questo parametro viene ignorato.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarstretchpane"></a><a name="stretchpane"></a>CMFCAutoHideBar::StretchPane

Ridimensiona la barra Nascondi automaticamente nello stato compresso per adattare l'oggetto `CMFCAutoHideButton` .

```
virtual CSize StretchPane(
    int nLength,
    BOOL bVert);
```

### <a name="parameters"></a>Parametri

*nLunghezza*<br/>
[in] Il valore non viene utilizzato nell'implementazione di base. In implementazioni derivate, usare questo valore per indicare la lunghezza del riquadro ridimensionato.

*bVert (in questo modo)*<br/>
[in] Il valore non viene utilizzato nell'implementazione di base. Nelle implementazioni derivate, usare TRUE per gestire il caso in cui la barra Nascondi automaticamente è compressa verticalmente e FALSE per il caso in cui la barra Nascondi automaticamente è compressa orizzontalmente.

### <a name="return-value"></a>Valore restituito

La dimensione risultante del riquadro ridimensionato.

### <a name="remarks"></a>Osservazioni

Le classi derivate possono ignorare questo metodo per personalizzare il comportamento.

## <a name="cmfcautohidebarunsetautohidemode"></a><a name="unsetautohidemode"></a>CMFCAutoHideBar::UnSetAutoHideMode

Disabilita la modalità Nascondi automaticamente per un gruppo di barre di tipo Nascondi automaticamente.

```
void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup)
```

### <a name="parameters"></a>Parametri

[in] pFirstBarInGroup Un puntatore alla prima barra di nascondi automaticamente nel gruppo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcautohidebarupdatevisiblestate"></a><a name="updatevisiblestate"></a>CMFCAutoHideBar::UpdateVisibleState

Chiamata dal framework quando è necessario ridisegnare la barra Nascondi automaticamente.

```
void UpdateVisibleState();
```

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CPane Class](../../mfc/reference/cpane-class.md)<br/>
[CAutoHideDockSite (classe)](../../mfc/reference/cautohidedocksite-class.md)<br/>
[Classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md)
