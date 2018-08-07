---
title: Salvataggio di bitmap come file GIF o JPEG (Editor di immagini per le icone) | Microsoft Docs
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
- .gif files, saving bitmaps as
- jpg files, saving bitmaps as
- jpeg files, saving bitmaps as
- .jpg files, saving bitmaps as
- Image editor [C++], converting image formats
- gif files, saving bitmaps as
- bitmaps [C++], converting formats
- .jpeg files, saving bitmaps as
- graphics [C++], converting formats
- images [C++], converting formats
ms.assetid: 115df69f-10fb-4e6f-906b-853c1e4a54af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1a87087b4ef51c016a5165f0d997824f174ca06c
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39608157"
---
# <a name="saving-bitmaps-as-gifs-or-jpegs-image-editor-for-icons"></a>Salvataggio di bitmap come file GIF o JPEG (Editor di immagini per le icone)
Quando si crea una bitmap, viene creata l'immagine in formato bitmap (bmp). È possibile, tuttavia, salvare l'immagine come un file GIF o JPEG o in altri formati di immagini.  
  
> [!NOTE]
>  Questo processo si applica alle icone e cursori.  
  
### <a name="to-create-and-save-a-bitmap-as-a-gif-or-jpeg"></a>Per creare e salvare un'immagine bitmap come file GIF o JPEG  
  
1.  Dal **File** menu, scegliere **Open**, quindi fare clic su **File**.  
  
2.  Nel **finestra di dialogo Nuovo File**, fare clic sui **Visual C++** cartella, quindi selezionare **File Bitmap (bmp)** nel **modelli** casella e fare clic su  **Apri**.  
  
     La bitmap viene aperto nel **immagine** editor.  
  
3.  Apportare le modifiche alla nuova bitmap in base alle esigenze.  
  
4.  Con la bitmap ancora aperta nel **immagine** editor, fare clic su **salvare *nomefile*bmp come** nel **File** menu.  
  
5.  Nel **Salva File con nome** finestra di dialogo, digitare il nome da assegnare al file e l'estensione che indica il formato di file desiderato nel **nome File** casella. Ad esempio, MioFile. gif.  
  
     **Nota** è necessario creare o aprire la mappa di bit all'esterno del progetto per salvarlo come un altro formato di file. Se si crea o aprirlo all'interno del progetto, il **Salva con nome** comando non sarà disponibile. Per altre informazioni, vedere [visualizzazione di risorse in un File di Script di risorsa all'esterno di un progetto (autonomo)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
6.  Fare clic su **Salva**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)