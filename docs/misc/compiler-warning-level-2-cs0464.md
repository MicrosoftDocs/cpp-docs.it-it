---
title: "Avviso del compilatore (livello 2) CS0464 | Microsoft Docs"
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
  - "CS0464"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0464"
ms.assetid: 3dff97d4-e1f6-4a71-91e2-68cffc38d49a
caps.latest.revision: 15
caps.handback.revision: 15
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0464
Il confronto con il valore Null di tipo 'type' restituisce sempre 'false'  
  
 Questo avviso viene generato quando si esegue un confronto tra una variabile nullable e Null e il confronto non è `==` o `!=`. Per risolvere questo errore, verificare se si vuole effettivamente eseguire il confronto di un valore con `null`. Un confronto come `i == null` può risultare true o false. Un confronto come `i > null` è sempre false.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0464.  
  
```  
// CS0464.cs class MyClass { public static void Main() { int? i = 0; if (i < null) ;   // CS0464 i++; } }  
```