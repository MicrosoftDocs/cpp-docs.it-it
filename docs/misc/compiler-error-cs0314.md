---
title: "Errore del compilatore CS0314 | Microsoft Docs"
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
  - "CS0314"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0314"
ms.assetid: 12f68f51-0568-4e80-b0fd-15899807477d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0314
Non è possibile usare il tipo 'type1' come parametro di tipo 'name' nel metodo o nel tipo generico 'name'. Non esiste alcuna conversione boxing o conversione di parametri di tipo da 'type1' a 'type2'.  
  
 Quando un tipo generico usa un parametro di tipo che è vincolato, anche la nuova classe deve soddisfare gli stessi vincoli.  
  
### Per correggere l'errore  
  
1.  Negli esempi seguenti aggiungere `where T : ClassConstraint` alla classe `B`.  
  
## Esempio  
 Il codice seguente genera l'errore CS0314:  
  
```  
// cs0314.cs // Compile with: /target:library public class ClassConstraint { } public class A<T> where T : ClassConstraint { } public class B<T> : A<T> //CS0314 { } // Try using this instead. public class C<T> : A<T> where T : ClassConstraint { }  
```  
  
## Vedere anche  
 [Vincoli sui parametri di tipo](../Topic/Constraints%20on%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md)