---
title: CListView Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CListView
- AFXCVIEW/CListView
- AFXCVIEW/CListView::CListView
- AFXCVIEW/CListView::GetListCtrl
- AFXCVIEW/CListView::RemoveImageList
dev_langs:
- C++
helpviewer_keywords:
- CListView [MFC], CListView
- CListView [MFC], GetListCtrl
- CListView [MFC], RemoveImageList
ms.assetid: 7626bdb2-a1b8-4eab-b631-6743710a8432
caps.latest.revision: 24
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
ms.openlocfilehash: 233e002ba49348b4542e5d24e3961d46da730262
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="clistview-class"></a>CListView Class
Simplifies use of the list control and of [CListCtrl](../../mfc/reference/clistctrl-class.md), the class that encapsulates list-control functionality, with MFC's document-view architecture.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CListView : public CCtrlView  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::CListView](#clistview)|Constructs a `CListView` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::GetListCtrl](#getlistctrl)|Returns the list control associated with the view.|  
  
### <a name="protected-methods"></a>Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CListView::RemoveImageList](#removeimagelist)|Removes the specified image list from the list view.|  
  
## <a name="remarks"></a>Remarks  
 For more information on this architecture, see the overview for the [CView](../../mfc/reference/cview-class.md) class and the cross-references cited there.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CListView`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxcview.h  
  
##  <a name="clistview"></a>  CListView::CListView  
 Constructs a `CListView` object.  
  
```  
CListView();
```  
  
##  <a name="getlistctrl"></a>  CListView::GetListCtrl  
 Call this member function to get a reference to the list control associated with the view.  
  
```  
CListCtrl& GetListCtrl() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A reference to the list control associated with the view.  
  
### <a name="example"></a>Example  
 [!code-cpp[NVC_MFCListView#7](../../atl/reference/codesnippet/cpp/clistview-class_1.cpp)]  
  
##  <a name="removeimagelist"></a>  CListView::RemoveImageList  
 Removes the specified image list from the list view.  
  
```  
void RemoveImageList(int nImageList);
```  
  
### <a name="parameters"></a>Parameters  
 `nImageList`  
 The zero-based index of the image to remove.  
  
## <a name="see-also"></a>See Also  
 [MFC Sample ROWLIST](../../visual-cpp-samples.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)

