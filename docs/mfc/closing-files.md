---
title: Closing Files | Microsoft Docs
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
- MFC, file operations
- files [MFC], closing
ms.assetid: 8415a3a8-3c75-45b0-ac2a-d5385f49bdb3
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
ms.openlocfilehash: 893cdd50e3bf23585acf7cff7c81392c79f9b8f6
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="closing-files"></a>Closing Files
As usual in I/O operations, once you finish with a file, you must close it.  
  
#### <a name="to-close-a-file"></a>To close a file  
  
1.  Use the **Close** member function. This function closes the file-system file and flushes buffers if necessary.  
  
 If you allocated the [CFile](../mfc/reference/cfile-class.md) object on the frame (as in the example shown in [Opening Files](../mfc/opening-files.md)), the object will automatically be closed and then destroyed when it goes out of scope. Note that deleting the `CFile` object does not delete the physical file in the file system.  
  
## <a name="see-also"></a>See Also  
 [Files](../mfc/files-in-mfc.md)


