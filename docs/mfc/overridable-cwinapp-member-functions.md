---
title: Overridable CWinApp Member Functions | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CWinApp
dev_langs:
- C++
helpviewer_keywords:
- overriding [MFC], overridable functions in CWinApp
- application class [MFC]
- CWinApp class [MFC], overridables
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
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
ms.openlocfilehash: 812ffa48a769fbe3e9e839d4b987a1617e9fae6f
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="overridable-cwinapp-member-functions"></a>Overridable CWinApp Member Functions
[CWinApp](../mfc/reference/cwinapp-class.md) provides several key overridable member functions (`CWinApp` overrides these members from class [CWinThread](../mfc/reference/cwinthread-class.md), from which `CWinApp` derives):  
  
-   [InitInstance](../mfc/initinstance-member-function.md)  
  
-   [Run](../mfc/run-member-function.md)  
  
-   [ExitInstance](../mfc/exitinstance-member-function.md)  
  
-   [OnIdle](../mfc/onidle-member-function.md)  
  
 The only `CWinApp` member function that you must override is `InitInstance`.  
  
## <a name="see-also"></a>See Also  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)

