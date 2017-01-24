---
title: "&#39;&lt;nomemembro&gt;&#39; non pu&#242; implementare &#39;&lt;nomeinterfaccia&gt;.&lt;nomemembrointerfaccia&gt;&#39; perch&#233; i vincoli del parametro di tipo differiscono | Microsoft Docs"
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
  - "vbc32078"
  - "BC32078"
helpviewer_keywords: 
  - "BC32078"
ms.assetid: 2c971345-edb4-491e-9202-8eb8286b66f8
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomemembro&gt;&#39; non pu&#242; implementare &#39;&lt;nomeinterfaccia&gt;.&lt;nomemembrointerfaccia&gt;&#39; perch&#233; i vincoli del parametro di tipo differiscono
Un evento generico, una proprietà o una routine prova a implementare un membro simile definito in un'interfaccia, ma hanno elenchi di vincoli diversi nei parametri di tipo.  
  
 Per implementare un membro di interfaccia, il membro di implementazione deve corrispondere non solo alla firma completa del membro di interfaccia, ma anche al meccanismo di passaggio di ogni parametro.  
  
 Per implementare un membro di interfaccia generica, il membro di implementazione deve corrispondere al numero di parametri di tipo e all'elenco di vincoli di ciascuno di essi.  
  
 Per informazioni dettagliate sull'implementazione dell'interfaccia, vedere [NOT IN BUILD: Parola chiave Implements e istruzione Implements](http://msdn.microsoft.com/it-it/b96560f7-6413-480f-a1e2-f80253bab5be).  
  
 **ID errore:** BC32078  
  
### Per correggere l'errore  
  
-   Se si prevede di implementare il membro di interfaccia, verificare che i vincoli del parametro di tipo corrispondano esattamente a quelli del membro di interfaccia.  
  
-   Se i vincoli del parametro di tipo devono rimanere così come sono, non è possibile implementare il membro di interfaccia in questa dichiarazione. Rimuovere la parola chiave [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md) dalla dichiarazione.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Esempi di implementazione di interfaccia in Visual Basic](http://msdn.microsoft.com/it-it/50bf2a30-73b6-4126-a921-075fd6eec278)