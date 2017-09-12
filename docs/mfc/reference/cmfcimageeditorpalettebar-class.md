---
title: CMFCImageEditorPaletteBar Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCImageEditorPaletteBar
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar::GetRowHeight
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable
dev_langs:
- C++
helpviewer_keywords:
- CMFCImageEditorPaletteBar [MFC], GetRowHeight
- CMFCImageEditorPaletteBar [MFC], IsButtonExtraSizeAvailable
ms.assetid: 3fb7ba8e-f254-4d56-b913-9941b4ed8138
caps.latest.revision: 20
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
ms.openlocfilehash: ec477422342f47dd7aa705f132b2afa3333ac9d7
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcimageeditorpalettebar-class"></a>CMFCImageEditorPaletteBar Class
Provides palette bar functionality to an image editor dialog box.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCImageEditorPaletteBar : public CMFCToolBar  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-methods"></a>Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCImageEditorPaletteBar::GetRowHeight](#getrowheight)|Returns the height of toolbar buttons. (Overrides [CMFCToolBar::GetRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).)|  
|[CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determines whether the toolbar can display buttons that have extended borders. (Overrides [CMFCToolBar::IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).)|  
  
### <a name="remarks"></a>Remarks  
 This class is not intended to be used directly from your code.  
  
 The framework uses this class to display a palette bar in an image editor dialog box. For more information about the image editor dialog box, see [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBa](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCImageEditorPaletteBar](../../mfc/reference/cmfcimageeditorpalettebar-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afximageeditordialog.h  
  
##  <a name="getrowheight"></a>  CMFCImageEditorPaletteBar::GetRowHeight  
 Returns the height of toolbar buttons.  
  
```  
virtual int GetRowHeight() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The height of each button on the toolbar.  
  
##  <a name="isbuttonextrasizeavailable"></a>  CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable  
 Determines whether the toolbar can display buttons that have extended borders.  
  
```  
virtual BOOL IsButtonExtraSizeAvailable() const;  
```  
  
### <a name="return-value"></a>Return Value  
 This method returns `FALSE`.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md)

