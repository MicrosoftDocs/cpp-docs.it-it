---
title: "Errore del compilatore CS0526 | Microsoft Docs"
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
  - "CS0526"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0526"
ms.assetid: befc46b4-28ea-40d3-89ac-132b92455772
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0526
Le interfacce non possono contenere costruttori  
  
 I costruttori non possono essere definiti per le [interfacce](../Topic/interface%20\(C%23%20Reference\).md). Un metodo viene considerato un costruttore se ha lo stesso nome della classe e nessun tipo restituito.  
  
 L'esempio seguente genera l'errore CS0526:  
  
```  
// CS0526.cs namespace x { public interface clx { public clx()   // CS0526 { } } public class cly { public static void Main() { } } }  
```