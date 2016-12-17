---
title: "Errore del compilatore CS0529 | Microsoft Docs"
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
  - "CS0529"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0529"
ms.assetid: 61de8086-f991-455c-b009-bb8cd05f34bd
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0529
L'interfaccia ereditata 'interface1' causa un ciclo nella gerarchia delle interfacce di 'interface2'  
  
 L'elenco di ereditarietà di un['interfaccia](../Topic/interface%20\(C%23%20Reference\).md) include un riferimento diretto o indiretto a se stessa. Un'interfaccia non può ereditare da se stessa.  
  
 L'esempio seguente genera l'errore CS0529:  
  
```  
// CS0529.cs namespace x { public interface a { } public interface b : a, c { } public interface c : b   // CS0529, b inherits from c { } }  
```