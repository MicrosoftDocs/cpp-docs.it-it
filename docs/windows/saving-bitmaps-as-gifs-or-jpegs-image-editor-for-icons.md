---
title: "Saving Bitmaps as GIFs or JPEGs (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.image.editing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".gif files, saving bitmaps as"
  - "jpg files, saving bitmaps as"
  - "jpeg files, saving bitmaps as"
  - ".jpg files, saving bitmaps as"
  - "Image editor [C++], converting image formats"
  - "gif files, saving bitmaps as"
  - "bitmaps [C++], converting formats"
  - ".jpeg files, saving bitmaps as"
  - "graphics [C++], converting formats"
  - "images [C++], converting formats"
ms.assetid: 115df69f-10fb-4e6f-906b-853c1e4a54af
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Saving Bitmaps as GIFs or JPEGs (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea una bitmap, l'immagine viene creata in formato bitmap \(BMP\),  ma può essere salvata anche come file GIF o JPEG oppure in altri formati grafici.  
  
> [!NOTE]
>  Questo processo non si applica alle icone e ai cursori.  
  
### Per creare e salvare una bitmap come file GIF o JPEG  
  
1.  Scegliere **Apri** dal menu **File**, quindi **File**.  
  
2.  Nella **finestra di dialogo Nuovo file** fare clic sulla cartella **Visual C\+\+**, quindi nella casella **Modelli** selezionare **File bitmap \(.bmp\)** e infine scegliere **Apri**.  
  
     La bitmap verrà aperta nell'editor di immagini.  
  
3.  Apportare le modifiche necessarie alla nuova bitmap.  
  
4.  Mentre la bitmap è aperta nell'**Editor** di immagini, scegliere **Salva *nomefile*.bmp con nome** dal menu **File**.  
  
5.  Nella casella **Nome file** della finestra di dialogo **Salva file con nome** digitare il nome che si desidera assegnare al file e l'estensione corrispondente al formato di file desiderato.  ad esempio miofile.gif.  
  
     **Nota**  Per effettuare il salvataggio in un diverso formato di file, è necessario creare o aprire la bitmap all'esterno del progetto.  Se infatti la bitmap viene creata o aperta all'interno del progetto, il comando **Salva con nome** non sarà disponibile.  Per ulteriori informazioni, vedere [Visualizzazione di risorse in un file di script di risorsa all'esterno di un progetto \(file autonomo\)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
6.  Scegliere **Salva**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Vedere anche  
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)