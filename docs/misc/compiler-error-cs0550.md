---
title: "Errore del compilatore CS0550 | Microsoft Docs"
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
  - "CS0550"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0550"
ms.assetid: 57278c17-443c-40f2-9ebd-853558743564
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0550
'accessor' aggiunge una funzione di accesso non trovata nel membro di interfaccia 'property'  
  
 L'implementazione di una proprietà in una classe derivata contiene una funzione di accesso che non è stata specificata nell'interfaccia di base.  
  
 Per altre informazioni, vedere [Utilizzo delle proprietà](../Topic/Using%20Properties%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0550.  
  
```  
// CS0550.cs namespace x { interface ii { int i { get; // add the following accessor to resolve this CS0550 // set; } } public class a : ii { int ii.i { get { return 0; } set {}   // CS0550  no set in interface } public static void Main() {} } }  
```