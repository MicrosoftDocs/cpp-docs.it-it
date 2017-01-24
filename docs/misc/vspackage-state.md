---
title: "Stato di un pacchetto VSPackage | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "stato, VSPackage"
  - "VSPackage, gestione dello stato dell'applicazione"
  - "persistenza dello stato"
ms.assetid: 6056a9ea-e7a8-481c-9fc8-340229fa12d9
caps.latest.revision: 25
caps.handback.revision: 25
manager: "douge"
---
# Stato di un pacchetto VSPackage
Molti fattori determinano l'insieme di valori salvati, o lo stato, di un'applicazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  
  
-   I progetti sono proprietà di configurazione e di progetto.  
  
-   Le soluzioni dispongono di proprietà.  
  
-   Le impostazioni utente determinano la dimensione e la posizione delle finestre di documento, finestre degli strumenti, ancoraggio dello stato e di scelta rapida.  
  
-   Le applicazioni possono presentare opzioni set di tale utente.  
  
-   Gli oggetti che viene creato da un'applicazione possono disporre di proprietà propri.  
  
 Di seguito sono riportati alcuni metodi dello stato dell'applicazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] può essere gestito:  
  
-   Tramite le pagine delle proprietà di progetto e soluzione.  
  
-   Con **Procedura guidata per le impostazioni di importazione ed esportazione**, che consente a un utente di spostare le impostazioni da un computer a un altro.  
  
-   Tramite la finestra di dialogo di **opzioni** , che include le opzioni correlate alle applicazioni.  
  
-   Tramite la finestra di **Proprietà** , che espone le proprietà degli oggetti.  
  
-   con automazione.  Un'applicazione può accedere a un VSPackage gli oggetti e le proprietà che sono state esposte all'automazione.  
  
 È alla base dello stato applicazione essere diversi meccanismi di persistenza che consentono lo stato dell'applicazione da salvare e ripristinare.  
  
## In questa sezione  
 [Supporto per la persistenza dello stato](../misc/support-for-state-persistence.md)  
 Vengono elencate le strategie comuni per salvare, il ripristino e reimpostare lo stato di un VSPackage.  
  
 [Opzioni e le pagine di opzioni](../Topic/Options%20and%20Options%20Pages.md)  
 Vengono illustrate le pagine generali e personalizzate di opzioni e viene illustrato come implementarli.  
  
 [Creazione di una pagina di opzioni](../Topic/Creating%20an%20Options%20Page.md)  
 Viene spiegato come personalizzare le finestre del codice utilizzando le API legacy.  
  
 [Supporto per le categorie di impostazioni](../misc/support-for-settings-categories.md)  
 Vengono illustrate le impostazioni utente e come vengono create e rese persistenti.  
  
 [Creazione di una categoria di impostazioni](../Topic/Creating%20a%20Settings%20Category.md)  
 Viene illustrato come creare una categoria di impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e utilizzarla per salvare i valori e per ripristinare i valori da un file di impostazioni.  
  
 [Estensione di proprietà e la finestra proprietà](../Topic/Extending%20Properties%20and%20the%20Property%20Window.md)  
 Viene illustrato come visualizzare e modificare il valore di un oggetto nella finestra di **Proprietà** .  
  
 [Esposizione di proprietà nella finestra proprietà](../Topic/Exposing%20Properties%20to%20the%20Properties%20Window.md)  
 Viene illustrato come esporre le proprietà pubbliche di un oggetto nella finestra di **Proprietà** .  
  
 [Supporto per il progetto e le proprietà di configurazione](../Topic/Support%20for%20Project%20and%20Configuration%20Properties.md)  
 Viene illustrato come visualizzare e modificare le proprietà di configurazione e di progetto.  
  
 [Recupero delle proprietà di progetto](../Topic/Getting%20Project%20Properties.md)  
 Guida nei passaggi di creare un VSPackage gestito che visualizza le proprietà del progetto in una finestra degli strumenti.  
  
 [Utilizzo dell'archivio impostazioni](../Topic/Using%20the%20Settings%20Store.md)  
 Viene illustrato il meccanismo di persistenza delle impostazioni e le modalità per utilizzarla.  
  
## Sezioni correlate  
 [Package VS](../Topic/VSPackages.md)  
 Fornisce un orientamento generale ad argomenti che spiegano come creare e utilizzare Vspackage.