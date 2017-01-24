---
title: "Avviso del compilatore (livello 3) CS0693 | Microsoft Docs"
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
  - "CS0693"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0693"
ms.assetid: a3902336-49db-4808-b41f-8f0936bff53a
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0693
Il parametro di tipo 'type parameter' ha lo stesso nome del parametro di tipo outer 'type'  
  
 Questo errore si verifica in presenza di un membro generico, ad esempio un metodo all'interno di una classe generica. Dato che il parametro di tipo del metodo non corrisponde necessariamente al parametro di tipo della classe, non è possibile assegnare lo stesso nome a entrambi. Per altre informazioni, vedere [Metodi generici](../Topic/Generic%20Methods%20\(C%23%20Programming%20Guide\).md).  
  
 Per evitare questa situazione, usare un nome diverso per uno dei parametri di tipo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0693.  
  
```  
// CS0693.cs // compile with: /W:3 /target:library class Outer<T> { class Inner<T> {}   // CS0693 // try the following line instead // class Inner<U> {} }  
```