---
title: "Icons and Cursors: Image Resources for Display Devices (Image Editor for Icons) | Microsoft Docs"
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
  - "image resources, display devices"
  - "icons [C++], creating"
  - "cursors [C++], types"
  - "icons [C++]"
  - "Image editor [C++], icons and cursors"
  - "cursors [C++]"
  - "display devices, creating icons for"
  - "cursors [C++], hot spots"
  - "icons [C++], types"
ms.assetid: 8f0809a8-0cf0-4da9-b23d-51f28bf15f5b
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Icons and Cursors: Image Resources for Display Devices (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Icone e cursori sono risorse grafiche che possono contenere più immagini di diverse dimensioni e le combinazioni di colori per diversi tipi di dispositivi di visualizzazione. Inoltre, un cursore ha un'"area sensibile", ovvero il punto che Windows usa per rilevare la posizione. Come per le bitmap e le altre immagini, anche le icone e i cursori vengono creati e modificati usando l'editor di immagini.  
  
 Quando si crea una nuova icona o cursore, l'editor di immagini crea innanzitutto un'immagine di un tipo standard. L'immagine viene inizialmente riempita con il colore della schermata \(trasparente\). Se l'immagine è un cursore, l'area sensibile inizialmente corrisponde all'angolo superiore sinistro \(coordinate 0,0\).  
  
 Per impostazione predefinita, l'editor di immagini supporta la creazione di immagini aggiuntive per i dispositivi illustrati nella tabella seguente. È possibile creare immagini per altri dispositivi specificando i parametri di larghezza, altezza e numero di colori nella [finestra di dialogo dell'immagine personalizzata](../mfc/custom-image-dialog-box-image-editor-for-icons.md).  
  
> [!NOTE]
>  Utilizzando l'Editor immagini, è possibile visualizzare, ma non modificare, immagini a 32 bit.  
  
|Colore|Larghezza \(pixel\)|Altezza \(pixel\)|  
|------------|-------------------------|-----------------------|  
|Monocromatico|16|16|  
|Monocromatico|32|32|  
|Monocromatico|48|48|  
|Monocromatico|64|64|  
|Monocromatico|96|96|  
|16|16|16|  
|16|32|32|  
|16|64|64|  
|16|48|48|  
|16|96|96|  
|256|16|16|  
|256|32|32|  
|256|48|48|  
|256|64|64|  
|256|96|96|  
  
-   [Creazione di una nuova immagine per dispositivo \(icona o cursore\)](../mfc/creating-a-device-image-image-editor-for-icons.md)  
  
-   [Aggiunta di un'immagine per un diverso dispositivo di visualizzazione](../mfc/adding-an-image-for-a-different-display-device-image-editor-for-icons.md)  
  
-   [Copia di un'immagine per dispositivo](../mfc/copying-a-device-image-image-editor-for-icons.md)  
  
-   [Eliminazione di un'immagine per dispositivo](../mfc/deleting-a-device-image-image-editor-for-icons.md)  
  
-   [Creazione di aree trasparenti o di inversione nelle immagini per i dispositivi](../mfc/creating-transparent-or-inverse-regions-in-device-images.md)  
  
-   [Creazione di un cursore o di un'icona a 256 colori](../mfc/creating-a-256-color-icon-or-cursor-image-editor-for-icons.md)  
  
-   [Impostazione dell'area sensibile di un cursore](../mfc/setting-a-cursor-s-hot-spot-image-editor-for-icons.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Nessuno  
  
## Vedere anche  
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)   
 [Icone](http://msdn.microsoft.com/library/windows/desktop/ms646973)   
 [Cursori](http://msdn.microsoft.com/library/windows/desktop/ms646970)