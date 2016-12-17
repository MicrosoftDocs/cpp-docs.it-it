---
title: "Errore del compilatore CS0409 | Microsoft Docs"
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
  - "CS0409"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0409"
ms.assetid: 23d86c13-7978-41b7-a087-ffcea52476fa
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0409
È già stata specificata una clausola di vincolo per il parametro di tipo 'type parameter'. Tutti i vincoli per un parametro di tipo devono essere specificati in un'unica clausola where.  
  
 Sono state trovate più clausole di vincolo \(clausole where\) per un parametro di tipo. Rimuovere la clausola where non pertinente oppure correggere le clausole where in modo che per ognuna sia presente un unico parametro di tipo.  
  
```  
// CS0409.cs interface I { } class C<T1, T2> where T1 : I where T1 : I  // CS0409 – T1 used twice { }  
```