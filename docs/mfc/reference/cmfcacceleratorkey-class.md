---
title: CMFCAcceleratorKey Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCAcceleratorKey
- AFXACCELERATORKEY/CMFCAcceleratorKey
- AFXACCELERATORKEY/CMFCAcceleratorKey::CMFCAcceleratorKey
- AFXACCELERATORKEY/CMFCAcceleratorKey::Format
- AFXACCELERATORKEY/CMFCAcceleratorKey::SetAccelerator
dev_langs:
- C++
helpviewer_keywords:
- CMFCAcceleratorKey [MFC], CMFCAcceleratorKey
- CMFCAcceleratorKey [MFC], Format
- CMFCAcceleratorKey [MFC], SetAccelerator
ms.assetid: d140fbf7-23db-45ea-a63e-414a5ec7b3d5
caps.latest.revision: 36
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
ms.openlocfilehash: d44c90563b9646a37e552e3902159e6567736a86
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcacceleratorkey-class"></a>CMFCAcceleratorKey Class
A helper class that implements virtual key mapping and formatting.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCAcceleratorKey : public CObject  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCAcceleratorKey::CMFCAcceleratorKey](#cmfcacceleratorkey)|Constructs a `CMFCAcceleratorKey` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCAcceleratorKey::Format](#format)|Translates the ACCEL structure to its visual representation.|  
|[CMFCAcceleratorKey::SetAccelerator](#setaccelerator)|Sets the shortcut key for the `CMFCAcceleratorKey` object.|  
  
## <a name="remarks"></a>Remarks  
 Accelerator keys are also known as shortcut keys. If you want to display keyboard shortcuts that a user enters, the [CMFCAcceleratorKeyAssignCtrl Class](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) maps keyboard shortcuts, such as Alt+Shift+S, to a custom text format, such as "Alt + Shift + S". Each `CMFCAcceleratorKey` object maps a single shortcut key to a text format.  
  
 For more information about how to use shortcut keys and accelerator tables, see [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md).  
  
## <a name="example"></a>Example  
 The following example demonstrates how to construct a `CMFCAcceleratorKey` object and how to use its `Format` method.  
  
 [!code-cpp[NVC_MFC_RibbonApp#30](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkey-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMFCAcceleratorKey`   
  
## <a name="requirements"></a>Requirements  
 **Header:** afxacceleratorkey.h  
  
##  <a name="cmfcacceleratorkey"></a>  CMFCAcceleratorKey::CMFCAcceleratorKey  
 Constructs a [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) object.  
  
```  
CMFCAcceleratorKey();  
CMFCAcceleratorKey(LPACCEL lpAccel);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `lpAccel`  
 A pointer to a shortcut key.  
  
### <a name="remarks"></a>Remarks  
 If you do not provide a shortcut key when you create a `CMFCAccleratorKey`, use the [CMFCAcceleratorKey::SetAccelerator](#setaccelerator) method to associate a shortcut key with your `CMFCAcceleratorKey` object.  
  
##  <a name="format"></a>  CMFCAcceleratorKey::Format  
 Translates the ACCEL structure to its associated string value.  
  
```  
void Format(CString& str) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [out] `str`  
 A reference to a `CString` object where the method writes the translated shortcut key.  
  
### <a name="remarks"></a>Remarks  
 This method retrieves the string format of the associated shortcut key. You can set the string format of a [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) object using either the constructor or the method [CMFCAcceleratorKey::SetAccelerator](#setaccelerator).  
  
##  <a name="setaccelerator"></a>  CMFCAcceleratorKey::SetAccelerator  
 Sets the shortcut key for the [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) object.  
  
```  
void SetAccelerator(LPACCEL lpAccel);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `lpAccel`  
 A pointer to a shortcut key.  
  
### <a name="remarks"></a>Remarks  
 Use this method to set the shortcut key for a `CMFCAcceleratorKey` if you did not provide a shortcut key when you created the `CMFCAcceleratorKey`.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md)

