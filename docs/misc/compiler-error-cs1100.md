---
title: "Errore del compilatore CS1100 | Microsoft Docs"
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
  - "CS1100"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1100"
ms.assetid: ea233371-36b6-49ae-a98c-a00ee3b79e53
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1100
Il metodo 'name' ha un modificatore di parametro 'this' che non si trova nel primo parametro.  
  
 Il modificatore `this` è consentito solo nel primo parametro di un metodo, indicando al compilatore che si tratta di un metodo di estensione.  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore `this` da tutti i parametri eccetto il primo del metodo.  
  
## Esempio  
 Il codice seguente genera l'errore CS1100 perché un parametro `this` modifica il secondo parametro:  
  
```  
// cs1100.cs static class Test { static void ExtMethod(int i, this Test c) // CS1100 { } }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)