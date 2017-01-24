---
title: "Argomenti di tipo imprevisti | Microsoft Docs"
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
  - "vbc32088"
  - "bc32088"
helpviewer_keywords: 
  - "BC32088"
ms.assetid: a0918e90-e7ad-4edc-81e1-584e6174bb6c
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Argomenti di tipo imprevisti
Una clausola `Implements` fornisce argomenti di tipo per il membro di interfaccia che sta implementando.  
  
 La clausola `Implements` dovrebbe identificare solo l'interfaccia e il membro che sta implementando. Ciò significa che se si sta dichiarando una routine generica, la clausola `Of` e gli argomenti di tipo dovrebbero apparire nella parte principale della dichiarazione, proprio come accadrebbe se non si stesse implementando una routine dell'interfaccia.  
  
 Il codice seguente può generare questo errore.  
  
```  
Public Interface testInterface Sub testSub(Of t)() End Interface Public Class testClass Implements testInterface Public Sub testSub() Implements testInterface.testSub(Of t)() End Sub End Class  
```  
  
 La dichiarazione precedente la clausola `Implements` dovrebbe essere simile alla definizione di interfaccia, tranne la possibile aggiunta di modificatori di accesso o di routine. Il codice seguente consente di evitare l'errore.  
  
```  
Public Sub testSub(Of t)() Implements testInterface.testSub  
```  
  
 **ID errore:** BC32088  
  
### Per correggere l'errore  
  
-   Rimuovere l'elenco di argomenti di tipo dalla clausola `Implements`.  
  
-   Se si sta eseguendo l'implementazione di un membro generico dell'interfaccia, inserire l'elenco di argomenti di tipo nella parte principale della dichiarazione, prima della parola chiave `Implements`.  
  
## Vedere anche  
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Parola chiave Implements e istruzione Implements](http://msdn.microsoft.com/it-it/b96560f7-6413-480f-a1e2-f80253bab5be)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)