---
title: "Creating a Device Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.icon"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cursors [C++], creating"
  - "icons [C++], creating"
  - "display devices"
  - "display devices, creating image"
  - "images [C++], creating for display devices"
  - "icons [C++], inserting"
ms.assetid: 5a536928-32df-4ace-beb1-1521ce3b871f
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Creating a Device Image (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea una nuova risorsa icona o cursore, l'editor di immagini crea innanzitutto un'immagine in uno stile specifico \(32 × 32 a 16 colori per le icone e 32 × 32 monocromatica per i cursori\).  All'icona o al cursore iniziale è tuttavia possibile aggiungere immagini con dimensioni e stili diversi e modificare ciascuna immagine aggiuntiva in base alle specifiche esigenze delle diverse periferiche di visualizzazione.  È inoltre possibile modificare un'immagine eseguendo un'operazione di taglia e incolla da un tipo esistente di immagine o da una bitmap creata in un programma di grafica.  Per ulteriori informazioni sulle dimensioni delle icone utilizzate da Windows, vedere [Icone](_win32_Icons_cpp) nella documentazione di Windows SDK.  
  
 Quando si apre la risorsa icona o cursore nell'[editor di immagini](../mfc/image-editor-for-icons.md), per impostazione predefinita viene aperta l'immagine che corrisponde maggiormente alla periferica di visualizzazione corrente.  
  
### Per creare una nuova icona o un nuovo cursore  
  
1.  Fare clic con il pulsante destro del mouse sul file RC in [Visualizzazione risorse](../windows/resource-view-window.md), quindi scegliere **Inserisci risorsa** dal menu di scelta rapida.  Se nel file RC è già presente una risorsa immagine, ad esempio un cursore, sarà sufficiente fare clic con il pulsante destro del mouse sulla cartella **Cursore** e scegliere **Inserisci cursore** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nella [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md) selezionare **Icona** o **Cursore** e scegliere **Nuovo**.  Se è stata selezionata un'icona, verrà creata una risorsa icona con un'icona 32 × 32 a 16 colori,  mentre se è stato selezionato un cursore, verrà creata un'immagine 32 × 32 monocromatica \(a 2 colori\).  
  
     Se nella finestra di dialogo **Inserisci risorsa** è visualizzato un segno più \(**\+**\) in corrispondenza del tipo di risorsa immagine, significa che sono disponibili dei modelli di barra degli strumenti.  Fare clic sul segno più \(\+\) per espandere l'elenco dei modelli, selezionare un modello, quindi fare clic su **Nuovo**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Nessuno  
  
## Vedere anche  
 [Icons and Cursors: Image Resources for Display Devices](../mfc/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)   
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Icons and Cursors: Image Resources for Display Devices](../mfc/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)