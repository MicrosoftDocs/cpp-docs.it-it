---
title: "L&#39;istruzione &#39;Throw&#39; non pu&#242; omettere l&#39;operando all&#39;esterno di un&#39;istruzione &#39;Catch&#39; o all&#39;interno di un&#39;istruzione &#39;Finally&#39; | Microsoft Docs"
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
  - "vbc30666"
  - "bc30666"
helpviewer_keywords: 
  - "BC30666"
ms.assetid: a208a6ea-0e36-4bf1-8984-4de1a0e38a2a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione &#39;Throw&#39; non pu&#242; omettere l&#39;operando all&#39;esterno di un&#39;istruzione &#39;Catch&#39; o all&#39;interno di un&#39;istruzione &#39;Finally&#39;
Le istruzioni `Throw` di fuori dell'istruzione `Catch` devono fornire il nome di un oggetto eccezione.  
  
 **ID errore:** BC30666  
  
### Per correggere l'errore  
  
1.  Specificare il nome di un oggetto eccezione derivato da `System.Exception`.  
  
2.  Ristrutturare il codice in modo che l'istruzione `Throw` si trovi in un blocco `Catch`.  
  
## Vedere anche  
 [Throw Statement](../Topic/Throw%20Statement%20\(Visual%20Basic\).md)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Classe di eccezione in Visual Basic](http://msdn.microsoft.com/it-it/9aac396f-34ca-4afb-8e6c-e523cb690ba9)   
 [Gestione di eccezioni ed errori in Visual Basic](http://msdn.microsoft.com/it-it/3e351e73-cf23-40ab-8b60-05794160529e)