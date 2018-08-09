---
title: Ridimensionamento di un'immagine (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.image.editing
dev_langs:
- C++
helpviewer_keywords:
- Image editor [C++], resizing images
- graphics [C++], resizing
- images [C++], resizing
- resizing images
ms.assetid: d83a02c4-4dfe-4586-a0df-51a50c2ba71d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9c972f4038da4b4ed1d52fee0b8029b6f48ff3bb
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013873"
---
# <a name="resizing-an-image-image-editor-for-icons"></a>Ridimensionamento di un'immagine (Editor di immagini per le icone)
Il comportamento dei **immagine** editor durante il ridimensionamento di un'immagine dipende dal fatto che è stata [selezionati](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) l'intera immagine o solo una parte di esso.  
  
 Quando la selezione include solo una parte dell'immagine, il **immagine** editor riduce la selezione per l'eliminazione di righe o colonne di pixel e riempire le aree vuote con il colore di sfondo corrente o estende la selezione di duplicazione di righe o colonne di pixel.  
  
 Quando la selezione include l'intera immagine, il **immagine** editor sia compatta ed estende l'immagine, o Ritaglia e lo estende.  
  
 Sono disponibili due meccanismi per ridimensionare un'immagine: i quadratini di ridimensionamento e il [finestra proprietà](/visualstudio/ide/reference/properties-window). È possibile trascinare i quadratini di ridimensionamento per modificare le dimensioni di tutti o parte di un'immagine. Quadratini di ridimensionamento che è possibile trascinare sono pieni. Non è possibile trascinare gli handle che sono vuoti. È possibile usare la **proprietà** finestra da ridimensionare l'intera immagine, non una parte selezionata.  
  
 ![Quadratini di ridimensionamento su una bitmap](../mfc/media/vcimageeditorsizinghandles.gif "vcImageEditorSizingHandles")  
Quadratini di ridimensionamento  
  
> [!NOTE]
>  Se si dispone di **Affianca griglia** opzione selezionata nel [nella finestra di dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md), il ridimensionamento verrà bloccato alla riga successiva della griglia affiancata. Se solo il **griglia in Pixel** opzione è selezionata (impostazione predefinita), il ridimensionamento verrà bloccato sul pixel successivo disponibile.  
  
-   [Ridimensionamento di un'intera immagine](../windows/resizing-an-entire-image-image-editor-for-icons.md)  
  
-   [Ritaglio o estensione di un'intera immagine](cropping-or-extending-an-entire-image-image-editor-for-icons.md)  
  
-   [Riduzione o allungamento di un'intera immagine](../windows/shrinking-or-stretching-an-entire-image-image-editor-for-icons.md)  
  
-   [Riduzione o allungamento di parte di un'immagine](../windows/shrinking-or-stretching-part-of-an-image-image-editor-for-icons.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)