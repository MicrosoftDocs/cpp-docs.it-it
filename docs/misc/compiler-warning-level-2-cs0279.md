---
title: "Avviso del compilatore (livello 2) CS0279 | Microsoft Docs"
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
  - "CS0279"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0279"
ms.assetid: 5e5faa8f-3d5b-4999-aa62-ff7f131a3e04
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0279
'type name' non implementa il modello 'pattern name'. 'method name' è statico o non pubblico.  
  
 Molte istruzioni in C\# si basano su modelli definiti, ad esempio `foreach` e `using`. Ad esempio, `foreach` si basa sulla classe di raccolte che implementa il modello enumerabile. Questo errore si verifica quando il compilatore non riesce a trovare la corrispondenza perché un metodo è dichiarato `static` o non `public`. I metodi nei modelli devono essere istanze di classi e ed essere pubblici.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0279:  
  
```  
// CS0279.cs using System; using System.Collections; public class myTest : IEnumerable { IEnumerator IEnumerable.GetEnumerator() { yield return 0; } internal IEnumerator GetEnumerator() { yield return 0; } public static void Main() { foreach (int i in new myTest()) {}  // CS0279 } }  
```