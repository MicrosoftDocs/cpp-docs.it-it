---
title: "Avviso del compilatore (livello 2) CS0472 | Microsoft Docs"
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
  - "cs0472"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0472"
ms.assetid: dc80e0a3-dbd3-4a81-b8bb-a59b510cd3e1
caps.latest.revision: 4
caps.handback.revision: 4
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0472
Il risultato dell'espressione è sempre 'value1' perché un valore di tipo 'value2' non è mai uguale a 'null' di tipo 'value3'  
  
 Il compilatore dovrebbe fornire un avviso se si usa un operatore con un valore costante null.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0472.  
  
```  
public class Test { public static int Main() { int i = 5; int counter = 0; // Comparison: if (i == null)  // CS0472 // To resolve, use a valid value for i. counter++; return counter; } }  
```