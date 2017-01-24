---
title: "Errore del compilatore CS1663 | Microsoft Docs"
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
  - "CS1663"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1663"
ms.assetid: 013f36ac-8925-4cee-9008-54fa7ad1324b
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1663
Il tipo di buffer a dimensione fissa deve essere uno dei seguenti: bool, byte, short, int, long, char, sbyte, ushort, uint, ulong, float o double  
  
 Un buffer di dimensione fissa non può essere di un tipo diverso da quelli elencati. Per evitare l'errore, specificare un tipo diverso o evitare di usare una matrice fissa.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1663.  
  
```  
// CS1663.cs // compile with: /unsafe /target:library unsafe struct C { fixed string ab[10];   // CS1663 }  
```