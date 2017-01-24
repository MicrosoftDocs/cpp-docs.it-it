---
title: "Avviso del compilatore (livello 3) CS0414 | Microsoft Docs"
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
  - "CS0414"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0414"
ms.assetid: 6a0a80be-799b-4d9c-a7e0-6b91e9ce7be0
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0414
Il campo privato 'field' è assegnato, ma il suo valore non viene mai usato  
  
 Questo avviso viene visualizzato in vai scenari in cui il compilatore può verificare che una variabile non viene mai usata come riferimento:  
  
-   A un campo privato è assegnato un valore costante, che però non viene mai letto. L'assegnazione non necessaria può influire sulle prestazioni. Considerare la possibilità di rimuovere il campo.  
  
-   A un campo statico privato o interno è assegnato un valore costante solo nell'inizializzatore. Considerare la possibilità di impostare il campo su un valore costante.  
  
-   A un campo privato o interno sono assegnati valori costanti e il campo viene usato solo in blocchi esclusi dalle direttive \#ifdef. Considerare la possibilità di inserire il campo nel blocco \#ifdef.  
  
-   A un campo privato o interno sono assegnati valori costanti in più percorsi, ma non si accede al campo in altri modi. Se il campo non è necessario, considerare la possibilità di rimuoverlo. In caso contrario, usarlo in modo appropriato.  
  
 In altre situazioni o se la soluzione alternativa suggerita non è accettabile, usare \#pragma 0414.  
  
 L'esempio seguente mostra un modo in cui viene generato l'errore CS0414:  
  
```  
// CS0414 // compile with: /W3 class C { private int i = 1;  // CS0414 public static void Main() { } }  
```  
  
 **Nota** Se la variabile `i` è dichiarata come `protected or public` non verrà generato un errore, in quanto il compilatore non sa se potrebbe essere usata da una classe derivata oppure se altro codice cliente potrebbe creare un'istanza della classe e fare riferimento alla variabile  
  
## Vedere anche  
 [C\# Compiler Errors](../Topic/C%23%20Compiler%20Errors.md)   
 [C\# Compiler Options](../Topic/C%23%20Compiler%20Options.md)