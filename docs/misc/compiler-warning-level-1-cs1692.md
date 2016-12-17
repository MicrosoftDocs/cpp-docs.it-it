---
title: "Avviso del compilatore (livello 1) CS1692 | Microsoft Docs"
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
  - "CS1692"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1692"
ms.assetid: 1a6d52e1-0ebb-4990-ac0b-36b05a884a19
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1692
Numero non valido  
  
 Diverse direttive del preprocessore, ad esempio `#pragma` e `#line`, usano numeri come parametri. Uno di questi numeri non è valido perché è troppo grande, ha un formato non corretto, contiene caratteri non validi e così via. Per correggere l'errore, correggere il numero.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1692.  
  
```  
// CS1692.cs #pragma warning disable a  // CS1692 // Try this instad: // #pragma warning disable 1691 class A { static void Main() { } }  
```