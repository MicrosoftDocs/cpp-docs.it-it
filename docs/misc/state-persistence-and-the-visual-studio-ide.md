---
title: "Persistenza dello stato e IDE di Visual Studio | Microsoft Docs"
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
  - "impostazioni IDE, persistenza dello stato"
  - "impostazioni utente [Visual Studio SDK], persistenza"
  - "pagine Opzioni del menu Strumenti [Visual Studio SDK], impostazioni di persistenza"
  - "IDE, persistenza dello stato"
  - "persistenza, impostazioni utente"
ms.assetid: fdd49bb1-ed3b-4428-b685-de65c3215c1c
caps.latest.revision: 24
caps.handback.revision: 24
manager: "douge"
---
# Persistenza dello stato e IDE di Visual Studio
Il comando di **Impostazioni esportazione\/importazione** scegliere dal menu di **strumenti** dell'ambiente di \(IDE\) sviluppo integrato \(IDE\) include ed esporta le personalizzazioni dell'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Le API di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] in [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] consentono a un VSPackage per definire una o più categorie di impostazioni \(gruppi di variabili di stato\) da mantenere quando un utente sceglie il comando di **Impostazioni esportazione\/importazione** .  
  
 Un GUID identifica in modo univoco ogni impostazione di categoria e viene definito nella rispettiva voce del Registro di sistema, detta *un punto di impostazioni personalizzato*.  
  
> [!NOTE]
>  Le implementazioni standard delle pagine di **strumentiopzioni** , di **Casella degli strumenti**e di `Microsoft.VisualStudio.Shell.DialogPage` automaticamente forniscono supporto della persistenza.  Le API possono eseguire l'override del meccanismo predefinito.  Per ulteriori informazioni, vedere [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md), [Pagine Opzioni](../misc/options-pages.md) e <xref:Microsoft.VisualStudio.Shell.DialogPage>.  
  
## In questa sezione  
 [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md)  
 Vengono descritte le impostazioni del Registro di sistema \(punto di impostazioni personalizzato\) e gli attributi utilizzati per specificare un'implementazione delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] utilizzata da un VSPackage specificato.  
  
 [Procedura: Esportare impostazioni tramite assembly di interoperabilità](../misc/how-to-export-settings-by-using-interop-assemblies.md)  
 Viene fornita una descrizione dettagliata di come implementare il supporto per i dati di configurazione di salvataggio utilizzando il meccanismo delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per Vspackage basato assembly di interoperabilità.  
  
 [Procedura: Usare assembly di interoperabilità per importare impostazioni](../misc/how-to-use-interop-assemblies-to-import-settings.md)  
 Viene fornita una descrizione dettagliata di come implementare il supporto per il recupero dei dati di configurazione utilizzando il meccanismo delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per Vspackage basato assembly di interoperabilità.  
  
 [Esportazione delle impostazioni](../misc/exporting-settings.md)  
 Include una descrizione dettagliata di come implementare il supporto per i dati di configurazione di salvataggio utilizzando il meccanismo delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per il pacchetto Vspackage gestito basato Framework.  
  
 [Importazione delle impostazioni](../misc/importing-settings.md)  
 Viene fornita una descrizione dettagliata di come implementare il supporto per il recupero dei dati di configurazione utilizzando il meccanismo delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per il pacchetto Vspackage gestito basato Framework.  
  
## Sezioni correlate  
 [Working with Settings](http://msdn.microsoft.com/it-it/4c0a56ab-6091-4ebc-9dc7-52c40846bacb)  
 Viene descritto come gestire le sezioni importazione\/esportazione dell'IDE.  
  
 [Pagine Opzioni](../misc/options-pages.md)  
 Viene descritto il supporto che [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] fornisce automaticamente per gestire nuove pagine esistenti o crearne di **strumentiopzioni** .  
  
 [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md)  
 Viene illustrato il supporto che [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] fornisce automaticamente per gestire o l'estensione del **Casella degli strumenti**.  
  
 [Opzioni e impostazioni utente estensione](../Topic/Extending%20User%20Settings%20and%20Options.md)  
 Viene illustrato come programmare il package VS ottenere e mantenere le preferenze dell'utente.