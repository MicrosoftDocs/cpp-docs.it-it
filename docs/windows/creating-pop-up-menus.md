---
title: "Creating Pop-up Menus | Microsoft Docs"
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
  - "context menus, Menu Editor"
  - "pop-up menus, creating"
  - "menus, pop-up"
  - "menus, creating"
  - "shortcut menus, creating"
  - "pop-up menus, displaying"
ms.assetid: dff4dddf-2e8d-4c34-b755-90baae426b58
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Creating Pop-up Menus
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I [menu a comparsa](../mfc/menus-mfc.md) visualizzano i comandi usati frequentemente. Possono essere sensibili al contesto per la posizione del puntatore. Quando si usa il menu a comparsa nell'applicazione è necessario compilare il menu e quindi connetterlo al codice dell'applicazione.  
  
 Dopo aver creato la risorsa di menu, il codice dell'applicazione deve caricare la risorsa di menu e usare [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) per visualizzare il menu. Una volta che l'utente ha chiuso il menu di scelta rapida facendo clic all'esterno o ha fatto clic su un comando, questa funzione verrà restituita. Se l'utente sceglie un comando, tale messaggio di comando verrà inviato alla finestra di cui è stato passato l'handle.  
  
### Per creare un menu a comparsa  
  
1.  [Creare un menu](../windows/creating-a-menu.md) con un titolo vuoto \(non viene fornito un titolo **Didascalia**\).  
  
2.  [Aggiungere un comando di menu al nuovo menu](../windows/adding-commands-to-a-menu.md). Spostare il primo comando di menu al di sotto del titolo del menu vuoto che \(la didascalia temporanea indica Digitare qui\). Digitare una **Didascalia** e qualsiasi altra informazione.  
  
     Ripetere questo processo per tutti gli altri comandi di menu a comparsa.  
  
3.  Salvare la risorsa di menu.  
  
    > [!TIP]
    >  Per altre informazioni sulla visualizzazione del menu a comparsa, vedere [Visualizzazione di un menu come menu a comparsa](../windows/viewing-a-menu-as-a-pop-up-menu.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [Connecting a Pop\-up Menu to Your Application](../windows/connecting-a-pop-up-menu-to-your-application.md)   
 [Menu Editor](../mfc/menu-editor.md)