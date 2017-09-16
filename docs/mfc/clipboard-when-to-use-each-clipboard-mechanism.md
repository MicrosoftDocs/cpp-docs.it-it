---
title: 'Clipboard: When to Use Each Clipboard Mechanism | Microsoft Docs'
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
- applications [OLE], Clipboard
- OLE Clipboard, guidelines
- Clipboard [MFC], mechanisms
- OLE Clipboard, formats
- formats [MFC], Clipboard for OLE
- Clipboard [MFC], formats
ms.assetid: fd071996-ef8c-488b-81bd-89057095a201
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
ms.openlocfilehash: af3b8582086255077892ee3c243bccde7b1130be
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="clipboard-when-to-use-each-clipboard-mechanism"></a>Clipboard: When to Use Each Clipboard Mechanism
Follow these guidelines in using the Clipboard:  
  
-   Use the OLE Clipboard mechanism now to enable new capabilities in the future. While the standard Clipboard API will be maintained, the OLE mechanism is the future of data transfer.  
  
-   Use the OLE Clipboard mechanism if you are writing an OLE application or you want any of the OLE features, such as drag and drop.  
  
-   Use the OLE Clipboard mechanism if you are providing OLE formats.  
  
## <a name="what-do-you-want-to-do"></a>What do you want to do  
  
-   [Use the OLE Clipboard mechanism](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)  
  
-   [Use the Windows Clipboard mechanism](../mfc/clipboard-using-the-windows-clipboard.md)  
  
## <a name="see-also"></a>See Also  
 [Clipboard](../mfc/clipboard.md)


