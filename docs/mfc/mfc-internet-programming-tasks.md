---
title: "Attivit&#224; di programmazione Internet MFC | Microsoft Docs"
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
  - "applicazioni Internet, per iniziare"
  - "applicazioni Internet, introduzione"
ms.assetid: 6377e9b8-07c4-4380-b63b-05f5a9061313
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Attivit&#224; di programmazione Internet MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa sezione contiene le procedure dettagliate per l'aggiunta del supporto internet alle applicazioni.  Gli argomenti trattati includono come utilizzare le classi MFC ma per abilitare le applicazioni esistenti e come aggiungere il supporto del documento attivo al componente COM esistente.  Si desidera creare un documento con i punteggi dell'ultimo minuto di calcio di Pittsburgh, stock quotes e l'ultima temperatura in Antartide?  Microsoft offre numerose tecnologie che consentono a quello in Internet.  
  
 Le tecnologie attive sono inclusi i controlli ActiveX \(precedentemente controlli OLE\) e documenti attivi; WinInet per i file facilmente recuperare e di salvataggio tramite internet; e moniker asincroni per il download efficiente di dati.  Visual C\+\+ sono disponibili procedure guidate per iniziare rapidamente con un'applicazione iniziali.  Per un'introduzione a queste tecnologie, vedere [Fondamentali della programmazione per Internet MFC](../mfc/mfc-internet-programming-basics.md) e [COM DI MFC](../mfc/mfc-com.md).  
  
 È sempre desiderava a FTP un file ma non sono state protocolli di programmazione di rete e Winsock?  Le classi di WinInet incapsulano i protocolli, fornendo è un insieme di funzioni semplice che è possibile utilizzare per scrivere un'applicazione client su internet i file scaricati tramite HTTP, FTP e il gopher.  È possibile utilizzare WinInet per trovare le directory sul disco rigido o di tutto il mondo.  È trasparente raccogliere dati di diversi tipi e lo visualizzate all'utente in un'interfaccia integrata.  
  
 Si dispone di una grande quantità di dati da scaricare?  I moniker asincroni forniscono una soluzione COM \(Component Object Model\) per il rendering progressivo di oggetti grandi.  WinInet può essere utilizzato in modo asincrono.  
  
 Nella tabella seguente vengono descritte alcune delle possibili operazioni eseguibili con queste tecnologie.  
  
|Stato|Si desidera|È consigliabile|  
|-----------|-----------------|---------------------|  
|Un server Web.|Accessi e dettagliate track sulle richieste di URL.|Scrivere un filtro, le notifiche di richiesta per gli eventi di accesso e il mapping degli URL.|  
|Un browser.|Immettere il contenuto dinamico.|Creare i controlli ActiveX e documenti attivi.|  
|Un'applicazione basata su documento.|Aggiungere il supporto a FTP un file.|Utilizzare WinInet o i moniker asincroni.|  
  
 Vedere gli argomenti seguenti per informazioni dettagliate si ottengano avvio:  
  
-   [Scelte di progetto applicazione](../mfc/application-design-choices.md)  
  
-   [Applicazioni MFC di scrittura](../mfc/writing-mfc-applications.md)  
  
-   [Controlli ActiveX in internet](../mfc/activex-controls-on-the-internet.md)  
  
-   [Aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md)  
  
-   [Documenti attivi su internet](../mfc/active-documents-on-the-internet.md)  
  
-   [Moniker asincroni in internet](../mfc/asynchronous-monikers-on-the-internet.md)  
  
-   [Applicazioni internet di test](../mfc/testing-internet-applications.md)  
  
-   [Internet Security](../mfc/internet-security-cpp.md)  
  
## Vedere anche  
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)   
 [Informazioni Internet per attività](../mfc/internet-information-by-task.md)