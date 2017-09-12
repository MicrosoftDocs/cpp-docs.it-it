---
title: CMFCDesktopAlertWndButton Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDesktopAlertWndButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCaptionButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCloseButton
dev_langs:
- C++
helpviewer_keywords:
- CMFCDesktopAlertWndButton [MFC], IsCaptionButton
- CMFCDesktopAlertWndButton [MFC], IsCloseButton
ms.assetid: df39a0c8-0c39-4ab0-8c64-78c5b2c4ecaf
caps.latest.revision: 23
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
ms.openlocfilehash: 7f3f540f2809aa9232bc4b68340967e0c320e3aa
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcdesktopalertwndbutton-class"></a>CMFCDesktopAlertWndButton Class
Allows buttons to be added to a desktop alert dialog box.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCDesktopAlertWndButton : public CMFCButton  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCDesktopAlertWndButton::CMFCDesktopAlertWndButton`|Default constructor.|  
|`CMFCDesktopAlertWndButton::~CMFCDesktopAlertWndButton`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCDesktopAlertWndButton::IsCaptionButton](#iscaptionbutton)|Determines whether the button is displayed in the caption area of the alert dialog box.|  
|[CMFCDesktopAlertWndButton::IsCloseButton](#isclosebutton)|Determines whether the button closes the alert dialog box.|  
  
### <a name="data-members"></a>Data Members  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|A Boolean value that specifies whether the button is displayed in the caption area of the alert dialog box.|  
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|A Boolean value that specifies whether the button closes the alert dialog box.|  
  
### <a name="remarks"></a>Remarks  
 By default, the constructor sets the `m_bIsCaptionButton` and `m_bIsCloseButton` data members to `FALSE`. The parent `CMFCDesktopAlertDialog` object sets `m_bIsCaptionButton` to `TRUE` if the button is positioned in the caption area of the alert dialog box. The `CMFCDesktopAlertDialog` class creates a `CMFCDesktopAlertWndButton` object that serves as the button that closes the alert dialog box and sets `m_bIsCloseButton` to `TRUE`.  
  
 Add `CMFCDesktopAlertWndButton` objects to a `CMFCDesktopAlertDialog` object as you would add any button. For more information about `CMFCDesktopAlertDialog`, see [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md).  
  
## <a name="example"></a>Example  
 The following example demonstrates how to use the `SetImage` method in the `CMFCDesktopAlertWndButton` class. This code snippet is part of the [Desktop Alert Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#4](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_1.h)]  
[!code-cpp[NVC_MFC_DesktopAlertDemo#5](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCDesktopAlertWndButton](../../mfc/reference/cmfcdesktopalertwndbutton-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxdesktopalertwnd.h  
  
##  <a name="iscaptionbutton"></a>  CMFCDesktopAlertWndButton::IsCaptionButton  
 Determines whether the button is displayed in the caption area of the alert dialog box.  
  
```  
BOOL IsCaptionButton() const;  
```  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the button is displayed in the caption area of the alert dialog box; otherwise, 0.  
  
##  <a name="isclosebutton"></a>  CMFCDesktopAlertWndButton::IsCloseButton  
 Determines whether the button closes the alert dialog box.  
  
```  
BOOL IsCloseButton() const;  
```  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the button closes the alert dialog box; otherwise, 0.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md)

