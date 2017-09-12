---
title: CMFCImagePaintArea Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::GetMode
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetBitmap
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetColor
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetMode
dev_langs:
- C++
helpviewer_keywords:
- CMFCImagePaintArea [MFC], CMFCImagePaintArea
- CMFCImagePaintArea [MFC], GetMode
- CMFCImagePaintArea [MFC], SetBitmap
- CMFCImagePaintArea [MFC], SetColor
- CMFCImagePaintArea [MFC], SetMode
ms.assetid: c59eec22-f15a-4e58-8c4d-4a18a41f4452
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
ms.openlocfilehash: f0b8d7998a7756ab11cb69a9e9b7e159063bcd79
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcimagepaintarea-class"></a>CMFCImagePaintArea Class
Provides the picture area that you use to modify an image in an image editor dialog box.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCImagePaintArea : public CButton  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCImagePaintArea::CMFCImagePaintArea](#cmfcimagepaintarea)|Constructs a `CMFCImagePaintArea` object.|  
|`CMFCImagePaintArea::~CMFCImagePaintArea`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCImagePaintArea::GetMode](#getmode)|Retrieves the current drawing mode.|  
|[CMFCImagePaintArea::SetBitmap](#setbitmap)|Sets the bitmap image for the picture area.|  
|[CMFCImagePaintArea::SetColor](#setcolor)|Sets the current drawing color.|  
|[CMFCImagePaintArea::SetMode](#setmode)|Sets the current drawing mode.|  
  
### <a name="remarks"></a>Remarks  
 This class is not intended to be used directly from your code.  
  
 The framework uses this class to display the picture area in an image editor dialog box. For more information about the image editor dialog box, see [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md).  
  
## <a name="example"></a>Example  
 The following example demonstrates how to construct an object of the `CMFCImagePaintArea` class, set the current drawing color, set the current drawing mode, and set the bitmap image for the picture area.  
  
 [!code-cpp[NVC_MFC_RibbonApp#37](../../mfc/reference/codesnippet/cpp/cmfcimagepaintarea-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afximagepaintarea.h  
  
##  <a name="cmfcimagepaintarea"></a>  CMFCImagePaintArea::CMFCImagePaintArea  
 Constructs a `CMFCImagePaintArea` object.  
  
```  
CMFCImagePaintArea(CMFCImageEditorDialog* pParentDlg);
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pParentDlg`|A pointer to the dialog box that is the parent of the image editor.|  
  
##  <a name="getmode"></a>  CMFCImagePaintArea::GetMode  
 Retrieves the current drawing mode.  
  
```  
IMAGE_EDIT_MODE GetMode() const;  
```  
  
### <a name="return-value"></a>Return Value  
 An [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) value that specifies the current drawing mode.  
  
##  <a name="setbitmap"></a>  CMFCImagePaintArea::SetBitmap  
 Sets the bitmap image for the picture area.  
  
```  
void SetBitmap(CBitmap* pBitmap);
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pBitmap`|The new bitmap image to display.|  
  
### <a name="remarks"></a>Remarks  
 If `pBitmap` is `NULL`, this method sets the size of the modifiable paint area to zero. Otherwise, it sets the size of the modifiable paint area to the size of the provided bitmap image.  
  
##  <a name="setcolor"></a>  CMFCImagePaintArea::SetColor  
 Sets the current drawing color.  
  
```  
void SetColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `color`|The new drawing color.|  
  
### <a name="remarks"></a>Remarks  
 When you select a color from the image editor palette bar or color picker, the framework calls this method to update the current drawing color. The initial drawing color is black (a `COLORREF` value of 0).  
  
 The drawing color is used by the image editor dialog box for all drawing modes except for `IMAGE_EDIT_MODE_COLOR`. For more information about drawing modes, see [CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration](cmfcimagepaintarea-image-edit-mode-enumeration.md).  
  
##  <a name="setmode"></a>  CMFCImagePaintArea::SetMode  
 Sets the current drawing mode.  
  
```  
void SetMode(IMAGE_EDIT_MODE mode);
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `mode`|An [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) value that specifies the current drawing mode.|  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md)

