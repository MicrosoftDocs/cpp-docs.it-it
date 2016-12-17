---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Workflow.Runtime.WorkflowOwnershipException | Microsoft Docs"
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
  - "EHWRWorkflowOwnership"
helpviewer_keywords: 
  - "System.Workflow.Runtime.WorkflowOwnershipException (eccezione)"
  - "WorkflowOwnershipException (eccezione)"
ms.assetid: 20291283-dfc8-4e34-b84d-f380e04be376
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Workflow.Runtime.WorkflowOwnershipException
Quando il motore di runtime del flusso di lavoro tenta di caricare un'istanza del flusso di lavoro attualmente caricata da un'altra istanza del motore di runtime del flusso di lavoro, viene generata un'eccezione <xref:System.Workflow.Runtime.WorkflowOwnershipException>. Inoltre, questa eccezione viene generata quando il motore di runtime del flusso di lavoro tenta di salvare un flusso di lavoro dopo che è scaduto il timeout di proprietà specificato durante il caricamento del flusso di lavoro.  
  
## Vedere anche  
 <xref:System.Workflow.Runtime.WorkflowOwnershipException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)