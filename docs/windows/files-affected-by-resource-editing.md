---
title: "Files Affected by Resource Editing | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "resource editing"
  - "resources [Visual Studio], editing"
ms.assetid: d0820df1-ba84-40ac-bce9-29ea5ee7e3f8
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Files Affected by Resource Editing
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'ambiente di Visual Studio funziona con i file illustrati nella tabella seguente durante la sessione di modifica delle risorse.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|Resource.h|File di intestazione generato dall'ambiente di sviluppo; contiene le definizioni dei simboli.|  
|Nomefile.aps|Versione binaria del file di script di risorsa corrente; usato per il caricamento rapido.<br /><br /> Gli editor di risorse non leggono direttamente i file RC o resource.h.  Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse.  Questo file è presente in una fase di compilazione e archivia solo dati simbolici.  Come con un normale processo di compilazione, le informazioni che non sono simboliche \(ad esempio, i commenti\) vengono eliminate durante il processo di compilazione.  Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato \(ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h\).  Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto.  Per altre informazioni su come mantenere i commenti, vedere la pagina relativa alla modalità di [inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).|  
|RC|File di script di risorsa che contiene lo script per le risorse nel progetto corrente.  Questo file viene sovrascritto dal file APS ogni volta che si salva.|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Resource Files](../mfc/resource-files-visual-studio.md)