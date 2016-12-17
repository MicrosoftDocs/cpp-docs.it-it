---
title: "Il metodo &#39;RaiseEvent&#39; deve avere la stessa firma del tipo delegato &#39;&lt;firma&gt;&#39; dell&#39;evento che lo contiene | Microsoft Docs"
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
  - "bc31137"
  - "vbc31137"
helpviewer_keywords: 
  - "BC31137"
ms.assetid: 9db77546-9205-4fd2-baf6-6eb1b46b1f1a
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo &#39;RaiseEvent&#39; deve avere la stessa firma del tipo delegato &#39;&lt;firma&gt;&#39; dell&#39;evento che lo contiene
Una dichiarazione `Custom Event` deve avere la dichiarazione `RaiseEvent` con la stessa firma del tipo delegato specificato dalla clausola `As` dell'evento personalizzato.  
  
 Affinché le firme corrispondano, è necessario che la dichiarazione `RaiseEvent` e il delegato corrispondano in termini di numero e tipi di parametri.  
  
 **ID errore:** BC31137  
  
### Per correggere l'errore  
  
-   Modificare i parametri della dichiarazione `RaiseEvent` in modo che corrispondano ai parametri del tipo delegato.  
  
## Esempio  
 Questo esempio illustra un evento personalizzato con i tipi di parametro corretti per la dichiarazione `RaiseEvent`.  
  
 [!code-vb[VbVbalrEventError#2](../misc/codesnippet/VisualBasic/raiseevent-method-must-have-the-same-signature-as-the-containing-event-s-delegate-type-signature_1.vb)]  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [RaiseEvent \- eliminazione](http://msdn.microsoft.com/it-it/7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [Delegate Statement](../Topic/Delegate%20Statement.md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)