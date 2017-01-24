---
title: "Architettura di estendibilit&#224; di Visual Studio | Microsoft Docs"
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
  - "Visual Studio, modello di ambiente"
  - "modello di ambiente, Visual Studio"
ms.assetid: 280fdb55-3e70-41fd-8da0-4039bf5d4894
caps.latest.revision: 17
caps.handback.revision: 17
manager: "douge"
---
# Architettura di estendibilit&#224; di Visual Studio
L'ambiente di sviluppo integrato di \(IDE\) [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è un framework per ospitare Vspackage e per semplificare lo scambio dei servizi condivisi.  Un esempio è la modalità che l'ide implementa l'interfaccia utente \(UI\).  L'ide fornisce la finestra contenitore e barre degli strumenti e menu predefiniti.  Sono inoltre disponibili i ricco l'infrastruttura COM che rende interfaccia utente programmabile.  La combinazione completa di gestione e di routing del comando consente agli utenti un framework aperto che l'accesso semplificato di contiene sia agli insiemi esistenti che siano installati del comando.  
  
## Architettura di estensibilità  
 Nella figura seguente viene illustrata l'architettura di estensibilità di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Si noti che il concetto dell'applicazione software è presente.  Invece, l'ide ospita i componenti software, denominati VSPackages, che forniscono la funzionalità dell'applicazione.  Questa funzionalità, a sua volta, è condivisa tramite l'ide come servizi.  Servizi offrono di package VS che esso e altro utilizzo di Vspackage.  L'ide standard è inoltre disponibile una vasta gamma di servizi, ad esempio <xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell>, che consentono di accedere alla funzionalità di utilizzo delle finestre dell'IDE.  
  
 ![Rappresentazione grafica dell'architettura dell'ambiente](../misc/media/environment.png "environment")  
Visualizzazione generalizzata dell'architettura di Visual Studio  
  
 Si noti che la relazione tra Vspackage e servizi è bidirezionale.  Sebbene i servizi di utilizzo di package VS forniscano da altri, anche possono offrire servizi propri tramite l'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IProfferService> .  Questa architettura basata su servizi è compilata dall'implementazione della finestra di progettazione di Microsoft ActiveX, in cui un servizio è un gruppo di interfacce correlate che eseguono un'attività.  Da un punto di vista rigido COM, tutte le interfacce di un particolare servizio devono essere implementate in una singola classe COM.  
  
 L'ide standard sono disponibili i risultati finali principali, come <xref:Microsoft.VisualStudio.Shell.Interop.SVsShell>, <xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell>e <xref:Microsoft.VisualStudio.Shell.Interop.SVsSolution>, utilizzati da Vspackage.  Nella tabella seguente sono elencati e descritti alcuni di questi servizi.  Per ulteriori informazioni, vedere [Utilizzo e servizi](../Topic/Using%20and%20Providing%20Services.md).  
  
|Servizio dell'IDE|Descrizione|  
|-----------------------|-----------------|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsShell>|Fornisce l'accesso ai servizi dell'IDE che si occupano della funzionalità di base, di Vspackage e del Registro di sistema.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell>|Fornisce l'utilizzo di windows di base e la funzionalità Interfaccia dell'IDE, ad esempio la possibilità di creare strumenti e le finestre del documento.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsSolution>|Fornisce la funzionalità soluzione\-correlata base, come la capacità di enumerare i progetti, creare nuovi progetti e le modifiche di progetto del monitor.|  
  
 Grazie alla loro stretta integrazione con l'interazione di servizi condivisi, l'ide di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e il package VS sono strettamente interdipendenti.  Tuttavia, gli sviluppatori possono definire più livelli e inserirle in relazione all'altro.  
  
 L'ide di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è responsabile delle attività seguenti:  
  
-   Fornire servizi critici per l'utilizzo di package VS esterno.  
  
-   Creazione di un'interfaccia programmabile, che consente la partecipazione agli elementi standard dell'interfaccia utente.  
  
-   La creazione di istanze di package VS secondo le esigenze di azioni dell'utente o da un altro package VS che richiedono i servizi.  
  
-   Fornendo servizi che lo consentono per la comunicazione e la coordinazione tra Vspackage.  
  
-   La gestione di soluzioni e i file necessari.  
  
-   Fornire la gestione della finestra.  
  
-   Fornendo routing dei comandi e le barre dei controlli, ad esempio i menu, barre degli strumenti e menu di scelta rapida.  
  
-   Coordinare selezione, contesto e restituisce.  
  
 Vspackage è responsabile delle attività seguenti:  
  
-   Eseguire determinate procedura di inizializzazione e terminazione.  
  
-   Informazioni di scrittura sul Registro di sistema, che l'ide utilizza per caricare il package VS appropriato in momenti appropriati.  
  
-   Offrendo i servizi che sono obbligatori per la comunicazione con l'altro Vspackage.  
  
-   Fornendo implementazioni per i nuovi tipi di progetto, editor e finestre di progettazione.  
  
-   Fornendo le estensioni per gli elementi incorporati dell'interfaccia utente, ad esempio gli elementi attività, elementi della casella degli strumenti e la finestra di dialogo Opzioni.  
  
## Vedere anche  
 [Visual Studio Shell](../Topic/Visual%20Studio%20Shell.md)   
 [Package VS](../Topic/VSPackages.md)   
 [Utilizzo e servizi](../Topic/Using%20and%20Providing%20Services.md)   
 [Procedura: ottenere un servizio](../Topic/How%20to:%20Get%20a%20Service.md)