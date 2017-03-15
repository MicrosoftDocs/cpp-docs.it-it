---
title: "Creating an Icon or Other Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.bitmap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitmaps [C++]"
  - "images [C++], creating"
  - "resource toolbars"
  - "resources [Visual Studio], creating images"
  - "bitmaps [C++], creating"
  - "graphics [C++], creating"
  - "Image editor [C++], creating images"
ms.assetid: 66db3fb2-cfc1-48a2-9bdd-53f61eb7ee30
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Creating an Icon or Other Image (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare una nuova immagine, ovvero una bitmap, un'icona, un cursore o una barra degli strumenti, utilizzando quindi l'editor di immagini per personalizzarne l'aspetto.  È anche possibile creare una nuova bitmap in base a un [modello](../windows/how-to-use-resource-templates.md).  
  
### Per aggiungere una nuova risorsa immagine a un progetto C\+\+ non gestito  
  
1.  Fare clic con il pulsante destro del mouse sul file RC in [Visualizzazione risorse](../windows/resource-view-window.md), quindi scegliere **Inserisci risorsa** dal menu di scelta rapida.  Se nel file RC è già presente una risorsa immagine, ad esempio un cursore, sarà sufficiente fare clic con il pulsante destro del mouse sulla cartella **Cursore** e scegliere **Inserisci cursore** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  **Nota** Se il progetto non contiene un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nella [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md) selezionare il tipo di risorsa immagine che si desidera creare, ad esempio **Bitmap**, quindi scegliere **Nuovo**.  
  
     Se nella finestra di dialogo **Inserisci risorsa** è visualizzato un segno più \(**\+**\) in corrispondenza del tipo di risorsa immagine, significa che sono disponibili dei modelli di barra degli strumenti.  Fare clic sul segno più \(\+\) per espandere l'elenco dei modelli, selezionare un modello, quindi fare clic su **Nuovo**.  
  
### Per aggiungere una nuova risorsa immagine a un progetto in un linguaggio di programmazione Visual Basic .NET  
  
1.  Fare clic con il pulsante destro del mouse sulla cartella del progetto, ad esempio **WindowsApplication1**, in **Esplora soluzioni**.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi nuovo elemento**.  
  
3.  Nel riquadro **Categorie** espandere la cartella **Elementi del progetto locale**, quindi scegliere **Risorse**.  
  
4.  Nel riquadro **Modelli** scegliere il tipo di risorsa che si desidera aggiungere al progetto.  
  
     La risorsa verrà aggiunta al progetto in Esplora soluzioni e aperta nell'[editor di immagini](../mfc/image-editor-for-icons.md).  Sarà quindi possibile utilizzare tutti gli strumenti disponibili nell'editor di immagini per modificare l'immagine.  Per ulteriori informazioni sull'aggiunta di immagini a un progetto gestito, vedere [Caricamento di un'immagine in fase di progettazione](../Topic/How%20to:%20Load%20a%20Picture%20Using%20the%20Designer%20\(Windows%20Forms\).md).  
  
    > [!NOTE]
    >  Per modificare le risorse gestite è necessario che siano collegate.  Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.  Per ulteriori informazioni, vedere [Creazione di file di risorse](../Topic/Creating%20Resource%20Files%20for%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework*.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Nessuno  
  
## Vedere anche  
 [Icons and Cursors: Image Resources for Display Devices](../mfc/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)   
 [Converting Bitmaps to Toolbars](../mfc/converting-bitmaps-to-toolbars.md)   
 [Creating New Toolbars](../mfc/creating-new-toolbars.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)