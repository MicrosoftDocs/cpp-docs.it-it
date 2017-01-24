---
title: "Specifica di eventi di compilazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.IVCEventTool.CommandLine"
  - "VC.Project.IVCEventTool.ExcludedFromBuild"
  - "VC.Project.IVCEventTool.Description"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "eventi di compilazione [C++]"
  - "eventi di compilazione [C++], specifica"
  - "compilazioni [C++], personalizzazione di C++"
  - "compilazioni [C++], eventi"
  - "istruzioni di compilazione personalizzate [C++], eventi di compilazione"
  - "eventi (C++), compilazione"
  - "eventi post-compilazione"
  - "evento di pre-collegamento"
ms.assetid: 788a6c18-2dbe-4a49-8cd6-86c1ad7a95cc
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Specifica di eventi di compilazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare degli eventi di compilazione per specificare comandi eseguibili prima dell'inizio della compilazione, prima del processo di collegamento o al termine della compilazione.  
  
 Gli eventi di compilazione vengono eseguiti solo se la generazione raggiunge correttamente quei punti nel processo di compilazione.  Se si verifica un errore nella compilazione, l'evento *post\-compilazione* non si verificherà. Se l'errore si verifica prima della fase di collegamento, non si verificheranno né gli eventi *pre\-collegamento* né quelli *post\-compilazione*.  Inoltre, se non è necessario collegare alcun file, l'evento *pre\-collegamento* non si verificherà.  L'evento *pre\-collegamento* non è inoltre disponibile nei progetti che non contengono un passaggio di collegamento.  
  
 Se non è necessario compilare alcun file, non si verificherà alcun evento di compilazione.  
  
 Per informazioni generali sugli eventi di compilazione, vedere [Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md).  
  
### Per specificare un evento di compilazione  
  
1.  In **Esplora soluzioni** selezionare il progetto per il quale si desidera specificare l'evento di compilazione.  
  
2.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Utilizzo di proprietà di progetto](../ide/working-with-project-properties.md).  
  
3.  Nella cartella **Eventi di compilazione** selezionare la pagina delle proprietà di un evento di compilazione.  
  
4.  Specificare le proprietà associate all'evento di compilazione:  
  
    -   In **Riga di comando** specificare un comando come se lo si stesse specificando al prompt dei comandi.  Specificare un comando o un file batch valido e gli eventuali file di input o output necessari.  Specificare il comando batch **call** prima del nome di un file batch per garantire che tutti i comandi successivi vengano eseguiti.  
  
         Le macro di MSBuild consentono di specificare simbolicamente più file di input e output.  [!INCLUDE[crabout](../build/reference/includes/crabout_md.md)] sulla specificazione del percorso dei file o dei nomi dei set di file, vedere [Macro per comandi e proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md).  
  
         Poiché il carattere "%" è riservato da MSBuild, se si specifica una variabile di ambiente sostituire ogni carattere di escape **%** con la sequenza di escape esadecimale **%25**.  Ad esempio, sostituire **%WINDIR%** con **%25WINDIR%25**.  Ogni sequenza **%25** verrà sostituita dal carattere **%** prima dell'accesso alla variabile di ambiente.  
  
    -   Nella casella **Descrizione** digitare una descrizione relativa a questo evento.  La descrizione verrà stampata nella finestra **Output** quando si verifica questo evento.  
  
    -   Nella casella **Escluso dalla compilazione** specificare **Sì** se si desidera che l'evento non venga eseguito.  
  
## Vedere anche  
 [Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)   
 [Macro per comandi e proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md)   
 [Risoluzione dei problemi relativi alle personalizzazioni della compilazione](../ide/troubleshooting-build-customizations.md)