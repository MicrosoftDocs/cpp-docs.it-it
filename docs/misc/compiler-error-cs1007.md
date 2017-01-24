---
title: "Errore del compilatore CS1007 | Microsoft Docs"
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
  - "CS1007"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1007"
ms.assetid: b56ee2c6-8e79-4b9b-8c59-194bdb22bc3e
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1007
La funzione di accesso alla proprietà è già definita  
  
 Quando si dichiara una [proprietà](../Topic/Using%20Properties%20\(C%23%20Programming%20Guide\).md), è necessario dichiarare anche i metodi per le sue funzioni di accesso. Una proprietà, tuttavia, non può avere più di un metodo per la funzione di accesso `get` o più di un metodo per la funzione di accesso `set`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1007:  
  
```  
// CS1007.cs public class clx { public int MyProperty { get { return 0; } get   // CS1007, this is the second get method { return 0; } } public static void Main() {} }  
```