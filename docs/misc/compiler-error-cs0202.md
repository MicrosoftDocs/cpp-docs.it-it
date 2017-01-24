---
title: "Errore del compilatore CS0202 | Microsoft Docs"
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
  - "CS0202"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0202"
ms.assetid: 7088850f-c206-4b95-9586-a0fa3d876c0c
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0202
Con foreach il tipo restituito ''type' di 'type.GetEnumerator\(\)' deve essere associato a un metodo MoveNext pubblico e a una proprietà Current pubblica appropriati  
  
 Una funzione <xref:System.Collections.IEnumerable.GetEnumerator%2A>, usata per abilitare l'uso delle istruzioni foreach, non può restituire un puntatore o una matrice, ma un'istanza di una classe che può fungere da enumeratore. I requisiti da soddisfare per fungere da enumeratore includono la proprietà public Current e il metodo public MoveNext.  
  
> [!NOTE]
>  In C\# 2.0 il metodo MoveNext e la proprietà Current vengono generati automaticamente. Per altre informazioni, vedere l'esempio di codice in [Interfacce generiche](../Topic/Generic%20Interfaces%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0202:  
  
```  
// CS0202.cs public class C1 { public int Current { get { return 0; } } public bool MoveNext () { return false; } public static implicit operator C1 (int c1) { return 0; } } public class C2 { public int Current { get { return 0; } } public bool MoveNext () { return false; } public C1[] GetEnumerator () // try the following line instead // public C1 GetEnumerator () { return null; } } public class MainClass { public static void Main () { C2 c2 = new C2(); foreach (C1 x in c2)   // CS0202 { System.Console.WriteLine(x.Current); } } }  
```