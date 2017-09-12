---
title: CPaneDivider Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPaneDivider
- AFXPANEDIVIDER/CPaneDivider
- AFXPANEDIVIDER/CPaneDivider::CPaneDivider
- AFXPANEDIVIDER/CPaneDivider::AddPaneContainer
- AFXPANEDIVIDER/CPaneDivider::AddPane
- AFXPANEDIVIDER/CPaneDivider::AddRecentPane
- AFXPANEDIVIDER/CPaneDivider::CalcExpectedDockedRect
- AFXPANEDIVIDER/CPaneDivider::CalcFixedLayout
- AFXPANEDIVIDER/CPaneDivider::CheckVisibility
- AFXPANEDIVIDER/CPaneDivider::CreateEx
- AFXPANEDIVIDER/CPaneDivider::DoesAllowDynInsertBefore
- AFXPANEDIVIDER/CPaneDivider::DoesContainFloatingPane
- AFXPANEDIVIDER/CPaneDivider::FindPaneContainer
- AFXPANEDIVIDER/CPaneDivider::FindTabbedPane
- AFXPANEDIVIDER/CPaneDivider::GetDefaultWidth
- AFXPANEDIVIDER/CPaneDivider::GetFirstPane
- AFXPANEDIVIDER/CPaneDivider::GetPaneDividerStyle
- AFXPANEDIVIDER/CPaneDivider::GetRootContainerRect
- AFXPANEDIVIDER/CPaneDivider::GetWidth
- AFXPANEDIVIDER/CPaneDivider::Init
- AFXPANEDIVIDER/CPaneDivider::InsertPane
- AFXPANEDIVIDER/CPaneDivider::IsAutoHideMode
- AFXPANEDIVIDER/CPaneDivider::IsDefault
- AFXPANEDIVIDER/CPaneDivider::IsHorizontal
- AFXPANEDIVIDER/CPaneDivider::Move
- AFXPANEDIVIDER/CPaneDivider::NotifyAboutRelease
- AFXPANEDIVIDER/CPaneDivider::OnShowPane
- AFXPANEDIVIDER/CPaneDivider::ReleaseEmptyPaneContainers
- AFXPANEDIVIDER/CPaneDivider::RemovePane
- AFXPANEDIVIDER/CPaneDivider::ReplacePane
- AFXPANEDIVIDER/CPaneDivider::RepositionPanes
- AFXPANEDIVIDER/CPaneDivider::Serialize
- AFXPANEDIVIDER/CPaneDivider::SetAutoHideMode
- AFXPANEDIVIDER/CPaneDivider::SetPaneContainerManager
- AFXPANEDIVIDER/CPaneDivider::ShowWindow
- AFXPANEDIVIDER/CPaneDivider::StoreRecentDockSiteInfo
- AFXPANEDIVIDER/CPaneDivider::StoreRecentTabRelatedInfo
- AFXPANEDIVIDER/CPaneDivider::GetPanes
- AFXPANEDIVIDER/CPaneDivider::GetPaneDividers
- AFXPANEDIVIDER/CPaneDivider::m_nDefaultWidth
- AFXPANEDIVIDER/CPaneDivider::m_pSliderRTC
dev_langs:
- C++
helpviewer_keywords:
- CPaneDivider [MFC], CPaneDivider
- CPaneDivider [MFC], AddPaneContainer
- CPaneDivider [MFC], AddPane
- CPaneDivider [MFC], AddRecentPane
- CPaneDivider [MFC], CalcExpectedDockedRect
- CPaneDivider [MFC], CalcFixedLayout
- CPaneDivider [MFC], CheckVisibility
- CPaneDivider [MFC], CreateEx
- CPaneDivider [MFC], DoesAllowDynInsertBefore
- CPaneDivider [MFC], DoesContainFloatingPane
- CPaneDivider [MFC], FindPaneContainer
- CPaneDivider [MFC], FindTabbedPane
- CPaneDivider [MFC], GetDefaultWidth
- CPaneDivider [MFC], GetFirstPane
- CPaneDivider [MFC], GetPaneDividerStyle
- CPaneDivider [MFC], GetRootContainerRect
- CPaneDivider [MFC], GetWidth
- CPaneDivider [MFC], Init
- CPaneDivider [MFC], InsertPane
- CPaneDivider [MFC], IsAutoHideMode
- CPaneDivider [MFC], IsDefault
- CPaneDivider [MFC], IsHorizontal
- CPaneDivider [MFC], Move
- CPaneDivider [MFC], NotifyAboutRelease
- CPaneDivider [MFC], OnShowPane
- CPaneDivider [MFC], ReleaseEmptyPaneContainers
- CPaneDivider [MFC], RemovePane
- CPaneDivider [MFC], ReplacePane
- CPaneDivider [MFC], RepositionPanes
- CPaneDivider [MFC], Serialize
- CPaneDivider [MFC], SetAutoHideMode
- CPaneDivider [MFC], SetPaneContainerManager
- CPaneDivider [MFC], ShowWindow
- CPaneDivider [MFC], StoreRecentDockSiteInfo
- CPaneDivider [MFC], StoreRecentTabRelatedInfo
- CPaneDivider [MFC], GetPanes
- CPaneDivider [MFC], GetPaneDividers
- CPaneDivider [MFC], m_nDefaultWidth
- CPaneDivider [MFC], m_pSliderRTC
ms.assetid: 8e828a5d-232f-4127-b8e3-7fa45a7a476e
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
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: ef61bb3030a7e7fbe16743d3f2b80afb10a5be79
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cpanedivider-class"></a>CPaneDivider Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 The `CPaneDivider` class divides two panes, divides two groups of panes, or separates a group of panes from the client area of the main frame window.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CPaneDivider : public CBasePane  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::CPaneDivider](#cpanedivider)||  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::AddPaneContainer](#addpanecontainer)||  
|[CPaneDivider::AddPane](#addpane)||  
|[CPaneDivider::AddRecentPane](#addrecentpane)||  
|[CPaneDivider::CalcExpectedDockedRect](#calcexpecteddockedrect)||  
|[CPaneDivider::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|  
|[CPaneDivider::CheckVisibility](#checkvisibility)||  
|[CPaneDivider::CreateEx](#createex)|(Overrides [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).)|  
|[CPaneDivider::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|(Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
|[CPaneDivider::DoesContainFloatingPane](#doescontainfloatingpane)||  
|[CPaneDivider::FindPaneContainer](#findpanecontainer)||  
|[CPaneDivider::FindTabbedPane](#findtabbedpane)||  
|[CPaneDivider::GetDefaultWidth](#getdefaultwidth)||  
|[CPaneDivider::GetFirstPane](#getfirstpane)||  
|[CPaneDivider::GetPaneDividerStyle](#getpanedividerstyle)||  
|[CPaneDivider::GetRootContainerRect](#getrootcontainerrect)||  
|[CPaneDivider::GetWidth](#getwidth)||  
|[CPaneDivider::Init](#init)||  
|[CPaneDivider::InsertPane](#insertpane)||  
|[CPaneDivider::IsAutoHideMode](#isautohidemode)|(Overrides [CBasePane::IsAutoHideMode](../../mfc/reference/cbasepane-class.md#isautohidemode).)|  
|[CPaneDivider::IsDefault](#isdefault)||  
|[CPaneDivider::IsHorizontal](#ishorizontal)|(Overrides [CBasePane::IsHorizontal](../../mfc/reference/cbasepane-class.md#ishorizontal).)|  
|[CPaneDivider::Move](#move)||  
|[CPaneDivider::NotifyAboutRelease](#notifyaboutrelease)||  
|[CPaneDivider::OnShowPane](#onshowpane)||  
|[CPaneDivider::ReleaseEmptyPaneContainers](#releaseemptypanecontainers)||  
|[CPaneDivider::RemovePane](#removepane)||  
|[CPaneDivider::ReplacePane](#replacepane)||  
|[CPaneDivider::RepositionPanes](#repositionpanes)||  
|[CPaneDivider::Serialize](#serialize)|(Overrides `CBasePane::Serialize`.)|  
|[CPaneDivider::SetAutoHideMode](#setautohidemode)||  
|[CPaneDivider::SetPaneContainerManager](#setpanecontainermanager)||  
|[CPaneDivider::ShowWindow](#showwindow)||  
|[CPaneDivider::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||  
|[CPaneDivider::StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)||  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::GetPanes](#getpanes)|Returns the list of panes that reside in the [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md). This method should be called only for default pane dividers.|  
|[CPaneDivider::GetPaneDividers](#getpanedividers)|Returns the list of pane dividers that reside in the [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md). This method should be called only for default pane dividers.|  
  
### <a name="data-members"></a>Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::m_nDefaultWidth](#m_ndefaultwidth)|Specifies the default width in pixels of all pane dividers in the application.|  
|[CPaneDivider::m_pSliderRTC](#m_psliderrtc)|Holds a pointer to the runtime class information about a `CPaneDivider`-derived object.|  
  
## <a name="remarks"></a>Remarks  
 The framework creates `CPaneDivider` objects automatically when a pane is docked.  
  
 There are two types of pane dividers:  
  
-   a default pane divider is created when a group of panes is docked to a side of the main frame window. The default pane divider holds a pointer to the [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md) and redirects most operations on the group of panes (such as resizing a pane, or docking another pane or container) to the container manager. Each docking pane maintains a pointer to its default pane divider.  
  
-   A regular pane divider just divides two panes in a container. For more information, see [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md).  
  
## <a name="example"></a>Example  
 The following example demonstrates how to get a `CPaneDivider` object from a `CWorkspaceBar` object. This code snippet is part of the [MDI Tabs Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MDITabsDemo#5](../../mfc/reference/codesnippet/cpp/cpanedivider-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CPaneDivider](../../mfc/reference/cpanedivider-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxPaneDivider.h  
  
##  <a name="setautohidemode"></a>  CPaneDivider::SetAutoHideMode  

  
```  
void SetAutoHideMode(BOOL bMode);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bMode`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="setpanecontainermanager"></a>  CPaneDivider::SetPaneContainerManager  

  
```  
void SetPaneContainerManager(CPaneContainerManager* p);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `p`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="addpane"></a>  CPaneDivider::AddPane  

  
```  
virtual void AddPane(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pBar`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="addpanecontainer"></a>  CPaneDivider::AddPaneContainer  

  
```  
virtual BOOL AddPaneContainer(
    CPaneContainerManager& barContainerManager,  
    BOOL bOuterEdge);

 
virtual BOOL AddPaneContainer(
    CDockablePane* pTargetBar,  
    CPaneContainerManager& barContainerManager,  
    DWORD dwAlignment);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `barContainerManager`  
 [in] `bOuterEdge`  
 [in] `pTargetBar`  
 [in] `dwAlignment`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="addrecentpane"></a>  CPaneDivider::AddRecentPane  

  
```  
virtual CDockablePane* AddRecentPane(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pBar`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="calcexpecteddockedrect"></a>  CPaneDivider::CalcExpectedDockedRect  

  
```  
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pWndToDock`  
 [in] `ptMouse`  
 [in] `rectResult`  
 [in] `bDrawTab`  
 [in] `ppTargetBar`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="calcfixedlayout"></a>  CPaneDivider::CalcFixedLayout  

  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bStretch`  
 [in] `bHorz`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="checkvisibility"></a>  CPaneDivider::CheckVisibility  

  
```  
virtual BOOL CheckVisibility();
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="cpanedivider"></a>  CPaneDivider::CPaneDivider  

  
```  
CPaneDivider();

 
CPaneDivider(
    BOOL bDefaultSlider,  
    CWnd* pParent = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bDefaultSlider`  
 [in] `pParent`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="createex"></a>  CPaneDivider::CreateEx  

  
```  
virtual BOOL CreateEx(
    DWORD dwStyleEx,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    CCreateContext* pContext);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `dwStyleEx`  
 [in] `dwStyle`  
 [in] `rect`  
 [in] `pParentWnd`  
 [in] `nID`  
 [in] `pContext`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="doesallowdyninsertbefore"></a>  CPaneDivider::DoesAllowDynInsertBefore  

  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="doescontainfloatingpane"></a>  CPaneDivider::DoesContainFloatingPane  

  
```  
virtual BOOL DoesContainFloatingPane();
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="findpanecontainer"></a>  CPaneDivider::FindPaneContainer  

  
```  
CPaneContainer* FindPaneContainer(
    CDockablePane* pBar,  
    BOOL& bLeftBar);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pBar`  
 [in] `bLeftBar`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="findtabbedpane"></a>  CPaneDivider::FindTabbedPane  

  
```  
CDockablePane* FindTabbedPane(UINT nID);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nID`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getdefaultwidth"></a>  CPaneDivider::GetDefaultWidth  

  
```  
static int __stdcall GetDefaultWidth();
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getfirstpane"></a>  CPaneDivider::GetFirstPane  

  
```  
const CBasePane* GetFirstPane() const;  
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getpanedividers"></a>  CPaneDivider::GetPaneDividers  
 Returns the list of pane dividers that reside in the [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md). This method should be called only for default pane dividers.  
  
```  
void GetPaneDividers(CObList& lstSliders);
```  
  
### <a name="parameters"></a>Parameters  
 [out] `lstSliders`  
 Contains the list of pane dividers that reside in the pane container.  
  
### <a name="remarks"></a>Remarks  
 This method should be called for default pane dividers only. A default pane divider is a divider that resizes the entire pane container.  
  
##  <a name="getpanedividerstyle"></a>  CPaneDivider::GetPaneDividerStyle  

  
```  
DWORD GetPaneDividerStyle() const;  
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getpanes"></a>  CPaneDivider::GetPanes  
 Returns the list of panes that reside in the [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md). This method should be called only to retrieve default pane dividers.  
  
```  
void GetPanes(CObList& lstBars);
```  
  
### <a name="parameters"></a>Parameters  
 [out] `lstBars`  
 Contains the list of panes that reside in the pane container.  
  
### <a name="remarks"></a>Remarks  
 This method should be called for default pane dividers only. A default pane divider is a divider that resizes the entire pane container.  
  
##  <a name="getrootcontainerrect"></a>  CPaneDivider::GetRootContainerRect  

  
```  
CRect GetRootContainerRect();
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getwidth"></a>  CPaneDivider::GetWidth  

  
```  
int GetWidth() const;  
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="init"></a>  CPaneDivider::Init  

  
```  
void Init(
    BOOL bDefaultSlider = FALSE,  
    CWnd* pParent = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bDefaultSlider`  
 [in] `pParent`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="insertpane"></a>  CPaneDivider::InsertPane  

  
```  
virtual BOOL InsertPane(
    CDockablePane* pBarToInsert,  
    CDockablePane* pTargetBar,  
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pBarToInsert`  
 [in] `pTargetBar`  
 [in] `dwAlignment`  
 [in] `lpRect`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="isautohidemode"></a>  CPaneDivider::IsAutoHideMode  

  
```  
BOOL IsAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="isdefault"></a>  CPaneDivider::IsDefault  

  
```  
BOOL IsDefault() const;  
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="ishorizontal"></a>  CPaneDivider::IsHorizontal  

  
```  
BOOL IsHorizontal() const;  
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="m_ndefaultwidth"></a>  CPaneDivider::m_nDefaultWidth  
 Specifies the default width, in pixels, of all pane dividers in the application.  
  
```  
AFX_IMPORT_DATA static int m_nDefaultWidth;  
```  
  
##  <a name="move"></a>  CPaneDivider::Move  

  
```  
virtual void Move(
    CPoint& ptOffset,  
    BOOL bAdjustLayout = TRUE);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `ptOffset`  
 [in] `bAdjustLayout`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="m_psliderrtc"></a>  CPaneDivider::m_pSliderRTC  
 Holds a pointer to runtime class information about a `CPaneDivider`-derived object.  
  
```  
AFX_IMPORT_DATA static CRuntimeClass* m_pSliderRTC;  
```  
  
### <a name="remarks"></a>Remarks  
 Set this member variable if you create a custom pane divider. This enables the framework to create your pane divider when the pane is drawn.  
  
### <a name="example"></a>Example  
 The following example shows how to set the `m_pSliderRTC` member variable:  
  
```  
class CMySplitter : public CPaneDivider  
{  
...  
};  
 
CPaneDivider::m_pSliderRTC = RUNTIME_CLASS(CMySpliter);
```  
  
##  <a name="notifyaboutrelease"></a>  CPaneDivider::NotifyAboutRelease  

  
```  
virtual void NotifyAboutRelease();
```  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="onshowpane"></a>  CPaneDivider::OnShowPane  

  
```  
virtual void OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pBar`  
 [in] `bShow`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="releaseemptypanecontainers"></a>  CPaneDivider::ReleaseEmptyPaneContainers  

  
```  
void ReleaseEmptyPaneContainers();
```  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="removepane"></a>  CPaneDivider::RemovePane  

  
```  
virtual void RemovePane(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pBar`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="replacepane"></a>  CPaneDivider::ReplacePane  

  
```  
virtual BOOL ReplacePane(
    CDockablePane* pBarToReplace,  
    CDockablePane* pBarToReplaceWith);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pBarToReplace`  
 [in] `pBarToReplaceWith`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="repositionpanes"></a>  CPaneDivider::RepositionPanes  

  
```  
virtual void RepositionPanes(
    CRect& rectNew,  
    HDWP& hdwp);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `rectNew`  
 [in] `hdwp`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="serialize"></a>  CPaneDivider::Serialize  

  
```  
void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `ar`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="showwindow"></a>  CPaneDivider::ShowWindow  

  
```  
void ShowWindow(int nCmdShow);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nCmdShow`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="storerecentdocksiteinfo"></a>  CPaneDivider::StoreRecentDockSiteInfo  

  
```  
void StoreRecentDockSiteInfo(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pBar`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="storerecenttabrelatedinfo"></a>  CPaneDivider::StoreRecentTabRelatedInfo  

  
```  
void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,  
    CDockablePane* pTabbedBar);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pDockingBar`  
 [in] `pTabbedBar`  
  
### <a name="remarks"></a>Remarks  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md)   
 [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md)   
 [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md)   
 [CBasePane Class](../../mfc/reference/cbasepane-class.md)

