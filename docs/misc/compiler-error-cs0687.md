---
title: "Errore del compilatore CS0687 | Microsoft Docs"
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
  - "CS0687"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0687"
ms.assetid: b51c5e7c-f4de-4aa4-97b1-ebe220cd19b0
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0687
Il qualificatore di alias '::' dello spazio dei nomi viene sempre risolto in un tipo o in uno spazio dei nomi e non è pertanto valido in questa posizione. Si consiglia di utilizzare '.'.  
  
 Questo errore si verifica se si usa un elemento che il parser interpreta come un tipo in una posizione non prevista. Un nome di tipo o spazio dei nomi è valido solo in un'espressione di accesso ai membri, usando l'operatore di accesso ai membri \(**.**\). Questo può verificarsi se è stato usato l'operatore di ambito globale \(:\) in un altro contesto.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0687:  
  
```  
// CS0687.cs using M = Test; using System; public class Test { public static int x = 77; public static void Main() { Console.WriteLine(M::x); // CS0687 // To resolve use the following line instead: // Console.WriteLine(M.x); } }  
```