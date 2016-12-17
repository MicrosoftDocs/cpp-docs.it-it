---
title: "Risoluzione dei problemi relativi alle eccezioni: System.ServiceModel.ServiceActivationException | Microsoft Docs"
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
  - "ServiceActivationException (eccezione)"
  - "System.ServiceModel.ServiceActivationException (eccezione)"
ms.assetid: 32a3ea87-d6da-40bf-ba04-e862ac122391
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.ServiceModel.ServiceActivationException
Quando non si riesce ad attivare un servizio, viene generata un'eccezione <xref:System.ServiceModel.ServiceActivationException>.  
  
## Note  
 Questa eccezione deriva dall'eccezione <xref:System.ServiceModel.CommunicationException> che rappresenta una classe di errori reversibili che possono essere generati durante la comunicazione tra endpoint e che vengono gestite da applicazioni client affidabili e da applicazioni di servizio [!INCLUDE[vsindigo](../misc/includes/vsindigo_md.md)]. Per impedire al gestore <xref:System.ServiceModel.CommunicationException> generico di intercettare l'eccezione <xref:System.ServiceModel.ActionNotSupportedException> più specifica, intercettare questa eccezione prima di gestire l'eccezione <xref:System.ServiceModel.CommunicationException>.  
  
## Vedere anche  
 <xref:System.ServiceModel.ServiceActivationException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)