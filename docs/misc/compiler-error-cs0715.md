---
title: "Errore del compilatore CS0715 | Microsoft Docs"
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
  - "CS0715"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0715"
ms.assetid: e3cd1e46-ccfa-4678-a2ed-69245f3558ba
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0715
'static class': le classi statiche non possono contenere operatori definiti dall'utente  
  
 Gli operatori definiti dall'utente operano sulle istanze di classi. Non è possibile creare istanze di classi statiche, quindi non è possibile creare istanze su cui gli operatori possono agire. Di conseguenza, gli operatori definiti dall'utente non sono consentiti per le classi statiche.  
  
 L'esempio seguente genera l'errore CS0715:  
  
```  
// CS0715.cs public static class C { public static C operator+(C c)  // CS0715 { } public static void Main() { } }  
```