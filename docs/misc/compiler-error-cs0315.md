---
title: "Errore del compilatore CS0315 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0315"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0315"
ms.assetid: 9bb1cab3-1dca-4467-978b-1ab310901a70
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0315
Non è possibile usare il tipo 'valueType' come parametro di tipo 'T' nel metodo o nel tipo generico 'TypeorMethod\<T\>'. Non esistono conversioni boxing da 'valueType' a 'referenceType'.  
  
 Questo errore si verifica quando si vincola un tipo generico a una determinata classe e si tenta di costruire un'istanza di quella classe usando un tipo che non può essere convertito in esso tramite boxing.  
  
### Per correggere l'errore  
  
1.  Una soluzione consiste nel ridefinire lo struct come classe.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0315:  
  
```  
// cs0315.cs public class ClassConstraint { } public struct ViolateClassConstraint { } public class Gen<T> where T : ClassConstraint { } public class Test { public static int Main() { Gen<ViolateClassConstraint> g = new Gen<ViolateClassConstraint>(); //CS0315 return 1; } }  
```  
  
## Vedere anche  
 [Vincoli sui parametri di tipo](../Topic/Constraints%20on%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md)   
 [Boxing e unboxing](../Topic/Boxing%20and%20Unboxing%20\(C%23%20Programming%20Guide\).md)