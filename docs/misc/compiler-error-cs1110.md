---
title: "Errore del compilatore CS1110 | Microsoft Docs"
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
  - "CS1110"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1110"
ms.assetid: 5b571a76-1891-4f33-b23d-7c4cc654a05f
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1110
Non è possibile usare il modificatore 'this' nel primo parametro della dichiarazione di metodo senza un riferimento a System.Core.dll Aggiungere un riferimento a System.Core.dll o rimuovere il modificatore 'this' dalla dichiarazione del metodo.  
  
 I metodi di estensione sono supportati nella versione 3.5 e successive di .NET Framework. I metodi di estensione generano metadati che contrassegnano il metodo con un attributo. La classe Attribute si trova in System.Core.dll.  
  
### Per correggere l'errore  
  
1.  Come indicato nel messaggio, aggiungere un riferimento a System.Core.dll o rimuovere il modificatore `this` dalla dichiarazione di metodo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1110 se il file non viene compilato con un riferimento a System.Core.dll:  
  
```  
// cs1110.cs // CS1110 // Compile with: /target:library public static class Extensions { public static bool Test(this bool b) { return b; } }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)