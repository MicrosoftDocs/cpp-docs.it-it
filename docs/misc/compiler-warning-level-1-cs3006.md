---
title: "Avviso del compilatore (livello 1) CS3006 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS3006"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3006"
ms.assetid: efbfd898-e46f-4c3d-91e2-e2da0056b016
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3006
Il metodo di overload 'method' che differisce solo per ref o out o per numero di dimensioni della matrice non è conforme a CLS  
  
 Non è possibile eseguire l'overload di un metodo in base al parametro [ref](../Topic/ref%20\(C%23%20Reference\).md) o [out](../Topic/out%20\(C%23%20Reference\).md) e mantenere allo stesso tempo la conformità a CLS \(Common Language Specification\). Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3006. Per risolvere il problema, impostare come commento l'attributo a livello di assembly o rimuovere una delle definizioni di metodo.  
  
```  
// CS3006.cs using System; [assembly: CLSCompliant(true)] public class MyClass { public void f(int i) { } public void f(ref int i)   // CS3006 { } public static void Main() { } }  
```