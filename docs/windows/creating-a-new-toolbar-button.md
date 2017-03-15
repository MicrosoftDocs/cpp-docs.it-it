---
title: "Creating a New Toolbar Button | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.toolbar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Toolbar editor, creating buttons"
  - "toolbar buttons (in Toolbar editor), button image"
  - "toolbar buttons (in Toolbar editor), creating"
  - "toolbar buttons (in Toolbar editor)"
ms.assetid: 46c120fe-4f2a-4887-a08f-bd1fea04b3f4
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Creating a New Toolbar Button
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per creare un nuovo pulsante di una barra degli strumenti  
  
1.  In [Visualizzazione risorse](../windows/resource-view-window.md) espandere la cartella delle risorse, ad esempio, Project1.rc.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Espandere la cartella **Barra degli strumenti** e selezionare la barra degli strumenti da modificare.  
  
3.  Assegnare un ID al pulsante vuoto all'estremità destra della barra degli strumenti.  Per eseguire questa operazione, modificare la proprietà **ID** nella [finestra Proprietà](../Topic/Properties%20Window.md).  Se ad esempio si desidera assegnare a un pulsante di una barra degli strumenti lo stesso ID di una voce di menu,  utilizzare la casella di riepilogo a discesa per selezionare l'**ID** della voce di menu.  
  
     Oppure  
  
     Selezionare il pulsante vuoto all'estremità destra della barra degli strumenti \(nel riquadro della visualizzazione della barra degli strumenti\) e iniziare a disegnare.  Verrà assegnato un ID di comando pulsante predefinito \(ID\_BUTTON\<n\>\).  
  
 È inoltre possibile copiare e incollare un'immagine come nuovo pulsante in una barra degli strumenti.  
  
#### Per aggiungere un'immagine come pulsante in una barra degli strumenti  
  
1.  In [Visualizzazione risorse](../windows/resource-view-window.md) aprire la barra degli strumenti facendo doppio clic su di essa.  
  
2.  Aprire quindi l'immagine che si desidera aggiungere alla barra degli strumenti.  
  
    > [!NOTE]
    >  Se si apre l'immagine in Visual Studio, questa verrà aperta nell'editor di immagini.  È possibile aprire l'immagine anche in altri programmi di grafica.  
  
3.  Scegliere **Copia** dal menu **Modifica**.  
  
4.  Passare alla barra degli strumenti facendo clic sulla scheda nella parte superiore della finestra dell'editor.  
  
5.  Scegliere **Incolla** dal menu **Modifica**.  
  
     L'immagine verrà visualizzata come nuovo pulsante sulla barra degli strumenti.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requisiti  
 MFC o ATL  
  
## Vedere anche  
 [Toolbar Button Properties](../mfc/toolbar-button-properties.md)   
 [Creating, Moving, and Editing Toolbar Buttons](../mfc/creating-moving-and-editing-toolbar-buttons.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)