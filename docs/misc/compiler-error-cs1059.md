---
title: "Errore del compilatore CS1059 | Microsoft Docs"
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
  - "CS1059"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1059"
ms.assetid: 3ebd02ab-e40d-4aad-b901-a0cb6e2eace7
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1059
L'operando di un operatore di incremento o decremento deve essere una variabile, una proprietà o un indicizzatore.  
  
 Questo errore viene generato quando si tenta di aumentare o ridurre un valore costante. Può verificarsi anche se si tenta di incrementare un'espressione, ad esempio `(a+b)++`.  
  
### Per correggere l'errore  
  
-   Rendere la variabile non costante.  
  
-   Rimuovere l'operatore di incremento o decremento.  
  
-   Archiviare l'espressione in una variabile e quindi incrementare la variabile.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1059 perché `i` è una costante anziché una variabile e `E` è un tipo `Enum`, i cui elementi sono anch'essi valori costanti.  
  
```  
// CS1059.cs class Program { public enum E : sbyte { a = 1, b = 2 } static void Main(string[] args) { const int i = 0; i++;            // CS1059 E test = E.a++; // CS1059 } }  
```  
  
## Vedere anche  
 [Costanti](../Topic/Constants%20\(C%23%20Programming%20Guide\).md)