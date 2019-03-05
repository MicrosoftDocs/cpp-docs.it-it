---
title: Classe CMultiPaneFrameWnd
ms.date: 11/04/2016
f1_keywords:
- CMultiPaneFrameWnd
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AddPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AddRecentPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AdjustLayout
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AdjustPaneFrames
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CalcExpectedDockedRect
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CanBeAttached
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CanBeDockedToPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CheckGripperVisibility
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CloseMiniFrame
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::ConvertToTabbedDocument
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockFrame
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockRecentPaneToMainFrame
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetCaptionText
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPaneContainerManager
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetFirstVisiblePane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPaneCount
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetVisiblePaneCount
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::InsertPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::LoadState
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnDockToRecentPos
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnKillRollUpTimer
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnPaneRecalcLayout
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnSetRollUpTimer
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnShowPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::PaneFromPoint
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::RemoveNonValidPanes
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::RemovePane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::ReplacePane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SaveState
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::Serialize
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetDockState
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetLastFocusedPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetPreDockState
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::StoreRecentDockSiteInfo
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::StoreRecentTabRelatedInfo
helpviewer_keywords:
- CMultiPaneFrameWnd [MFC], AddPane
- CMultiPaneFrameWnd [MFC], AddRecentPane
- CMultiPaneFrameWnd [MFC], AdjustLayout
- CMultiPaneFrameWnd [MFC], AdjustPaneFrames
- CMultiPaneFrameWnd [MFC], CalcExpectedDockedRect
- CMultiPaneFrameWnd [MFC], CanBeAttached
- CMultiPaneFrameWnd [MFC], CanBeDockedToPane
- CMultiPaneFrameWnd [MFC], CheckGripperVisibility
- CMultiPaneFrameWnd [MFC], CloseMiniFrame
- CMultiPaneFrameWnd [MFC], ConvertToTabbedDocument
- CMultiPaneFrameWnd [MFC], DockFrame
- CMultiPaneFrameWnd [MFC], DockPane
- CMultiPaneFrameWnd [MFC], DockRecentPaneToMainFrame
- CMultiPaneFrameWnd [MFC], GetCaptionText
- CMultiPaneFrameWnd [MFC], GetPaneContainerManager
- CMultiPaneFrameWnd [MFC], GetFirstVisiblePane
- CMultiPaneFrameWnd [MFC], GetPane
- CMultiPaneFrameWnd [MFC], GetPaneCount
- CMultiPaneFrameWnd [MFC], GetVisiblePaneCount
- CMultiPaneFrameWnd [MFC], InsertPane
- CMultiPaneFrameWnd [MFC], LoadState
- CMultiPaneFrameWnd [MFC], OnDockToRecentPos
- CMultiPaneFrameWnd [MFC], OnKillRollUpTimer
- CMultiPaneFrameWnd [MFC], OnPaneRecalcLayout
- CMultiPaneFrameWnd [MFC], OnSetRollUpTimer
- CMultiPaneFrameWnd [MFC], OnShowPane
- CMultiPaneFrameWnd [MFC], PaneFromPoint
- CMultiPaneFrameWnd [MFC], RemoveNonValidPanes
- CMultiPaneFrameWnd [MFC], RemovePane
- CMultiPaneFrameWnd [MFC], ReplacePane
- CMultiPaneFrameWnd [MFC], SaveState
- CMultiPaneFrameWnd [MFC], Serialize
- CMultiPaneFrameWnd [MFC], SetDockState
- CMultiPaneFrameWnd [MFC], SetLastFocusedPane
- CMultiPaneFrameWnd [MFC], SetPreDockState
- CMultiPaneFrameWnd [MFC], StoreRecentDockSiteInfo
- CMultiPaneFrameWnd [MFC], StoreRecentTabRelatedInfo
ms.assetid: 989a548e-0d70-46b7-a513-8cf740e1be3e
ms.openlocfilehash: bb420021ec5b9839091c42b5eae6e1d5b9f7f977
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57281239"
---
# <a name="cmultipaneframewnd-class"></a>Classe CMultiPaneFrameWnd

Il `CMultiPaneFrameWnd` classe estende [classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md). Può supportare più riquadri. Invece di un singolo handle incorporato in una barra di controllo `CMultiPaneFrameWnd` contiene un [classe CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md) oggetto che consente all'utente di ancorare un' `CMultiPaneFrameWnd` a un altro e in modo dinamico creare più mobile, a schede Windows.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMultiPaneFrameWnd : public CPaneFrameWnd
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMultiPaneFrameWnd::AddPane](#addpane)|Aggiunge un riquadro. (Esegue l'override [CPaneFrameWnd::AddPane](../../mfc/reference/cpaneframewnd-class.md#addpane).)|
|[CMultiPaneFrameWnd::AddRecentPane](#addrecentpane)||
|[CMultiPaneFrameWnd::AdjustLayout](#adjustlayout)|Regola il layout della finestra con mini-cornice. (Esegue l'override [CPaneFrameWnd::AdjustLayout](../../mfc/reference/cpaneframewnd-class.md#adjustlayout).)|
|[CMultiPaneFrameWnd::AdjustPaneFrames](#adjustpaneframes)|(Esegue l'override [CPaneFrameWnd::AdjustPaneFrames](../../mfc/reference/cpaneframewnd-class.md#adjustpaneframes).)|
|[CMultiPaneFrameWnd::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calcola il rettangolo previsto di una finestra ancorata. (Esegue l'override [CPaneFrameWnd::CalcExpectedDockedRect](../../mfc/reference/cpaneframewnd-class.md#calcexpecteddockedrect).)|
|[CMultiPaneFrameWnd::CanBeAttached](#canbeattached)|Determina se il riquadro corrente può essere ancorata a un'altra finestra del riquadro o il frame. (Esegue l'override [CPaneFrameWnd::CanBeAttached](../../mfc/reference/cpaneframewnd-class.md#canbeattached).)|
|[CMultiPaneFrameWnd::CanBeDockedToPane](#canbedockedtopane)|Determina se la finestra con mini-cornice può essere ancorata a un riquadro. (Esegue l'override [CPaneFrameWnd::CanBeDockedToPane](../../mfc/reference/cpaneframewnd-class.md#canbedockedtopane).)|
|[CMultiPaneFrameWnd::CheckGripperVisibility](#checkgrippervisibility)|(Esegue l'override [CPaneFrameWnd::CheckGripperVisibility](../../mfc/reference/cpaneframewnd-class.md#checkgrippervisibility).)|
|[CMultiPaneFrameWnd::CloseMiniFrame](#closeminiframe)|Esegue l'override di `CPaneFrameWnd::CloseMiniFrame`.|
|[CMultiPaneFrameWnd::ConvertToTabbedDocument](#converttotabbeddocument)|Converte un riquadro in un documento a schede. (Esegue l'override [CPaneFrameWnd::ConvertToTabbedDocument](../../mfc/reference/cpaneframewnd-class.md#converttotabbeddocument).)|
|[CMultiPaneFrameWnd::DockFrame](#dockframe)||
|[CMultiPaneFrameWnd::DockPane](#dockpane)|Ancora il riquadro. (Esegue l'override [CPaneFrameWnd::DockPane](../../mfc/reference/cpaneframewnd-class.md#dockpane).)|
|[CMultiPaneFrameWnd::DockRecentPaneToMainFrame](#dockrecentpanetomainframe)||
|[CMultiPaneFrameWnd::GetCaptionText](#getcaptiontext)|Restituisce il testo del titolo. (Esegue l'override [CPaneFrameWnd::GetCaptionText](../../mfc/reference/cpaneframewnd-class.md#getcaptiontext).)|
|[CMultiPaneFrameWnd::GetPaneContainerManager](#getpanecontainermanager)|Restituisce un riferimento all'oggetto gestore interno del contenitore.|
|[CMultiPaneFrameWnd::GetFirstVisiblePane](#getfirstvisiblepane)|Restituisce il primo riquadro visibile contenuto in una finestra con mini-cornice. (Esegue l'override [CPaneFrameWnd::GetFirstVisiblePane](../../mfc/reference/cpaneframewnd-class.md#getfirstvisiblepane).)|
|[CMultiPaneFrameWnd::GetPane](#getpane)|Restituisce un riquadro contenuto nella finestra con mini-cornice. (Esegue l'override [CPaneFrameWnd::GetPane](../../mfc/reference/cpaneframewnd-class.md#getpane).)|
|[CMultiPaneFrameWnd::GetPaneCount](#getpanecount)|Restituisce il numero di riquadri contenuti in una finestra con mini-cornice. (Esegue l'override [CPaneFrameWnd::GetPaneCount](../../mfc/reference/cpaneframewnd-class.md#getpanecount).)|
|[CMultiPaneFrameWnd::GetVisiblePaneCount](#getvisiblepanecount)|Restituisce il numero di riquadri visibili contenuti in una finestra con mini-cornice. (Esegue l'override [CPaneFrameWnd::GetVisiblePaneCount](../../mfc/reference/cpaneframewnd-class.md#getvisiblepanecount).)|
|[CMultiPaneFrameWnd::InsertPane](#insertpane)||
|[CMultiPaneFrameWnd::LoadState](#loadstate)|Carica lo stato del riquadro dal Registro di sistema. (Esegue l'override [CPaneFrameWnd::LoadState](../../mfc/reference/cpaneframewnd-class.md#loadstate).)|
|[CMultiPaneFrameWnd::OnDockToRecentPos](#ondocktorecentpos)|Ancora la finestra con mini-cornice alla posizione più recente. (Esegue l'override [CPaneFrameWnd::OnDockToRecentPos](../../mfc/reference/cpaneframewnd-class.md#ondocktorecentpos).)|
|[CMultiPaneFrameWnd::OnKillRollUpTimer](#onkillrolluptimer)|Arresta il timer di rollup. (Esegue l'override [CPaneFrameWnd::OnKillRollUpTimer](../../mfc/reference/cpaneframewnd-class.md#onkillrolluptimer).)|
|[CMultiPaneFrameWnd::OnPaneRecalcLayout](#onpanerecalclayout)|Regola il layout di un riquadro all'interno di una finestra con mini-cornice. (Esegue l'override [CPaneFrameWnd::OnPaneRecalcLayout](../../mfc/reference/cpaneframewnd-class.md#onpanerecalclayout).)|
|[CMultiPaneFrameWnd::OnSetRollUpTimer](#onsetrolluptimer)|Imposta il timer di rollup. (Esegue l'override [CPaneFrameWnd::OnSetRollUpTimer](../../mfc/reference/cpaneframewnd-class.md#onsetrolluptimer).)|
|[CMultiPaneFrameWnd::OnShowPane](#onshowpane)|Chiamata eseguita dal framework quando un riquadro nella finestra con mini-cornice è nascosto o visualizzato. (Esegue l'override [CPaneFrameWnd::OnShowPane](../../mfc/reference/cpaneframewnd-class.md#onshowpane).)|
|[CMultiPaneFrameWnd::PaneFromPoint](#panefrompoint)|Restituisce un riquadro contenente un punto fornito dall'utente all'interno di una finestra con mini-cornice. (Esegue l'override [CPaneFrameWnd::PaneFromPoint](../../mfc/reference/cpaneframewnd-class.md#panefrompoint).)|
|[CMultiPaneFrameWnd::RemoveNonValidPanes](#removenonvalidpanes)|Chiamata eseguita dal framework per rimuovere i riquadri non validi. (Esegue l'override [CPaneFrameWnd::RemoveNonValidPanes](../../mfc/reference/cpaneframewnd-class.md#removenonvalidpanes).)|
|[CMultiPaneFrameWnd::RemovePane](#removepane)|Rimuove un riquadro dalla finestra con mini-cornice. (Esegue l'override [CPaneFrameWnd::RemovePane](../../mfc/reference/cpaneframewnd-class.md#removepane).)|
|[CMultiPaneFrameWnd::ReplacePane](#replacepane)|Sostituisce un riquadro con un altro. (Esegue l'override [CPaneFrameWnd::ReplacePane](../../mfc/reference/cpaneframewnd-class.md#replacepane).)|
|[CMultiPaneFrameWnd::SaveState](#savestate)|Salva lo stato del riquadro nel Registro di sistema. (Esegue l'override [CPaneFrameWnd::SaveState](../../mfc/reference/cpaneframewnd-class.md#savestate).)|
|[CMultiPaneFrameWnd::Serialize](#serialize)|Esegue l'override di `CPaneFrameWnd::Serialize`.|
|[CMultiPaneFrameWnd::SetDockState](#setdockstate)|Imposta lo stato di ancoraggio. (Esegue l'override [CPaneFrameWnd::SetDockState](../../mfc/reference/cpaneframewnd-class.md#setdockstate).)|
|[CMultiPaneFrameWnd::SetLastFocusedPane](#setlastfocusedpane)||
|[CMultiPaneFrameWnd::SetPreDockState](#setpredockstate)|Imposta lo stato di pre-ancoraggio. (Esegue l'override [CPaneFrameWnd::SetPreDockState](../../mfc/reference/cpaneframewnd-class.md#setpredockstate).)|
|[CMultiPaneFrameWnd::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)|(Esegue l'override [CPaneFrameWnd::StoreRecentDockSiteInfo](../../mfc/reference/cpaneframewnd-class.md#storerecentdocksiteinfo).)|
|[CMultiPaneFrameWnd::StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)|(Esegue l'override [CPaneFrameWnd::StoreRecentTabRelatedInfo](../../mfc/reference/cpaneframewnd-class.md#storerecenttabrelatedinfo).)|

## <a name="remarks"></a>Note

La maggior parte dei metodi in questa classe esegue l'override di metodi nel [classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) classe.

Se un riquadro viene utilizzato lo stile AFX_CBRS_AUTO_ROLLUP e l'utente, tale riquadro viene ancorato a una finestra cornice a più riquadri, l'utente può eseguire il rollback la finestra indipendentemente dalle impostazioni di stile di visualizzazione di altri riquadri ancorati.

Il framework crea automaticamente un `CMultiPaneFrameWnd` oggetto quando l'utente separa un riquadro che viene utilizzato lo stile CBRS_FLOAT_MULTI.

Per informazioni sulla derivazione di una classe dalla classe la `CPaneFrameWnd` classi e creazione in modo dinamico, vedere [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CMultiPaneFrameWnd` oggetto. Questo frammento di codice fa parte di [esempio imposta dimensioni del riquadro](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_SetPaneSize#4](../../mfc/reference/codesnippet/cpp/cmultipaneframewnd-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)

[CMultiPaneFrameWnd](../../mfc/reference/cmultipaneframewnd-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxMultiPaneFrameWnd.h

##  <a name="addpane"></a>  CMultiPaneFrameWnd::AddPane

```
virtual void AddPane(CBasePane* pWnd);
```

### <a name="parameters"></a>Parametri

[in] *pWnd*<br/>

### <a name="remarks"></a>Note

##  <a name="addrecentpane"></a>  CMultiPaneFrameWnd::AddRecentPane

```
virtual BOOL AddRecentPane(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

[in] *pBar*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="adjustlayout"></a>  CMultiPaneFrameWnd::AdjustLayout

```
virtual void AdjustLayout();
```

### <a name="remarks"></a>Note

##  <a name="adjustpaneframes"></a>  CMultiPaneFrameWnd::AdjustPaneFrames

```
virtual void AdjustPaneFrames();
```

### <a name="remarks"></a>Note

##  <a name="calcexpecteddockedrect"></a>  CMultiPaneFrameWnd::CalcExpectedDockedRect

```
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### <a name="parameters"></a>Parametri

[in] *pWndToDock*<br/>
[in] *ptMouse*<br/>
[in] *rectResult*<br/>
[in] *bDrawTab*<br/>
[in] *ppTargetBar*<br/>

### <a name="remarks"></a>Note

##  <a name="canbeattached"></a>  CMultiPaneFrameWnd::CanBeAttached

```
virtual BOOL CanBeAttached() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="canbedockedtopane"></a>  CMultiPaneFrameWnd::CanBeDockedToPane

```
virtual BOOL CanBeDockedToPane(const CDockablePane* pDockingBar) const;
```

### <a name="parameters"></a>Parametri

[in] *pDockingBar*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="checkgrippervisibility"></a>  CMultiPaneFrameWnd::CheckGripperVisibility

```
virtual void CheckGripperVisibility();
```

### <a name="remarks"></a>Note

##  <a name="closeminiframe"></a>  CMultiPaneFrameWnd::CloseMiniFrame

```
virtual void CloseMiniFrame();
```

### <a name="remarks"></a>Note

##  <a name="converttotabbeddocument"></a>  CMultiPaneFrameWnd::ConvertToTabbedDocument

```
virtual void ConvertToTabbedDocument();
```

### <a name="remarks"></a>Note

##  <a name="dockframe"></a>  CMultiPaneFrameWnd::DockFrame

```
virtual BOOL DockFrame(
    CPaneFrameWnd* pDockedFrame,
    AFX_DOCK_METHOD dockMethod);
```

### <a name="parameters"></a>Parametri

[in] *pDockedFrame*<br/>
[in] *dockMethod*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="dockpane"></a>  CMultiPaneFrameWnd::DockPane

```
virtual BOOL DockPane(CDockablePane* pDockedBar);
```

### <a name="parameters"></a>Parametri

[in] *pDockedBar*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="dockrecentpanetomainframe"></a>  CMultiPaneFrameWnd::DockRecentPaneToMainFrame

```
virtual void DockRecentPaneToMainFrame(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

[in] *pBar*<br/>

### <a name="remarks"></a>Note

##  <a name="getcaptiontext"></a>  CMultiPaneFrameWnd::GetCaptionText

```
virtual CString GetCaptionText();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getfirstvisiblepane"></a>  CMultiPaneFrameWnd::GetFirstVisiblePane

```
virtual CWnd* GetFirstVisiblePane() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getpane"></a>  CMultiPaneFrameWnd::GetPane

```
virtual CWnd* GetPane() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getpanecontainermanager"></a>  CMultiPaneFrameWnd::GetPaneContainerManager

Restituisce un riferimento all'oggetto gestore interno del contenitore.

```
CPaneContainerManager& GetPaneContainerManager();
```

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto gestore interno del contenitore.

### <a name="remarks"></a>Note

Questo metodo può essere utilizzato per accedere interna [classe CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md) oggetto.

##  <a name="getpanecount"></a>  CMultiPaneFrameWnd::GetPaneCount

```
virtual int GetPaneCount() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getvisiblepanecount"></a>  CMultiPaneFrameWnd::GetVisiblePaneCount

```
virtual int GetVisiblePaneCount() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="insertpane"></a>  CMultiPaneFrameWnd::InsertPane

```
virtual BOOL InsertPane(
    CBasePane* pControlBar,
    CBasePane* pTarget,
    BOOL bAfter);
```

### <a name="parameters"></a>Parametri

[in] *pControlBar*<br/>
[in] *pTarget*<br/>
[in] *bAfter*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="loadstate"></a>  CMultiPaneFrameWnd::LoadState

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

[in] *lpszProfileName*<br/>
[in] *uiID*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="ondocktorecentpos"></a>  CMultiPaneFrameWnd::OnDockToRecentPos

```
virtual void OnDockToRecentPos();
```

### <a name="remarks"></a>Note

##  <a name="onkillrolluptimer"></a>  CMultiPaneFrameWnd::OnKillRollUpTimer

```
virtual void OnKillRollUpTimer();
```

### <a name="remarks"></a>Note

##  <a name="onpanerecalclayout"></a>  CMultiPaneFrameWnd::OnPaneRecalcLayout

```
virtual void OnPaneRecalcLayout();
```

### <a name="remarks"></a>Note

##  <a name="onsetrolluptimer"></a>  CMultiPaneFrameWnd::OnSetRollUpTimer

```
virtual void OnSetRollUpTimer();
```

### <a name="remarks"></a>Note

##  <a name="onshowpane"></a>  CMultiPaneFrameWnd::OnShowPane

```
virtual void OnShowPane(
    CDockablePane* pBar,
    BOOL bShow);
```

### <a name="parameters"></a>Parametri

[in] *pBar*<br/>
[in] *bShow*<br/>

### <a name="remarks"></a>Note

##  <a name="panefrompoint"></a>  CMultiPaneFrameWnd::PaneFromPoint

```
virtual CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    BOOL bCheckVisibility);
```

### <a name="parameters"></a>Parametri

[in] *point*<br/>
[in] *nSensitivity*<br/>
[in] *bCheckVisibility*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="removenonvalidpanes"></a>  CMultiPaneFrameWnd::RemoveNonValidPanes

```
virtual void RemoveNonValidPanes();
```

### <a name="remarks"></a>Note

##  <a name="removepane"></a>  CMultiPaneFrameWnd::RemovePane

```
virtual void RemovePane(
    CBasePane* pBar,
    BOOL bDestroy = FALSE,
    BOOL bNoDelayedDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *pBar*<br/>
[in] *bDestroy*<br/>
[in] *bNoDelayedDestroy*<br/>

### <a name="remarks"></a>Note

##  <a name="replacepane"></a>  CMultiPaneFrameWnd::ReplacePane

```
virtual void ReplacePane(
    CBasePane* pBarOrg,
    CBasePane* pBarReplaceWith);
```

### <a name="parameters"></a>Parametri

[in] *pBarOrg*<br/>
[in] *pBarReplaceWith*<br/>

### <a name="remarks"></a>Note

##  <a name="savestate"></a>  CMultiPaneFrameWnd::SaveState

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

[in] *lpszProfileName*<br/>
[in] *uiID*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="serialize"></a>  CMultiPaneFrameWnd::Serialize

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

[in] *ar*<br/>

### <a name="remarks"></a>Note

##  <a name="setdockstate"></a>  CMultiPaneFrameWnd::SetDockState

```
virtual void SetDockState(CDockingManager* pDockManager);
```

### <a name="parameters"></a>Parametri

[in] *pDockManager*<br/>

### <a name="remarks"></a>Note

##  <a name="setlastfocusedpane"></a>  CMultiPaneFrameWnd::SetLastFocusedPane

```
void SetLastFocusedPane(HWND hwnd);
```

### <a name="parameters"></a>Parametri

[in] *hwnd*<br/>

### <a name="remarks"></a>Note

##  <a name="setpredockstate"></a>  CMultiPaneFrameWnd::SetPreDockState

```
virtual BOOL SetPreDockState(
    AFX_PREDOCK_STATE preDockState,
    CBasePane* pBarToDock = NULL,
    AFX_DOCK_METHOD dockMethod = DM_MOUSE);
```

### <a name="parameters"></a>Parametri

[in] *preDockState*<br/>
[in] *pBarToDock*<br/>
[in] *dockMethod*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="storerecentdocksiteinfo"></a>  CMultiPaneFrameWnd::StoreRecentDockSiteInfo

```
virtual void StoreRecentDockSiteInfo(CPane* pBar);
```

### <a name="parameters"></a>Parametri

[in] *pBar*<br/>

### <a name="remarks"></a>Note

##  <a name="storerecenttabrelatedinfo"></a>  CMultiPaneFrameWnd::StoreRecentTabRelatedInfo

```
virtual void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,
    CDockablePane* pTabbedBar);
```

### <a name="parameters"></a>Parametri

[in] *pDockingBar*<br/>
[in] *pTabbedBar*<br/>

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)
