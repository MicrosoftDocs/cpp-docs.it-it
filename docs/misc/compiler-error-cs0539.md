---
title: "Errore del compilatore CS0539 | Microsoft Docs"
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
  - "CS0539"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0539"
ms.assetid: 41b8975c-abd1-4a36-98a4-8efa5fb0502a
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0539
'member' nella dichiarazione esplicita dell'interfaccia non è un membro dell'interfaccia  
  
 Si è provato a dichiarare esplicitamente un membro di [interfaccia](../Topic/interface%20\(C%23%20Reference\).md) che non esiste. Eliminare la dichiarazione o modificarla in modo che faccia riferimento a un membro di interfaccia valido.  
  
 L'esempio seguente genera l'errore CS0539:  
  
```  
// CS0539.cs namespace x { interface I { void m(); } public class clx : I { void I.x()   // CS0539 { } public static int Main() { return 0; } } }  
```