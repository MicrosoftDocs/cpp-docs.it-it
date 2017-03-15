---
title: Classe CDockSite | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDockSite
dev_langs:
- C++
helpviewer_keywords:
- CDockSite class
ms.assetid: 0fcfff79-5f50-4281-b2de-a55653bbea40
caps.latest.revision: 28
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 3b230542bface4d729866c37dc4c74cb0173b389
ms.lasthandoff: 02/24/2017

---
# <a name="cdocksite-class"></a>CDockSite Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Fornisce funzionalità per la disposizione dei riquadri che derivano dal [CPane classe](../../mfc/reference/cpane-class.md) in set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDockSite: public CBasePane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockSite::AddRow](#addrow)||  
|[CDockSite::AdjustDockingLayout](#adjustdockinglayout)|(Esegue l'override di [CBasePane::AdjustDockingLayout](../../mfc/reference/cbasepane-class.md#adjustdockinglayout).)|  
|[CDockSite::AdjustLayout](#adjustlayout)|(Esegue l'override di [CBasePane::AdjustLayout](../../mfc/reference/cbasepane-class.md#adjustlayout).)|  
|[CDockSite::AlignDockSite](#aligndocksite)||  
|[CDockSite::CalcFixedLayout](#calcfixedlayout)|(Esegue l'override di [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|  
|[CDockSite::CanAcceptPane](#canacceptpane)|(Esegue l'override di [CBasePane::CanAcceptPane](../../mfc/reference/cbasepane-class.md#canacceptpane).)|  
|[CDockSite::CreateEx](#createex)|(Esegue l'override di [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).)|  
|[CDockSite::CreateRow](#createrow)||  
|[CDockSite::DockPane](#dockpane)|(Esegue l'override di [CBasePane::DockPane](../../mfc/reference/cbasepane-class.md#dockpane).)|  
|[CDockSite::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|(Esegue l'override di [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
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
|[CDockSite::FindPaneByID](#findpanebyid)|Restituisce il riquadro identificato dall'ID specificato.|  
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
  
## <a name="remarks"></a>Note  
 Il framework crea `CDockSite` oggetti automaticamente quando si chiama [CFrameWndEx::EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Le finestre del sito di ancoraggio sono posizionate sul bordo dell'area client nella finestra cornice principale.  
  
 In genere non è necessario chiamare i servizi forniti dal sito di ancoraggio perché [CFrameWndEx classe](../../mfc/reference/cframewndex-class.md) gestisce questi servizi.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della classe `CDockSite`.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#27;](../../mfc/reference/codesnippet/cpp/cdocksite-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CDockSite](../../mfc/reference/cdocksite-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDockSite.h  
  
##  <a name="a-nameaddrowa--cdocksiteaddrow"></a><a name="addrow"></a>CDockSite::AddRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingPanesRow* AddRow(
    POSITION pos,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pos`  
 [in] `nHeight`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameadjustdockinglayouta--cdocksiteadjustdockinglayout"></a><a name="adjustdockinglayout"></a>CDockSite::AdjustDockingLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustDockingLayout();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameadjustlayouta--cdocksiteadjustlayout"></a><a name="adjustlayout"></a>CDockSite::AdjustLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustLayout();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namealigndocksitea--cdocksitealigndocksite"></a><a name="aligndocksite"></a>CDockSite::AlignDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AlignDockSite(
    const CRect& rectToAlignBy,  
    CRect& rectResult,  
    BOOL bMoveImmediately);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectToAlignBy`  
 [in] `rectResult`  
 [in] `bMoveImmediately`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecalcfixedlayouta--cdocksitecalcfixedlayout"></a><a name="calcfixedlayout"></a>CDockSite::CalcFixedLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bStretch`  
 [in] `bHorz`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecanacceptpanea--cdocksitecanacceptpane"></a><a name="canacceptpane"></a>CDockSite::CanAcceptPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecreateexa--cdocksitecreateex"></a><a name="createex"></a>CDockSite::CreateEx  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
 [in] `dwStyleEx`  
 [in] `dwStyle`  
 [in] `rect`  
 [in] `pParentWnd`  
 [in] `dwControlBarStyle`  
 [in] `pContext`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecreaterowa--cdocksitecreaterow"></a><a name="createrow"></a>CDockSite::CreateRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CDockingPanesRow* CreateRow(
    CDockSite* pParentDockBar,  
    int nOffset,  
    int nRowHeight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentDockBar`  
 [in] `nOffset`  
 [in] `nRowHeight`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedockpanea--cdocksitedockpane"></a><a name="dockpane"></a>CDockSite::DockPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void DockPane(
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod,  
    LPCRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `dockMethod`  
 [in] `lpRect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedockpaneleftofa--cdocksitedockpaneleftof"></a><a name="dockpaneleftof"></a>CDockSite::DockPaneLeftOf  
 Ancora un riquadro a sinistra di un altro riquadro.  
  
```  
virtual BOOL DockPaneLeftOf(
    CPane* pBarToDock,  
    CPane* pTargetBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pBarToDock`  
 Un puntatore al riquadro ancorato a sinistra del `pTargetBar`.  
  
 [in] [out]`pTargetBar`  
 Puntatore al riquadro di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedoesallowdyninsertbeforea--cdocksitedoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a>CDockSite::DoesAllowDynInsertBefore  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefindpanebyida--cdocksitefindpanebyid"></a><a name="findpanebyid"></a>CDockSite::FindPaneByID  
 Restituisce il riquadro con l'ID specificato.  
  
```  
CPane* FindPaneByID(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 L'ID di comando del riquadro da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al riquadro con l'ID di comando specificato, o `NULL` se il riquadro non viene trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefindrowindexa--cdocksitefindrowindex"></a><a name="findrowindex"></a>CDockSite::FindRowIndex  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int FindRowIndex(CDockingPanesRow* pRow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRow`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefixupvirtualrectsa--cdocksitefixupvirtualrects"></a><a name="fixupvirtualrects"></a>CDockSite::FixupVirtualRects  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void FixupVirtualRects();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetdocksiteida--cdocksitegetdocksiteid"></a><a name="getdocksiteid"></a>CDockSite::GetDockSiteID  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual UINT GetDockSiteID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetdocksiterowslista--cdocksitegetdocksiterowslist"></a><a name="getdocksiterowslist"></a>CDockSite::GetDockSiteRowsList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CObList& GetDockSiteRowsList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetpanelista--cdocksitegetpanelist"></a><a name="getpanelist"></a>CDockSite::GetPaneList  
 Restituisce un elenco dei riquadri ancorati nel sito di ancoraggio.  
  
```  
const CObList& GetPaneList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento di sola lettura per un elenco dei riquadri ancorati attualmente nella barra di ancoraggio.  
  
##  <a name="a-nameisaccessibilitycompatiblea--cdocksiteisaccessibilitycompatible"></a><a name="isaccessibilitycompatible"></a>CDockSite::IsAccessibilityCompatible  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsAccessibilityCompatible();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisdragmodea--cdocksiteisdragmode"></a><a name="isdragmode"></a>CDockSite::IsDragMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsDragMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameislastrowa--cdocksiteislastrow"></a><a name="islastrow"></a>CDockSite::IsLastRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
bool IsLastRow(CDockingPanesRow* pRow) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRow`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisrectwithindocksitea--cdocksiteisrectwithindocksite"></a><a name="isrectwithindocksite"></a>CDockSite::IsRectWithinDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsRectWithinDockSite(
    CRect rect,  
    CPoint& ptDelta);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 [in] `ptDelta`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisresizablea--cdocksiteisresizable"></a><a name="isresizable"></a>CDockSite::IsResizable  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsResizable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemovepanea--cdocksitemovepane"></a><a name="movepane"></a>CDockSite::MovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL MovePane(
    CPane* pWnd,  
    UINT nFlags,  
    CPoint ptOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `nFlags`  
 [in] `ptOffset`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameoninsertrowa--cdocksiteoninsertrow"></a><a name="oninsertrow"></a>CDockSite::OnInsertRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnInsertRow(POSITION pos);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pos`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonremoverowa--cdocksiteonremoverow"></a><a name="onremoverow"></a>CDockSite::OnRemoveRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnRemoveRow(
    POSITION pos,  
    BOOL bByShow = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pos`  
 [in] `bByShow`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonresizerowa--cdocksiteonresizerow"></a><a name="onresizerow"></a>CDockSite::OnResizeRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnResizeRow(
    CDockingPanesRow* pRowToResize,  
    int nOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRowToResize`  
 [in] `nOffset`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsizeparenta--cdocksiteonsizeparent"></a><a name="onsizeparent"></a>CDockSite::OnSizeParent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnSizeParent(
    CRect& rectAvailable,  
    UINT nSide,  
    BOOL bExpand,  
    int nOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectAvailable`  
 [in] `nSide`  
 [in] `bExpand`  
 [in] `nOffset`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsetwindowposa--cdocksiteonsetwindowpos"></a><a name="onsetwindowpos"></a>CDockSite::OnSetWindowPos  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnSetWindowPos(
    const CWnd* pWndInsertAfter,  
    const CRect& rectWnd,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndInsertAfter`  
 [in] `rectWnd`  
 [in] `nFlags`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonshowrowa--cdocksiteonshowrow"></a><a name="onshowrow"></a>CDockSite::OnShowRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnShowRow(
    POSITION pos,  
    BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pos`  
 [in] `bShow`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namepanefrompointa--cdocksitepanefrompoint"></a><a name="panefrompoint"></a>CDockSite::PaneFromPoint  
 Restituisce un riquadro ancorato nel sito di ancoraggio nel punto definito dal parametro specificato.  
  
```  
virtual CPane* PaneFromPoint(CPoint pt);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pt`  
 Un punto nelle coordinate dello schermo, per il riquadro da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al riquadro situato nel punto specificato o `NULL` se alcun riquadro non era presente nel punto specificato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namerectsidefrompointa--cdocksiterectsidefrompoint"></a><a name="rectsidefrompoint"></a>CDockSite::RectSideFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static int __stdcall RectSideFromPoint(
    const CRect& rect,  
    const CPoint& point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 [in] `point`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameremovepanea--cdocksiteremovepane"></a><a name="removepane"></a>CDockSite::RemovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePane(
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `dockMethod`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameremoverowa--cdocksiteremoverow"></a><a name="removerow"></a>CDockSite::RemoveRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RemoveRow(CDockingPanesRow* pRow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRow`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namereplacepanea--cdocksitereplacepane"></a><a name="replacepane"></a>CDockSite::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL ReplacePane(
    CPane* pOldBar,  
    CPane* pNewBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pOldBar`  
 [in] `pNewBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namerepositionpanesa--cdocksiterepositionpanes"></a><a name="repositionpanes"></a>CDockSite::RepositionPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RepositionPanes(CRect& rectNewClientArea);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectNewClientArea`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameresizedocksitea--cdocksiteresizedocksite"></a><a name="resizedocksite"></a>CDockSite::ResizeDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ResizeDockSite(
    int nNewWidth,  
    int nNewHeight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nNewWidth`  
 [in] `nNewHeight`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameresizerowa--cdocksiteresizerow"></a><a name="resizerow"></a>CDockSite::ResizeRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int ResizeRow(
    CDockingPanesRow* pRow,  
    int nNewSize,  
    BOOL bAdjustLayout = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRow`  
 [in] `nNewSize`  
 [in] `bAdjustLayout`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameshowpanea--cdocksiteshowpane"></a><a name="showpane"></a>CDockSite::ShowPane  
 Mostra il riquadro.  
  
```  
virtual BOOL ShowPane(
    CBasePane* pBar,  
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pBar`  
 Puntatore al riquadro per essere mostrati o nascosti.  
  
 [in] `bShow`  
 `TRUE`Per specificare che il riquadro viene visualizzato; `FALSE` per specificare che il riquadro deve essere nascosto.  
  
 [in] `bDelay`  
 `TRUE`Per specificare che il layout del Pannello di deve essere ritardato fino al riquadro viene visualizzato; in caso contrario, `FALSE`.  
  
 [in] `bActivate`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è stato visualizzato o nascosto correttamente. `FALSE`Se il riquadro specificato non appartiene a questo sito di ancoraggio.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per mostrare o nascondere i riquadri ancorati. In genere, non è necessario chiamare `CDockSite::ShowPane` direttamente, poiché viene chiamato dalla finestra cornice padre o nel riquadro di base.  
  
##  <a name="a-nameshowrowa--cdocksiteshowrow"></a><a name="showrow"></a>CDockSite::ShowRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ShowRow(
    CDockingPanesRow* pRow,  
    BOOL bShow,  
    BOOL bAdjustLayout);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRow`  
 [in] `bShow`  
 [in] `bAdjustLayout`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameswaprowsa--cdocksiteswaprows"></a><a name="swaprows"></a>CDockSite::SwapRows  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SwapRows(
    CDockingPanesRow* pFirstRow,  
    CDockingPanesRow* pSecondRow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFirstRow`  
 [in] `pSecondRow`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CBasePane](../../mfc/reference/cbasepane-class.md)

