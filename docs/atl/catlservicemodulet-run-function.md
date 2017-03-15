---
title: "CAtlServiceModuleT::Run Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CServiceModule::Run"
  - "CServiceModule.Run"
  - "CSecurityDescriptor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL services, sicurezza"
ms.assetid: 42c010f0-e60e-459c-a63b-a53a24cda93b
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# CAtlServiceModuleT::Run Function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Esegui** contiene chiamate a `PreMessageLoop`, a `RunMessageLoop`e a `PostMessageLoop`.  Dopo essere stato chiamato, `PreMessageLoop` innanzitutto archivia l'id del thread del servizio  Il servizio utilizzerà questo ID per chiudere inviando un messaggio **WM\_QUIT** utilizzando la funzione API Win32, [PostThreadMessage](http://msdn.microsoft.com/library/windows/desktop/ms644946).  
  
 `PreMessageLoop` chiama quindi `InitializeSecurity`.  Per impostazione predefinita, `InitializeSecurity` chiama [CoInitializeSecurity](http://msdn.microsoft.com/library/windows/desktop/ms693736) con il descrittore di sicurezza impostato SU NULL, ovvero qualsiasi utente ha accesso all'oggetto.  
  
 Se non si desidera che il servizio per specificare la propria sicurezza, l'override `PreMessageLoop` e non chiamano `InitializeSecurity`e COM quindi determinerà le impostazioni di sicurezza dal Registro di sistema.  Un modo pratico per configurare le impostazioni del Registro di sistema è l'utilità [DCOMCNFG](../atl/dcomcnfg.md) discussa più avanti in questa sezione.  
  
 Una volta che la sicurezza è specificata, viene registrato con COM in modo da poter connettere i nuovi client al programma.  Infine, il programma indica all'amministratore \(SCM\) del controllo del servizio in esecuzione e il programma immette un ciclo di messaggi.  Il programma rimane in esecuzione fino a inserire un messaggio dall'arresto del servizio.  
  
## Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CSecurityDesc Class](../atl/reference/csecuritydesc-class.md)   
 [CSid Class](../atl/reference/csid-class.md)   
 [CDacl Class](../atl/reference/cdacl-class.md)   
 [CAtlServiceModuleT::Run](../Topic/CAtlServiceModuleT::Run.md)