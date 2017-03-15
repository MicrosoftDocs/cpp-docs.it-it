---
title: "Creating a Tool Tip for a Toolbar Button | Microsoft Docs"
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
  - "tool tips [C++], adding to toolbar buttons"
  - "\n in tool tip"
  - "toolbar buttons [C++], tool tips"
  - "buttons [C++], tool tips"
  - "Toolbar editor, creating tool tips"
ms.assetid: 0af65342-fd78-4e78-8d0d-dc68f7fc462e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Creating a Tool Tip for a Toolbar Button
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per creare una descrizione comandi  
  
1.  Selezionare il pulsante della barra degli strumenti.  
  
2.  Nel campo della proprietà **Prompt** della [finestra Proprietà](../Topic/Properties%20Window.md) aggiungere una descrizione del pulsante per la barra di stato. Dopo il messaggio, aggiungere \\n e il nome della descrizione comandi.  
  
 Un esempio comune di descrizione comandi è il pulsante Stampa di WordPad.  
  
 1.  Aprire WordPad.  
  
 2.  Passare con il puntatore del mouse sul pulsante **Stampa** della barra degli strumenti.  
  
 3.  Sotto il puntatore del mouse verrà visualizzata la parola "Stampa".  
  
 4.  Nella barra di stato, nella parte inferiore della finestra di WordPad, verrà visualizzato il testo "Stampa il documento attivo".  
  
 La parola "Stampa" del passaggio 3 è il "nome della descrizione comandi", mentre il messaggio "Stampa il documento attivo" del passaggio 4 è la "descrizione del pulsante per la barra di stato".  
  
 Per ottenere questo risultato utilizzando l'editor **barra degli strumenti**, impostare la proprietà **Prompt** su **Stampa il documento attivo\\nStampa**.  
  
> [!NOTE]
>  È possibile modificare il testo del messaggio mediante la [Finestra proprietà](../Topic/Properties%20Window.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 MFC o ATL  
  
## Vedere anche  
 [Creating, Moving, and Editing Toolbar Buttons](../mfc/creating-moving-and-editing-toolbar-buttons.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)