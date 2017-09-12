---
title: CMFCStandardColorsPropertyPage Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- CMFCStandardColorsPropertyPage class [MFC]
ms.assetid: b84b7cfb-bb24-4c65-804a-5b642cb64400
caps.latest.revision: 22
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
ms.openlocfilehash: da1e1f2e6ca95abd5ecdd0484f0f92e547ca9b16
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcstandardcolorspropertypage-class"></a>CMFCStandardColorsPropertyPage Class
Represents a property page that users use to select standard colors in a color dialog box.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCStandardColorsPropertyPage : public CPropertyPage  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCStandardColorsPropertyPage::CMFCStandardColorsPropertyPage`|Default constructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCStandardColorsPropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCStandardColorsPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
  
### <a name="remarks"></a>Remarks  
 The `CMFCColorDialog` class uses this class to display the standard color property page. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CPropertyPage](../../mfc/reference/cpropertypage-class.md)  
  
 [CMFCStandardColorsPropertyPage](../../mfc/reference/cmfcstandardcolorspropertypage-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxstandardcolorspropertypage.h  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md)   
 [CMFCCustomColorsPropertyPage Class](../../mfc/reference/cmfccustomcolorspropertypage-class.md)

