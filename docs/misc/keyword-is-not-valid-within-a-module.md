---
title: "&#39;&lt;parolachiave&gt;&#39; non &#232; valido all&#39;interno di un modulo | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc32001"
  - "bc32001"
helpviewer_keywords: 
  - "BC32001"
ms.assetid: b00757ac-5652-460d-9d2c-11b264d7ec7f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;parolachiave&gt;&#39; non &#232; valido all&#39;interno di un modulo
Una parola chiave correlata a istanze di classe, ad esempio `Me` o `MyBase`, viene usata all'interno di un modulo. I moduli non hanno ereditarietà o istanze.  
  
 **ID errore:** BC32001  
  
### Per correggere l'errore  
  
-   Se il codice che usa la parola chiave include istanze di classe, spostare la parola chiave in un'implementazione della classe.  
  
-   Se il codice che usa la parola chiave si applica al modulo, rimuovere la parola chiave non valida.  
  
## Vedere anche  
 [Me](http://msdn.microsoft.com/it-it/a65973c7-cf06-4547-9b25-9fba885525c2)   
 [MyBase \- eliminazione](http://msdn.microsoft.com/it-it/52491d06-6451-4f6f-9aa6-8fab59bbc2b9)