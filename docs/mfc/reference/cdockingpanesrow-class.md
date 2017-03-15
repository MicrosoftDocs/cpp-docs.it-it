---
title: Classe CDockingPanesRow | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDockingPanesRow
dev_langs:
- C++
helpviewer_keywords:
- CDockingPanesRow class
ms.assetid: e7a17832-0ebb-4bce-b799-cec9b60f76fe
caps.latest.revision: 25
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
ms.openlocfilehash: c9f9b975f5ee60c418c1a4c223183a8cfed31926
ms.lasthandoff: 02/24/2017

---
# <a name="cdockingpanesrow-class"></a>Classe CDockingPanesRow
Gestisce un elenco dei riquadri inseriti nella stessa riga orizzontale o verticale (colonna) di un sito di ancoraggio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDockingPanesRow : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CDockingPanesRow::CDockingPanesRow`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockingPanesRow::AddPane](#addpane)||  
|[CDockingPanesRow::AddPaneFromRow](#addpanefromrow)||  
|[CDockingPanesRow::ArrangePanes](#arrangepanes)|Dispone i riquadri in una riga in base ai parametri di margine e spaziatura specificati.|  
|[CDockingPanesRow::CalcFixedLayout](#calcfixedlayout)||  
|[CDockingPanesRow::Create](#create)||  
|[CDockingPanesRow::ExpandStretchedPanes](#expandstretchedpanes)||  
|[CDockingPanesRow::ExpandStretchedPanesRect](#expandstretchedpanesrect)||  
|[CDockingPanesRow::FixupVirtualRects](#fixupvirtualrects)||  
|[CDockingPanesRow::GetAvailableLength](#getavailablelength)||  
|[CDockingPanesRow::GetAvailableSpace](#getavailablespace)||  
|[CDockingPanesRow::GetClientRect](#getclientrect)||  
|[CDockingPanesRow::GetDockSite](#getdocksite)||  
|[CDockingPanesRow::GetExtraSpace](#getextraspace)||  
|[CDockingPanesRow::GetGroupFromPane](#getgroupfrompane)||  
|[CDockingPanesRow::GetID](#getid)||  
|[CDockingPanesRow::GetMaxPaneSize](#getmaxpanesize)||  
|[CDockingPanesRow::GetPaneCount](#getpanecount)||  
|[CDockingPanesRow::GetPaneList](#getpanelist)||  
|[CDockingPanesRow::GetRowAlignment](#getrowalignment)||  
|[CDockingPanesRow::GetRowHeight](#getrowheight)||  
|[CDockingPanesRow::GetRowOffset](#getrowoffset)||  
|[CDockingPanesRow::GetVisibleCount](#getvisiblecount)||  
|[CDockingPanesRow::GetWindowRect](#getwindowrect)||  
|[CDockingPanesRow::HasPane](#haspane)||  
|[CDockingPanesRow::IsEmpty](#isempty)||  
|[CDockingPanesRow::IsExclusiveRow](#isexclusiverow)||  
|[CDockingPanesRow::IsHorizontal](#ishorizontal)||  
|[CDockingPanesRow::IsVisible](#isvisible)||  
|[CDockingPanesRow::Move](#move)||  
|[CDockingPanesRow::MovePane](#movepane)||  
|[CDockingPanesRow::OnResizePane](#onresizepane)||  
|[CDockingPanesRow::RedrawAll](#redrawall)||  
|[CDockingPanesRow::RemovePane](#removepane)||  
|[CDockingPanesRow::ReplacePane](#replacepane)||  
|[CDockingPanesRow::RepositionPanes](#repositionpanes)||  
|[CDockingPanesRow::Resize](#resize)||  
|[CDockingPanesRow::ResizeByPaneDivider](#resizebypanedivider)||  
|[CDockingPanesRow::ScreenToClient](#screentoclient)||  
|[CDockingPanesRow::SetExtra](#setextra)||  
|[CDockingPanesRow::ShowDockSiteRow](#showdocksiterow)||  
|[CDockingPanesRow::ShowPane](#showpane)||  
|[CDockingPanesRow::UpdateVisibleState](#updatevisiblestate)||  
  
## <a name="remarks"></a>Note  
 Gli oggetti `CDockingPanesRow` vengono creati internamente dagli oggetti del sito di ancoraggio.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come chiamare un oggetto `CDockingPanesRow` da un oggetto `CMFCAutoHideBar`.  
  
 [!code-cpp[&#26; NVC_MFC_RibbonApp](../../mfc/reference/codesnippet/cpp/cdockingpanesrow-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDockingPanesRow.h  
  
##  <a name="a-nameaddpanea--cdockingpanesrowaddpane"></a><a name="addpane"></a>CDockingPanesRow::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AddPane(
    CPane* pControlBar,  
    AFX_DOCK_METHOD dockMethod,  
    LPCRECT lpRect = NULL,  
    BOOL bAddLast = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 [in] `dockMethod`  
 [in] `lpRect`  
 [in] `bAddLast`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddpanefromrowa--cdockingpanesrowaddpanefromrow"></a><a name="addpanefromrow"></a>CDockingPanesRow::AddPaneFromRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AddPaneFromRow(
    CPane* pControlBar,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 [in] `dockMethod`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namearrangepanesa--cdockingpanesrowarrangepanes"></a><a name="arrangepanes"></a>CDockingPanesRow::ArrangePanes  
 Organizza i riquadri in una riga in base al margine di ancoraggio e spaziatura dei parametri.  
  
```  
virtual void ArrangePanes(
    int nMargin,  
    int nSpacing);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nMargin`  
 Specifica l'offset, in pixel, del primo riquadro nell'angolo superiore sinistro della riga.  
  
 [in] `nSpacing`  
 Specifica la spaziatura, in pixel, tra i riquadri.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per disporre i riquadri nella riga in cui verrà ancorata. Dopo aver chiamato questo metodo, è necessario chiamare `CDockingPanesRow::FixupVirtualRects(FALSE, NULL)`.  
  
##  <a name="a-namecalcfixedlayouta--cdockingpanesrowcalcfixedlayout"></a><a name="calcfixedlayout"></a>CDockingPanesRow::CalcFixedLayout  
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
  
##  <a name="a-namecdockingpanesrowa--cdockingpanesrowcdockingpanesrow"></a><a name="cdockingpanesrow"></a>CDockingPanesRow::CDockingPanesRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingPanesRow(
    CDockSite* pParentDockBar,  
    int nOffset,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentDockBar`  
 [in] `nOffset`  
 [in] `nHeight`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecreatea--cdockingpanesrowcreate"></a><a name="create"></a>CDockingPanesRow::Create  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL Create();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameexpandstretchedpanesa--cdockingpanesrowexpandstretchedpanes"></a><a name="expandstretchedpanes"></a>CDockingPanesRow::ExpandStretchedPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ExpandStretchedPanes();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameexpandstretchedpanesrecta--cdockingpanesrowexpandstretchedpanesrect"></a><a name="expandstretchedpanesrect"></a>CDockingPanesRow::ExpandStretchedPanesRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ExpandStretchedPanesRect();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefixupvirtualrectsa--cdockingpanesrowfixupvirtualrects"></a><a name="fixupvirtualrects"></a>CDockingPanesRow::FixupVirtualRects  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void FixupVirtualRects(
    bool bMoveBackToVirtualRect,  
    CPane* pBarToExclude = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMoveBackToVirtualRect`  
 [in] `pBarToExclude`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetavailablelengtha--cdockingpanesrowgetavailablelength"></a><a name="getavailablelength"></a>CDockingPanesRow::GetAvailableLength  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetAvailableLength(BOOL bUseVirtualRect = FALSE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bUseVirtualRect`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetavailablespacea--cdockingpanesrowgetavailablespace"></a><a name="getavailablespace"></a>CDockingPanesRow::GetAvailableSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetAvailableSpace(CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetclientrecta--cdockingpanesrowgetclientrect"></a><a name="getclientrect"></a>CDockingPanesRow::GetClientRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void GetClientRect(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetdocksitea--cdockingpanesrowgetdocksite"></a><a name="getdocksite"></a>CDockingPanesRow::GetDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockSite* GetDockSite() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetextraspacea--cdockingpanesrowgetextraspace"></a><a name="getextraspace"></a>CDockingPanesRow::GetExtraSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetExtraSpace() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetgroupfrompanea--cdockingpanesrowgetgroupfrompane"></a><a name="getgroupfrompane"></a>CDockingPanesRow::GetGroupFromPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void GetGroupFromPane(
    CPane* pBar,  
    CObList& lst);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `lst`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetida--cdockingpanesrowgetid"></a><a name="getid"></a>CDockingPanesRow::GetID  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetmaxpanesizea--cdockingpanesrowgetmaxpanesize"></a><a name="getmaxpanesize"></a>CDockingPanesRow::GetMaxPaneSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetMaxPaneSize(BOOL bSkipHiddenBars = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSkipHiddenBars`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetpanecounta--cdockingpanesrowgetpanecount"></a><a name="getpanecount"></a>CDockingPanesRow::GetPaneCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetPaneCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetpanelista--cdockingpanesrowgetpanelist"></a><a name="getpanelist"></a>CDockingPanesRow::GetPaneList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CObList& GetPaneList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetrowalignmenta--cdockingpanesrowgetrowalignment"></a><a name="getrowalignment"></a>CDockingPanesRow::GetRowAlignment  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DWORD GetRowAlignment() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetrowheighta--cdockingpanesrowgetrowheight"></a><a name="getrowheight"></a>CDockingPanesRow::GetRowHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetRowHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetrowoffseta--cdockingpanesrowgetrowoffset"></a><a name="getrowoffset"></a>CDockingPanesRow::GetRowOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetRowOffset() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetvisiblecounta--cdockingpanesrowgetvisiblecount"></a><a name="getvisiblecount"></a>CDockingPanesRow::GetVisibleCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetVisibleCount();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetwindowrecta--cdockingpanesrowgetwindowrect"></a><a name="getwindowrect"></a>CDockingPanesRow::GetWindowRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void GetWindowRect(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namehaspanea--cdockingpanesrowhaspane"></a><a name="haspane"></a>CDockingPanesRow::HasPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL HasPane(CBasePane* pControlBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisemptya--cdockingpanesrowisempty"></a><a name="isempty"></a>CDockingPanesRow::IsEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisexclusiverowa--cdockingpanesrowisexclusiverow"></a><a name="isexclusiverow"></a>CDockingPanesRow::IsExclusiveRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsExclusiveRow() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameishorizontala--cdockingpanesrowishorizontal"></a><a name="ishorizontal"></a>CDockingPanesRow::IsHorizontal  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
bool IsHorizontal() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisvisiblea--cdockingpanesrowisvisible"></a><a name="isvisible"></a>CDockingPanesRow::IsVisible  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemovea--cdockingpanesrowmove"></a><a name="move"></a>CDockingPanesRow::Move  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Move(int nOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nOffset`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemovepanea--cdockingpanesrowmovepane"></a><a name="movepane"></a>CDockingPanesRow::MovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void MovePane(
    CPane* pControlBar,  
    CPoint ptOffset,  
    BOOL bSwapControlBars,  
    HDWP& hdwp);

 
void MovePane(
    CPane* pControlBar,  
    CRect rectTarget,  
    HDWP& hdwp);

 
void MovePane(
    CPane* pControlBar,  
    int nOffset,  
    bool bForward,  
    HDWP& hdwp);

 
void MovePane(
    CPane* pControlBar,  
    int nAbsolutOffset,  
    HDWP& hdwp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 [in] `ptOffset`  
 [in] `bSwapControlBars`  
 [in] `hdwp`  
 [in] `rectTarget`  
 [in] `nOffset`  
 [in] `bForward`  
 [in] `nAbsolutOffset`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonresizepanea--cdockingpanesrowonresizepane"></a><a name="onresizepane"></a>CDockingPanesRow::OnResizePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnResizePane(CBasePane* pControlBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameredrawalla--cdockingpanesrowredrawall"></a><a name="redrawall"></a>CDockingPanesRow::RedrawAll  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RedrawAll();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameremovepanea--cdockingpanesrowremovepane"></a><a name="removepane"></a>CDockingPanesRow::RemovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePane(CPane* pControlBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namereplacepanea--cdockingpanesrowreplacepane"></a><a name="replacepane"></a>CDockingPanesRow::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL ReplacePane(
    CPane* pBarOld,  
    CPane* pBarNew);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBarOld`  
 [in] `pBarNew`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namerepositionpanesa--cdockingpanesrowrepositionpanes"></a><a name="repositionpanes"></a>CDockingPanesRow::RepositionPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RepositionPanes(
    CRect& rectNewParentBarArea,  
    UINT nSide = (UINT)-1,  
    BOOL bExpand = FALSE,  
    int nOffset = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectNewParentBarArea`  
 [in] `nSide`  
 [in] `bExpand`  
 [in] `nOffset`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameresizea--cdockingpanesrowresize"></a><a name="resize"></a>CDockingPanesRow::Resize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int Resize(int nOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nOffset`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameresizebypanedividera--cdockingpanesrowresizebypanedivider"></a><a name="resizebypanedivider"></a>CDockingPanesRow::ResizeByPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int ResizeByPaneDivider(int);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `int`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namescreentoclienta--cdockingpanesrowscreentoclient"></a><a name="screentoclient"></a>CDockingPanesRow::ScreenToClient  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ScreenToClient(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetextraa--cdockingpanesrowsetextra"></a><a name="setextra"></a>CDockingPanesRow::SetExtra  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetExtra(
    int nExtraSpace,  
    AFX_ROW_ALIGNMENT rowExtraAlign);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nExtraSpace`  
 [in] `rowExtraAlign`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameshowdocksiterowa--cdockingpanesrowshowdocksiterow"></a><a name="showdocksiterow"></a>CDockingPanesRow::ShowDockSiteRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ShowDockSiteRow(
    BOOL bShow,  
    BOOL bDelay);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 [in] `bDelay`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameshowpanea--cdockingpanesrowshowpane"></a><a name="showpane"></a>CDockingPanesRow::ShowPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL ShowPane(
    CPane* pControlBar,  
    BOOL bShow,  
    BOOL bDelay = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 [in] `bShow`  
 [in] `bDelay`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameupdatevisiblestatea--cdockingpanesrowupdatevisiblestate"></a><a name="updatevisiblestate"></a>CDockingPanesRow::UpdateVisibleState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void UpdateVisibleState(BOOL bDelay);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDelay`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Classe CDockSite](../../mfc/reference/cdocksite-class.md)   
 [Classe CPane](../../mfc/reference/cpane-class.md)

