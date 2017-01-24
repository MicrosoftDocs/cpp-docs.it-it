---
title: "Errore del compilatore CS1027 | Microsoft Docs"
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
  - "CS1027"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1027"
ms.assetid: a6657f0f-5664-47a5-95cf-803f5a0e0c90
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1027
È prevista la direttiva \#endif  
  
 Per una direttiva `#if` specificata non è stata trovata la `#endif` [direttiva per il preprocessore](../Topic/C%23%20Preprocessor%20Directives.md) corrispondente. oppure è possibile che il compilatore abbia rilevato una direttiva `#endregion` che non corrisponde ad alcuna direttiva `#region` in un blocco `#if`.  
  
 L'esempio seguente genera l'errore CS1027:  
  
```  
// CS1027.cs #if true   // CS1027, uncomment next line to resolve // #endif namespace x { public class clx { public static void Main() { } } }  
```