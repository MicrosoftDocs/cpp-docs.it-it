---
title: IView Interface | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IView
- No header/IView
- No header/IView::OnActivateView
- No header/IView::OnInitialUpdate
- No header/IView::OnUpdate
dev_langs:
- C++
helpviewer_keywords:
- views [MFC]
- IView class [MFC]
- views [MFC], classes
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
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
ms.openlocfilehash: 542db0506e72f326fbc64ddb61d9db4ee8a50884
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="iview-interface"></a>IView Interface
Implements several methods that [CWinFormsView](../../mfc/reference/cwinformsview-class.md) uses to send view notifications to a managed control.  
  
## <a name="syntax"></a>Syntax  
  
```  
interface class IView  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IView::OnActivateView](#onactivateview)|Called by MFC when a view is activated or deactivated.|  
|[IView::OnInitialUpdate](#oninitialupdate)|Called by the framework after the view is first attached to the document, but before the view is initially displayed.|  
|[IView::OnUpdate](#onupdate)|Called by MFC after the view's document has been modified; this function allows the view to update its display to reflect modifications.|  
  
## <a name="remarks"></a>Remarks  
 `IView` implements several methods that `CWinFormsView` uses to forward common view notifications to a hosted managed control. These are [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) and [OnActivateView](#onactivateview).  
  
 `IView` is similar to [CView](../../mfc/reference/cview-class.md), but is used only with managed views and controls.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  

## <a name="requirements"></a>Requirements  
 Header: afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)  

## <a name="onactivateview"></a> IView::OnActivateView  
Called by MFC when a view is activated or deactivated.
```
void OnActivateView(bool activate);
```
## <a name="parameters"></a>Parameters
`activate`  
Indicates whether the view is being activated or deactivated.  

## <a name="oninitialupdate"></a> IView::OnInitialUpdate
Called by the framework after the view is first attached to the document, but before the view is initially displayed.
```
void OnInitialUpdate();
```

## <a name="onupdate"></a> IView::OnUpdate 
Called by MFC after the view's document has been modified.  
```
void OnUpdate();
```
## <a name="remarks"></a>Remarks  
This function allows the view to update its display to reflect modifications.

## <a name="see-also"></a>See Also  
 [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)

