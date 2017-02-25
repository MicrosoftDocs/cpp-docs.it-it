---
title: "Switching Between Dialog Box Controls and Code | Microsoft Docs"
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
  - "events [C++], viewing for controls"
  - "Windows messages [C++], controls"
  - "messages [C++], viewing for dialog boxes"
  - "Dialog editor, accessing code"
  - "code [C++], switching from Dialog Editor"
  - "controls [C++], jumping to code"
  - "Dialog editor, switching between controls and code"
ms.assetid: 7da73815-b853-4203-ba45-bbe570695122
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Switching Between Dialog Box Controls and Code
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nelle applicazioni MFC è possibile passare al codice del gestore corrispondente o creare rapidamente funzioni del gestore dello stub facendo doppio clic sui controlli di una finestra di dialogo.  
  
 Dopo avere selezionato un controllo, scegliere il pulsante **Eventi di controllo** o il pulsante **Messaggi** nella [finestra Proprietà](../Topic/Properties%20Window.md) per visualizzare un elenco completo degli eventi e dei messaggi di Windows disponibili per l'elemento selezionato.  Selezionare una voce dall'elenco per creare o modificare le funzioni del gestore.  
  
### Per passare dall'editor finestre al codice  
  
1.  Fare doppio clic su un controllo all'interno della finestra di dialogo per passare alla dichiarazione relativa alla funzione di gestione dei messaggi implementata più recentemente.  Per le classi di finestre di dialogo basate su ATL si passa sempre alla definizione del costruttore.  
  
### Per visualizzare gli eventi relativi a un controllo  
  
1.  Dopo avere selezionato un controllo, scegliere il pulsante **Eventi di controllo** nella [finestra Proprietà](../Topic/Properties%20Window.md).  
  
    > [!NOTE]
    >  Se si sceglie il pulsante **Eventi di controllo** mentre la *finestra di dialogo* ha lo stato attivo, verrà esposto un elenco di tutti i controlli della finestra di dialogo che sarà possibile espandere in modo da modificare gli eventi relativi ai singoli controlli.  
  
     Quando un singolo controllo ha lo stato attivo nella finestra di dialogo, è possibile fare clic con il pulsante destro del mouse sul controllo e scegliere **Aggiungi gestore eventi** dal menu di scelta rapida.  In questo modo è possibile specificare la classe a cui viene aggiunto il gestore.  Per ulteriori informazioni, vedere [Aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).  
  
### Per visualizzare i messaggi relativi a una finestra di dialogo  
  
1.  Dopo avere selezionato una finestra di dialogo, scegliere il pulsante **Messaggi** nella [finestra Proprietà](../Topic/Properties%20Window.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Dialog Editor](../mfc/dialog-editor.md)