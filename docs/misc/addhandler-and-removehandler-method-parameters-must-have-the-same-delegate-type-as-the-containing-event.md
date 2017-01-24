---
title: "Il tipo delegato dei parametri dei metodi &#39;AddHandler&#39; e &#39;RemoveHandler&#39; deve essere uguale a quello dell&#39;evento che li contiene | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31136"
  - "vbc31136"
helpviewer_keywords: 
  - "BC31136"
ms.assetid: 199b2f7b-a85e-465d-9853-0995156e7ab6
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo delegato dei parametri dei metodi &#39;AddHandler&#39; e &#39;RemoveHandler&#39; deve essere uguale a quello dell&#39;evento che li contiene
Una dichiarazione `Custom Event` deve avere dichiarazioni `AddHandler` o `RemoveHandler`, ognuna delle quali accetta un solo parametro del tipo delegato specificato dalla clausola `As` dell'evento personalizzato.  
  
 **ID errore:** BC31136  
  
### Per correggere l'errore  
  
-   Modificare il tipo del parametro affinché corrisponda al tipo delegato specificato dalla clausola `As` dell'evento personalizzato.  
  
## Esempio  
 Questo esempio mostra un evento personalizzato con i tipi di parametro corretti per le dichiarazioni `AddHandler` e `RemoveHandler`.  
  
 [!code-vb[VbVbalrEventError#1](../misc/codesnippet/VisualBasic/addhandler-and-removehandler-method-parameters-must-have-the-same-delegate-type-as-the-containing-event_1.vb)]  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler \- eliminazione](http://msdn.microsoft.com/it-it/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)