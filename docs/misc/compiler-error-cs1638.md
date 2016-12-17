---
title: "Errore del compilatore CS1638 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1638"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1638"
ms.assetid: 5279c060-5be3-4c29-80cc-21326d4cffdb
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1638
'identifier' è un identificatore riservato e non può essere utilizzato quando è in uso la modalità della versione di lingua ISO  
  
 Quando viene specificata l'opzione di compatibilità del linguaggio ISO mediante l'opzione **\/langversion** del compilatore, qualsiasi identificatore con doppio carattere di sottolineatura in qualsiasi punto genererà l'errore. Per evitare questo errore, eliminare tutti gli identificatori con doppio carattere di sottolineatura oppure non usare l'opzione relativa alla versione del linguaggio ISO\-1.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1638:  
  
```  
// CS1638.cs // compile with: /langversion:ISO-1 class bad__identifer // CS1638 (double underscores are not ISO compliant) { } // Try this instead: //class GoodIdentifier //{ //} class CMain { public static void Main() { } }  
```  
  
## Vedere anche  
 [\/langversion \(Conformant Syntax\)](../Topic/-langversion%20\(C%23%20Compiler%20Options\).md)