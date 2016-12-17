---
title: "Le variabili nei moduli non possono essere dichiarate come &#39;&lt;identificatore&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30593"
  - "vbc30593"
helpviewer_keywords: 
  - "BC30593"
ms.assetid: 2500b776-7fa4-4272-8cc7-204593706651
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le variabili nei moduli non possono essere dichiarate come &#39;&lt;identificatore&gt;&#39;
È stato usato un identificatore, ad esempio `MustInherit`, in una variabile di un'istruzione `Module`. Non è possibile creare istanze dei moduli, i moduli non supportano l'ereditarietà e non possono implementare le interfacce.  
  
 **ID errore:** BC30593  
  
### Per correggere l'errore  
  
-   Rimuovere l'identificatore.  
  
## Vedere anche  
 [Module Statement](../Topic/Module%20Statement.md)