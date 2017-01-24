---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IdentityModel.Selectors.ServiceBusyException | Microsoft Docs"
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
  - "ServiceBusyException (eccezione)"
  - "System.IdentityModel.Selectors.ServiceBusyException (eccezione)"
ms.assetid: 88acdc6b-45ad-40c6-aa5c-3b56244edcee
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IdentityModel.Selectors.ServiceBusyException
Un'eccezione <xref:System.IdentityModel.Selectors.ServiceBusyException> viene generata per indicare che il servizio CardSpace è occupato nell'elaborazione di altre richieste. CardSpace non mette in coda le richieste e può gestire solo una richiesta alla volta.  
  
 Verificare se è in esecuzione un'altra istanza di CardSpace. In caso affermativo, terminarla arrestando il processo icardagt.exe da Gestione attività.  
  
## Vedere anche  
 <xref:System.IdentityModel.Selectors.ServiceBusyException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)