---
title: "Errore del compilatore CS1661 | Microsoft Docs"
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
  - "CS1661"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1661"
ms.assetid: 162d5736-ca3c-4a09-a5d9-a19da3d5bf24
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1661
Non è possibile convertire il blocco di metodi anonimi nel tipo delegato 'delegate type' perché i tipi di parametro del blocco specificato non corrispondono ai tipi di parametro del delegato  
  
 Questo errore si verifica se, in una definizione di metodo anonimo, i tipi di parametro del metodo anonimo non corrispondono ai tipi di parametro del delegato. Controllare il numero di parametri, i tipi di parametro e tutti i parametri ref o out e verificarne la corrispondenza esatta.  
  
 L'esempio seguente genera l'errore CS1661:  
  
```  
// CS1661.cs delegate void MyDelegate(int i); class C { public static void Main() { MyDelegate d = delegate(string s) { };  // CS1661 } }  
```