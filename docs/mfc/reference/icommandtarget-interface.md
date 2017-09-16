---
title: ICommandTarget Interface | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ICommandTarget
- AFXWINFORMS/ICommandTarget
- AFXWINFORMS/ICommandTarget::Initialize
dev_langs:
- C++
helpviewer_keywords:
- ICommandTarget interface [MFC]
ms.assetid: dd9927f6-3479-4e7c-8ef9-13206cf901f3
caps.latest.revision: 27
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
ms.openlocfilehash: 42e762e8fb6fb658a0cb3b8834eee24f7ee87633
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="icommandtarget-interface"></a>ICommandTarget Interface
Provides a user control with an interface to receive commands from a command source object.  
  
## <a name="syntax"></a>Syntax  
  
```  
interface class ICommandTarget  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ICommandTarget::Initialize](#initialize)|Initializes the command target object.|  
  
## <a name="remarks"></a>Remarks  
 When you host a user control in an MFC View, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing `ICommandTarget`, you give the user control a reference to the [ICommandSource](../../mfc/reference/icommandsource-interface.md) object.  
  
 See [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) for an example of how to use `ICommandTarget`.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)  
  
##  <a name="initialize"></a> ICommandTarget::Initialize  
 Initializes the command target object.  
  
```  
void Initialize(ICommandSource^ cmdSource);  
```  
  
### <a name="parameters"></a>Parameters  
 `cmdSource`  
 A handle to the command source object.  
  
### <a name="remarks"></a>Remarks  
 When you host a user control in an MFC View, CWinFormsView routes commands and update command UI messages to the user control to allow it to handle MFC commands.  
  
 This method initializes the command target object and associates it with the specified command source object cmdSource. It should be called in the user control class implementation. At initialization, you should register command handlers with the command source object by calling ICommandSource::AddCommandHandler in the Initialize implementation. See How to: Add Command Routing to the Windows Forms Control for an example of how to use Initialize to do this.  
  
## <a name="see-also"></a>See Also  
 [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)   
 [ICommandSource Interface](../../mfc/reference/icommandsource-interface.md)




