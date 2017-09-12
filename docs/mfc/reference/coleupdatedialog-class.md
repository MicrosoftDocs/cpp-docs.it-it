---
title: COleUpdateDialog Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleUpdateDialog
- AFXODLGS/COleUpdateDialog
- AFXODLGS/COleUpdateDialog::COleUpdateDialog
- AFXODLGS/COleUpdateDialog::DoModal
dev_langs:
- C++
helpviewer_keywords:
- COleUpdateDialog [MFC], COleUpdateDialog
- COleUpdateDialog [MFC], DoModal
ms.assetid: 699ca980-52b1-4cf8-9ab1-ac6767ad5b0e
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
ms.openlocfilehash: af1ebfad4c2aae99e6e1774842cb2bb78ffe7b69
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="coleupdatedialog-class"></a>COleUpdateDialog Class
Used for a special case of the OLE Edit Links dialog box, which should be used when you need to update only existing linked or embedded objects in a document.  
  
## <a name="syntax"></a>Syntax  
  
```  
class COleUpdateDialog : public COleLinksDialog  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleUpdateDialog::COleUpdateDialog](#coleupdatedialog)|Constructs a `COleUpdateDialog` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleUpdateDialog::DoModal](#domodal)|Displays the **Edit Links** dialog box in an update mode.|  
  
## <a name="remarks"></a>Remarks  
 For more information regarding OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)  
  
 `COleUpdateDialog`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxodlgs.h  
  
##  <a name="coleupdatedialog"></a>  COleUpdateDialog::COleUpdateDialog  
 Constructs a `COleUpdateDialog` object.  
  
```  
explicit COleUpdateDialog(
    COleDocument* pDoc,  
    BOOL bUpdateLinks = TRUE,  
    BOOL bUpdateEmbeddings = FALSE,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 `pDoc`  
 Points to the document containing the links that may need updating.  
  
 *bUpdateLinks*  
 Flag that determines whether linked objects are to be updated.  
  
 *bUpdateEmbeddings*  
 Flag that determines whether embedded objects are to be updated.  
  
 `pParentWnd`  
 Points to the parent or owner window object (of type `CWnd`) to which the dialog object belongs. If it is **NULL**, the parent window of the dialog box will be set to the main application window.  
  
### <a name="remarks"></a>Remarks  
 This function constructs only a `COleUpdateDialog` object. To display the dialog box, call [DoModal](../../mfc/reference/colelinksdialog-class.md#domodal). This class should be used instead of `COleLinksDialog` when you want to update only existing linked or embedded items.  
  
##  <a name="domodal"></a>  COleUpdateDialog::DoModal  
 Displays the Edit Links dialog box in update mode.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Return Value  
 Completion status for the dialog box. One of the following values:  
  
- **IDOK** if the dialog box returned successfully.  
  
- **IDCANCEL** if none of the linked or embedded items in the current document need updating.  
  
- **IDABORT** if an error occurred. If **IDABORT** is returned, call the [COleDialog::GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) member function to get more information about the type of error that occurred. For a listing of possible errors, see the [OleUIEditLinks](http://msdn.microsoft.com/library/windows/desktop/ms679703) function in the Windows SDK.  
  
### <a name="remarks"></a>Remarks  
 All links and/or embeddings are updated unless the user selects the Cancel button.  
  
## <a name="see-also"></a>See Also  
 [MFC Sample OCLIENT](../../visual-cpp-samples.md)   
 [COleLinksDialog Class](../../mfc/reference/colelinksdialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleLinksDialog Class](../../mfc/reference/colelinksdialog-class.md)

