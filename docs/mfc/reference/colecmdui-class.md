---
title: COleCmdUI Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleCmdUI
- AFXDOCOBJ/COleCmdUI
- AFXDOCOBJ/COleCmdUI::COleCmdUI
- AFXDOCOBJ/COleCmdUI::Enable
- AFXDOCOBJ/COleCmdUI::SetCheck
- AFXDOCOBJ/COleCmdUI::SetText
dev_langs:
- C++
helpviewer_keywords:
- COleCmdUI [MFC], COleCmdUI
- COleCmdUI [MFC], Enable
- COleCmdUI [MFC], SetCheck
- COleCmdUI [MFC], SetText
ms.assetid: a2d5ce08-6657-45d3-8673-2a9f32d50eec
caps.latest.revision: 21
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
ms.openlocfilehash: 77c88a0595038dea342b7e5357e8723cde680646
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="colecmdui-class"></a>COleCmdUI Class
Implements a method for MFC to update the state of user-interface objects related to the `IOleCommandTarget`-driven features of your application.  
  
## <a name="syntax"></a>Syntax  
  
```  
class COleCmdUI : public CCmdUI  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleCmdUI::COleCmdUI](#colecmdui)|Constructs a `COleCmdUI` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleCmdUI::Enable](#enable)|Sets or clears the enable command flag.|  
|[COleCmdUI::SetCheck](#setcheck)|Sets the state of an on/off toggle command.|  
|[COleCmdUI::SetText](#settext)|Returns a text name or status string for a command.|  
  
## <a name="remarks"></a>Remarks  
 In an application that is not enabled for DocObjects, when the user views a menu in the application, MFC processes **UPDATE_COMMAND_UI** notifcations. Each notification is given a [CCmdUI](../../mfc/reference/ccmdui-class.md) object that can be manipulated to reflect the state of a particular command. However, when your application is enabled for DocObjects, MFC processes **UPDATE_OLE_COMMAND_UI** notifications and assigns `COleCmdUI` objects.  
  
 `COleCmdUI` allows a DocObject to receive commands that originate in its container's user interface (such as FileNew, Open, Print, and so on), and allows a container to receive commands that originate in the DocObject's user interface. Although `IDispatch` could be used to dispatch the same commands, `IOleCommandTarget` provides a simpler way to query and execute because it relies on a standard set of commands, usually without arguments, and no type information is involved. `COleCmdUI` can be used to enable, update, and set other properties of DocObject user interface commands. When you want to invoke the command, call [COleServerDoc::OnExecOleCmd](../../mfc/reference/coleserverdoc-class.md#onexecolecmd).  
  
 For further information on DocObjects, see [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) and [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md). Also see [Internet First Steps: Active Documents](../../mfc/active-documents-on-the-internet.md) and [Active Documents](../../mfc/active-documents-on-the-internet.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CCmdUI](../../mfc/reference/ccmdui-class.md)  
  
 `COleCmdUI`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxdocobj.h  
  
##  <a name="colecmdui"></a>  COleCmdUI::COleCmdUI  
 Constructs a `COleCmdUI` object associated with a particular user-interface command.  
  
```  
COleCmdUI(
    OLECMD* rgCmds,  
    ULONG cCmds,  
    const GUID* m_pGroup);
```  
  
### <a name="parameters"></a>Parameters  
 `rgCmds`  
 A list of supported commands associated with the given GUID. The **OLECMD** structure associates commands with command flags.  
  
 *cCmds*  
 The count of commands in `rgCmds`.  
  
 `pGroup`  
 A pointer to a GUID that identifies a set of commands.  
  
### <a name="remarks"></a>Remarks  
 The `COleCmdUI` object provides a programmatic interface for updating DocObject user-interface objects such as menu items or control-bar buttons. The user-interface objects can be enabled, disabled, checked, and/or cleared through the `COleCmdUI` object.  
  
##  <a name="enable"></a>  COleCmdUI::Enable  
 Call this function to set the command flag of the `COleCmdUI` object to **OLECOMDF_ENABLED**, which tells the interface the command is available and enabled, or to clear the command flag.  
  
```  
virtual void Enable(BOOL bOn);
```  
  
### <a name="parameters"></a>Parameters  
 `bOn`  
 Indicates whether the command associated with the `COleCmdUI` object should be enabled or disabled. Nonzero enables the command; 0 disables the command.  
  
##  <a name="setcheck"></a>  COleCmdUI::SetCheck  
 Call this function to set the state of an on/off toggle command.  
  
```  
virtual void SetCheck(int nCheck);
```  
  
### <a name="parameters"></a>Parameters  
 `nCheck`  
 A value determining the state to set an on/off toggle command. Values are:  
  
|Value|Description|  
|-----------|-----------------|  
|**1**|Sets the command to on.|  
|**2**|Sets the command to indeterminate; the state cannot be determined because the attribute of this command is in both on and off states in the relevant selection.|  
|any other value|Sets the command to off.|  
  
##  <a name="settext"></a>  COleCmdUI::SetText  
 Call this function to return a text name or status string for a command.  
  
```  
virtual void SetText(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parameters  
 `lpszText`  
 A pointer to the text to be used with the command.  
  
## <a name="see-also"></a>See Also  
 [CCmdUI Class](../../mfc/reference/ccmdui-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)




