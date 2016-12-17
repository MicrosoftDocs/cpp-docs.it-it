---
title: "Errore del compilatore CS1015 | Microsoft Docs"
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
  - "CS1015"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1015"
ms.assetid: 53179feb-e8be-41e0-bb0b-f7879e9fa613
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1015
È previsto un tipo oggetto, stringa o classe  
  
 Si è provato a passare un tipo di dati predefinito in un blocco [catch](../Topic/try-catch%20\(C%23%20Reference\).md). Solo i tipi di dati che derivano da <xref:System.Exception?displayProperty=fullName> possono essere passati in un blocco `catch`. Per altre informazioni sulle eccezioni, vedere [Istruzioni di gestione delle eccezioni](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS1015:  
  
```  
// CS1015.cs class Sample { static void Main() { try { } catch(int)   // CS1015, int is not derived from System.Exception { } } }  
```