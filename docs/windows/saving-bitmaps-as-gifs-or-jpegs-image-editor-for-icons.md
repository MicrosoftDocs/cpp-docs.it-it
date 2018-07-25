---
title: Salvataggio di bitmap come file GIF o JPEG (Editor di immagini per le icone) | Documenti Microsoft
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
ms.openlocfilehash: aed35f50e8cb874cea833439150b717034244b95
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890188"
---
# <a name="saving-bitmaps-as-gifs-or-jpegs-image-editor-for-icons"></a>Salvataggio di bitmap come file GIF o JPEG (Editor di immagini per le icone)
Quando si crea una bitmap, viene creato l'immagine in formato bitmap (bmp). Tuttavia, è possibile, salvare l'immagine come GIF o JPEG o in altri formati.  
  
> [!NOTE]
>  Questo processo si applica alle icone e cursori.  
  
### <a name="to-create-and-save-a-bitmap-as-a-gif-or-jpeg"></a>Per creare e salvare una bitmap come file GIF o JPEG  
  
1.  Dal **File** menu, scegliere **aprire**, quindi fare clic su **File**.  
  
2.  Nel **la finestra di dialogo Nuovo File**, fare clic su di **Visual C++** cartella, quindi selezionare **File Bitmap (bmp)** nel **modelli** casella e fare clic su  **Aprire**.  
  
     La bitmap viene aperto nel **immagine** editor.  
  
3.  Apportare modifiche alla nuova bitmap in base alle esigenze.  
  
4.  Con la bitmap è aperta nel **immagine** editor, fare clic su **salvare *filename*bmp come** sul **File** menu.  
  
5.  Nel **Salva File con nome** finestra di dialogo digitare il nome che si desidera assegnare al file e l'estensione corrispondente al formato di file in cui si desidera il **nome File** casella. Ad esempio Miofile. gif.  
  
     **Nota** è necessario creare o aprire la mappa di bit all'esterno del progetto per salvarlo come un altro formato di file. Se si crea o aprirlo all'interno del progetto, il **Salva con nome** comando non sarà disponibile. Per ulteriori informazioni, vedere [visualizzazione di risorse in un File di Script di risorsa all'esterno di un progetto (Standalone)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
6.  Fare clic su **Salva**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)

