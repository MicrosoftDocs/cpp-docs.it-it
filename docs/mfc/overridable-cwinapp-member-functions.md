---
title: Funzioni membro CWinApp sottoponibili a override | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CWinApp
dev_langs: C++
helpviewer_keywords:
- overriding [MFC], overridable functions in CWinApp
- application class [MFC]
- CWinApp class [MFC], overridables
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 64775ad9f44c55529107b50d0695e95e2b9c3a2f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overridable-cwinapp-member-functions"></a>Funzioni membro CWinApp sottoponibili a override
[CWinApp](../mfc/reference/cwinapp-class.md) offre numerose funzioni membro sottoponibile a override (`CWinApp` esegue l'override di questi membri dalla classe [CWinThread](../mfc/reference/cwinthread-class.md), da cui `CWinApp` deriva):  
  
-   [InitInstance](../mfc/initinstance-member-function.md)  
  
-   [Run](../mfc/run-member-function.md)  
  
-   [ExitInstance](../mfc/exitinstance-member-function.md)  
  
-   [OnIdle](../mfc/onidle-member-function.md)  
  
 L'unica funzione membro di `CWinApp` di cui è necessario eseguire l'override è `InitInstance`.  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
