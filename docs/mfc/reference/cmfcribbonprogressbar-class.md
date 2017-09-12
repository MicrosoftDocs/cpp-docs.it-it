---
title: CMFCRibbonProgressBar Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonProgressBar
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::CMFCRibbonProgressBar
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::GetPos
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::GetRangeMax
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::GetRangeMin
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::GetRegularSize
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::IsInfiniteMode
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::OnDraw
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::SetInfiniteMode
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::SetPos
- AFXRIBBONPROGRESSBAR/CMFCRibbonProgressBar::SetRange
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonProgressBar [MFC], CMFCRibbonProgressBar
- CMFCRibbonProgressBar [MFC], GetPos
- CMFCRibbonProgressBar [MFC], GetRangeMax
- CMFCRibbonProgressBar [MFC], GetRangeMin
- CMFCRibbonProgressBar [MFC], GetRegularSize
- CMFCRibbonProgressBar [MFC], IsInfiniteMode
- CMFCRibbonProgressBar [MFC], OnDraw
- CMFCRibbonProgressBar [MFC], SetInfiniteMode
- CMFCRibbonProgressBar [MFC], SetPos
- CMFCRibbonProgressBar [MFC], SetRange
ms.assetid: de3d9f2e-ed59-480e-aa7d-08a33ab36c67
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
ms.openlocfilehash: b6d8710ee5038a7719e2ba45e555256ad0439973
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcribbonprogressbar-class"></a>CMFCRibbonProgressBar Class
Implements a control that visually indicates the progress of a lengthy operation.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCRibbonProgressBar : public CMFCRibbonBaseElement  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonProgressBar::CMFCRibbonProgressBar](#cmfcribbonprogressbar)|Constructs and initializes a `CMFCRibbonProgressBar` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonProgressBar::GetPos](#getpos)|Returns the current progress.|  
|[CMFCRibbonProgressBar::GetRangeMax](#getrangemax)|Returns the maximum value of the current range.|  
|[CMFCRibbonProgressBar::GetRangeMin](#getrangemin)|Returns the minimum value of the current range.|  
|[CMFCRibbonProgressBar::GetRegularSize](#getregularsize)|Returns the regular size of the ribbon element. (Overrides [CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|  
|[CMFCRibbonProgressBar::IsInfiniteMode](#isinfinitemode)|Specifies whether the progress bar is working in infinite mode.|  
|[CMFCRibbonProgressBar::OnDraw](#ondraw)|Called by the framework to draw the ribbon element. (Overrides [CMFCRibbonBaseElement::OnDraw](../../mfc/reference/cmfcribbonbaseelement-class.md#ondraw).)|  
|[CMFCRibbonProgressBar::SetInfiniteMode](#setinfinitemode)|Sets the progress bar to work in infinite mode.|  
|[CMFCRibbonProgressBar::SetPos](#setpos)|Sets the current progress.|  
|[CMFCRibbonProgressBar::SetRange](#setrange)|Sets the minimum and maximum values.|  
  
## <a name="remarks"></a>Remarks  
 A `CMFCRibbonProgressBar` can operate in two modes: regular and infinite. In regular mode, the progress bar is filled from left to right and stops when it reaches the maximum value. In infinite mode, the progress bar is repeatedly filled from the minimum value to the maximum value. You might use infinite mode to indicate that an operation is ongoing, but that the completion time is unknown.  
  
## <a name="example"></a>Example  
 The following example demonstrates how to use various methods in the `CMFCRibbonProgressBar` class. The example shows how to set the progress bar to work in infinite mode (where the completion time of an operation is unknown), set the minimum and maximum values for the progress bar, and set the current position of the progress bar. This code snippet is part of the [MS Office 2007 Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#11](../../mfc/reference/codesnippet/cpp/cmfcribbonprogressbar-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxRibbonProgressBar.h  
  
##  <a name="cmfcribbonprogressbar"></a>  CMFCRibbonProgressBar::CMFCRibbonProgressBar  
 Constructs and initializes a [CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md) object.  
  
```  
CMFCRibbonProgressBar();

 
CMFCRibbonProgressBar(
    UINT nID,  
    int nWidth = 90,  
    int nHeight = 22);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nID`  
 Specifies the command ID for the ribbon progress bar.  
  
 [in] `nWidth`  
 Specifies the width, in pixels, of the ribbon progress bar.  
  
 [in] `nHeight`  
 Specifies the height, in pixels, of the ribbon progress bar.  
  
##  <a name="getpos"></a>  CMFCRibbonProgressBar::GetPos  
 Returns the current position of the progress bar.  
  
```  
int GetPos () const;  
```  
  
### <a name="return-value"></a>Return Value  
 A value representing the current position of the progress bar.  
  
### <a name="remarks"></a>Remarks  
 The range being set must be within the range specified by the [CMFCRibbonProgressBar::SetRange](#setrange) method.  
  
##  <a name="getrangemax"></a>  CMFCRibbonProgressBar::GetRangeMax  
 Returns the progress bar's current maximum value.  
  
```  
int GetRangeMax() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The maximum value of the current range.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getrangemin"></a>  CMFCRibbonProgressBar::GetRangeMin  
 Returns the progress bar's current minimum range value.  
  
```  
int GetRangeMin() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The minimum value of the current range.  
  
##  <a name="getregularsize"></a>  CMFCRibbonProgressBar::GetRegularSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pDC`  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="isinfinitemode"></a>  CMFCRibbonProgressBar::IsInfiniteMode  
 Specifies whether the progress bar is working in infinite mode.  
  
```  
BOOL IsInfiniteMode() const;  
```  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if the progress bar is in infinite mode; otherwise, `FALSE`.  
  
### <a name="remarks"></a>Remarks  
 In infinite mode, the progress bar fills repeatedly from the minimum value to the maximum value. You might use infinite mode to indicate that an operation is ongoing, but that the completion time is unknown.  
  
##  <a name="ondraw"></a>  CMFCRibbonProgressBar::OnDraw  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pDC`  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="setinfinitemode"></a>  CMFCRibbonProgressBar::SetInfiniteMode  
 Sets the progress bar to work in infinite mode.  
  
```  
void SetInfiniteMode(BOOL bSet = TRUE);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bSet`  
 `TRUE` to specify that the progress bar is in infinite mode; otherwise, `FALSE`.  
  
### <a name="remarks"></a>Remarks  
 Usually, if the progress bar is in infinite mode, it is telling the user that an operation is ongoing, but that the completion time is unknown. Thus, the progress bar fills repeatedly from the minimum value to the maximum value.  
  
##  <a name="setpos"></a>  CMFCRibbonProgressBar::SetPos  
 Sets the current position of the progress bar.  
  
```  
void SetPos(
    int nPos,  
    BOOL bRedraw = TRUE);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nPos`  
 Specifies the position to which the progress bar is set.  
  
 [in] `bRedraw`  
 Specifies whether the progress bar should be redrawn.  
  
### <a name="remarks"></a>Remarks  
 The range being set must be within the range specified by the [CMFCRibbonProgressBar::SetRange](#setrange) method.  
  
##  <a name="setrange"></a>  CMFCRibbonProgressBar::SetRange  
 Sets the minimum and maximum values for the progress bar.  
  
```  
void SetRange(
    int nMin,  
    int nMax);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nMin`  
 Specifies the minimum value of the range.  
  
 [in] `nMax`  
 Specifies the maximum value of the range.  
  
### <a name="remarks"></a>Remarks  
 Use this method to define the range of the progress bar by setting minimum and maximum values.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)

