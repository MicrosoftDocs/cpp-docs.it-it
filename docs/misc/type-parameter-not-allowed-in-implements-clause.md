---
title: "Parametro di tipo non consentito nella clausola &#39;Implements&#39; | Microsoft Docs"
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
  - "vbc32056"
  - "bc32056"
helpviewer_keywords: 
  - "BC32056"
ms.assetid: a62d773b-e878-4817-8638-da49849477d7
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Parametro di tipo non consentito nella clausola &#39;Implements&#39;
Una clausola `Implements` in un tipo generico specifica un parametro di tipo come membro da implementare.  
  
 Una clausola `Implements` deve specificare un'interfaccia e un membro. Può passare un parametro di tipo all'interfaccia, ma non può passarlo al membro, né usarlo come nome del membro.  
  
 Le istruzioni seguenti possono generare questo errore.  
  
```  
Class c1(Of t) Implements i1(Of t) Public Sub doSomething() Implements t End Class  
```  
  
 **ID errore:** BC32056  
  
### Per correggere l'errore  
  
-   Specificare il nome dell'interfaccia e un membro dell'interfaccia dopo la parola chiave `Implements`. Se necessario, si può passare il parametro di tipo all'interfaccia.  
  
    ```  
    Public Sub doSomething() Implements i1(Of t).doSomething  
    ```  
  
## Vedere anche  
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Parola chiave Implements e istruzione Implements](http://msdn.microsoft.com/it-it/b96560f7-6413-480f-a1e2-f80253bab5be)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)