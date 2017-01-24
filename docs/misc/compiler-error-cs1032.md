---
title: "Errore del compilatore CS1032 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1032"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1032"
ms.assetid: fe318a6c-4403-4b9b-b3d8-753ec31c00ff
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1032
Impossibile definire o annullare la definizione dei simboli del preprocessore dopo il primo token nel file  
  
 Le [direttive per il preprocessore](../Topic/C%23%20Preprocessor%20Directives.md) `#define` e `#undef` devono essere usate all'inizio di un programma, prima delle altre parole chiave, ad esempio quelle usate nella dichiarazione dello spazio dei nomi.  
  
 L'esempio seguente genera l'errore CS1032:  
  
```  
// CS1032.cs namespace x { public class clx { #define a   // CS1032, put before namespace public static void Main() { } } }  
```