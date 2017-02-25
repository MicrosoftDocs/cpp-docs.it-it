---
title: "CAtlServiceModuleT::Handler Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CServiceModule::Handler"
  - "CServiceModule.Handler"
  - "Handler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Handler method"
ms.assetid: 14db5f2a-be87-4774-a296-445cb6fc7b2e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# CAtlServiceModuleT::Handler Function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`CAtlServiceModuleT::Handler` è la routine che l'amministratore \(SCM\) del controllo del servizio chiama per recuperare lo stato del servizio e per le diverse istruzioni \(come interrompere o sospendere\).  La Gestione controllo servizi passa un codice operativo a `Handler` per indicare il servizio deve eseguire.  Un servizio ATL\- generato impostazione predefinita gestisce solo l'istruzione stop.  Se la Gestione controllo servizi passa l'istruzione stop, il servizio indica alla Gestione controllo servizi che il programma sta perinterruzione.  Il servizio viene quindi chiamato `PostThreadMessage` per inserire un messaggio terminato da se stesso.  Si termina il ciclo di messaggi e il servizio infine si chiuderà.  
  
 Per gestire le ulteriori istruzioni, è necessario modificare il membro dati `m_status` inizializzato nel costruttore `CAtlServiceModuleT`.  Questo membro dati indica alla Gestione controllo servizi quali pulsanti per abilitare quando il servizio viene selezionato nell'applicazione del Pannello di controllo servizi.  
  
## Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT::Handler](../Topic/CAtlServiceModuleT::Handler.md)