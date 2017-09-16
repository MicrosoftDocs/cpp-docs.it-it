---
title: 'Serialization: Serialization vs. Database Input-Output | Microsoft Docs'
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
- database applications [MFC], file I/O vs. serialization
- serialization [MFC], vs. database I/O
- I/O [MFC], vs. serialization
- databases [MFC], input/output handling
ms.assetid: f1d23d77-4761-4a52-a7ea-54fc92d347ea
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
ms.openlocfilehash: ad76e1a264605f63e6e04c513e89f65081a38d97
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="serialization-serialization-vs-database-inputoutput"></a>Serialization: Serialization vs. Database Input/Output
This article explains when to use document objects and serialization for file-based input/output (I/O) and when other I/O techniques are appropriate — because the application reads and writes data on a per-transaction basis, as in database applications. If you don't use serialization, you also won't need the File Open, Save, and Save As commands. Topics covered include:  
  
-   [Recommendations for handling input/output](../mfc/recommendations-for-handling-input-output.md)  
  
-   [Handling the File menu in database applications](../mfc/file-menu-in-an-mfc-database-application.md)  
  
## <a name="see-also"></a>See Also  
 [Serialization](../mfc/serialization-in-mfc.md)


