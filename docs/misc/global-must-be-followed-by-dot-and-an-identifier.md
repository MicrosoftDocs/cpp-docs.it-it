---
title: "&#39;Global&#39; deve essere seguita da &#39;.&#39; e da un identificatore | Microsoft Docs"
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
  - "bc36000"
  - "vbc36000"
helpviewer_keywords: 
  - "BC36000"
ms.assetid: 0007d7b4-54a2-4f09-904c-d5ad60a55f8e
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Global&#39; deve essere seguita da &#39;.&#39; e da un identificatore
La parola chiave [Global \- eliminazione](http://msdn.microsoft.com/it-it/18c8ba14-40f6-4978-8096-6a5852324635) è presente in un contesto diverso dall'accesso a uno spazio dei nomi.  
  
 Lo scopo di `Global` è quello di consentire al codice di accedere a uno spazio dei nomi di livello radice da una struttura di spazio dei nomi che ha bloccato lo spazio dei nomi di livello radice.  
  
 **ID errore:** BC36000  
  
### Per correggere l'errore  
  
-   Per accedere a uno spazio dei nomi di livello radice, specificarlo dopo la parola chiave `Global` e un punto \(`.`\).  
  
    ```  
    Dim keyInfo As Global.System.ConsoleKeyInfo  
    ```  
  
-   Se non si vuole accedere a uno spazio dei nomi di livello radice, rimuovere la parola chiave `Global`.  
  
## Vedere anche  
 [Global \- eliminazione](http://msdn.microsoft.com/it-it/18c8ba14-40f6-4978-8096-6a5852324635)