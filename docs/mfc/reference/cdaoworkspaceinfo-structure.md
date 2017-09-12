---
title: CDaoWorkspaceInfo Structure | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDaoWorkspaceInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoWorkspaceInfo structure [MFC]
- DAO (Data Access Objects), Workspaces collection
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
caps.latest.revision: 13
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
ms.openlocfilehash: f868a92ea05d7d747db892c57b456c0eb202ec07
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cdaoworkspaceinfo-structure"></a>CDaoWorkspaceInfo Structure
The `CDaoWorkspaceInfo` structure contains information about a workspace defined for data access objects (DAO) database access.  
  
## <a name="syntax"></a>Syntax  
  
```  
struct CDaoWorkspaceInfo  
{  
    CString m_strName;           // Primary  
    CString m_strUserName;       // Secondary  
    BOOL m_bIsolateODBCTrans;    // All  
};  
```  
  
#### <a name="parameters"></a>Parameters  
 `m_strName`  
 Uniquely names the workspace object. To retrieve the value of this property directly, call the querydef object's [GetName](../../mfc/reference/cdaoquerydef-class.md#getname) member function. For more information, see the topic "Name Property" in DAO Help.  
  
 *m_strUserName*  
 A value that represents the owner of a workspace object. For related information, see the topic "UserName Property" in DAO Help.  
  
 *m_bIsolateODBCTrans*  
 A value that indicates whether multiple transactions that involve the same ODBC database are isolated. For more information, see [CDaoWorkspace::SetIsolateODBCTrans](../../mfc/reference/cdaoworkspace-class.md#setisolateodbctrans). For related information, see the topic "IsolateODBCTrans Property" in DAO Help.  
  
## <a name="remarks"></a>Remarks  
 The workspace is an object of class [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). The references to Primary, Secondary, and All above indicate how the information is returned by the [GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) member function in class `CDaoWorkspace`.  
  
 Information retrieved by the [CDaoWorkspace::GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) member function is stored in a `CDaoWorkspaceInfo` structure. `CDaoWorkspaceInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoWorkspaceInfo` object.  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxdao.h  
  
## <a name="see-also"></a>See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)

