---
title: "Errore del compilatore CS1675 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1675"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1675"
ms.assetid: add10021-f751-45c7-addc-0f73fa4a267c
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1675
Gli enum non possono avere parametri di tipo  
  
 Per risolvere l'errore, rimuovere il parametro di tipo dalla dichiarazione `enum`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1675:  
  
```  
// CS1675.cs enum E<T>  // CS1675 { } class CMain { public static void Main() { } }  
```