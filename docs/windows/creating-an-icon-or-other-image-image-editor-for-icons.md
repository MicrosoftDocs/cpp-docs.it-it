---
title: Creazione di un'icona o un'altra immagine (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.bitmap
dev_langs:
- C++
helpviewer_keywords:
- bitmaps [C++]
- images [C++], creating
- resource toolbars
- resources [Visual Studio], creating images
- bitmaps [C++], creating
- graphics [C++], creating
- Image editor [C++], creating images
ms.assetid: 66db3fb2-cfc1-48a2-9bdd-53f61eb7ee30
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bab69a9f7e62161d95ebcf788a05f776af88f10f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42607234"
---
# <a name="creating-an-icon-or-other-image-image-editor-for-icons"></a>Creazione di un'icona o di un'altra immagine (Editor di immagini per le icone)

È possibile creare una nuova immagine (bitmap, icona, del cursore o sulla barra degli strumenti), quindi usare l'editor di immagini per personalizzare l'aspetto del controllo. È anche possibile creare una nuova bitmap in base a un [modello](../windows/how-to-use-resource-templates.md).

### <a name="to-add-a-new-image-resource-to-an-unmanaged-c-project"></a>Per aggiungere una nuova risorsa di immagine a un progetto C++ non gestito

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC, quindi scegliere **Inserisci risorsa** dal menu di scelta rapida. (Se hai già una risorsa immagine esistente nel file RC, ad esempio un cursore, è possibile semplicemente fare doppio clic il **cursore** cartella e selezionare **Inserisci cursore** dal menu di scelta rapida.)

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nel [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md), selezionare il tipo di risorsa immagine si vuole creare (**Bitmap**, ad esempio) quindi fare clic su **New**.

   Se un segno più (**+**) visualizzato accanto al tipo di risorsa immagine nel **Inserisci risorsa** finestra di dialogo, significa che i modelli della barra degli strumenti sono disponibili. Fare clic sul segno più per espandere l'elenco dei modelli, selezionare un modello e fare clic su **New**.

### <a name="to-add-a-new-image-resource-to-a-project-in-a-net-programming-language"></a>Per aggiungere una nuova risorsa di immagine a un progetto in un linguaggio di programmazione .NET

1. Nelle **Esplora soluzioni**, fare clic sulla cartella di progetto (ad esempio, `WindowsApplication1`).

2. Dal menu di scelta rapida, fare clic su **Add**, quindi scegliere **Aggiungi nuovo elemento**.

3. Nel **categorie** riquadro, espandere il **elementi del progetto locale** cartella, quindi scegliere **risorse**.

4. Nel **modelli** riquadro, scegliere il tipo di risorsa da aggiungere al progetto.

   La risorsa viene aggiunta al progetto in **Esplora soluzioni** e la risorsa viene aperta nel [editor di immagini](../windows/image-editor-for-icons.md). È ora possibile usare tutti gli strumenti disponibili nell'editor di immagini per modificare l'immagine. Per altre informazioni sull'aggiunta di immagini a un progetto gestito, vedere [caricamento di un'immagine in fase di progettazione](/dotnet/framework/winforms/controls/how-to-load-a-picture-using-the-designer-windows-forms).

   > [!NOTE]
   > Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate. Per altre informazioni, vedere [Creating Resource Files](/dotnet/framework/resources/creating-resource-files-for-desktop-apps) nel *manuale dello sviluppatore di .NET Framework*.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)  
[Conversione di bitmap in barre degli strumenti](../windows/converting-bitmaps-to-toolbars.md)  
[Creazione di nuove barre degli strumenti](../windows/creating-new-toolbars.md)  
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)  
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)