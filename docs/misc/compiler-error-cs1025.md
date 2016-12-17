---
title: "Errore del compilatore CS1025 | Microsoft Docs"
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
  - "CS1025"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1025"
ms.assetid: 491c186f-cb40-47a9-9656-44fadfa18ae2
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1025
È previsto un commento su una sola riga o la fine della riga  
  
 Una riga con una [direttiva per il preprocessore](../Topic/C%23%20Preprocessor%20Directives.md) non può avere un commento su più righe.  
  
 L'esempio seguente genera l'errore CS1025:  
  
```  
#if true /* hello */   // CS1025 #endif   // this is a good comment  
```  
  
 CS1025 può verificarsi anche se si tenta di eseguire una direttiva per il preprocessore non valida, ad esempio:  
  
```  
// CS1025.cs #define a class Sample { static void Main() { #if a 1   // CS1025, invalid syntax System.Console.WriteLine("Hello, World!"); #endif } }  
```