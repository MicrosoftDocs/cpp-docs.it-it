---
title: "Avviso del compilatore (livello 1) CS1696 | Microsoft Docs"
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
  - "CS1696"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1696"
ms.assetid: 69a45988-1aba-4a01-a84e-7ca59f8dde28
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1696
È previsto un commento su una sola riga o la fine della riga  
  
 Il compilatore richiede che una direttiva del preprocessore sia seguita da un terminatore di fine della riga o da un commento a riga singola. Il compilatore ha terminato l'elaborazione di una direttiva del preprocessore valida e ha rilevato un evento che viola il vincolo di sintassi.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1696.  
  
```  
// CS1696.cs class Test { public static void Main() { #pragma warning disable 1030;219   // CS1696 #pragma warning disable 1030   // OK } }  
```