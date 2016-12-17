---
title: "Impostazioni applicazione, Creazione guidata progetto ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.atl.com.appset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata progetto ATL, impostazioni applicazione"
ms.assetid: d48c9fc5-f439-49fd-884c-8bcfa7d52991
caps.latest.revision: 17
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Impostazioni applicazione, Creazione guidata progetto ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per progettare e aggiungere funzionalità di base per un nuovo progetto ATL, utilizzare la pagina **Impostazioni applicazione** della Creazione guidata progetto ATL.  
  
## Tipo di server  
 È possibile selezionare uno dei tre tipi di server riportati di seguito.  
  
 **Libreria a collegamento dinamico \(DLL\)**  
 Selezionare questa opzione per creare un server in\-process.  
  
 **Eseguibile \(EXE\)**  
 Selezionare questa opzione per creare un server out\-of\-process locale.  Questa opzione non consente il supporto di MFC o COM\+ 1.0,  né il merge con il codice proxy\/stub.  
  
 **Servizio \(EXE\)**  
 Selezionare questa opzione per creare un'applicazione Windows eseguita in background all'avvio di Windows.  Questa opzione non consente il supporto di MFC o COM\+ 1.0, né il merge con il codice proxy\/stub.  
  
## Opzioni aggiuntive  
  
> [!NOTE]
>  Tutte le opzioni aggiuntive sono disponibili soltanto per i progetti DLL.  
  
 **Consenti merge di codice proxy\/stub**  
 La selezione della casella di controllo **Consenti merge di codice proxy\/stub** può essere utile quando è richiesto il marshalling delle interfacce.  Con questa opzione, il codice stub e proxy generato da MIDL viene inserito nello stesso eseguibile del server.  
  
 **MFC supporto tecnico**  
 Selezionare questa opzione per includere nell'oggetto il supporto di MFC.  Con questa opzione, il progetto viene collegato alle librerie MFC ed è quindi possibile accedere alle classi e alle funzioni in esse contenute.  
  
 **Supporto COM\+ 1.0**  
 Selezionare questa opzione per modificare le impostazioni di compilazione del progetto in modo da supportare i componenti COM\+ 1.0.  Oltre all'elenco standard di librerie, la creazione guidata aggiunge la libreria specifica dei componenti COM\+ 1.0 comsvcs.lib.  
  
 All'avvio dell'applicazione, viene inoltre eseguito il caricamento ritardato della libreria mtxex.dll sul sistema host.  
  
-   **Il registrar di registrar del componente di supporto** Se il progetto ATL fornisce supporto per i componenti COM\+ 1,0, è possibile impostare questa opzione.  La funzionalità di registrazione dei componenti consente all'oggetto COM\+ 1.0 di ottenere un elenco dei componenti ed effettuarne o annullarne la registrazione, singolarmente o globalmente.  
  
## Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)   
 [Configurazioni predefinite di progetti ATL](../../atl/reference/default-atl-project-configurations.md)