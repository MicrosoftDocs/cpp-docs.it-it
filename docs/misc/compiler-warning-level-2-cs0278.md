---
title: "Avviso del compilatore (livello 2) CS0278 | Microsoft Docs"
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
  - "CS0278"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0278"
ms.assetid: 5418cbbe-bcec-4379-a6f6-410987beb96a
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0278
'type' non implementa il modello 'pattern name'. 'method name' è ambiguo con 'method name'.  
  
 Molte istruzioni in C\# si basano su modelli definiti, ad esempio `foreach` e `using`. Ad esempio, `foreach` si basa sulla classe di raccolte che implementa il modello "enumerabile".  
  
 L'avviso CS0278 potrebbe essere visualizzato quando il compilatore non riesce creare la corrispondenza corretta a causa di alcune ambiguità, ad esempio se per il modello "enumerabile" è necessario un metodo denominato `MoveNext` e nel codice sono contenuti due metodi denominati `MoveNext`. Il compilatore proverà a trovare un'interfaccia da usare. È tuttavia opportuno determinare la causa dell'ambiguità e correggerla.  
  
 Per altre informazioni, vedere [Procedura: accedere a una classe di raccolte con foreach](../Topic/How%20to:%20Access%20a%20Collection%20Class%20with%20foreach%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0278.  
  
```  
// CS0278.cs using System.Collections.Generic; public class myTest { public static void TestForeach<W>(W w) where W: IEnumerable<int>, IEnumerable<string> { foreach (int i in w) {}   // CS0278 } }  
```