---
title: CDocItem Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDocItem
- AFXOLE/CDocItem
- AFXOLE/CDocItem::GetDocument
- AFXOLE/CDocItem::IsBlank
dev_langs:
- C++
helpviewer_keywords:
- CDocItem [MFC], GetDocument
- CDocItem [MFC], IsBlank
ms.assetid: 84fb8610-a4c8-4211-adc0-e70e8d002c11
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
ms.openlocfilehash: 7846499918e1ef1456cc1ebcd5b5aa8225ad1133
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cdocitem-class"></a>CDocItem Class
The base class for document items, which are components of a document's data.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CDocItem : public CCmdTarget  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDocItem::GetDocument](#getdocument)|Returns the document that contains the item.|  
|[CDocItem::IsBlank](#isblank)|Determines whether the item contains any information.|  
  
## <a name="remarks"></a>Remarks  
 `CDocItem` objects are used to represent OLE items in both client and server documents.  
  
 For more information, see the article [Containers: Implementing a Container](../../mfc/containers-implementing-a-container.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocItem`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxole.h  
  
##  <a name="getdocument"></a>  CDocItem::GetDocument  
 Call this function to get the document that contains the item.  
  
```  
CDocument* GetDocument() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to the document that contains the item; **NULL**, if the item is not part of a document.  
  
### <a name="remarks"></a>Remarks  
 This function is overridden in the derived classes [COleClientItem](../../mfc/reference/coleclientitem-class.md) and [COleServerItem](../../mfc/reference/coleserveritem-class.md), returning a pointer to either a [COleDocument](../../mfc/reference/coledocument-class.md), a [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md), or a [COleServerDoc](../../mfc/reference/coleserverdoc-class.md) object.  
  
##  <a name="isblank"></a>  CDocItem::IsBlank  
 Called by the framework when default serialization occurs.  
  
```  
virtual BOOL IsBlank() const;  
```  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the item contains no information; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 By default, `CDocItem` objects are not blank. [COleClientItem](../../mfc/reference/coleclientitem-class.md) objects are sometimes blank because they derive directly from `CDocItem`. However, [COleServerItem](../../mfc/reference/coleserveritem-class.md) objects are always blank. By default, OLE applications containing `COleClientItem` objects that have no x or y extent are serialized. This is done by returning **TRUE** from an override of `IsBlank` when the item has no x or y extent.  
  
 Override this function if you want to implement other actions during serialization.  
  
## <a name="see-also"></a>See Also  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleDocument Class](../../mfc/reference/coledocument-class.md)   
 [COleServerItem Class](../../mfc/reference/coleserveritem-class.md)   
 [COleClientItem Class](../../mfc/reference/coleclientitem-class.md)

