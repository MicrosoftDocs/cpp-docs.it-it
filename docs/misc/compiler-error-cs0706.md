---
title: "Errore del compilatore CS0706 | Microsoft Docs"
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
  - "CS0706"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0706"
ms.assetid: bc3ac5c0-8c96-43c8-b10a-69bd31b38e4a
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0706
Il tipo vincolo non è valido. Un tipo usato come vincolo deve essere un'interfaccia, una classe non sealed o un parametro di tipo.  
  
 Questo errore si verifica quando viene usato un costrutto non valido in una clausola di vincolo. Per evitare questo errore, usare un'interfaccia o una classe non sealed anziché il costrutto che ha causato l'errore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0706.  
  
```  
// CS0706.cs // compile with: /target:library class A {} class C<T> where T : int[] {}  // CS0706 class D<T> where T : A {}  // OK  
```