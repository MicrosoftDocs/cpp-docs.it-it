---
title: OLE Drag-and-Drop and Data Transfer Classes | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.ole
dev_langs:
- C++
helpviewer_keywords:
- ActiveX classes [MFC]
- OLE drag and drop [MFC], and data transfer classes
- drag and drop [MFC], classes
- data transfer [MFC], OLE
- data transfer classes [MFC]
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
caps.latest.revision: 9
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
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 53bcb98592f0fc9dd1af72aec61f5dd30882d9c1
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="ole-drag-and-drop-and-data-transfer-classes"></a>OLE Drag-and-Drop and Data Transfer Classes
These classes are used in OLE data transfers. They allow data to be transferred between applications by using the Clipboard or through drag and drop.  
  
 [COleDropSource](../mfc/reference/coledropsource-class.md)  
 Controls the drag-and-drop operation from start to finish. This class determines when the drag operation starts and when it ends. It also displays cursor feedback during the drag-and-drop operation.  
  
 [COleDataSource](../mfc/reference/coledatasource-class.md)  
 Used when an application provides data for a data transfer. `COleDataSource` could be viewed as an object-oriented Clipboard object.  
  
 [COleDropTarget](../mfc/reference/coledroptarget-class.md)  
 Represents the target of a drag-and-drop operation. A `COleDropTarget` object corresponds to a window on screen. It determines whether to accept any data dropped onto it and implements the actual drop operation.  
  
 [COleDataObject](../mfc/reference/coledataobject-class.md)  
 Used as the receiver side to `COleDataSource`. `COleDataObject` objects provide access to the data stored by a `COleDataSource` object.  
  
## <a name="see-also"></a>See Also  
 [Class Overview](../mfc/class-library-overview.md)


