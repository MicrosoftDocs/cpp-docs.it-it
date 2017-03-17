---
title: Classe CGlobalUtils | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CGlobalUtils
- AFXGLOBALUTILS/CGlobalUtils
- AFXGLOBALUTILS/CGlobalUtils::AdjustRectToWorkArea
- AFXGLOBALUTILS/CGlobalUtils::CalcExpectedDockedRect
- AFXGLOBALUTILS/CGlobalUtils::CanBeAttached
- AFXGLOBALUTILS/CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
- AFXGLOBALUTILS/CGlobalUtils::CheckAlignment
- AFXGLOBALUTILS/CGlobalUtils::CyFromString
- AFXGLOBALUTILS/CGlobalUtils::DecimalFromString
- AFXGLOBALUTILS/CGlobalUtils::FlipRect
- AFXGLOBALUTILS/CGlobalUtils::ForceAdjustLayout
- AFXGLOBALUTILS/CGlobalUtils::GetDockingManager
- AFXGLOBALUTILS/CGlobalUtils::GetOppositeAlignment
- AFXGLOBALUTILS/CGlobalUtils::GetPaneAndAlignFromPoint
- AFXGLOBALUTILS/CGlobalUtils::GetWndIcon
- AFXGLOBALUTILS/CGlobalUtils::SetNewParent
- AFXGLOBALUTILS/CGlobalUtils::StringFromCy
- AFXGLOBALUTILS/CGlobalUtils::StringFromDecimal
dev_langs:
- C++
helpviewer_keywords:
- CGlobalUtils class
ms.assetid: 2c5bd1a6-f80c-4e79-a476-b4ceebabfb2f
caps.latest.revision: 16
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
ms.openlocfilehash: 4fd08a344dd345f70e767a2ebba0f8b7f62e03c7
ms.lasthandoff: 02/24/2017

---
# <a name="cglobalutils-class"></a>Classe CGlobalUtils
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CGlobalUtils  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGlobalUtils::AdjustRectToWorkArea](#adjustrecttoworkarea)||  
|[CGlobalUtils::CalcExpectedDockedRect](#calcexpecteddockedrect)||  
|[CGlobalUtils::CanBeAttached](#canbeattached)||  
|[CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd](#canpanebeinfloatingmultipaneframewnd)||  
|[CGlobalUtils::CheckAlignment](#checkalignment)||  
|[CGlobalUtils::CyFromString](#cyfromstring)||  
|[CGlobalUtils::DecimalFromString](#decimalfromstring)||  
|[CGlobalUtils::FlipRect](#fliprect)||  
|[CGlobalUtils::ForceAdjustLayout](#forceadjustlayout)||  
|[CGlobalUtils::GetDockingManager](#getdockingmanager)||  
|[CGlobalUtils::GetOppositeAlignment](#getoppositealignment)||  
|[CGlobalUtils::GetPaneAndAlignFromPoint](#getpaneandalignfrompoint)||  
|[CGlobalUtils::GetWndIcon](#getwndicon)||  
|[CGlobalUtils::SetNewParent](#setnewparent)||  
|[CGlobalUtils::StringFromCy](#stringfromcy)||  
|[CGlobalUtils::StringFromDecimal](#stringfromdecimal)||  
  
## <a name="remarks"></a>Note  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CGlobalUtils](../../mfc/reference/cglobalutils-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxglobalutils.h  
  
##  <a name="adjustrecttoworkarea"></a>CGlobalUtils::AdjustRectToWorkArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AdjustRectToworkArea(
    CRect& rect,  
    CRect* pRectDelta = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `rect`  
 [in] `pRectDelta`  
  
### <a name="remarks"></a>Note  
  
##  <a name="calcexpecteddockedrect"></a>CGlobalUtils::CalcExpectedDockedRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CalcExpectedDockedRect(
    CPaneContainerManager& barContainerManager,  
    CWnd* pWndTodock,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `barContainerManager`  
 [in] `pWndTodock`  
 [in] `ptMouse`  
 [out] `rectResult`  
 [out] `bDrawTab`  
 [out] `ppTargetBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="canbeattached"></a>CGlobalUtils::CanBeAttached  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CanBeAttached(CWnd* pWnd) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="canpanebeinfloatingmultipaneframewnd"></a>CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CanPaneBeInFloatingMultiPaneFrameWnd(CWnd* pWnd) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="checkalignment"></a>CGlobalUtils::CheckAlignment  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CheckAlignment(
    CPoint point,  
    CBasePane* pBar,  
    int nSensitivity,  
    const CDockingManager* pDockManager,  
    BOOL bOuterEdge,  
    DWORD& dwAlignment,  
    DWORD dwEnabledDockBars = CBRS_ALIGN_ANY,  
    LPCRECT lpRectBounds = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 [in] `pBar`  
 [in] `nSensitivity`  
 [in] `pDockManager`  
 [in] `bOuterEdge`  
 [out] `dwAlignment`  
 [in] `dwEnabledDockBars`  
 [in] `lpRectBounds`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="cyfromstring"></a>CGlobalUtils::CyFromString  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CyFromString(
    CY& cy,  
    LPCTSTR psz);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `cy`  
 [in] `psz`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="decimalfromstring"></a>CGlobalUtils::DecimalFromString  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL DecimalFromString(
    DECIMAL& decimal,  
    LPCTSTR psz);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `decimal`  
 [in] `psz`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="fliprect"></a>CGlobalUtils::FlipRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void FlipRect(
    CRect& rect,  
    int nDegrees);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `rect`  
 [in] `nDegrees`  
  
### <a name="remarks"></a>Note  
  
##  <a name="forceadjustlayout"></a>CGlobalUtils::ForceAdjustLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ForceAdjustLayout(
    CDockingManager* pDockManager,  
    BOOL bForce = FALSE,  
    BOOL bForceInvisible = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `pDockManager`  
 [in] `bForce`  
 [in] `bForceInvisible`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdockingmanager"></a>CGlobalUtils::GetDockingManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingManager* GetDockingManager(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getoppositealignment"></a>CGlobalUtils::GetOppositeAlignment  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DWORD GetOppositeAlignment(DWORD dwAlign);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwAlign`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpaneandalignfrompoint"></a>CGlobalUtils::GetPaneAndAlignFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL GetPaneAndAlignFromPoint(
    CPaneContainerManager& barContainerManager,  
    CPoint pt,  
    CDockablePane** ppTargetControlBar,  
    DWORD& dwAlignment,  
    BOOL& bTabArea,  
    BOOL& bCaption);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `barContainerManager`  
 [in] `pt`  
 [out] `ppTargetControlBar`  
 [out] `dwAlignment`  
 [out] `bTabArea`  
 [out] `bCaption`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getwndicon"></a>CGlobalUtils::GetWndIcon  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
HICON GetWndIcon(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setnewparent"></a>CGlobalUtils::SetNewParent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetNewParent(
    CObList& lstControlBars,  
    CWnd* pNewParent,  
    BOOL bCheckVisibility = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lstControlBars`  
 [in] `pNewParent`  
 [in] `bCheckVisibility`  
  
### <a name="remarks"></a>Note  
  
##  <a name="stringfromcy"></a>CGlobalUtils::StringFromCy  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL StringFromCy(
    CString& str,  
    CY& cy);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `str`  
 [in] `cy`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="stringfromdecimal"></a>CGlobalUtils::StringFromDecimal  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL StringFromDecimal(
    CString& str,  
    DECIMAL& decimal);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `str`  
 [in] `decimal`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

