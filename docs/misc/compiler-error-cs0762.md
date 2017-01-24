---
title: "Errore del compilatore CS0762 | Microsoft Docs"
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
  - "CS0762"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0762"
ms.assetid: 7cedd1af-ffe6-4ca7-82fb-faa9e98014a4
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0762
Non è possibile creare il delegato dal metodo 'method' perché è un metodo parziale senza una dichiarazione di implementazione  
  
 Una dichiarazione di implementazione non è necessaria per un metodo parziale. Un'implementazione è tuttavia necessaria per il metodo incapsulato di un delegato.  
  
### Per correggere l'errore  
  
1.  Fornire un'implementazione del metodo che viene usata per inizializzare il delegato.  
  
## Esempio  
  
```  
public delegate void TestDel(); public partial class C { partial void Part(); public static int Main() { C c = new C(); TestDel td = new TestDel(c.Part); // CS0762 return 1; } }  
```