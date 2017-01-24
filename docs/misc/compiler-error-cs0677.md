---
title: "Errore del compilatore CS0677 | Microsoft Docs"
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
  - "CS0677"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0677"
ms.assetid: 6a4a3703-9b44-4c4f-a564-8b437b1cb6b8
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0677
'variable': un campo volatile non può essere di tipo 'type'  
  
 I campi dichiarati con la parola chiave `volatile` devono essere dei seguenti tipi:  
  
-   Qualsiasi tipo riferimento  
  
-   Qualsiasi tipo di puntatore \(in un contesto `unsafe`\)  
  
-   I tipi `sbyte`, **byte**, **short**, `ushort`, `int`, `uint`, `char`, **float**, `bool`  
  
-   Tipi enum basati su uno qualsiasi dei tipi precedenti  
  
 L'esempio seguente genera l'errore CS0677:  
  
```  
// CS0677.cs class TestClass { private volatile long i;   // CS0677 public static void Main() { } }  
```