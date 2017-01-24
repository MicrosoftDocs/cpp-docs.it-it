---
title: "Errore del compilatore CS0026 | Microsoft Docs"
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
  - "CS0026"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0026"
ms.assetid: 8767fbc1-8ba7-4e88-a9f9-7e620411882b
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0026
La parola chiave 'this' non può essere utilizzata in una proprietà statica, in un metodo statico o nell'inizializzatore di un campo statico  
  
 La parola chiave [this](../Topic/this%20\(C%23%20Reference\).md) fa riferimento a un oggetto, che è un'istanza di un tipo. Poiché i metodi statici sono indipendenti da qualsiasi istanza della classe che li contiene, la parola chiave "this" non è significativa e pertanto non è consentita. Per altre informazioni, vedere [Classi statiche e membri di classi statiche](../Topic/Static%20Classes%20and%20Static%20Class%20Members%20\(C%23%20Programming%20Guide\).md) e [Oggetti](../Topic/Objects%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0026:  
  
```  
// CS0026.cs public class A { public static int i = 0; public static void Main() { // CS0026 this.i = this.i + 1; // Try the following line instead: // i = i + 1; } }  
```