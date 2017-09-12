---
title: CMFCSpinButtonCtrl Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCSpinButtonCtrl
- AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl
- AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl::OnDraw
dev_langs:
- C++
helpviewer_keywords:
- CMFCSpinButtonCtrl [MFC], OnDraw
ms.assetid: 8773f259-4d3f-4bca-a71c-09e0c71bc843
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
ms.openlocfilehash: 11b76a4a73bb505182a3c380566dd9b392617f08
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcspinbuttonctrl-class"></a>CMFCSpinButtonCtrl Class
The `CMFCSpinButtonCtrl` class supports a visual manager that draws a spin button control.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCSpinButtonCtrl : public CSpinButtonCtrl  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCSpinButtonCtrl::CMFCSpinButtonCtrl`|Default constructor.|  
|`CMFCSpinButtonCtrl::~CMFCSpinButtonCtrl`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCSpinButtonCtrl::OnDraw](#ondraw)|Repaints the current spin button control.|  
  
## <a name="remarks"></a>Remarks  
 To use a visual manager to draw a spin button control in your application, replace all instances of the `CSpinButtonCtrl` class with the `CMFCSpinButtonCtrl` class.  
  
## <a name="example"></a>Example  
 The following example demonstrates how to create an object of the `CMFCSpinButtonCtrl` class and use its `Create` method.  
  
 [!code-cpp[NVC_MFC_RibbonApp#25](../../mfc/reference/codesnippet/cpp/cmfcspinbuttonctrl-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CSpinButtonCtrl](../../mfc/reference/cspinbuttonctrl-class.md)  
  
 [CMFCSpinButtonCtrl](../../mfc/reference/cmfcspinbuttonctrl-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxspinbuttonctrl.h  
  
##  <a name="ondraw"></a>  CMFCSpinButtonCtrl::OnDraw  
 Repaints the current spin button control.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### <a name="remarks"></a>Remarks  
 The framework calls the `CMFCSpinButtonCtrl::OnPaint` method to handle the [CWnd::OnPaint](../../mfc/reference/cwnd-class.md#onpaint) message, and that method in turn calls this `CMFCSpinButtonCtrl::OnDraw` method. Override this method to customize the way the framework draws the spin button control.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)

