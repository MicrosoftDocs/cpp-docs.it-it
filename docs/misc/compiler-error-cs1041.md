---
title: "Errore del compilatore CS1041 | Microsoft Docs"
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
  - "CS1041"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1041"
ms.assetid: 9f62c058-cd28-4cb5-835c-d0f25f4fd08e
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1041
È previsto un identificatore, mentre 'keyword' è una parola chiave  
  
 È stata rilevata una parola riservata per il linguaggio C\#, mentre era previsto un identificatore. Sostituire la [parola chiave](../Topic/C%23%20Keywords.md) con un identificatore specificato dall'utente.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1041:  
  
```  
// CS1041a.cs class MyClass { public void f(int long)   // CS1041 // Try the following instead: // public void f(int i) { } public static void Main() { } }  
```  
  
## Esempio  
 Quando si importa da un altro linguaggio di programmazione che non ha lo stesso set di parole riservate, è possibile modificare l'identificatore riservato usando il prefisso @, come mostrato nell'esempio seguente.  
  
 Un identificatore con un prefisso `@` è detto identificatore letterale.  
  
```  
// CS1041b.cs class MyClass { public void f(int long)   // CS1041 // Try the following instead: // public void f(int @long) { } public static void Main() { } }  
```