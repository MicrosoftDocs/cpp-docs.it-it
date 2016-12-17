---
title: "Risoluzione dei problemi relativi alle eccezioni: System.AccessViolationException | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.AccessViolationException (eccezione)"
  - "AccessViolationException (classe)"
ms.assetid: 7f09315d-8aad-4ab1-8b5e-21a8c97f6c14
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.AccessViolationException
Un'eccezione <xref:System.AccessViolationException> viene generata quando viene eseguito un tentativo di leggere o scrivere nella memoria protetta.  
  
## Suggerimenti associati  
 Assicurarsi che la memoria a cui si sta tentando di accedere sia stata allocata.  
 La gestione automatica della memoria è uno dei servizi forniti da Common Language Runtime. Si consiglia di spostare il codice gestito per usufruire di questo servizio. Per altre informazioni, vedere [Gestione automatica della memoria](../Topic/Automatic%20Memory%20Management.md).  
  
 Assicurarsi che la memoria a cui si sta tentando di accedere non sia danneggiata.  
 Se sono state eseguite numerose operazioni di lettura o scrittura tramite puntatori non validi, è possibile che la memoria sia danneggiata.  
  
### Note  
 Quando il codice non gestito o unsafe tenta di leggere o scrivere in aree di memoria che non sono state allocate o alle quali il codice non ha accesso, si verifica una violazione di accesso. Poiché non tutte le operazioni di lettura o scrittura tramite puntatori non validi generano violazioni di accesso, quando si verifica una violazione di accesso in genere significa che sono state eseguite numerose operazioni di lettura o scrittura tramite puntatori non validi e che la memoria potrebbe essere danneggiata.  
  
 Nel codice gestito tutti i riferimenti hanno un valore valido o null. Qualsiasi operazione che tenta di utilizzare un riferimento con valore null in codice verificabile genera un'eccezione <xref:System.NullReferenceException>.  
  
 Una violazione di accesso che si verifica in codice gestito unsafe può essere espressa come <xref:System.NullReferenceException> o <xref:System.AccessViolationException> in base alla piattaforma.  
  
 Le violazioni di accesso in codice non gestito che vengono propagate a codice gestito sono sempre espresse come <xref:System.AccessViolationException>.  
  
## Vedere anche  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Gestione della memoria: esempi](../mfc/memory-management-examples.md)   
 [Gestione automatica della memoria](../Topic/Automatic%20Memory%20Management.md)