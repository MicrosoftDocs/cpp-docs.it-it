---
title: CDockSite Class
ms.date: 10/18/2018
f1_keywords:
- CDockSite
- AFXDOCKSITE/CDockSite
- AFXDOCKSITE/CDockSite::AddRow
- AFXDOCKSITE/CDockSite::AdjustDockingLayout
- AFXDOCKSITE/CDockSite::AdjustLayout
- AFXDOCKSITE/CDockSite::AlignDockSite
- AFXDOCKSITE/CDockSite::CalcFixedLayout
- AFXDOCKSITE/CDockSite::CanAcceptPane
- AFXDOCKSITE/CDockSite::CreateEx
- AFXDOCKSITE/CDockSite::CreateRow
- AFXDOCKSITE/CDockSite::DockPane
- AFXDOCKSITE/CDockSite::DoesAllowDynInsertBefore
- AFXDOCKSITE/CDockSite::FindRowIndex
- AFXDOCKSITE/CDockSite::FixupVirtualRects
- AFXDOCKSITE/CDockSite::GetDockSiteID
- AFXDOCKSITE/CDockSite::GetDockSiteRowsList
- AFXDOCKSITE/CDockSite::IsAccessibilityCompatible
- AFXDOCKSITE/CDockSite::IsDragMode
- AFXDOCKSITE/CDockSite::IsLastRow
- AFXDOCKSITE/CDockSite::IsRectWithinDockSite
- AFXDOCKSITE/CDockSite::IsResizable
- AFXDOCKSITE/CDockSite::MovePane
- AFXDOCKSITE/CDockSite::OnInsertRow
- AFXDOCKSITE/CDockSite::OnRemoveRow
- AFXDOCKSITE/CDockSite::OnResizeRow
- AFXDOCKSITE/CDockSite::OnSetWindowPos
- AFXDOCKSITE/CDockSite::OnShowRow
- AFXDOCKSITE/CDockSite::OnSizeParent
- AFXDOCKSITE/CDockSite::PaneFromPoint
- AFXDOCKSITE/CDockSite::DockPaneLeftOf
- AFXDOCKSITE/CDockSite::FindPaneByID
- AFXDOCKSITE/CDockSite::GetPaneList
- AFXDOCKSITE/CDockSite::RectSideFromPoint
- AFXDOCKSITE/CDockSite::RemovePane
- AFXDOCKSITE/CDockSite::RemoveRow
- AFXDOCKSITE/CDockSite::ReplacePane
- AFXDOCKSITE/CDockSite::RepositionPanes
- AFXDOCKSITE/CDockSite::ResizeDockSite
- AFXDOCKSITE/CDockSite::ResizeRow
- AFXDOCKSITE/CDockSite::ShowPane
- AFXDOCKSITE/CDockSite::ShowRow
- AFXDOCKSITE/CDockSite::SwapRows
helpviewer_keywords:
- CDockSite [MFC], AddRow
- CDockSite [MFC], AdjustDockingLayout
- CDockSite [MFC], AdjustLayout
- CDockSite [MFC], AlignDockSite
- CDockSite [MFC], CalcFixedLayout
- CDockSite [MFC], CanAcceptPane
- CDockSite [MFC], CreateEx
- CDockSite [MFC], CreateRow
- CDockSite [MFC], DockPane
- CDockSite [MFC], DoesAllowDynInsertBefore
- CDockSite [MFC], FindRowIndex
- CDockSite [MFC], FixupVirtualRects
- CDockSite [MFC], GetDockSiteID
- CDockSite [MFC], GetDockSiteRowsList
- CDockSite [MFC], IsAccessibilityCompatible
- CDockSite [MFC], IsDragMode
- CDockSite [MFC], IsLastRow
- CDockSite [MFC], IsRectWithinDockSite
- CDockSite [MFC], IsResizable
- CDockSite [MFC], MovePane
- CDockSite [MFC], OnInsertRow
- CDockSite [MFC], OnRemoveRow
- CDockSite [MFC], OnResizeRow
- CDockSite [MFC], OnSetWindowPos
- CDockSite [MFC], OnShowRow
- CDockSite [MFC], OnSizeParent
- CDockSite [MFC], PaneFromPoint
- CDockSite [MFC], DockPaneLeftOf
- CDockSite [MFC], FindPaneByID
- CDockSite [MFC], GetPaneList
- CDockSite [MFC], RectSideFromPoint
- CDockSite [MFC], RemovePane
- CDockSite [MFC], RemoveRow
- CDockSite [MFC], ReplacePane
- CDockSite [MFC], RepositionPanes
- CDockSite [MFC], ResizeDockSite
- CDockSite [MFC], ResizeRow
- CDockSite [MFC], ShowPane
- CDockSite [MFC], ShowRow
- CDockSite [MFC], SwapRows
ms.assetid: 0fcfff79-5f50-4281-b2de-a55653bbea40
ms.openlocfilehash: 9c154fe621fb88a6dc96a9835fae95c4b86763de
ms.sourcegitcommit: bd7ddc044f9083246614b602ef6a758775313214
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68866202"
---
# <a name="cdocksite-class"></a>CDockSite Class

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

Fornisce la funzionalità per disporre in set di righe i riquadri che derivano dalla [CPane Class](../../mfc/reference/cpane-class.md) .

## <a name="syntax"></a>Sintassi

```
class CDockSite: public CBasePane
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDockSite:: AddRow](#addrow)||
|[CDockSite:: AdjustDockingLayout](#adjustdockinglayout)|Esegue l'override di [CBasePane:: AdjustDockingLayout](../../mfc/reference/cbasepane-class.md#adjustdockinglayout).|
|[CDockSite:: AdjustLayout](#adjustlayout)|Esegue l'override di [CBasePane:: AdjustLayout](../../mfc/reference/cbasepane-class.md#adjustlayout).|
|[CDockSite:: AlignDockSite](#aligndocksite)||
|[CDockSite::CalcFixedLayout](#calcfixedlayout)|Esegue l'override di [CBasePane:: CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).|
|[CDockSite::CanAcceptPane](#canacceptpane)|Esegue l'override di [CBasePane:: CanAcceptPane](../../mfc/reference/cbasepane-class.md#canacceptpane).|
|[CDockSite:: CreateEx](#createex)|Esegue l'override di [CBasePane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex).|
|[CDockSite:: CreateRow](#createrow)||
|[CDockSite::D ockPane](#dockpane)|Esegue l'override di [CBasePane::D ockpane](../../mfc/reference/cbasepane-class.md#dockpane).|
|[CDockSite::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Esegue l'override di [CBasePane::D oesallowdyninsertbefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).|
|[CDockSite::FindRowIndex](#findrowindex)||
|[CDockSite:: FixupVirtualRects](#fixupvirtualrects)||
|[CDockSite::GetDockSiteID](#getdocksiteid)||
|[CDockSite::GetDockSiteRowsList](#getdocksiterowslist)||
|[CDockSite::IsAccessibilityCompatible](#isaccessibilitycompatible)|Esegue l'override di `CBasePane::IsAccessibilityCompatible`.|
|[CDockSite:: IsDragMode](#isdragmode)||
|[CDockSite::IsLastRow](#islastrow)||
|[CDockSite::IsRectWithinDockSite](#isrectwithindocksite)||
|[CDockSite::IsResizable](#isresizable)|Esegue l'override di [CBasePane:: IsResizable](../../mfc/reference/cbasepane-class.md#isresizable).|
|[CDockSite:: MovePane](#movepane)||
|[CDockSite:: OnInsertRow](#oninsertrow)||
|[CDockSite::OnRemoveRow](#onremoverow)||
|[CDockSite::OnResizeRow](#onresizerow)||
|[CDockSite::OnSetWindowPos](#onsetwindowpos)||
|[CDockSite:: OnShowRow](#onshowrow)||
|[CDockSite::OnSizeParent](#onsizeparent)||
|[CDockSite::P aneFromPoint](#panefrompoint)|Restituisce un riquadro ancorato nel sito di ancoraggio nel punto definito dal parametro specificato.|
|[CDockSite::DockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|
|[CDockSite::FindPaneByID](#findpanebyid)|Restituisce il riquadro identificato dall'ID specificato.|
|[CDockSite::GetPaneList](#getpanelist)|Restituisce un elenco dei riquadri ancorati nel sito di ancoraggio.|
|[CDockSite::RectSideFromPoint](#rectsidefrompoint)||
|[CDockSite:: RemovePane](#removepane)||
|[CDockSite:: RemoveRow](#removerow)||
|[CDockSite:: ReplacePane](#replacepane)||
|[CDockSite:: RepositionPanes](#repositionpanes)||
|[CDockSite::ResizeDockSite](#resizedocksite)||
|[CDockSite:: ResizeRow](#resizerow)||
|[CDockSite::ShowPane](#showpane)|Mostra il riquadro.|
|[CDockSite::ShowRow](#showrow)||
|[CDockSite::SwapRows](#swaprows)||

## <a name="remarks"></a>Note

Il Framework crea `CDockSite` automaticamente oggetti quando si chiama [CFrameWndEx:: EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Le finestre del sito di ancoraggio sono posizionate sul bordo dell'area client nella finestra cornice principale.

In genere non è necessario chiamare i servizi forniti dal sito dock perché la [classe CFrameWndEx](../../mfc/reference/cframewndex-class.md) gestisce questi servizi.

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come creare un oggetto della classe `CDockSite`.

[!code-cpp[NVC_MFC_RibbonApp#27](../../mfc/reference/codesnippet/cpp/cdocksite-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)\
&nbsp;[CCmdTarget](../../mfc/reference/ccmdtarget-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CBasePane](../../mfc/reference/cbasepane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CDockSite](../../mfc/reference/cdocksite-class.md) └

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockSite. h

##  <a name="addrow"></a>CDockSite:: AddRow

```
CDockingPanesRow* AddRow(
    POSITION pos,
    int nHeight);
```

### <a name="parameters"></a>Parametri

in *pos*<br/>

in *nHeight*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="adjustdockinglayout"></a>CDockSite:: AdjustDockingLayout

```
virtual void AdjustDockingLayout();
```

### <a name="remarks"></a>Note

##  <a name="adjustlayout"></a>CDockSite:: AdjustLayout

```
virtual void AdjustLayout();
```

### <a name="remarks"></a>Note

##  <a name="aligndocksite"></a>CDockSite:: AlignDockSite

```
void AlignDockSite(
    const CRect& rectToAlignBy,
    CRect& rectResult,
    BOOL bMoveImmediately);
```

### <a name="parameters"></a>Parametri

in *rectToAlignBy*<br/>

in *rectResult*<br/>

in *bMoveImmediately*<br/>

### <a name="remarks"></a>Note

##  <a name="calcfixedlayout"></a>CDockSite:: CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

in *bStretch*<br/>

[in] *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="canacceptpane"></a>CDockSite:: CanAcceptPane

```
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### <a name="parameters"></a>Parametri

[in] *pBar*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="createex"></a>CDockSite:: CreateEx

```
virtual BOOL CreateEx(
    DWORD dwStyleEx,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    DWORD dwControlBarStyle,
    CCreateContext* pContext = NULL);
```

### <a name="parameters"></a>Parametri

[in] *dwStyleEx*<br/>

[in] *dwStyle*<br/>

[in] *rect*<br/>

in *pParentWnd*<br/>

in *dwControlBarStyle*<br/>

in *pContext*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="createrow"></a>CDockSite:: CreateRow

```
virtual CDockingPanesRow* CreateRow(
    CDockSite* pParentDockBar,
    int nOffset,
    int nRowHeight);
```

### <a name="parameters"></a>Parametri

in *pParentDockBar*<br/>

in *nOffset*<br/>

in *nRowHeight*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="dockpane"></a>CDockSite::D ockPane

```
virtual void DockPane(
    CPane* pWnd,
    AFX_DOCK_METHOD dockMethod,
    LPCRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

[in] *pWnd*<br/>

in *dockMethod*<br/>

[in] *lpRect*<br/>

### <a name="remarks"></a>Note

##  <a name="dockpaneleftof"></a>CDockSite::D ockPaneLeftOf

Ancora un riquadro a sinistra di un altro riquadro.

```
virtual BOOL DockPaneLeftOf(
    CPane* pBarToDock,
    CPane* pTargetBar);
```

### <a name="parameters"></a>Parametri

*pBarToDock*<br/>
[in, out] Puntatore al riquadro da ancorare a sinistra di *pTargetBar*.

*pTargetBar*<br/>
[in, out] Puntatore al riquadro di destinazione.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è ancorato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="doesallowdyninsertbefore"></a>  CDockSite::DoesAllowDynInsertBefore

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="findpanebyid"></a>CDockSite:: FindPaneByID

Restituisce il riquadro con l'ID specificato.

```
CPane* FindPaneByID(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
in ID di comando del riquadro da trovare.

### <a name="return-value"></a>Valore restituito

Puntatore al riquadro con l'ID di comando specificato oppure NULL se il riquadro non viene trovato.

### <a name="remarks"></a>Note

##  <a name="findrowindex"></a>CDockSite:: FindRowIndex

```
int FindRowIndex(CDockingPanesRow* pRow);
```

### <a name="parameters"></a>Parametri

in *prua*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="fixupvirtualrects"></a>CDockSite:: FixupVirtualRects

```
virtual void FixupVirtualRects();
```

### <a name="remarks"></a>Note

##  <a name="getdocksiteid"></a>CDockSite:: GetDockSiteID

```
virtual UINT GetDockSiteID() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getdocksiterowslist"></a>CDockSite:: GetDockSiteRowsList

```
const CObList& GetDockSiteRowsList() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getpanelist"></a>CDockSite:: getpanell

Restituisce un elenco di riquadri ancorati nel sito di ancoraggio.

```
const CObList& GetPaneList() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento di sola lettura all'elenco di riquadri attualmente ancorati nella barra di ancoraggio.

##  <a name="isaccessibilitycompatible"></a>CDockSite:: IsAccessibilityCompatible

```
virtual BOOL IsAccessibilityCompatible();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="isdragmode"></a>CDockSite:: IsDragMode

```
virtual BOOL IsDragMode() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="islastrow"></a>CDockSite:: IsLastRow

```
bool IsLastRow(CDockingPanesRow* pRow) const;
```

### <a name="parameters"></a>Parametri

in *prua*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="isrectwithindocksite"></a>CDockSite:: IsRectWithinDockSite

```
BOOL IsRectWithinDockSite(
    CRect rect,
    CPoint& ptDelta);
```

### <a name="parameters"></a>Parametri

[in] *rect*<br/>

[in] *ptDelta*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="isresizable"></a>CDockSite:: IsResizable

```
virtual BOOL IsResizable() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="movepane"></a>CDockSite:: MovePane

```
virtual BOOL MovePane(
    CPane* pWnd,
    UINT nFlags,
    CPoint ptOffset);
```

### <a name="parameters"></a>Parametri

[in] *pWnd*<br/>

in *nFlags*<br/>

in *ptOffset*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="oninsertrow"></a>CDockSite:: OnInsertRow

```
virtual void OnInsertRow(POSITION pos);
```

### <a name="parameters"></a>Parametri

in *pos*<br/>

### <a name="remarks"></a>Note

##  <a name="onremoverow"></a>CDockSite:: OnRemoveRow

```
virtual void OnRemoveRow(
    POSITION pos,
    BOOL bByShow = FALSE);
```

### <a name="parameters"></a>Parametri

in *pos*<br/>

[in] *bByShow*<br/>

### <a name="remarks"></a>Note

##  <a name="onresizerow"></a>CDockSite:: OnResizeRow

```
virtual int OnResizeRow(
    CDockingPanesRow* pRowToResize,
    int nOffset);
```

### <a name="parameters"></a>Parametri

[in] *pRowToResize*<br/>

in *nOffset*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onsizeparent"></a>CDockSite:: OnSizeParent

```
virtual void OnSizeParent(
    CRect& rectAvailable,
    UINT nSide,
    BOOL bExpand,
    int nOffset);
```

### <a name="parameters"></a>Parametri

in *rectAvailable*<br/>

in *nSide*<br/>

in *bExpand*<br/>

in *nOffset*<br/>

### <a name="remarks"></a>Note

##  <a name="onsetwindowpos"></a>CDockSite:: OnSetWindowPos

```
virtual BOOL OnSetWindowPos(
    const CWnd* pWndInsertAfter,
    const CRect& rectWnd,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

[in] *pWndInsertAfter*<br/>

in *rectWnd*<br/>

in *nFlags*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onshowrow"></a>CDockSite:: OnShowRow

```
virtual void OnShowRow(
    POSITION pos,
    BOOL bShow);
```

### <a name="parameters"></a>Parametri

in *pos*<br/>

in *bShow*<br/>

### <a name="remarks"></a>Note

##  <a name="panefrompoint"></a>CDockSite::P aneFromPoint

Restituisce un riquadro ancorato nel sito di ancoraggio nel punto definito dal parametro specificato.

```
virtual CPane* PaneFromPoint(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
in Punto, in coordinate dello schermo, per il riquadro da recuperare.

### <a name="return-value"></a>Valore restituito

Puntatore al riquadro posizionato in corrispondenza del punto specificato o NULL se non è presente alcun riquadro nel punto specificato.

### <a name="remarks"></a>Note

##  <a name="rectsidefrompoint"></a>CDockSite:: RectSideFromPoint

```
static int __stdcall RectSideFromPoint(
    const CRect& rect,
    const CPoint& point);
```

### <a name="parameters"></a>Parametri

[in] *rect*<br/>

in *punto* di<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="removepane"></a>CDockSite:: RemovePane

```
virtual void RemovePane(
    CPane* pWnd,
    AFX_DOCK_METHOD dockMethod);
```

### <a name="parameters"></a>Parametri

[in] *pWnd*<br/>

in *dockMethod*<br/>

### <a name="remarks"></a>Note

##  <a name="removerow"></a>CDockSite:: RemoveRow

```
void RemoveRow(CDockingPanesRow* pRow);
```

### <a name="parameters"></a>Parametri

in *prua*<br/>

### <a name="remarks"></a>Note

##  <a name="replacepane"></a>CDockSite:: ReplacePane

```
BOOL ReplacePane(
    CPane* pOldBar,
    CPane* pNewBar);
```

### <a name="parameters"></a>Parametri

in *pOldBar*<br/>

in *pNewBar*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="repositionpanes"></a>CDockSite:: RepositionPanes

```
virtual void RepositionPanes(CRect& rectNewClientArea);
```

### <a name="parameters"></a>Parametri

in *rectNewClientArea*<br/>

### <a name="remarks"></a>Note

##  <a name="resizedocksite"></a>CDockSite:: ResizeDockSite

```
void ResizeDockSite(
    int nNewWidth,
    int nNewHeight);
```

### <a name="parameters"></a>Parametri

[in] *nNewWidth*<br/>

in *nNewHeight*<br/>

### <a name="remarks"></a>Note

##  <a name="resizerow"></a>CDockSite:: ResizeRow

```
int ResizeRow(
    CDockingPanesRow* pRow,
    int nNewSize,
    BOOL bAdjustLayout = TRUE);
```

### <a name="parameters"></a>Parametri

in *prua*<br/>

[in] *nNewSize*<br/>

in *bAdjustLayout*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="showpane"></a>CDockSite:: ShowPane

Mostra il riquadro.

```
virtual BOOL ShowPane(
    CBasePane* pBar,
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in, out] Puntatore al riquadro da visualizzare o nascondere.

*bShow*<br/>
in TRUE per specificare che il riquadro deve essere visualizzato; FALSE per specificare che il riquadro deve essere nascosto.

*bDelay*<br/>
in TRUE per specificare che il layout del riquadro deve essere posticipato fino a quando non viene visualizzato il riquadro; in caso contrario, FALSE.

*bActivate*<br/>
in Questo parametro non viene utilizzato.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è stato visualizzato o nascosto correttamente. FALSE se il riquadro specificato non appartiene a questo sito di ancoraggio.

### <a name="remarks"></a>Note

Chiamare questo metodo per mostrare o nascondere i riquadri ancorati. In genere, non è necessario chiamare `CDockSite::ShowPane` direttamente, perché viene chiamato dalla finestra cornice padre o dal riquadro di base.

##  <a name="showrow"></a>CDockSite:: ShowRow

```
void ShowRow(
    CDockingPanesRow* pRow,
    BOOL bShow,
    BOOL bAdjustLayout);
```

### <a name="parameters"></a>Parametri

in *prua*<br/>

in *bShow*<br/>

in *bAdjustLayout*<br/>

### <a name="remarks"></a>Note

##  <a name="swaprows"></a>CDockSite:: SwapRows

```
void SwapRows(
    CDockingPanesRow* pFirstRow,
    CDockingPanesRow* pSecondRow);
```

### <a name="parameters"></a>Parametri

[in] *pFirstRow*<br/>

in *pSecondRow*<br/>

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CBasePane](../../mfc/reference/cbasepane-class.md)
