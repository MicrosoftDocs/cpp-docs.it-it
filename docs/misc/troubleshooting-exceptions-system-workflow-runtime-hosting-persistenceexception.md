---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Workflow.Runtime.Hosting.PersistenceException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHWRHPersistence"
helpviewer_keywords: 
  - "PersistenceException (eccezione)"
  - "System.Workflow.Runtime.Hosting.PersistenceException (eccezione)"
ms.assetid: cb2fb820-f990-4728-9a7f-5ec6fd8d5b10
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Workflow.Runtime.Hosting.PersistenceException
Quando il servizio di persistenza non può adempiere a una richiesta, viene generata un'eccezione <xref:System.Workflow.Runtime.Hosting.PersistenceException>.  
  
## Note  
 L'oggetto <xref:System.Workflow.Runtime.Hosting.SqlWorkflowPersistenceService> genera un'eccezione <xref:System.Workflow.Runtime.Hosting.PersistenceException> se non riesce a completare una richiesta di esecuzione del commit di un ambito completo o dello stato dell'istanza del flusso di lavoro al database.  
  
 Se si implementa un servizio di persistenza derivandolo dalla classe <xref:System.Workflow.Runtime.Hosting.WorkflowPersistenceService> o dalla classe <xref:System.Workflow.Runtime.Hosting.SqlWorkflowPersistenceService>, è possibile generare l'eccezione <xref:System.Workflow.Runtime.Hosting.PersistenceException> con un messaggio appropriato per indicare una condizione di errore, incontrata dal servizio, che impedisce l'adempimento di una richiesta effettuata dal motore di runtime del flusso di lavoro.  
  
 Per altre informazioni, vedere <xref:System.Workflow.Runtime.Hosting.WorkflowPersistenceService>.  
  
## Vedere anche  
 <xref:System.Workflow.Runtime.Hosting.PersistenceException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)