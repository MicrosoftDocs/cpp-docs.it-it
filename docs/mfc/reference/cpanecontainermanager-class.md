---
title: Classe CPaneContainerManager | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPaneContainerManager
- AFXPANECONTAINERMANAGER/CPaneContainerManager
- AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPaneContainerManager
- AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPaneContainerManagerToDockablePane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPanesToList
- AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPaneToList
- AFXPANECONTAINERMANAGER/CPaneContainerManager::AddPaneToRecentPaneContainer
- AFXPANECONTAINERMANAGER/CPaneContainerManager::CalcRects
- AFXPANECONTAINERMANAGER/CPaneContainerManager::CanBeAttached
- AFXPANECONTAINERMANAGER/CPaneContainerManager::CheckAndRemoveNonValidPane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::CheckForMiniFrameAndCaption
- AFXPANECONTAINERMANAGER/CPaneContainerManager::Create
- AFXPANECONTAINERMANAGER/CPaneContainerManager::DoesAllowDynInsertBefore
- AFXPANECONTAINERMANAGER/CPaneContainerManager::DoesContainFloatingPane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::EnableGrippers
- AFXPANECONTAINERMANAGER/CPaneContainerManager::FindPaneContainer
- AFXPANECONTAINERMANAGER/CPaneContainerManager::FindTabbedPane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetAvailableSpace
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetDefaultPaneDivider
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetDockSiteFrameWnd
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetFirstPane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetFirstVisiblePane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetMinMaxOffset
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetMinSize
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetNodeCount
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetPaneContainerRTC
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetPaneCount
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetTotalRefCount
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetVisiblePaneCount
- AFXPANECONTAINERMANAGER/CPaneContainerManager::GetWindowRect
- AFXPANECONTAINERMANAGER/CPaneContainerManager::HideAll
- AFXPANECONTAINERMANAGER/CPaneContainerManager::InsertPane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::IsAutoHideMode
- AFXPANECONTAINERMANAGER/CPaneContainerManager::IsEmpty
- AFXPANECONTAINERMANAGER/CPaneContainerManager::IsRootPaneContainerVisible
- AFXPANECONTAINERMANAGER/CPaneContainerManager::NotifyPaneDivider
- AFXPANECONTAINERMANAGER/CPaneContainerManager::OnPaneDividerMove
- AFXPANECONTAINERMANAGER/CPaneContainerManager::OnShowPane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::PaneFromPoint
- AFXPANECONTAINERMANAGER/CPaneContainerManager::ReleaseEmptyPaneContainers
- AFXPANECONTAINERMANAGER/CPaneContainerManager::RemoveAllPanesAndPaneDividers
- AFXPANECONTAINERMANAGER/CPaneContainerManager::RemoveNonValidPanes
- AFXPANECONTAINERMANAGER/CPaneContainerManager::RemovePaneDivider
- AFXPANECONTAINERMANAGER/CPaneContainerManager::RemovePaneFromPaneContainer
- AFXPANECONTAINERMANAGER/CPaneContainerManager::ReplacePane
- AFXPANECONTAINERMANAGER/CPaneContainerManager::ResizePaneContainers
- AFXPANECONTAINERMANAGER/CPaneContainerManager::Serialize
- AFXPANECONTAINERMANAGER/CPaneContainerManager::SetDefaultPaneDividerForPanes
- AFXPANECONTAINERMANAGER/CPaneContainerManager::SetPaneContainerRTC
- AFXPANECONTAINERMANAGER/CPaneContainerManager::SetResizeMode
- AFXPANECONTAINERMANAGER/CPaneContainerManager::StoreRecentDockSiteInfo
dev_langs:
- C++
helpviewer_keywords:
- CPaneContainerManager class
ms.assetid: 3d974c15-a62f-4648-bb5b-cc31ab7950af
caps.latest.revision: 29
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
ms.openlocfilehash: 377b80ba193d1bf8bf358b709aade192e55dab86
ms.lasthandoff: 02/24/2017

---
# <a name="cpanecontainermanager-class"></a>Classe CPaneContainerManager
La `CPaneContainerManager` classe gestisce l'archiviazione e la visualizzazione del layout di ancoraggio corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPaneContainerManager : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneContainerManager::AddPane](#addpane)||  
|[CPaneContainerManager::AddPaneContainerManager](#addpanecontainermanager)||  
|[CPaneContainerManager::AddPaneContainerManagerToDockablePane](#addpanecontainermanagertodockablepane)||  
|[CPaneContainerManager::AddPanesToList](#addpanestolist)||  
|[CPaneContainerManager::AddPaneToList](#addpanetolist)||  
|[CPaneContainerManager::AddPaneToRecentPaneContainer](#addpanetorecentpanecontainer)||  
|[CPaneContainerManager::CalcRects](#calcrects)||  
|[CPaneContainerManager::CanBeAttached](#canbeattached)||  
|[CPaneContainerManager::CheckAndRemoveNonValidPane](#checkandremovenonvalidpane)||  
|[CPaneContainerManager::CheckForMiniFrameAndCaption](#checkforminiframeandcaption)||  
|[CPaneContainerManager::Create](#create)||  
|[CPaneContainerManager::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)||  
|[CPaneContainerManager::DoesContainFloatingPane](#doescontainfloatingpane)||  
|[CPaneContainerManager::EnableGrippers](#enablegrippers)||  
|[CPaneContainerManager::FindPaneContainer](#findpanecontainer)||  
|[CPaneContainerManager::FindTabbedPane](#findtabbedpane)||  
|[CPaneContainerManager::GetAvailableSpace](#getavailablespace)||  
|[CPaneContainerManager::GetDefaultPaneDivider](#getdefaultpanedivider)||  
|[CPaneContainerManager::GetDockSiteFrameWnd](#getdocksiteframewnd)||  
|[CPaneContainerManager::GetFirstPane](#getfirstpane)||  
|[CPaneContainerManager::GetFirstVisiblePane](#getfirstvisiblepane)||  
|[CPaneContainerManager::GetMinMaxOffset](#getminmaxoffset)||  
|[CPaneContainerManager::GetMinSize](#getminsize)||  
|[CPaneContainerManager::GetNodeCount](#getnodecount)||  
|[CPaneContainerManager::GetPaneContainerRTC](#getpanecontainerrtc)||  
|[CPaneContainerManager::GetPaneCount](#getpanecount)||  
|[CPaneContainerManager::GetTotalRefCount](#gettotalrefcount)||  
|[CPaneContainerManager::GetVisiblePaneCount](#getvisiblepanecount)||  
|[CPaneContainerManager::GetWindowRect](#getwindowrect)||  
|[CPaneContainerManager::HideAll](#hideall)||  
|[CPaneContainerManager::InsertPane](#insertpane)||  
|[CPaneContainerManager::IsAutoHideMode](#isautohidemode)||  
|[CPaneContainerManager::IsEmpty](#isempty)||  
|[CPaneContainerManager::IsRootPaneContainerVisible](#isrootpanecontainervisible)||  
|[CPaneContainerManager::NotifyPaneDivider](#notifypanedivider)||  
|[CPaneContainerManager::OnPaneDividerMove](#onpanedividermove)||  
|[CPaneContainerManager::OnShowPane](#onshowpane)||  
|[CPaneContainerManager::PaneFromPoint](#panefrompoint)||  
|[CPaneContainerManager::ReleaseEmptyPaneContainers](#releaseemptypanecontainers)||  
|[CPaneContainerManager::RemoveAllPanesAndPaneDividers](#removeallpanesandpanedividers)||  
|[CPaneContainerManager::RemoveNonValidPanes](#removenonvalidpanes)||  
|[CPaneContainerManager::RemovePaneDivider](#removepanedivider)||  
|[CPaneContainerManager::RemovePaneFromPaneContainer](#removepanefrompanecontainer)||  
|[CPaneContainerManager::ReplacePane](#replacepane)||  
|[CPaneContainerManager::ResizePaneContainers](#resizepanecontainers)||  
|[CPaneContainerManager::Serialize](#serialize)|Legge o scrive l'oggetto corrente da o in un archivio. (Esegue l'override di [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize).)|  
|[CPaneContainerManager::SetDefaultPaneDividerForPanes](#setdefaultpanedividerforpanes)||  
|[CPaneContainerManager::SetPaneContainerRTC](#setpanecontainerrtc)||  
|[CPaneContainerManager::SetResizeMode](#setresizemode)||  
|[CPaneContainerManager::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||  
  
### <a name="remarks"></a>Note  
 Il framework crea automaticamente le istanze di `CPaneContainerManager` gli oggetti e li incorpora sia in [CPaneDivider classe](../../mfc/reference/cpanedivider-class.md) oggetti o in [CMultiPaneFrameWnd classe](../../mfc/reference/cmultipaneframewnd-class.md) oggetti.  
  
 Il `CPaneContainerManager` classe archivia un puntatore all'elemento radice di un albero binario compilato dal [CPaneContainer](../../mfc/reference/cpanecontainer-class.md) oggetti.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come ottenere un riferimento a un `CPaneContainerManager` oggetto. Questo frammento di codice fa parte di [esempio impostare dimensioni riquadro](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize n.&5;](../../mfc/reference/codesnippet/cpp/cpanecontainermanager-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpanecontainermanager.h  
  
##  <a name="addpane"></a>CPaneContainerManager::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AddPane(CDockablePane* pControlBarToAdd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBarToAdd`  
  
### <a name="remarks"></a>Note  
  
##  <a name="addpanecontainermanager"></a>CPaneContainerManager::AddPaneContainerManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AddPaneContainerManager(
    CPaneContainerManager& srcManager,  
    BOOL bOuterEdge);

 
virtual BOOL AddPaneContainerManager(
    CDockablePane* pTargetControlBar,  
    DWORD dwAlignment,  
    CPaneContainerManager& srcManager,  
    BOOL bCopy);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `srcManager`  
 [in] `bOuterEdge`  
 [in] `pTargetControlBar`  
 [in] `dwAlignment`  
 [in] `bCopy`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="addpanecontainermanagertodockablepane"></a>CPaneContainerManager::AddPaneContainerManagerToDockablePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AddPaneContainerManagerToDockablePane(
    CDockablePane* pTargetControlBar,  
    CPaneContainerManager& srcManager);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTargetControlBar`  
 [in] `srcManager`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="addpanestolist"></a>CPaneContainerManager::AddPanesToList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AddPanesToList(
    CObList* plstControlBars,  
    CObList* plstSliders);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `plstControlBars`  
 [in] `plstSliders`  
  
### <a name="remarks"></a>Note  
  
##  <a name="addpanetolist"></a>CPaneContainerManager::AddPaneToList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AddPaneToList(CDockablePane* pControlBarToAdd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBarToAdd`  
  
### <a name="remarks"></a>Note  
  
##  <a name="addpanetorecentpanecontainer"></a>CPaneContainerManager::AddPaneToRecentPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CDockablePane* AddPaneToRecentPaneContainer(
    CDockablePane* pBarToAdd,  
    CPaneContainer* pRecentContainer);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBarToAdd`  
 [in] `pRecentContainer`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="calcrects"></a>CPaneContainerManager::CalcRects  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CalcRects(
    CRect& rectOriginal,  
    CRect& rectInserted,  
    CRect& rectSlider,  
    DWORD& dwSliderStyle,  
    DWORD dwAlignment,  
    CSize sizeMinOriginal,  
    CSize sizeMinInserted);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectOriginal`  
 [in] `rectInserted`  
 [in] `rectSlider`  
 [in] `dwSliderStyle`  
 [in] `dwAlignment`  
 [in] `sizeMinOriginal`  
 [in] `sizeMinInserted`  
  
### <a name="remarks"></a>Note  
  
##  <a name="canbeattached"></a>CPaneContainerManager::CanBeAttached  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanBeAttached() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="checkandremovenonvalidpane"></a>CPaneContainerManager::CheckAndRemoveNonValidPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CheckAndRemoveNonValidPane(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="checkforminiframeandcaption"></a>CPaneContainerManager::CheckForMiniFrameAndCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CheckForMiniFrameAndCaption(
    CPoint point,  
    CDockablePane** ppTargetControlBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 [in] `ppTargetControlBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="create"></a>CPaneContainerManager::Create  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    CPaneDivider* pDefaultSlider,  
    CRuntimeClass* pContainerRTC = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 [in] `pDefaultSlider`  
 [in] `pContainerRTC`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="doesallowdyninsertbefore"></a>CPaneContainerManager::DoesAllowDynInsertBefore  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="doescontainfloatingpane"></a>CPaneContainerManager::DoesContainFloatingPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DoesContainFloatingPane();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="enablegrippers"></a>CPaneContainerManager::EnableGrippers  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void EnableGrippers(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
  
### <a name="remarks"></a>Note  
  
##  <a name="findpanecontainer"></a>CPaneContainerManager::FindPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CPaneContainer* FindPaneContainer(
    CDockablePane* pBar,  
    BOOL& bLeftBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `bLeftBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="findtabbedpane"></a>CPaneContainerManager::FindTabbedPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockablePane* FindTabbedPane(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getavailablespace"></a>CPaneContainerManager::GetAvailableSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetAvailableSpace(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdefaultpanedivider"></a>CPaneContainerManager::GetDefaultPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneDivider* GetDefaultPaneDivider() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdocksiteframewnd"></a>CPaneContainerManager::GetDockSiteFrameWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetDockSiteFrameWnd();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getfirstpane"></a>CPaneContainerManager::GetFirstPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CBasePane* GetFirstPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getfirstvisiblepane"></a>CPaneContainerManager::GetFirstVisiblePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetFirstVisiblePane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getminmaxoffset"></a>CPaneContainerManager::GetMinMaxOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetMinMaxOffset(
    CPaneDivider* pSlider,  
    int& nMinOffset,  
    int& nMaxOffset,  
    int& nStep);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pSlider`  
 [in] `nMinOffset`  
 [in] `nMaxOffset`  
 [in] `nStep`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getminsize"></a>CPaneContainerManager::GetMinSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetMinSize(CSize& size);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `size`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getnodecount"></a>CPaneContainerManager::GetNodeCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetNodeCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanecontainerrtc"></a>CPaneContainerManager::GetPaneContainerRTC  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRuntimeClass* GetPaneContainerRTC() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanecount"></a>CPaneContainerManager::GetPaneCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetPaneCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettotalrefcount"></a>CPaneContainerManager::GetTotalRefCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTotalRefCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getvisiblepanecount"></a>CPaneContainerManager::GetVisiblePaneCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetVisiblePaneCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getwindowrect"></a>CPaneContainerManager::GetWindowRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetWindowRect(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="hideall"></a>CPaneContainerManager::HideAll  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void HideAll();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="insertpane"></a>CPaneContainerManager::InsertPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL InsertPane(
    CDockablePane* pControlBarToInsert,  
    CDockablePane* pTargetControlBar,  
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL,  
    AFX_DOCK_METHOD dockMethod = DM_UNKNOWN);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBarToInsert`  
 [in] `pTargetControlBar`  
 [in] `dwAlignment`  
 [in] `lpRect`  
 [in] `dockMethod`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isautohidemode"></a>CPaneContainerManager::IsAutoHideMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isempty"></a>CPaneContainerManager::IsEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isrootpanecontainervisible"></a>CPaneContainerManager::IsRootPaneContainerVisible  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsRootPaneContainerVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="notifypanedivider"></a>CPaneContainerManager::NotifyPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void NotifyPaneDivider();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onpanedividermove"></a>CPaneContainerManager::OnPaneDividerMove  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnPaneDividerMove(
    CPaneDivider* pSlider,  
    UINT uFlags,  
    int nOffset,  
    HDWP& hdwp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pSlider`  
 [in] `uFlags`  
 [in] `nOffset`  
 [in] `hdwp`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onshowpane"></a>CPaneContainerManager::OnShowPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `bShow`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="panefrompoint"></a>CPaneContainerManager::PaneFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CDockablePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    BOOL bExactBar,  
    BOOL& bIsTabArea,  
    BOOL& bCaption);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 [in] `nSensitivity`  
 [in] `bExactBar`  
 [in] `bIsTabArea`  
 [in] `bCaption`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="releaseemptypanecontainers"></a>CPaneContainerManager::ReleaseEmptyPaneContainers  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ReleaseEmptyPaneContainers();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="removeallpanesandpanedividers"></a>CPaneContainerManager::RemoveAllPanesAndPaneDividers  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RemoveAllPanesAndPaneDividers();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="removenonvalidpanes"></a>CPaneContainerManager::RemoveNonValidPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RemoveNonValidPanes();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="removepanedivider"></a>CPaneContainerManager::RemovePaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePaneDivider(CPaneDivider* pSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pSlider`  
  
### <a name="remarks"></a>Note  
  
##  <a name="removepanefrompanecontainer"></a>CPaneContainerManager::RemovePaneFromPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL RemovePaneFromPaneContainer(CDockablePane* pControlBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="replacepane"></a>CPaneContainerManager::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL ReplacePane(
    CDockablePane* pBarOld,  
    CDockablePane* pBarNew);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBarOld`  
 [in] `pBarNew`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="resizepanecontainers"></a>CPaneContainerManager::ResizePaneContainers  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ResizePaneContainers(
    UINT nSide,  
    BOOL bExpand,  
    int nOffset,  
    HDWP& hdwp);

 
virtual void ResizePaneContainers(
    CRect rect,  
    HDWP& hdwp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nSide`  
 [in] `bExpand`  
 [in] `nOffset`  
 [in] `hdwp`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="serialize"></a>CPaneContainerManager::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdefaultpanedividerforpanes"></a>CPaneContainerManager::SetDefaultPaneDividerForPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetDefaultPaneDividerForPanes(CPaneDivider* pSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pSlider`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpanecontainerrtc"></a>CPaneContainerManager::SetPaneContainerRTC  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetPaneContainerRTC(CRuntimeClass* pContainerRTC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pContainerRTC`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setresizemode"></a>CPaneContainerManager::SetResizeMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetResizeMode(BOOL bResize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bResize`  
  
### <a name="remarks"></a>Note  
  
##  <a name="storerecentdocksiteinfo"></a>CPaneContainerManager::StoreRecentDockSiteInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentDockSiteInfo(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Classe CPaneContainer](../../mfc/reference/cpanecontainer-class.md)   
 [Classe CPaneDivider](../../mfc/reference/cpanedivider-class.md)

