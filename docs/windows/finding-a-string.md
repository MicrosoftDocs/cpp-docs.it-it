---
title: "Finding a String | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.string"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strings [C++], searching"
  - "strings [C++]"
ms.assetid: c2497173-f356-4f77-97d6-f0ac41782510
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Finding a String
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile cercare una o più stringhe nella tabella di stringhe e utilizzare [espressioni regolari](../Topic/Using%20Regular%20Expressions%20in%20Visual%20Studio.md) con il comando **Cerca nei file** del menu **Modifica** per individuare tutte le istanze di stringhe corrispondenti a un criterio.  
  
### Per trovare una stringa nella tabella di stringhe  
  
1.  Aprire la tabella di stringhe facendo doppio clic sulla relativa icona in [Visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Scegliere **Trova e sostituisci** dal menu **Modifica**, quindi **Trova**.  
  
3.  Nella casella **Trova** selezionare una precedente stringa di ricerca dalla casella di riepilogo a discesa oppure digitare il testo della didascalia o l'identificatore di risorsa della stringa che si desidera trovare.  
  
4.  Selezionare una delle opzioni di **Trova**.  
  
5.  Scegliere **Trova successivo**.  
  
    > [!TIP]
    >  Per utilizzare espressioni regolari nella ricerca nei file, utilizzare il comando **Cerca nei file**.  Digitare un'espressione regolare corrispondente a un criterio oppure fare clic sul pulsante a destra della casella **Trova** per visualizzare un elenco di espressioni di ricerca regolari.  Quando si seleziona un'espressione da questo elenco, l'espressione viene sostituita come testo di ricerca nella casella **Trova**.  Se si utilizzano espressioni regolari, assicurarsi che la casella di controllo **Usa espressioni regolari** sia selezionata.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, ovvero quelli che utilizzano Common Language Runtime, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [String Editor](../mfc/string-editor.md)   
 [Stringhe](_win32_Strings)   
 [Informazioni sulle stringhe](_win32_About_Strings_cpp)