---
title: "Risoluzione dei problemi relativi alle eccezioni: System.ServiceModel.ServerTooBusyException | Microsoft Docs"
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
  - "System.ServiceModel.ServerTooBusyException (eccezione)"
  - "ServerTooBusyException (eccezione)"
ms.assetid: 80eb606a-ab3c-48af-b747-c9902989a059
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.ServiceModel.ServerTooBusyException
Quando un server è troppo occupato per poter accettare un messaggio, viene generata un'eccezione <xref:System.ServiceModel.ServerTooBusyException>.  
  
## Note  
 Questa eccezione deriva dall'oggetto <xref:System.ServiceModel.CommunicationException> che rappresenta una classe di errori reversibili che possono essere generati durante la comunicazione tra endpoint. Queste eccezioni vengono gestite da applicazioni client affidabili e da applicazioni [!INCLUDE[vsindigo](../misc/includes/vsindigo_md.md)] di servizio. Per impedire a un gestore dell'oggetto <xref:System.ServiceModel.CommunicationException> di intercettare l'oggetto <xref:System.ServiceModel.ServerTooBusyException> più specifico, intercettare questa eccezione prima di gestire l'oggetto <xref:System.ServiceModel.CommunicationException>.  
  
## Vedere anche  
 <xref:System.ServiceModel.ServerTooBusyException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)