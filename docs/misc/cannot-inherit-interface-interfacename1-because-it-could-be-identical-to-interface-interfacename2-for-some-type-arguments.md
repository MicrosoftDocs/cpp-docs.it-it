---
title: "Non &#232; possibile ereditare l&#39;interfaccia &#39;&lt;nomeinterfaccia1&gt;&#39; perch&#233; potrebbe essere identica all&#39;interfaccia &#39;&lt;nomeinterfaccia2&gt;&#39; per alcuni argomenti di tipo | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc32120"
  - "bc32120"
helpviewer_keywords: 
  - "BC32120"
ms.assetid: c91f84a1-e61d-4b5f-8028-221e64ac044c
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile ereditare l&#39;interfaccia &#39;&lt;nomeinterfaccia1&gt;&#39; perch&#233; potrebbe essere identica all&#39;interfaccia &#39;&lt;nomeinterfaccia2&gt;&#39; per alcuni argomenti di tipo
Un'interfaccia generica eredita più volte dall'altra interfaccia generica e due ereditarietà possono entrare in conflitto per determinati valori degli argomenti di tipo.  
  
 Le istruzioni seguenti possono generare questo errore.  
  
 `Public Interface interfaceA(Of u)`  
  
 `End Interface`  
  
 `Public Interface derivedInterface(Of t1, t2)`  
  
 `Inherits interfaceA(Of t1), interfaceA(Of t2)`  
  
 `End Interface`  
  
 Se l'interfaccia `derivedInterface` è costruita o implementata specificando lo stesso tipo sia in `t1` che in `t2`, deve ereditare due versioni di `interfaceA` con argomenti di tipo identici. In questo modo si produrrebbe un'ambiguità sulla versione a cui accedere.  
  
 **ID errore:** BC32120  
  
### Per correggere l'errore  
  
-   Modificare uno degli argomenti di tipo forniti all'interfaccia derivata in modo che non siano presenti conflitti.  
  
     \-oppure\-  
  
-   Rimuovere dall'istruzione `Inherits` una delle interfacce che determina il potenziale conflitto di ereditarietà o implementazione.  
  
## Vedere anche  
 [NOT IN BUILD: Cenni preliminari sulle interfacce](http://msdn.microsoft.com/it-it/f96bb470-c1b8-4c73-89bc-6f536b798da1)   
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)   
 [Inherits Statement](../Topic/Inherits%20Statement.md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)