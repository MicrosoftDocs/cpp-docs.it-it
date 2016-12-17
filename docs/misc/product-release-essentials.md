---
title: "Concetti di base sul rilascio di prodotti | Microsoft Docs"
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
  - "distribuzione, concetti di base"
  - "installazione [Visual Studio SDK], concetti di base"
ms.assetid: 28370bc8-f3a7-4c5e-9b35-8331cda14ff4
caps.latest.revision: 12
caps.handback.revision: 12
manager: "douge"
---
# Concetti di base sul rilascio di prodotti
Un'esperienza di installazione piacevole e affidabile per un prodotto di integrazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] lascia negli utenti un ricordo indelebile. Anche un'esperienza di installazione spiacevole lascia un ricordo indelebile, dunque vale assolutamente la pena di seguire le procedure consigliate per lo sviluppo e il test del programma di installazione.  
  
## Sviluppo di pacchetti di installazione di Windows Installer  
 Windows Installer è il servizio di installazione e la configurazione consigliato per Windows e per i prodotti di integrazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
> [!NOTE]
>  La documentazione di [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] sull'installazione di prodotti di integrazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] si basa sui concetti di Windows Installer, ma non copre Windows Installer stesso. Per collegamenti alle sezioni pertinenti della documentazione di Windows Installer, fare riferimento la tabella che segue.  
  
 Nel contesto del processo di installazione *componente* si riferisce a un componente di Windows Installer. I componenti contengono risorse come file e voci del Registro di sistema e vengono installati e rimossi come unità.  
  
|Attività|Per altre informazioni, vedere|  
|--------------|------------------------------------|  
|Acquisire altre informazioni su Windows Installer.|[Windows Installer](http://msdn.microsoft.com/library/aa372866.aspx)|  
|Determinare i requisiti di sistema del VSPackage.|-   [Rilevamento dei requisiti di sistema](../Topic/Detecting%20System%20Requirements.md)|  
|Imparare a registrare un VSPackage in un pacchetto di installazione.|-   [Registrazione di VSPackage](../Topic/VSPackage%20Registration.md)<br />-   [Comandi devono essere eseguiti dopo l'installazione](../Topic/Commands%20That%20Must%20Be%20Run%20After%20Installation.md)|  
|Vedere un pacchetto di installazione di esempio.|-   Esempio di installazione per l'integrazione di IronPython|  
  
## Supporto di prodotti side\-by\-side  
 Con side\-by\-side \(talvolta abbreviato in *SxS*\) si intende la possibilità di installare e persino eseguire contemporaneamente più versioni dello stesso prodotto. Per i prodotti di integrazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], si intende anche il fatto che [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] stesso supporta l'esecuzione side\-by\-side.  
  
|Attività|Per altre informazioni, vedere|  
|--------------|------------------------------------|  
|Acquisire informazioni sul supporto di più versioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] in un prodotto di integrazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].|-   [Scelta tra i package VS condivisi e con controllo delle versioni](../Topic/Choosing%20Between%20Shared%20and%20Versioned%20VSPackages.md)<br />-   [Gestione dei componenti](../Topic/Component%20Management.md)|  
|Acquisire informazioni sul supporto di più versioni di un prodotto di integrazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].|-   [Scelta tra i package VS condivisi e con controllo delle versioni](../Topic/Choosing%20Between%20Shared%20and%20Versioned%20VSPackages.md)<br />-   [Registrazione di estensioni di File per le distribuzioni Side\-By\-Side](../Topic/Registering%20File%20Name%20Extensions%20for%20Side-By-Side%20Deployments.md)<br />-   [Rilevamento dei requisiti di sistema](../Topic/Detecting%20System%20Requirements.md)<br />-   [Comandi devono essere eseguiti dopo l'installazione](../Topic/Commands%20That%20Must%20Be%20Run%20After%20Installation.md)|  
  
## Test del prodotto di integrazione di Visual Studio  
 La suite [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] Integration Test \(VSIT\) è un set di test per la verifica della corretta integrazione di un VSPackage in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. VSIT non testa le funzionalità di un VSPackage, ma consente di verificare che un VSPackage non incida negativamente sulle altre funzionalità di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Per altre informazioni vedere [Test di integrazione di Visual Studio](http://msdn.microsoft.com/it-it/8d741735-7d93-46c2-ab93-01da7a0e016d).