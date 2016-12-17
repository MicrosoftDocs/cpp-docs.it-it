---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Workflow.Activities.EventDeliveryFailedException | Microsoft Docs"
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
  - "EHWAEventDeliveryFailed"
helpviewer_keywords: 
  - "System.Workflow.Activities.EventDeliveryFailedException (eccezione)"
  - "EventDeliveryFailedException (eccezione)"
ms.assetid: 85ee2cb8-5cd1-4878-9421-2a78614e819f
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Workflow.Activities.EventDeliveryFailedException
Quando un evento generato dall'host non può essere recapitato all'istanza del flusso di lavoro, viene generata un'eccezione <xref:System.Workflow.Activities.EventDeliveryFailedException>. In genere, l'evento viene generato da un oggetto <xref:System.Workflow.Activities.ExternalDataExchangeService> in un'istanza del flusso di lavoro. Questa classe non può essere ereditata.  
  
## Note  
 La stringa seguente viene aggiunta al registro eventi quando viene generata questa eccezione: `Event '{1}' on interface type '{0}' for instance id '{2}' cannot be delivered`.  
  
 Quando si utilizza un flusso di lavoro macchina a stati, è possibile ricevere un'eccezione con il messaggio `Queue '{0}' is not enabled`. Ciò accade quando lo stato corrente della macchina a stati non è in grado di gestire un evento specifico. Ad esempio, il messaggio si presenta quando uno stato diverso da quello corrente contiene l'oggetto <xref:System.Workflow.Activities.EventDrivenActivity> che a propria volta contiene l'oggetto <xref:System.Workflow.Activities.HandleExternalEventActivity> rappresentato dalla coda `'{0}'`.  
  
## Vedere anche  
 <xref:System.Workflow.Activities.EventDeliveryFailedException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)