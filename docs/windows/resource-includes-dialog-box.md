---
title: "Finestra di dialogo Inclusioni risorsa | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.resourceincludes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Inclusioni risorsa (finestra di dialogo)"
  - "file RC, modifica dell'archiviazione"
  - "file di intestazione simboli, modifica"
  - "compilazione di codice sorgente, inclusione risorse"
  - "file RC, modifica dell'archiviazione"
  - "file di intestazione simboli, sola lettura"
  - "simboli, file di intestazione simboli"
ms.assetid: 659a54e6-e416-4045-8411-798730ff4ce3
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Finestra di dialogo Inclusioni risorsa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile usare la finestra di dialogo **Inclusioni risorsa** per modificare la normale disposizione di lavoro dell'ambiente in base alla quale tutte le risorse vengono archiviate nel file RC del progetto e tutti i [simboli](../mfc/symbols-resource-identifiers.md) in Resource.h.  
  
 Per aprire la finestra di dialogo **Inclusioni risorsa**, fare clic con il pulsante destro del mouse su un file RC in [Visualizzazione risorse](../windows/resource-view-window.md) e quindi scegliere **Inclusioni risorsa** dal menu di scelta rapida.  
  
 **File di intestazione simboli**  
 Consente di modificare il nome del file di intestazione in cui vengono archiviate le definizioni dei simboli per il file di risorse.  Per altre informazioni vedere [Modifica dei nomi nei file di intestazione simboli](../windows/changing-the-names-of-symbol-header-files.md).  
  
 **Direttive per simboli di sola lettura**  
 Consente di includere file di intestazione contenenti simboli che è necessario non modificare durante una sessione di modifica.  È, ad esempio, possibile includere un file di simboli condiviso da più progetti.  È anche possibile includere file H di MFC.  Per altre informazioni vedere [Inclusione di simboli condivisi \(di sola lettura\) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md).  
  
 **Direttive in fase di compilazione**  
 Consente di includere file di risorse creati e modificati separatamente dalle risorse nel file di risorse principale, che contengono direttive in fase di compilazione \(quali quelle che includono risorse in modo condizionale\) o risorse in un formato personalizzato.  È possibile usare la casella Direttive in fase di compilazione anche per includere file di risorse MFC standard.  Per altre informazioni, vedere [Inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).  
  
> [!NOTE]
>  Le voci in queste caselle di testo sono visualizzate nel file RC contrassegnato rispettivamente da  `TEXTINCLUDE 1`, `TEXTINCLUDE 2` e `TEXTINCLUDE 3`.  Per altre informazioni, vedere [TN035: Utilizzo di più file di risorse e di intestazione in Visual C\+\+](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).  
  
 Dopo avere apportato le modifiche al file di risorse usando la finestra di dialogo **Inclusioni risorsa**, per rendere effettive le modifiche è necessario chiudere e riaprire il file RC.  Per altre informazioni, vedere [Inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [How to: Specify Include Directories for Resources](../windows/how-to-specify-include-directories-for-resources.md)   
 [Symbols: Resource Identifiers](../mfc/symbols-resource-identifiers.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)