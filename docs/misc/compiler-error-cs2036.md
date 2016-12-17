---
title: "Errore del compilatore CS2036 | Microsoft Docs"
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
  - "CS2036"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2036"
ms.assetid: 44b73be4-b792-4735-bdbd-bd757ab22683
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS2036
L'opzione \/pdb richiede che venga specificata anche l'opzione \/debug.  
  
 I file di database di programma vengono generati solo per le build di debug. L'opzione **\/pdb** non è quindi significativa in una build finale.  
  
### Per correggere l'errore  
  
-   Aggiungere l'opzione **\/debug** del compilatore.  
  
-   Rimuovere l'opzione **\/pdb** del compilatore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS2036 quando viene compilato con l'opzione **\/pdb** ma non con l'opzione \/debug:  
  
```  
// cs2036.cs // Compile with: /pdb // CS2036 class Test { public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [\/pdb \(Specify Debug Symbol File\)](../Topic/-pdb%20\(C%23%20Compiler%20Options\).md)   
 [\/debug \(Emit Debugging Information\)](../Topic/-debug%20\(C%23%20Compiler%20Options\).md)