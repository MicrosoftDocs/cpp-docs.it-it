---
title: CMFCDragFrameImpl Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDragFrameImpl
dev_langs:
- C++
helpviewer_keywords:
- CMFCDragFrameImpl class [MFC]
ms.assetid: 500cd824-8188-43c2-8754-b7bb46b5648a
caps.latest.revision: 26
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
ms.openlocfilehash: 3278a84ac620800a0890d24fb3f8dba1840d5445
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcdragframeimpl-class"></a>CMFCDragFrameImpl Class
The `CMFCDragFrameImpl` class draws the drag rectangle that appears when the user drags a pane in the standard dock mode.  
   [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
   
## <a name="syntax"></a>Syntax  
  
```  
class CMFCDragFrameImpl  
```  
  
## <a name="remarks"></a>Remarks  
 An object of this class is embedded in each [CPane Class](../../mfc/reference/cpane-class.md) object. Thus, each pane that uses the `CanFloat` method displays a drag rectangle when the user drags it.  
  
 You can control the thickness of the drag rectangle by using [AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat]--brokenlink--(afx-global-data-structure.md#m_ndragframethicknessfloat) and [AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](afx-global-data-structure.md#m_ndragframethicknessdock).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CMFCDragFrameImpl](../../mfc/reference/cmfcdragframeimpl-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxdragframeimpl.h  
  
##  <a name="enddrawdragframe"></a>  CMFCDragFrameImpl::EndDrawDragFrame  

  
```  
void EndDrawDragFrame(BOOL bClearInternalRects = TRUE);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bClearInternalRects`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="init"></a>  CMFCDragFrameImpl::Init  

  
```  
void Init(CWnd* pDraggedWnd);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pDraggedWnd`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="movedragframe"></a>  CMFCDragFrameImpl::MoveDragFrame  

  
```  
void MoveDragFrame(BOOL bForceMove = FALSE);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bForceMove`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="placetabpredocking"></a>  CMFCDragFrameImpl::PlaceTabPreDocking  

  
```  
void PlaceTabPreDocking(
    CBaseTabbedPane* pTabbedBar,  
    BOOL bFirstTime);  
  
void PlaceTabPreDocking(CWnd* pCBarToPlaceOn);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pTabbedBar`  
 [in] `bFirstTime`  
 [in] `pCBarToPlaceOn`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="removetabpredocking"></a>  CMFCDragFrameImpl::RemoveTabPreDocking  

  
```  
void RemoveTabPreDocking(CDockablePane* pOldTargetBar = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pOldTargetBar`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="resetstate"></a>  CMFCDragFrameImpl::ResetState  

  
```  
void ResetState();
```  
  
### <a name="remarks"></a>Remarks  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)
