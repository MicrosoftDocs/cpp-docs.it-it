---
title: "Changing the Properties of a String | Microsoft Docs"
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
  - "resource identifiers, string properties"
  - "string tables, changing strings"
  - "strings [C++], properties"
ms.assetid: 0a220434-f444-4405-9a64-d28d6b965687
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Changing the Properties of a String
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per modificare una stringa o il relativo identificatore  
  
1.  Aprire la tabella di stringhe facendo doppio clic sulla relativa icona in [Visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Selezionare la stringa che si desidera modificare e fare doppio clic sulla colonna **ID**, **Value** o **Caption**.  È ora possibile:  
  
    -   Selezionare un **ID** dalla casella di riepilogo a discesa oppure digitare direttamente un ID.  
  
    -   Digitare un numero diverso nella colonna **Value**.  
  
    -   Digitare modifiche nella colonna **Caption**.  
  
        > [!NOTE]
        >  È possibile modificare le proprietà di una stringa anche nella [finestra Proprietà](../Topic/Properties%20Window.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, ovvero quelli che utilizzano Common Language Runtime, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [String Editor](../mfc/string-editor.md)   
 [Stringhe](_win32_Strings)   
 [Informazioni sulle stringhe](_win32_About_Strings_cpp)