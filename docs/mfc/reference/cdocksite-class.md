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
ms.openlocfilehash: a95ee024d9df835102eeffc8443ae6225775aff7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375547"
---
# <a name="cdocksite-class"></a>CDockSite Class

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

Fornisce la funzionalità per disporre in set di righe i riquadri che derivano dalla [CPane Class](../../mfc/reference/cpane-class.md) .

## <a name="syntax"></a>Sintassi

```
class CDockSite: public CBasePane
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDockSite::AddRow](#addrow)||
|[CDockSite::AdjustDockingLayout](#adjustdockinglayout)|(Overrides [CBasePane::AdjustDockingLayout](../../mfc/reference/cbasepane-class.md#adjustdockinglayout).)|
|[CDockSite::AdjustLayout](#adjustlayout)|(Overrides [CBasePane::AdjustLayout](../../mfc/reference/cbasepane-class.md#adjustlayout).)|
|[CDockSite::AlignDockSite](#aligndocksite)||
|[CDockSite::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|
|[CDockSite::CanAcceptPane](#canacceptpane)|(OverrideS [CBasePane::CanAcceptPane](../../mfc/reference/cbasepane-class.md#canacceptpane).)|
|[CDockSite::CreateEx](#createex)|(Esegue l'override di [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).)|
|[CDockSite::CreateRow](#createrow)||
|[CDockSite::DockPane](#dockpane)|(OverrideS [CBasePane::DockPane](../../mfc/reference/cbasepane-class.md#dockpane).)|
|[CDockSite::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|(Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|
|[CDockSite::FindRowIndex](#findrowindex)||
|[CDockSite::FixupVirtualRects](#fixupvirtualrects)||
|[CDockSite::GetDockSiteID](#getdocksiteid)||
|[CDockSite::GetDockSiteRowsList](#getdocksiterowslist)||
|[CDockSite::IsAccessibilityCompatible](#isaccessibilitycompatible)|Esegue l'override di `CBasePane::IsAccessibilityCompatible`.|
|[CDockSite::IsDragMode](#isdragmode)||
|[CDockSite::IsLastRow](#islastrow)||
|[CDockSite::IsRectWithinDockSite](#isrectwithindocksite)||
|[CDockSite::IsResizable](#isresizable)|(Esegue l'override di [CBasePane::IsResizable](../../mfc/reference/cbasepane-class.md#isresizable).)|
|[CDockSite::MovePane](#movepane)||
|[CDockSite::OnInsertRow](#oninsertrow)||
|[CDockSite::OnRemoveRow](#onremoverow)||
|[CDockSite::OnResizeRow](#onresizerow)||
|[CDockSite::OnSetWindowPos](#onsetwindowpos)||
|[CDockSite::OnShowRow](#onshowrow)||
|[CDockSite::OnSizeParent](#onsizeparent)||
|[CDockSite::PaneFromPoint](#panefrompoint)|Restituisce un riquadro ancorato nel sito di ancoraggio nel punto definito dal parametro specificato.|
|[CDockSite::DockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|
|[Sito CDock::FindPaneByID](#findpanebyid)|Restituisce il riquadro identificato dall'ID specificato.|
|[CDockSite::GetPaneList](#getpanelist)|Restituisce un elenco dei riquadri ancorati nel sito di ancoraggio.|
|[CDockSite::RectSideFromPoint](#rectsidefrompoint)||
|[CDockSite::RemovePane](#removepane)||
|[CDockSite::RemoveRow](#removerow)||
|[CDockSite::ReplacePane](#replacepane)||
|[CDockSite::RepositionPanes](#repositionpanes)||
|[CDockSite::ResizeDockSite](#resizedocksite)||
|[CDockSite::ResizeRow](#resizerow)||
|[CDockSite::ShowPane](#showpane)|Mostra il riquadro.|
|[CDockSite::ShowRow](#showrow)||
|[CDockSite::SwapRows](#swaprows)||

## <a name="remarks"></a>Osservazioni

Il framework `CDockSite` crea automaticamente gli oggetti quando si chiama [CFrameWndEx::EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Le finestre del sito di ancoraggio sono posizionate sul bordo dell'area client nella finestra cornice principale.

In genere non è necessario chiamare i servizi forniti dal sito di ancoraggio perché [CFrameWndEx classe](../../mfc/reference/cframewndex-class.md) gestisce questi servizi.

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come creare un oggetto della classe `CDockSite`.

[!code-cpp[NVC_MFC_RibbonApp#27](../../mfc/reference/codesnippet/cpp/cdocksite-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Cobject](../../mfc/reference/cobject-class.md)\
&nbsp;[CCmdTarget (Destinazione comando)](../../mfc/reference/ccmdtarget-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CBasePane (Riquadro di base)](../../mfc/reference/cbasepane-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Sito CDock](../../mfc/reference/cdocksite-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockSite.h

## <a name="cdocksiteaddrow"></a><a name="addrow"></a>Sito CDock::AddRow

```
CDockingPanesRow* AddRow(
    POSITION pos,
    int nHeight);
```

### <a name="parameters"></a>Parametri

[in] *pos*<br/>

[in] *nAltezza*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteadjustdockinglayout"></a><a name="adjustdockinglayout"></a>SitoCDock::AdjustDockingLayout

```
virtual void AdjustDockingLayout();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteadjustlayout"></a><a name="adjustlayout"></a>SitoCDock::AdjustLayout

```
virtual void AdjustLayout();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitealigndocksite"></a><a name="aligndocksite"></a>Sito CDock::AlignDockSite

```
void AlignDockSite(
    const CRect& rectToAlignBy,
    CRect& rectResult,
    BOOL bMoveImmediately);
```

### <a name="parameters"></a>Parametri

[in] *RectToAlignBy (in modo rectToAlignBy)*<br/>

[in] *rectRisulta*<br/>

[in] *bSpostaImmediatamente*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitecalcfixedlayout"></a><a name="calcfixedlayout"></a>SitoDicini::CalcFixedLayout

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

## <a name="cdocksitecanacceptpane"></a><a name="canacceptpane"></a>CDockSite::CanAcceptPane

```
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### <a name="parameters"></a>Parametri

[in] *pBar (Barra)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitecreateex"></a><a name="createex"></a>Sito CDock::CreateEx

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

[in] *DwStyle (in stile dwStyle)*<br/>

[in] *rect*<br/>

[in] *pParentWnd (informazioni in due)*<br/>

[in] *dwControlBarStyle (stile dwControlBarStyle)*<br/>

[in] *pCono*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitecreaterow"></a><a name="createrow"></a>Sito Di CDock::CreateRow

```
virtual CDockingPanesRow* CreateRow(
    CDockSite* pParentDockBar,
    int nOffset,
    int nRowHeight);
```

### <a name="parameters"></a>Parametri

[in] *pParentDockBar (informazioni in genitori)*<br/>

[in] *nOffset*<br/>

[in] *nRowHeight (altezza di riga)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitedockpane"></a><a name="dockpane"></a>Sito CDock::DockPane

```
virtual void DockPane(
    CPane* pWnd,
    AFX_DOCK_METHOD dockMethod,
    LPCRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

[in] *pWnd (in questo* stato di windows<br/>

[in] *dockMethod*<br/>

[in] *LpRect (oggetto Ip*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitedockpaneleftof"></a><a name="dockpaneleftof"></a>Sito CDock::DockPaneLeftOf

Ancora un riquadro a sinistra di un altro riquadro.

```
virtual BOOL DockPaneLeftOf(
    CPane* pBarToDock,
    CPane* pTargetBar);
```

### <a name="parameters"></a>Parametri

*pBarToDock (informazioni in stato di folto)*<br/>
[in, out] Puntatore al riquadro da ancorare a sinistra di *pTargetBar*.

*pTargetBar (bar di riferimento)*<br/>
[in, out] Puntatore al riquadro di destinazione.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro è ancorato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitedoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a>CDockSite::DOesAllowDynInsertBefore

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitefindpanebyid"></a><a name="findpanebyid"></a>Sito CDock::FindPaneByID

Restituisce il riquadro con l'ID specificato.

```
CPane* FindPaneByID(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] ID di comando del riquadro da trovare.

### <a name="return-value"></a>Valore restituito

Puntatore al riquadro con l'ID di comando specificato oppure NULL se il riquadro non viene trovato.

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitefindrowindex"></a><a name="findrowindex"></a>CDockSite::IndiceFindRowIndex

```
int FindRowIndex(CDockingPanesRow* pRow);
```

### <a name="parameters"></a>Parametri

[in] *pRiga*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitefixupvirtualrects"></a><a name="fixupvirtualrects"></a>CDockSite::FixupVirtualRects

```
virtual void FixupVirtualRects();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitegetdocksiteid"></a><a name="getdocksiteid"></a>Sito Di CDock::GetDockSiteID

```
virtual UINT GetDockSiteID() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitegetdocksiterowslist"></a><a name="getdocksiterowslist"></a>CDockSite::GetDockSiteRowsList

```
const CObList& GetDockSiteRowsList() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitegetpanelist"></a><a name="getpanelist"></a>Sito Di CDock::GetPaneList

Restituisce un elenco di riquadri ancorati nel sito di ancoraggio.

```
const CObList& GetPaneList() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento di sola lettura all'elenco dei riquadri attualmente ancorati nella barra di ancoraggio.

## <a name="cdocksiteisaccessibilitycompatible"></a><a name="isaccessibilitycompatible"></a>CDockSite::IsAccessibilityCompatible

```
virtual BOOL IsAccessibilityCompatible();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteisdragmode"></a><a name="isdragmode"></a>CDockSite::IsDragMode

```
virtual BOOL IsDragMode() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteislastrow"></a><a name="islastrow"></a>Sito CDock::IsLastRow

```
bool IsLastRow(CDockingPanesRow* pRow) const;
```

### <a name="parameters"></a>Parametri

[in] *pRiga*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteisrectwithindocksite"></a><a name="isrectwithindocksite"></a>Sito CDock::IsRectWithinDockSite

```
BOOL IsRectWithinDockSite(
    CRect rect,
    CPoint& ptDelta);
```

### <a name="parameters"></a>Parametri

[in] *rect*<br/>

[in] *ptDelta*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteisresizable"></a><a name="isresizable"></a>CDockSite::IsResizable

```
virtual BOOL IsResizable() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitemovepane"></a><a name="movepane"></a>SitoCDock::MovePane

```
virtual BOOL MovePane(
    CPane* pWnd,
    UINT nFlags,
    CPoint ptOffset);
```

### <a name="parameters"></a>Parametri

[in] *pWnd (in questo* stato di windows<br/>

[in] *nFlags (Flag)*<br/>

[in] *PtOffset*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteoninsertrow"></a><a name="oninsertrow"></a>Sito CDock::OnInsertRow

```
virtual void OnInsertRow(POSITION pos);
```

### <a name="parameters"></a>Parametri

[in] *pos*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteonremoverow"></a><a name="onremoverow"></a>Sito Di CDock::OnRemoveRow

```
virtual void OnRemoveRow(
    POSITION pos,
    BOOL bByShow = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *pos*<br/>

[in] *bDa spettacolo*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteonresizerow"></a><a name="onresizerow"></a>Sito Di CDock::OnResizeRow

```
virtual int OnResizeRow(
    CDockingPanesRow* pRowToResize,
    int nOffset);
```

### <a name="parameters"></a>Parametri

[in] *pRowToResize*<br/>

[in] *nOffset*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteonsizeparent"></a><a name="onsizeparent"></a>Sito CDock::OnSizeParent

```
virtual void OnSizeParent(
    CRect& rectAvailable,
    UINT nSide,
    BOOL bExpand,
    int nOffset);
```

### <a name="parameters"></a>Parametri

[in] *rectAvailable*<br/>

[in] *nLato*<br/>

[in] *bEspandi*<br/>

[in] *nOffset*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteonsetwindowpos"></a><a name="onsetwindowpos"></a>CDockSite::OnSetWindowPos

```
virtual BOOL OnSetWindowPos(
    const CWnd* pWndInsertAfter,
    const CRect& rectWnd,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

[in] *pWndInsertAfter (informazioni in stato instato)*<br/>

[in] *rectWnd*<br/>

[in] *nFlags (Flag)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteonshowrow"></a><a name="onshowrow"></a>Sito Di CDock::OnShowRow

```
virtual void OnShowRow(
    POSITION pos,
    BOOL bShow);
```

### <a name="parameters"></a>Parametri

[in] *pos*<br/>

[in] *bMostra*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitepanefrompoint"></a><a name="panefrompoint"></a>SitoCDockSite::PaneFromPoint

Restituisce un riquadro ancorato nel sito di ancoraggio nel punto definito dal parametro specificato.

```
virtual CPane* PaneFromPoint(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
[in] Un punto, in coordinate dello schermo, per il riquadro da recuperare.

### <a name="return-value"></a>Valore restituito

Puntatore al riquadro posizionato nel punto specificato o NULL se non era presente alcun riquadro nel punto specificato.

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiterectsidefrompoint"></a><a name="rectsidefrompoint"></a>SitoCDock::RectSideFromPoint

```
static int __stdcall RectSideFromPoint(
    const CRect& rect,
    const CPoint& point);
```

### <a name="parameters"></a>Parametri

[in] *rect*<br/>

[in] *punto*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteremovepane"></a><a name="removepane"></a>SitoCDock::RemovePane

```
virtual void RemovePane(
    CPane* pWnd,
    AFX_DOCK_METHOD dockMethod);
```

### <a name="parameters"></a>Parametri

[in] *pWnd (in questo* stato di windows<br/>

[in] *dockMethod*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteremoverow"></a><a name="removerow"></a>Sito CDock::RemoveRow

```
void RemoveRow(CDockingPanesRow* pRow);
```

### <a name="parameters"></a>Parametri

[in] *pRiga*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksitereplacepane"></a><a name="replacepane"></a>SitoCDock::ReplacePane

```
BOOL ReplacePane(
    CPane* pOldBar,
    CPane* pNewBar);
```

### <a name="parameters"></a>Parametri

[in] *pOldBar (barra dei comandi)*<br/>

[in] *pNewBar (informazioni in stato inquestoendo*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiterepositionpanes"></a><a name="repositionpanes"></a>SitoDiCDockSite::RepositionPanes

```
virtual void RepositionPanes(CRect& rectNewClientArea);
```

### <a name="parameters"></a>Parametri

[in] *rectNewClientArea*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteresizedocksite"></a><a name="resizedocksite"></a>Sito CDock::Redig1

```
void ResizeDockSite(
    int nNewWidth,
    int nNewHeight);
```

### <a name="parameters"></a>Parametri

[in] *nNewWidth (larghezza)*<br/>

[in] *nNewHeight (in nNewHeight)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteresizerow"></a><a name="resizerow"></a>Sito Di CDock::ResizeRow

```
int ResizeRow(
    CDockingPanesRow* pRow,
    int nNewSize,
    BOOL bAdjustLayout = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *pRiga*<br/>

[in] *nNewSize (informazioni in base* alle dimensioni è in<br/>

[in] *bAdattare* il layout<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteshowpane"></a><a name="showpane"></a>SitoCDock::ShowPane

Mostra il riquadro.

```
virtual BOOL ShowPane(
    CBasePane* pBar,
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in, out] Puntatore al riquadro da visualizzare o nascondere.

*bShow*<br/>
[in] TRUE per specificare che il riquadro deve essere visualizzato. FALSE per specificare che il riquadro deve essere nascosto.

*bRitarda*<br/>
[in] TRUE per specificare che il layout del riquadro deve essere ritardato fino a dopo che viene visualizzato il riquadro; in caso contrario, FALSE.

*bActivate*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro è stato visualizzato o nascosto correttamente. FALSE se il riquadro specificato non appartiene a questo sito di ancoraggio.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per visualizzare o nascondere i riquadri ancorati. In genere, non è `CDockSite::ShowPane` necessario chiamare direttamente, perché viene chiamato dalla finestra cornice padre o dal riquadro di base.

## <a name="cdocksiteshowrow"></a><a name="showrow"></a>SitoCDock::ShowRow

```
void ShowRow(
    CDockingPanesRow* pRow,
    BOOL bShow,
    BOOL bAdjustLayout);
```

### <a name="parameters"></a>Parametri

[in] *pRiga*<br/>

[in] *bMostra*<br/>

[in] *bAdattare* il layout<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cdocksiteswaprows"></a><a name="swaprows"></a>Sito Di CDock::SwapRows

```
void SwapRows(
    CDockingPanesRow* pFirstRow,
    CDockingPanesRow* pSecondRow);
```

### <a name="parameters"></a>Parametri

[in] *pFirstRow (riga)*<br/>

[in] *pSecondRow (riga)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CBasePane](../../mfc/reference/cbasepane-class.md)
