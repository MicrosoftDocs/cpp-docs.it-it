---
title: CCommonDialog Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCommonDialog
- AFXDLGS/CCommonDialog
- AFXDLGS/CCommonDialog::CCommonDialog
dev_langs:
- C++
helpviewer_keywords:
- CCommonDialog [MFC], CCommonDialog
ms.assetid: 1f68d65f-a0fd-4778-be22-ebbe51a95f95
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
ms.openlocfilehash: e1175cd18e0c57a6ec65b1fbe655264ba86a7676
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="ccommondialog-class"></a>CCommonDialog Class
The base class for classes that encapsulate functionality of the Windows common dialogs.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CCommonDialog : public CDialog  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCommonDialog::CCommonDialog](#ccommondialog)|Constructs a `CCommonDialog` object.|  
  
## <a name="remarks"></a>Remarks  
 The following classes encapsulate the functionality of the Windows common dialogs:  
  
- [CFileDialog](../../mfc/reference/cfiledialog-class.md)  
  
- [CFontDialog](../../mfc/reference/cfontdialog-class.md)  
  
- [CColorDialog](../../mfc/reference/ccolordialog-class.md)  
  
- [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)  
  
- [CPrintDialog](../../mfc/reference/cprintdialog-class.md)  
  
- [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md)  
  
- [CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md)  
  
- [COleDialog](../../mfc/reference/coledialog-class.md)  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `CCommonDialog`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxdlgs.h  
  
##  <a name="ccommondialog"></a>  CCommonDialog::CCommonDialog  
 Constructs a `CCommonDialog` object.  
  
```  
explicit CCommonDialog(CWnd* pParentWnd);
```  
  
### <a name="parameters"></a>Parameters  
 `pParentWnd`  
 Points to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
### <a name="remarks"></a>Remarks  
 See [CDialog::CDialog](../../mfc/reference/cdialog-class.md#cdialog) for complete information.  
  
## <a name="see-also"></a>See Also  
 [CDialog Class](../../mfc/reference/cdialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CFileDialog Class](../../mfc/reference/cfiledialog-class.md)   
 [CFontDialog Class](../../mfc/reference/cfontdialog-class.md)   
 [CColorDialog Class](../../mfc/reference/ccolordialog-class.md)   
 [CPageSetupDialog Class](../../mfc/reference/cpagesetupdialog-class.md)   
 [CPrintDialog Class](../../mfc/reference/cprintdialog-class.md)   
 [CFindReplaceDialog Class](../../mfc/reference/cfindreplacedialog-class.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)

