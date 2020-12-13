---
description: 'Altre informazioni su: classe CMFCAutoHideBar'
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
ms.openlocfilehash: d7cea85a71b8390520d1345e12000aa700026269
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336605"
---
# <a name="cmfcautohidebar-class"></a>Classe CMFCAutoHideBar

La classe `CMFCAutoHideBar` è una classe della barra degli strumenti speciale che implementa la funzionalità Nascondi automaticamente.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCAutoHideBar : public CPane
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCAutoHideBar::CMFCAutoHideBar](#cmfcautohidebar)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCAutoHideBar::AddAutoHideWindow](#addautohidewindow)||
|[CMFCAutoHideBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|Esegue l'override di `CPane::AllowShowOnPaneMenu`.|
|[CMFCAutoHideBar::CalcFixedLayout](#calcfixedlayout)|Esegue l'override di [CBasePane:: CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).|
|[CMFCAutoHideBar::Create](#create)|Crea una barra di controllo e la collega all'oggetto [CPane](../../mfc/reference/cpane-class.md) . Esegue l'override di [CPane:: create](../../mfc/reference/cpane-class.md#create).|
|[CMFCAutoHideBar::GetFirstAHWindow](#getfirstahwindow)||
|[CMFCAutoHideBar::GetVisibleCount](#getvisiblecount)||
|[CMFCAutoHideBar::OnShowControlBarMenu](#onshowcontrolbarmenu)|Chiamata eseguita dal framework quando un menu di riquadri speciale sta per essere visualizzato. Esegue l'override di [CPane:: OnShowControlBarMenu](../../mfc/reference/cpane-class.md#onshowcontrolbarmenu).|
|[CMFCAutoHideBar::RemoveAutoHideWindow](#removeautohidewindow)||
|[CMFCAutoHideBar::SetActiveInGroup](#setactiveingroup)|Esegue l'override di [CPane:: SetActiveInGroup](../../mfc/reference/cpane-class.md#setactiveingroup).|
|[CMFCAutoHideBar::SetRecentVisibleState](#setrecentvisiblestate)||
|[CMFCAutoHideBar::ShowAutoHideWindow](#showautohidewindow)||
|[CMFCAutoHideBar::StretchPane](#stretchpane)|Adatta un riquadro in verticale o in orizzontale. Esegue l'override di [CBasePane:: StretchPane](../../mfc/reference/cbasepane-class.md#stretchpane).|
|[CMFCAutoHideBar::UnSetAutoHideMode](#unsetautohidemode)||
|[CMFCAutoHideBar::UpdateVisibleState](#updatevisiblestate)||

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCAutoHideBar::m_nShowAHWndDelay](#m_nshowahwnddelay)|Intervallo di tempo tra il momento in cui l'utente posiziona il cursore del mouse su una [classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) e il momento in cui il Framework Mostra la finestra associata.|

## <a name="remarks"></a>Commenti

Quando l'utente attiva un pannello dock di modalità Nascondi automaticamente, il framework crea automaticamente un oggetto `CMFCAutoHideBar`. Vengono inoltre creati gli oggetti [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) e [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) necessari. Ogni oggetto `CAutoHideDockSite` viene associato a un singolo `CMFCAutoHideButton`.

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

## <a name="cmfcautohidebaraddautohidewindow"></a><a name="addautohidewindow"></a> CMFCAutoHideBar:: AddAutoHideWindow

Aggiunge a una finestra `CDockablePane` la funzionalità per abilitare Nascondi automaticamente.

```
CMFCAutoHideButton* AddAutoHideWindow(
    CDockablePane* pAutoHideWnd,
    DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

*pAutoHideWnd*<br/>
in Finestra che si desidera nascondere.

*dwAlignment*<br/>
in Valore che specifica l'allineamento del pulsante Nascondi automaticamente con la finestra dell'applicazione.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Il parametro *dwAlignment* indica la posizione in cui si trova il pulsante Nascondi automaticamente nell'applicazione. Il parametro può essere su uno dei valori seguenti:

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

## <a name="cmfcautohidebarallowshowonpanemenu"></a><a name="allowshowonpanemenu"></a> CMFCAutoHideBar:: AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarcalcfixedlayout"></a><a name="calcfixedlayout"></a> CMFCAutoHideBar:: CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

in *bStretch*<br/>

in *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarcmfcautohidebar"></a><a name="cmfcautohidebar"></a> CMFCAutoHideBar:: CMFCAutoHideBar

Costruisce un oggetto CMFCAutoHideBar.

```
CMFCAutoHideBar();
```

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarcreate"></a><a name="create"></a> CMFCAutoHideBar:: create

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

*lpszClassName*<br/>

*dwStyle*<br/>

*Rect*<br/>

*pParentWnd*<br/>

*nID*<br/>

*dwControlBarStyle*<br/>

*pContext*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebargetfirstahwindow"></a><a name="getfirstahwindow"></a> CMFCAutoHideBar:: GetFirstAHWindow

Restituisce un puntatore alla prima finestra Nascondi automaticamente nell'applicazione.

```
CDockablePane* GetFirstAHWindow();
```

### <a name="return-value"></a>Valore restituito

Prima finestra Nascondi automaticamente nell'applicazione oppure NULL se non ne è presente nessuna.

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebargetvisiblecount"></a><a name="getvisiblecount"></a> CMFCAutoHideBar:: GetVisibleCount

Ottiene il numero di pulsanti Nascondi automaticamente visibili.

```
int GetVisibleCount();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di pulsanti Nascondi automaticamente visibili.

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarm_nshowahwnddelay"></a><a name="m_nshowahwnddelay"></a> CMFCAutoHideBar:: m_nShowAHWndDelay

Intervallo di tempo tra il momento in cui l'utente posiziona il cursore del mouse su una [classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) e il momento in cui il Framework Mostra la finestra associata.

```
int CMFCAutoHideBar::m_nShowAHWndDelay = 400;
```

### <a name="remarks"></a>Commenti

Quando l'utente posiziona il cursore del mouse su un oggetto, si verifica `CMFCAutoHideButton` un lieve ritardo prima che il Framework visualizzi la finestra associata. Questo parametro determina la lunghezza di tale ritardo, in millisecondi.

## <a name="cmfcautohidebaronshowcontrolbarmenu"></a><a name="onshowcontrolbarmenu"></a> CMFCAutoHideBar:: OnShowControlBarMenu

```
virtual BOOL OnShowControlBarMenu(CPoint);
```

### <a name="parameters"></a>Parametri

[in] *CPoint*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarremoveautohidewindow"></a><a name="removeautohidewindow"></a> CMFCAutoHideBar:: RemoveAutoHideWindow

Rimuove ed elimina la finestra Nascondi automaticamente.

```
    BOOL RemoveAutoHideWindow(CDockablePane* pAutoHideWnd);
```

### <a name="parameters"></a>Parametri

CDockablePane * *pAutoHideWnd* la finestra Nascondi automaticamente da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarsetactiveingroup"></a><a name="setactiveingroup"></a> CMFCAutoHideBar:: SetActiveInGroup

Contrassegna una barra Nascondi automaticamente come attiva.

```
virtual void SetActiveInGroup(BOOL bActive);
```

### <a name="parameters"></a>Parametri

in BOOL *bActive* true per impostare su Active; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Vedere [CPane::SetActiveInGroup](../../mfc/reference/cpane-class.md#setactiveingroup).

## <a name="cmfcautohidebarsetrecentvisiblestate"></a><a name="setrecentvisiblestate"></a> CMFCAutoHideBar:: SetRecentVisibleState

```cpp
void SetRecentVisibleState(BOOL bState);
```

### <a name="parameters"></a>Parametri

*bState*<br/>
in Stato da impostare.

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarshowautohidewindow"></a><a name="showautohidewindow"></a> CMFCAutoHideBar:: ShowAutoHideWindow

Mostra la finestra Nascondi automaticamente.

```
BOOL ShowAutoHideWindow(
    CDockablePane* pAutoHideWnd,
    BOOL bShow,
    BOOL bDelay);
```

### <a name="parameters"></a>Parametri

*pAutoHideWnd*<br/>
in Finestra da visualizzare.

*bShow*<br/>
in TRUE per visualizzare la finestra.

*bDelay*<br/>
in Questo parametro viene ignorato.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarstretchpane"></a><a name="stretchpane"></a> CMFCAutoHideBar:: StretchPane

Ridimensiona la barra Nascondi automaticamente nello stato compresso per adattare l'oggetto `CMFCAutoHideButton` .

```
virtual CSize StretchPane(
    int nLength,
    BOOL bVert);
```

### <a name="parameters"></a>Parametri

*nLength*<br/>
in Il valore non è usato nell'implementazione di base. In implementazioni derivate, usare questo valore per indicare la lunghezza del riquadro ridimensionato.

*bVert*<br/>
in Il valore non è usato nell'implementazione di base. Nelle implementazioni derivate, usare TRUE per gestire il caso in cui la barra Nascondi automaticamente è compressa verticalmente e FALSE per il caso in cui la barra Nascondi automaticamente è compressa orizzontalmente.

### <a name="return-value"></a>Valore restituito

La dimensione risultante del riquadro ridimensionato.

### <a name="remarks"></a>Commenti

Le classi derivate possono ignorare questo metodo per personalizzare il comportamento.

## <a name="cmfcautohidebarunsetautohidemode"></a><a name="unsetautohidemode"></a> CMFCAutoHideBar:: UnSetAutoHideMode

Disabilita la modalità Nascondi automaticamente per un gruppo di barre di tipo Nascondi automaticamente.

```cpp
void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup)
```

### <a name="parameters"></a>Parametri

[in] pFirstBarInGroup un puntatore alla prima barra di Nascondi automaticamente nel gruppo.

### <a name="remarks"></a>Commenti

## <a name="cmfcautohidebarupdatevisiblestate"></a><a name="updatevisiblestate"></a> CMFCAutoHideBar:: UpdateVisibleState

Chiamata dal framework quando è necessario ridisegnare la barra Nascondi automaticamente.

```cpp
void UpdateVisibleState();
```

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPane](../../mfc/reference/cpane-class.md)<br/>
[Classe CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md)<br/>
[Classe CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md)
