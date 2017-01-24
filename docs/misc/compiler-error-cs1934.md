---
title: "Errore del compilatore CS1934 | Microsoft Docs"
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
  - "CS1934"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1934"
ms.assetid: 18624be3-d534-4695-bafd-cc664fcde15e
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1934
Non è stata trovata un'implementazione del modello di query per il tipo di origine 'type'. 'method' non è presente. Provare a specificare in modo esplicito il tipo della variabile di intervallo 'name'.  
  
 Questo errore viene generato se un'espressione di query specifica un'origine dati per cui non è implementato alcun operatore di query standard. Si verifica, ad esempio, se si specifica un oggetto `ArrayList` senza assegnare un tipo esplicito per la variabile di intervallo.  
  
### Per correggere l'errore  
  
1.  Nell'esempio seguente il problema viene risolto specificando semplicemente il tipo della variabile di intervallo:  
  
    ```  
    var q = from int x in list  
    ```  
  
## Esempio  
 L'esempio seguente mostra un modo per generare l'errore CS1934:  
  
```  
// cs1934.cs using System.Linq; using System.Collections; static class Test { public static void Main() { var list = new ArrayList { 0, 1, 2, 3, 4, 5 }; var q = from x in list // CS1934 select x + 1; } }  
```  
  
## Vedere anche  
 [How to: Query an ArrayList with LINQ](../Topic/How%20to:%20Query%20an%20ArrayList%20with%20LINQ.md)