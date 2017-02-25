---
title: "Adding Commands to a Menu | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.menu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "menu items, adding to menus"
  - "menus, adding items"
  - "commands, adding to menus"
  - "commands"
  - "menu items"
ms.assetid: 1523a755-0ab5-42f8-9e98-bb9881564431
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Adding Commands to a Menu
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per aggiungere comandi a un menu  
  
1.  [Creare un menu](../windows/creating-a-menu.md).  
  
2.  Fare clic sul nome del menu, ad esempio, File.  
  
     Ciascuna voce di menu espanderà ed esporrà una casella nuovo elemento per i comandi.  Ad esempio, è possibile aggiungere i comandi Nuovo, Apri e Chiudi a un menu File.  
  
3.  Nella casella del nuovo elemento, digitare un nome per il nuovo comando di menu.  
  
    > [!NOTE]
    >  Il testo immesso verrà visualizzato nell'editor dei menu e nella casella **Didascalia** nella [finestra Proprietà](../Topic/Properties%20Window.md).  È possibile modificare le proprietà per il nuovo menu in questa posizione.  
  
    > [!TIP]
    >  È possibile definire un tasto di scelta rapida che consente all'utente di selezionare il comando di menu.  Digitare una e commerciale \(&\) davanti a una lettera per specificarla come tasto di scelta.  L'utente può selezionare il comando di menu digitando quella lettera.  
  
4.  Nella finestra Proprietà selezionare le proprietà di comando di menu che si applicano.  Per informazioni dettagliate, vedere [Proprietà dei comandi di menu](../windows/menu-command-properties.md).  
  
5.  Nel **Prompt** nella finestra Proprietà, digitare la stringa di richiesta che si vuole visualizzare nella barra di stato dell'applicazione.  
  
     In questo modo viene creata una voce nella tabella di stringhe con lo stesso identificatore di risorsa del comando di menu creato.  
  
    > [!NOTE]
    >  È possibile applicare solo alle voci di menu con una proprietà **Popup** pari a **True**.  Ad esempio, gli elementi del menu di primo livello possono avere richieste se dispongono di voci di menu secondario.  Lo scopo di richiesta è per indicare che cosa accade se un utente fa clic sulla voce di menu.  
  
6.  Premere **INVIO** per completare il comando di menu.  
  
     La casella del nuovo elemento è selezionata, pertanto è possibile creare comandi di menu aggiuntivi.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [Menu Editor](../mfc/menu-editor.md)   
 [Menu](_win32_Menus)