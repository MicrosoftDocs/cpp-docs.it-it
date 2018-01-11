---
title: Ridimensionamento di un'immagine (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.editors.image.editing
dev_langs: C++
helpviewer_keywords:
- Image editor [C++], resizing images
- graphics [C++], resizing
- images [C++], resizing
- resizing images
ms.assetid: d83a02c4-4dfe-4586-a0df-51a50c2ba71d
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8f856c5cf825fd9032ce64afbd09d3bed83ea40f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resizing-an-image-image-editor-for-icons"></a>Ridimensionamento di un'immagine (Editor di immagini per le icone)
Il comportamento dell'editor di immagini durante il ridimensionamento di un'immagine varia a seconda che la [selezionato](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) l'intera immagine o solo una parte di esso.  
  
 Quando la selezione include solo una parte dell'immagine, l'editor di immagini riduce la selezione per l'eliminazione di righe o colonne di pixel e riempire le aree spostate con il colore di sfondo corrente o estende la selezione duplicando righe o colonne di pixel.  
  
 Quando la selezione include l'intera immagine, l'editor di immagini di compatta ed estende l'immagine, o Ritaglia e la estende.  
  
 Sono disponibili due meccanismi per ridimensionare un'immagine: i quadratini di ridimensionamento e [finestra proprietà](/visualstudio/ide/reference/properties-window). È possibile trascinare i quadratini di ridimensionamento per modificare le dimensioni di tutte o parte di un'immagine. Quadratini di ridimensionamento che è possibile trascinare sono pieni. È possibile trascinare quelli vuoti. È possibile utilizzare la finestra proprietà per ridimensionare l'intera immagine non è una parte selezionata.  
  
 ![Quadratini di ridimensionamento su una bitmap](../mfc/media/vcimageeditorsizinghandles.gif "vcImageEditorSizingHandles")  
Quadratini di ridimensionamento  
  
> [!NOTE]
>  Se è selezionata nell'opzione riquadro griglia il [la finestra di dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md), il ridimensionamento verrà bloccato alla riga successiva riquadro griglia. Se la griglia in Pixel, l'opzione è selezionata (impostazione predefinita), solo il ridimensionamento verrà bloccato sul pixel successivo disponibile.  
  
-   [Ridimensionamento di un'intera immagine](../windows/resizing-an-entire-image-image-editor-for-icons.md)  
  
-   [Ritaglio o estensione di un'intera immagine](cropping-or-extending-an-entire-image-image-editor-for-icons.md)  
  
-   [Riduzione o allungamento di un'intera immagine](../windows/shrinking-or-stretching-an-entire-image-image-editor-for-icons.md)  
  
-   [Riduzione o allungamento di parte di un'immagine](../windows/shrinking-or-stretching-part-of-an-image-image-editor-for-icons.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)

