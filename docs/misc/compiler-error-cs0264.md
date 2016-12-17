---
title: "Errore del compilatore CS0264 | Microsoft Docs"
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
  - "CS0264"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0264"
ms.assetid: a8a87185-5915-4b0d-a8cd-2f129ea51b8f
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0264
Le dichiarazioni parziali di 'type' devono avere gli stessi nomi di parametro di tipo nello stesso ordine  
  
 Questo errore si verifica se si definisce un tipo generico in dichiarazioni parziali e i parametri di tipo non sono coerenti in termini di nome o ordine in tutte le dichiarazioni parziali. Per eliminare questo errore, controllare i parametri di tipo per ogni dichiarazione parziale e assicurarsi che venga usato lo stesso nome e ordine dei parametri. Per altre informazioni, vedere [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md) e [Parametri di tipo generico](../Topic/Generic%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0264.  
  
```  
// CS0264.cs partial class MyClass<T>  // CS0264 { } partial class MyClass <MyType> { }  
```