---
title: "CAtlServiceModuleT::ServiceMain Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ServiceMain"
  - "CServiceModule::ServiceMain"
  - "CServiceModule.ServiceMain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ServiceMain method"
ms.assetid: f21408c1-1919-4dec-88d8-bf5b39ac9808
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# CAtlServiceModuleT::ServiceMain Function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'amministratore \(SCM\) del controllo del servizio chiama `ServiceMain` quando si apre l'applicazione del Pannello di controllo servizi, selezionare il servizio e scegliere **Avvia**.  
  
 Dopo la Gestione controllo servizi chiama `ServiceMain`, un servizio deve fornire la Gestione controllo servizi una funzione di gestione.  Questa funzione consente la Gestione controllo servizi ottenere lo stato del servizio e passare le istruzioni specifiche \(come sospendere o arrestare\).  La Gestione controllo servizi ottiene la funzione quando le sessioni **\_Handler** alla funzione API Win32, [RegisterServiceCtrlHandler](http://msdn.microsoft.com/library/windows/desktop/ms685054)di servizio.  \(**\_Handler** è una funzione membro static che chiama la funzione membro [gestore](../atl/catlservicemodulet-handler-function.md)di non statico.\)  
  
 All'avvio, un servizio deve inoltre fornire la Gestione controllo servizi il relativo stato corrente.  In questo passaggio **SERVICE\_START\_PENDING** alla funzione API Win32, [SetServiceStatus](http://msdn.microsoft.com/library/windows/desktop/ms686241).  
  
 `ServiceMain` chiama quindi `CAtlExeModuleT::InitializeCom`, che chiama la funzione [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279)API Win32.  Per impostazione predefinita, `InitializeCom` passa il flag **COINIT\_MULTITHREADED** alla funzione.  Questo flag indica che il programma è necessario un server a thread libero.  
  
 Ora, `CAtlServiceModuleT::Run` viene chiamato per eseguire le attività principali del servizio.  **Esegui** continua l'esecuzione fino alla chiusura del servizio.  
  
## Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT::ServiceMain](../Topic/CAtlServiceModuleT::ServiceMain.md)