---
title: "MAPI | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "posta elettronica, abilitazione"
  - "abilitazione delle applicazioni per la posta"
  - "abilitazione delle applicazioni per MAPI"
  - "posta, abilitazione dell'applicazione"
  - "supporto MAPI in MFC"
  - "MAPI, MFC"
  - "messaggistica, applicazioni client"
ms.assetid: 193449f7-b131-4ab0-9301-8d4f6cd1e7c4
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# MAPI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato Messaging Application Programming Interface \(MAPI\) di Microsoft per gli sviluppatori di applicazioni message client.  MFC fornisce supporto a un sottoinsieme di MAPI nella classe **CDocument** ma non include l'intero API.  Per ulteriori informazioni, vedere [MAPI Support in MFC](../mfc/mapi-support-in-mfc.md).  
  
 MAPI è un insieme di funzioni che le applicazioni abilitate alla posta e le applicazioni consapevoli utilizzano per creare, modificare, trasferire e archiviare i messaggi di posta elettronica.  Offre agli sviluppatori di applicazioni gli strumenti per definire lo scopo e il contenuto dei messaggi di posta elettronica e assegna flessibilità nella gestione dei messaggi di posta elettronica archiviati.  MAPI inoltre fornisce un'interfaccia comune che gli sviluppatori di applicazioni possono utilizzare per creare applicazioni abilitate alla posta elettronica indipendentemente dal sistema di messaggistica sottostante.  
  
 I client di messaggistica forniscono un'interfaccia umana per l'interazione con il sistema di messaggistica \(WMS\) di Microsoft Windows.  Questa interazione include in genere la richiesta di servizi dai provider conformi MAPI come gli archivi messaggi e le rubriche.  
  
 Per ulteriori informazioni su MAPI, vedere gli articoli nella guida in Win32 Messaging \(MAPI\) di [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Argomenti della sezione  
 [Supporto MAPI in MFC](../mfc/mapi-support-in-mfc.md)  
  
## Vedere anche  
 [CDocument::OnFileSendMail](../Topic/CDocument::OnFileSendMail.md)   
 [CDocument::OnUpdateFileSendMail](../Topic/CDocument::OnUpdateFileSendMail.md)   
 [COleDocument::OnFileSendMail](../Topic/COleDocument::OnFileSendMail.md)