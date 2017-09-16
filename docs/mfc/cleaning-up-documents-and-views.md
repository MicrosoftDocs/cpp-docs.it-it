---
title: Cleaning Up Documents and Views | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- views [MFC], cleaning up
- documents [MFC], cleaning up
- documents [MFC], closing
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
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
ms.openlocfilehash: 18d02b0ee244d4c12da6c33b6035bc6c237cd349
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cleaning-up-documents-and-views"></a>Cleaning Up Documents and Views
When a document is closing, the framework first calls its [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) member function. If you allocated any memory on the heap during the course of the document's operation, `DeleteContents` is the best place to deallocate it.  
  
> [!NOTE]
>  You should not deallocate document data in the document's destructor. In the case of an SDI application, the document object might be reused.  
  
 You can override a view's destructor to deallocate any memory you allocated on the heap.  
  
## <a name="see-also"></a>See Also  
 [Initializing and Cleaning Up Documents and Views](../mfc/initializing-and-cleaning-up-documents-and-views.md)


