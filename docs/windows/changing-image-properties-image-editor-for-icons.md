---
title: "Changing Image Properties (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "images [C++], properties"
  - "Image editor [C++], Properties window"
  - "Image editor [C++], image properties"
  - "Properties window, image editor"
ms.assetid: f6172bf1-08c4-4dfd-b542-dd8749e83fe6
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Changing Image Properties (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le proprietà di un'immagine possono essere impostate o modificate mediante la [finestra Proprietà](../Topic/Properties%20Window.md).  
  
### Per modificare le proprietà di un'immagine  
  
1.  Aprire l'immagine nell'editor di immagini.  
  
2.  Modificare una proprietà o tutte le proprietà dell'immagine nella finestra **Proprietà**.  
  
    |Proprietà|Descrizione|  
    |---------------|-----------------|  
    |**Colori**|Consente di specificare la combinazione di colori per l'immagine.  È possibile selezionare l'impostazione monocromatica, a 16 colori, oppure a 256 o 16,8 milioni di colori.  Se l'immagine è già stata disegnata con una tavolozza da 16 colori, la selezione dell'impostazione monocromatica determinerà la sostituzione in bianco e nero dei colori dell'immagine.  Non sempre il contrasto viene mantenuto. Le aree adiacenti in rosso e verde, ad esempio, vengono entrambe convertite in nero.|  
    |**Filename**|Consente di specificare il nome del file di immagine.  Per impostazione predefinita, Visual Studio assegna un nome di file di base creato rimuovendo i primi quattro caratteri \("IDB\_"\) dall'identificatore di risorsa predefinito \(IDB\_BITMAP1\) e aggiungendo l'estensione appropriata.  Il nome di file dell'immagine considerata nell'esempio sarebbe quindi BITMAP1.bmp.  Il file potrebbe essere rinominato MIABITMAP1.bmp.|  
    |**Altezza**|Consente di impostare l'altezza dell'immagine in pixel.  Il valore predefinito è 48.  L'immagine viene ritagliata oppure viene aggiunto uno spazio vuoto al di sotto dell'immagine esistente.|  
    |**ID**|Consente di impostare l'identificatore della risorsa.  Per impostazione predefinita, Microsoft Visual Studio assegna a un'immagine l'identificatore disponibile successivo in una serie: IDB\_BITMAP1, IDB\_BITMAP2 e così via.  Nomi analoghi vengono utilizzati anche per icone e cursori.|  
    |**Palette**|Consente di modificare le proprietà dei colori.  Fare doppio clic per selezionare un colore e visualizzare la [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md).  Definire il colore digitando i valori RGB o HSL nelle caselle di testo appropriate.|  
    |**SaveCompressed**|Indica se l'immagine è in un formato compresso.  Questa proprietà è in sola lettura.  Poiché Visual Studio non consente il salvataggio di immagini in un formato compresso, il valore di questa proprietà sarà **False** per tutte le immagini create in Visual Studio,  mentre se si apre in Visual Studio un'immagine compressa creata in un altro programma, questa proprietà risulterà impostata su **True**.  Se si salva un'immagine compressa utilizzando Visual Studio, l'immagine verrà decompressa e questa proprietà reimpostata su **False**.|  
    |**Larghezza**|Consente di impostare la larghezza dell'immagine in pixel.  Il valore predefinito per le bitmap è 48.  L'immagine viene ritagliata oppure viene aggiunto uno spazio vuoto a destra dell'immagine esistente.|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)