---
title: "Il tipo implementato deve essere un&#39;interfaccia | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30232"
  - "vbc30232"
helpviewer_keywords: 
  - "BC30232"
ms.assetid: 63f3dd4c-2f99-4070-b506-2fa808df24d4
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo implementato deve essere un&#39;interfaccia
Un'istruzione `Implements` non specifica un'interfaccia. Una classe può implementare solo un'interfaccia.  
  
 **ID errore:** BC30232  
  
### Per correggere l'errore  
  
1.  Verificare che il nome dell'interfaccia sia stato digitato correttamente.  
  
2.  Se l'istruzione specifica una classe, provare a usare l'istruzione `Inherits`.  
  
## Vedere anche  
 [Implements Statement](../Topic/Implements%20Statement.md)   
 [Inherits Statement](../Topic/Inherits%20Statement.md)   
 [NOT IN BUILD: Ereditarietà in Visual Basic](http://msdn.microsoft.com/it-it/e5e6e240-ed31-4657-820c-079b7c79313c)