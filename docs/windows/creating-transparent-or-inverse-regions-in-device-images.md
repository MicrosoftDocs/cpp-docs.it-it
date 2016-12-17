---
title: "Creating Transparent or Inverse Regions in Device Images (Image Editor for Icons) | Microsoft Docs"
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
  - "cursors [C++], screen regions"
  - "inverse colors, device images"
  - "transparent regions, device images"
  - "transparency, device images"
  - "Image editor [C++], device images"
  - "inverse regions, device images"
  - "cursors [C++], transparent regions"
  - "screen colors"
  - "regions, transparent"
  - "icons [C++], transparent regions"
  - "display devices, transparent and screen regions"
  - "transparent regions in devices"
  - "regions, inverse"
  - "colors [C++], Image editor"
  - "device projects, transparent images"
  - "icons [C++], screen regions"
ms.assetid: a994954b-b039-4391-a535-58d1fa10fc3b
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating Transparent or Inverse Regions in Device Images (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'[editor di immagini](../mfc/image-editor-for-icons.md) l'immagine icona o cursore iniziale è dotata di un attributo trasparente.  Sebbene le immagini icona e cursore siano rettangolari, molte non risultano tali in quanto alcune parti dell'immagine sono trasparenti e lasciano intravedere l'immagine sottostante.  Quando si trascina un'icona, parti dell'immagine possono essere visualizzate in un colore inverso.  Questo effetto può essere creato impostando il colore della finestra e il colore di inversione nella [finestra Colori](../windows/colors-window-image-editor-for-icons.md).  
  
 I colori della finestra e di inversione applicati a icone e cursori determinano la forma e il colore dell'immagine derivata oppure definiscono aree di inversione.  I colori indicano le parti dell'immagine dotate di tali attributi.  È possibile modificare i colori che rappresentano gli attributi del colore della finestra e del colore di inversione durante le operazioni di modifica.  Tali modifiche non influiscono tuttavia sull'aspetto dell'icona o del cursore nell'applicazione.  
  
> [!NOTE]
>  È possibile che le finestre di dialogo e i comandi di menu visualizzati siano diversi da quelli descritti nella Guida a seconda delle impostazioni attive o dell'edizione del programma.  Per modificare le impostazioni, scegliere **Importa\/esporta impostazioni** dal menu **Strumenti**.  Per ulteriori informazioni, vedere [Customizing Development Settings in Visual Studio](http://msdn.microsoft.com/it-it/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### Per creare aree trasparenti o di inversione  
  
1.  Nella finestra **Colori** fare clic sul selettore del **colore della finestra** o del **colore di inversione**.  
  
2.  Applicare il colore della finestra o di inversione all'immagine utilizzando uno strumento di disegno.  Per ulteriori informazioni sugli strumenti di disegno, vedere [Using a Drawing Tool](../mfc/using-a-drawing-tool-image-editor-for-icons.md).  
  
### Per modificare il colore della finestra o di inversione  
  
1.  Selezionare il selettore del colore della finestra o del colore di inversione.  
  
2.  Nella finestra **Colori** scegliere un colore nella tavolozza **Colori**.  
  
     Il colore complementare per l'altro selettore viene definito automaticamente.  
  
    > [!TIP]
    >  Facendo doppio clic sul selettore del colore della finestra o del colore di inversione verrà visualizzata la [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Icons and Cursors: Image Resources for Display Devices](../mfc/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)