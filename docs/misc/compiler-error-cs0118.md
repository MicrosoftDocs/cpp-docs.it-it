---
title: "Errore del compilatore CS0118 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0118"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0118"
ms.assetid: 9a612432-6e56-4e9b-9d8c-7d7b43f58c1a
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0118
'construct1\_name' è 'construct1' ma è usato come 'construct2'  
  
 Il compilatore ha rilevato una situazione in cui un costrutto è stato usato in modo erroneo o un'operazione non consentita è stata provata in un costrutto. Di seguito vengono forniti alcuni esempi comuni:  
  
-   Un tentativo di creare un'istanza di uno spazio dei nomi \(anziché di una classe\)  
  
-   Un tentativo di chiamare un campo \(anziché un metodo\)  
  
-   Un tentativo di usare un tipo come variabile  
  
-   Un tentativo di usare un alias esterno come tipo.  
  
 Per correggere l'errore, accertarsi che l'operazione che si esegue sia valida per il tipo usato.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0118.  
  
```  
// CS0118.cs // compile with: /target:library namespace MyNamespace { class MyClass { // MyNamespace not a class MyNamespace ix = new MyNamespace ();   // CS0118 } }  
```