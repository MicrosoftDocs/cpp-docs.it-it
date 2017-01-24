---
title: "Errore del compilatore CS0548 | Microsoft Docs"
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
  - "CS0548"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0548"
ms.assetid: c4d34da7-0b4a-4312-ac7f-46db100e43c7
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0548
'property': la proprietà o l'indicizzatore deve avere almeno una funzione di accesso  
  
 Una proprietà deve avere almeno un metodo della funzione di accesso \(get o set\).  
  
 Per altre informazioni, vedere e [Utilizzo delle proprietà](../Topic/Using%20Properties%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0548.  
  
```  
// CS0548.cs // compile with: /target:library public class b { public int MyProp {}   // CS0548 public int MyProp2   // OK { get { return 0; } set {} } }  
```