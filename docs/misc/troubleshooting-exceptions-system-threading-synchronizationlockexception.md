---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Threading.SynchronizationLockException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "SynchronizationLockException (eccezione)"
  - "System.Threading.SynchronizationLockException (eccezione)"
ms.assetid: 82d80643-fc5c-40ae-a579-46869772d25c
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Threading.SynchronizationLockException
Eccezione generata quando un metodo richiede che il chiamante sia il proprietario del blocco di un oggetto `Monitor` specificato e il metodo viene richiamato da un chiamante che non è il proprietario del blocco.  
  
## Note  
 Un'eccezione <xref:System.Threading.SynchronizationLockException> viene generata quando vengono chiamati i metodi <xref:System.Threading.Monitor.Exit%2A>, <xref:System.Threading.Monitor.Pulse%2A>, <xref:System.Threading.Monitor.PulseAll%2A> e <xref:System.Threading.Monitor.Wait%2A> della classe `Monitor` da un blocco di codice non sincronizzato.  
  
## Vedere anche  
 <xref:System.Threading.SynchronizationLockException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)