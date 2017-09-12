---
title: CSplitterWndEx Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx::OnDrawSplitter
dev_langs:
- C++
helpviewer_keywords:
- CSplitterWndEx [MFC], OnDrawSplitter
ms.assetid: 33e5eef3-05e1-4a07-a968-bf9207ce8598
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
ms.openlocfilehash: c80722c339756f42889db39e1820edc8dc035f28
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="csplitterwndex-class"></a>CSplitterWndEx Class



Represents a customized splitter window.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CSplitterWndEx : public CSplitterWnd  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CSplitterWndEx::CSplitterWndEx`|Default constructor.|  
|`CSplitterWndEx::~CSplitterWndEx`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSplitterWndEx::OnDrawSplitter](#ondrawsplitter)|Called by the framework to draw a splitter window. (Overrides [CSplitterWnd::OnDrawSplitter](csplitterwnd-class.md#ondrawsplitter).)|  
  
## <a name="remarks"></a>Remarks  
 Override the `OnDrawSplitter` method to customize the appearance of the graphical components of a splitter window.  
  
 The `CSplitterWndEx` class is used together with the [OnDrawSplitterBorder](cmfcvisualmanager-class.md#ondrawsplitterborder), [OnDrawSplitterBox](cmfcvisualmanager-class.md#ondrawsplitterbox), and [OnFillSplitterBackground](cmfcvisualmanager-class.md#onfillsplitterbackground) methods, which are implemented by a visual manager. To cause a visual manager to draw a splitter window in your application, replace declarations of the `CSplitterWnd` class with the `CSplitterWndEx` class. For frame window applications, the splitter window class is declared in the CMainFrame class that is located in mainfrm.h. For an example, see the `OutlookDemo` sample in the Samples directory.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 [CSplitterWnd](csplitterwnd-class.md)  
   
## <a name="requirements"></a>Requirements  
 **Header:** afxsplitterwndex.h  
  
##  <a name="ondrawsplitter"></a>  CSplitterWndEx::OnDrawSplitter  
 Called by the framework to draw a splitter window.  
  
```  
virtual void OnDrawSplitter(  
   CDC* pDC,  
   ESplitType nType,  
   const CRect& rect   
);  
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pDC`  
 Pointer to the device context. If this parameter is `NULL`, the framework redraws the active window.  
  
 [in] `nType`  
 One of the `CSplitterWnd::ESplitType` enumeration values that specifies the splitter window element to draw. Valid values are `splitBox`, `splitBar`, `splitIntersection`, and `splitBorder`.  
  
 [in] `rect`  
 A bounding rectangle that specifies the dimensions and location to draw the specified splitter window element.  
  
### <a name="remarks"></a>Remarks  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../hierarchy-chart.md)   
 [Classes](mfc-classes.md)   
 [CSplitterWnd Class](csplitterwnd-class.md)   
 [CMFCVisualManager Class](cmfcvisualmanager-class.md)
