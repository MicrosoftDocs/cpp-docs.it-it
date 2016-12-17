---
title: "&#39;&lt;parolachiave&gt;&#39; &#232; valido solo all&#39;interno di una classe | Microsoft Docs"
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
  - "bc32002"
  - "vbc32002"
helpviewer_keywords: 
  - "BC32002"
ms.assetid: 773d8d50-abb8-4257-83a5-6e017c199d82
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;parolachiave&gt;&#39; &#232; valido solo all&#39;interno di una classe
Una parola chiave correlata a classi, ad esempio `Me` o `MyClass`, viene usata all'esterno di una definizione di classe.  
  
 **ID errore:** BC32002  
  
### Per correggere l'errore  
  
-   Se il codice che usa la parola chiave include istanze di classe, spostare la parola chiave in un'implementazione della classe.  
  
-   Se il codice che usa la parola chiave non si applica alle classi, rimuovere la parola chiave non valida.  
  
## Vedere anche  
 [Me](http://msdn.microsoft.com/it-it/a65973c7-cf06-4547-9b25-9fba885525c2)   
 [MyClass \- eliminazione](http://msdn.microsoft.com/it-it/5db36f9b-f796-4b6a-ba34-cac1fde6eb62)   
 [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md)