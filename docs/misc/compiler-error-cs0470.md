---
title: "Errore del compilatore CS0470 | Microsoft Docs"
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
  - "CS0470"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0470"
ms.assetid: b5a8e820-aa5c-4f69-b5c6-01c6a6bb82d9
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0470
Il metodo 'method' non può implementare la funzione di accesso di interfaccia 'accessor' per il tipo 'type'. Usare un'implementazione esplicita dell'interfaccia.  
  
 Questo errore viene generato quando una funzione di accesso prova a implementare un'interfaccia. È necessario usare un'implementazione esplicita dell'interfaccia.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0470.  
  
```  
// CS0470.cs // compile with: /target:library interface I { int P { get; } } class MyClass : I { public int get_P() { return 0; }   // CS0470 public int P2 { get { return 0;} }   // OK }  
  
```