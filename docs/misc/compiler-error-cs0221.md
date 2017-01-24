---
title: "Errore del compilatore CS0221 | Microsoft Docs"
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
  - "CS0221"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0221"
ms.assetid: 97170b49-54f1-4dac-a865-2f9cc6bf55b1
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0221
Il valore costante 'value' non può essere convertito in 'type' \(utilizzare la sintassi 'unchecked' per eseguire l'override\)  
  
 Un'operazione di assegnazione che comporterebbe la perdita dei dati è stata rilevata da [checked](../Topic/checked%20\(C%23%20Reference\).md), che è attivata per impostazione predefinita. Correggere l'assegnazione oppure usare [unchecked](../Topic/unchecked%20\(C%23%20Reference\).md) per risolvere l'errore. Per altre informazioni, vedere [Checked e Unchecked](../Topic/Checked%20and%20Unchecked%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0221:  
  
```  
// CS0221.cs public class MyClass { public static void Main() { // unchecked // { int a = (int)0xFFFFFFFF;   // CS0221 a++; // } } }  
```