---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IdentityModel.Selectors.PolicyValidationException | Microsoft Docs"
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
  - "PolicyValidationException (eccezione)"
  - "System.IdentityModel.Selectors.PolicyValidationException (eccezione)"
ms.assetid: 510c7698-a12b-4bcb-a9d8-87c704b62ffa
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IdentityModel.Selectors.PolicyValidationException
Quando i criteri forniti dal destinatario non possono essere convalidati, viene generata un'eccezione <xref:System.IdentityModel.Selectors.PolicyValidationException>. Per altre informazioni sui requisiti dei criteri, vedere il [riferimento tecnico per Information Card Profile V1.0](http://go.microsoft.com/fwlink/?LinkID=102401).  
  
 Il contenuto no valido dei criteri può causare questo errore. Tra i problemi comuni di contenuto dei criteri vi sono i seguenti:  
  
-   Tipo di chiave non valido  
  
-   Dimensione di chiave non valida  
  
-   XML non valido  
  
-   Nessuna attestazione specificata nei criteri \(occorre specificare almeno un'attestazione non facoltativa\).  
  
## Vedere anche  
 <xref:System.IdentityModel.Selectors.PolicyValidationException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)