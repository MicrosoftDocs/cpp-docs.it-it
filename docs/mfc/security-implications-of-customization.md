---
title: "Implicazioni relative alla sicurezza della personalizzazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC Feature Pack, sicurezza"
  - "sicurezza, MFC Feature Pack"
ms.assetid: 9be96b12-be38-43bd-a133-5d671265f7a1
caps.latest.revision: 14
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implicazioni relative alla sicurezza della personalizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrata una password potenziale di sicurezza in MFC.  
  
## Debolezza potenziale di sicurezza  
 MFC consente l'utente personalizza l'aspetto dell'interfaccia utente dell'applicazione, ad esempio, l'aspetto dei pulsanti e icone.  MFC supporta inoltre gli strumenti definiti dall'utente, che consentono ai controlli della shell di esecuzione dell'utente.  Vulnerabilità di sicurezza viene visualizzato poiché le impostazioni personalizzate dell'applicazione vengono salvate nel profilo utente nel Registro di sistema.  Chiunque possa accedere al Registro di sistema può modificare tali impostazioni e modificare l'aspetto o il comportamento dell'applicazione.  Ad esempio, un amministratore del computer potrebbe rappresentare un utente causa dell'applicazione utente eseguire programmi arbitrari \(anche da una condivisione di rete.  
  
## Soluzioni  
 Si consiglia uno di questi tre modalità chiudere le vulnerabilità nel Registro di sistema:  
  
-   Crittografare i dati archiviati in  
  
-   Archiviare i dati in un file protetto anziché nel Registro di sistema.  
  
     Per eseguire una delle prime due modalità, derivare una classe da [CSettingsStore Class](../mfc/reference/csettingsstore-class.md) ed eseguire l'override dei metodi per implementare la crittografia o l'archiviazione all'esterno del Registro di sistema.  
  
-   È inoltre possibile disattivare le personalizzazioni nell'applicazione.  
  
## Vedere anche  
 [Personalizzazione per MFC](../mfc/customization-for-mfc.md)