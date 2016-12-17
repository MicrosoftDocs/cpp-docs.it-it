---
title: "Errore del compilatore CS0236 | Microsoft Docs"
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
  - "CS0236"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0236"
ms.assetid: 1522c421-744f-441f-9e05-6bb31311ab2a
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0236
Un inizializzatore di campo non può fare riferimento alla proprietà, al metodo o al campo non statico 'field'  
  
 I campi di istanza non possono essere usati per inizializzare altri campi di istanza all'esterno di un metodo. Se si sta tentando di inizializzare una variabile all'esterno di un metodo, si consiglia di eseguire l'inizializzazione all'interno del costruttore di classe. Per altre informazioni, vedere [Metodi](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0236:  
  
```  
// CS0236.cs public class MyClass { public int i = 5; public int j = i;  // CS0236 public int k;      // initialize in constructor MyClass() { k = i; } public static void Main() { } }  
```