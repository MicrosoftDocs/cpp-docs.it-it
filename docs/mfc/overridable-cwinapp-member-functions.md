---
title: "Funzioni membro CWinApp sottoponibili a override | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWinApp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "application (classe)"
  - "CWinApp (classe), sottoponibili a override"
  - "override, funzioni sottoponibili a override in CWinApp"
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Funzioni membro CWinApp sottoponibili a override
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[CWinApp](../mfc/reference/cwinapp-class.md) fornisce numerose funzioni membro chiave su cui si può eseguire l'override \(`CWinApp` eseguire l'override di questi membri dalla classe [CWinThread](../mfc/reference/cwinthread-class.md), da cui deriva `CWinApp` \):  
  
-   [InitInstance](../mfc/initinstance-member-function.md)  
  
-   [Run](../mfc/run-member-function.md)  
  
-   [ExitInstance](../mfc/exitinstance-member-function.md)  
  
-   [OnIdle](../mfc/onidle-member-function.md)  
  
 L'unica funzione membro di `CWinApp` di cui è necessario eseguire l'override è `InitInstance`.  
  
## Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)