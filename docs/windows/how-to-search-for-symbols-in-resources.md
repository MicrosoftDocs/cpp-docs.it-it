---
title: "How to: Search for Symbols in Resources | Microsoft Docs"
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
  - "symbols, finding"
  - "resources [Visual Studio], searching for symbols"
ms.assetid: 6efef8e8-d0d4-4c49-b895-314974e7791a
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# How to: Search for Symbols in Resources
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per trovare i simboli nelle risorse  
  
1.  Scegliere **Incolla** dal menu **Modifica**.  
  
2.  Nella [finestra di dialogo Trova simbolo](http://msdn.microsoft.com/it-it/63e93d9c-784f-418d-a76a-723da5ff5d96) nella casella **Trova** selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare il tasto di scelta rapida che si intende trovare \(ad esempio ID\_ACCEL1\).  
  
    > [!TIP]
    >  Per usare [espressioni regolari](../Topic/Using%20Regular%20Expressions%20in%20Visual%20Studio.md) per la ricerca, è necessario usare il [comando Cerca nei file](../Topic/Find%20Command.md) dal menu **Modifica** anziché il comando **Trova simbolo**.  Per attivare le espressioni regolari, è necessario disporre della casella di controllo **Utilizzo: espressioni regolari** selezionata nella finestra di dialogo [Trova](http://msdn.microsoft.com/it-it/dad03582-4931-4893-83ba-84b37f5b1600).  È quindi possibile fare clic sul pulsante freccia a destra posto a destra della casella **Trova** per visualizzare un elenco di espressioni regolari di ricerca.  Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella casella **Trova**.  
  
3.  Selezionare una qualsiasi delle opzioni **Trova**.  
  
4.  Fare clic su **Trova successivo**.  
  
    > [!NOTE]
    >  Non è possibile cercare simboli in risorse di stringa, tasti di scelta rapida o binarie.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [Symbols: Resource Identifiers](../mfc/symbols-resource-identifiers.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)