---
title: "Errore del compilatore CS1613 | Microsoft Docs"
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
  - "CS1613"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1613"
ms.assetid: 9d7ea9c8-9953-459f-a3f0-c7e65d1b9f59
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1613
La classe wrapper 'class' della coclasse gestita per l'interfaccia 'interface' non è stata trovata. Probabilmente manca un riferimento all'assembly  
  
 Si è provato a creare un'istanza di un oggetto COM da un'interfaccia. L'interfaccia ha gli attributi **ComImport** e `CoClass`, ma il compilatore non riesce a trovare il tipo specificato per l'attributo `CoClass`.  
  
 Per correggere l'errore, provare una delle seguenti soluzioni:  
  
-   Aggiungere un riferimento all'assembly che abbia la coclasse. L'interfaccia e la coclasse devono trovarsi quasi sempre nello stesso assembly. Per altre informazioni, vedere [\/reference](../Topic/-reference%20\(C%23%20Compiler%20Options\).md) o [Finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/2feb0fe2-0805-4cc9-8cba-b0315849dfb7).  
  
-   Correggere l'attributo `CoClass` nell'interfaccia.  
  
 L'esempio che segue illustra l'uso corretto di **CoClassAttribute**:  
  
```  
// CS1613.cs using System; using System.Runtime.InteropServices; [Guid("1FFD7840-E82D-4268-875C-80A160C23296")] [ComImport()] [CoClass(typeof(A))] public interface IA{} public class A : IA {} public class AA { public static void Main() { IA i; i = new IA(); // This is equivalent to new A(). // because of the CoClass attribute on IA } }  
```