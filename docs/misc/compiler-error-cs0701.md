---
title: "Errore del compilatore CS0701 | Microsoft Docs"
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
  - "CS0701"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0701"
ms.assetid: eb844e31-00bd-468d-9f77-11d10a4ef120
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0701
'identifier' non è un vincolo valido. Un tipo usato come vincolo deve essere un'interfaccia, una classe non sealed o un parametro di tipo.  
  
 Questo errore si verifica se un tipo sealed viene usato come vincolo. Per risolvere l'errore, usare solo i tipi non sealed come vincoli.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0701.  
  
```  
// CS0701.cs // compile with: /target:library class C<T> where T : System.String {}   // CS0701 class D<T> where T : System.Attribute {}   // OK  
```