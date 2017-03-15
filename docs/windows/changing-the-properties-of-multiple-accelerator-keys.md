---
title: "Changing the Properties of Multiple Accelerator Keys | Microsoft Docs"
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
  - "keyboard shortcuts [C++], property changing"
  - "accelerator tables [C++], changing properties"
ms.assetid: b55c9bd6-b430-48bb-b942-0e6f21d7abf9
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Changing the Properties of Multiple Accelerator Keys
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per modificare le proprietà di più tasti di scelta rapida  
  
1.  Aprire la tabella dei tasti di scelta rapida facendo doppio clic sull'icona in [Visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Selezionare i tasti di scelta rapida che si desidera modificare, facendo clic su ciascuno di essi mentre si tiene premuto **CTRL**.  
  
3.  Passare alla [finestra Proprietà](../Topic/Properties%20Window.md) e digitare i valori che si desidera vengano condivisi da tutti i tasti di scelta rapida selezionati.  
  
    > [!NOTE]
    >  Ciascun valore del modificatore verrà visualizzato nella finestra Proprietà come proprietà booleana.  Se nella finestra Proprietà viene modificato un valore [Modifier](../windows/accelerator-modifier-property.md), la tabella dei tasti di scelta rapida considera il nuovo modificatore come un'aggiunta ai modificatori già presenti.  Per questo motivo, se vengono impostati dei valori di modificatori, è necessario impostarli tutti in modo da garantire che ogni tasto di scelta rapida condivida le stesse impostazioni di Modifier.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [Editing Accelerator Tables](../windows/editing-accelerator-tables.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)