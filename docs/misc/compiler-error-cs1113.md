---
title: "Errore del compilatore CS1113 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1113"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1113"
ms.assetid: ef2d828f-b5ee-4be9-ba2e-36df5502cc5a
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1113
Impossibile utilizzare i metodi di estensione 'name' definiti nel tipo valore 'name' per creare delegati.  
  
 I metodi di estensione definiti per i tipi classe possono essere usati per creare delegati, al contrario dei metodi di estensione definiti per i tipi valore.  
  
### Per correggere l'errore  
  
1.  Associare il metodo di estensione a un tipo classe.  
  
2.  Impostare il metodo come metodo normale nello struct.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1113:  
  
```  
// cs1113.cs using System; public static class Extensions { public static S ExtMethod(this S s) { return s; } } public struct S { } public class Test { static int Main() { Func<S> f = new S().ExtMethod; // CS1113 return 1; } }  
  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)