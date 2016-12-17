---
title: "Errore del compilatore CS0455 | Microsoft Docs"
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
  - "CS0455"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0455"
ms.assetid: a09840ac-ad8c-4c9c-868e-b83d937c7047
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0455
Il parametro di tipo 'Type Parameter Name' eredita i vincoli in conflitto 'Constraint Name 1' e 'Constraint Name 2'  
  
 Questo errore può essere causato dalla configurazione di vincoli in modo che il parametro di tipo derivi da due classi non correlate o in modo che derivi da un vincolo di tipo classe o riferimento e un vincolo di tipo `struct` o di tipo valore. Per risolvere questo errore, rimuovere il conflitto dalla gerarchia di ereditarietà.  
  
## Esempio  
 Il codice seguente genera l'errore CS0455.  
  
```  
// CS0455.cs using System; public class GenericsErrors { public class B { } public class B2 { } public class G6<T> where T : B { public class N<U> where U : B2, T { } } // CS0455 }  
```