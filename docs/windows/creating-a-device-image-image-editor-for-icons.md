---
title: Creazione di un'immagine per dispositivo (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.icon
dev_langs:
- C++
helpviewer_keywords:
- cursors [C++], creating
- icons [C++], creating
- display devices
- display devices, creating image
- images [C++], creating for display devices
- icons [C++], inserting
ms.assetid: 5a536928-32df-4ace-beb1-1521ce3b871f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0a8af9b18b8fc1afb4ad7d0770a1b302e4e7a0e9
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42597375"
---
# <a name="creating-a-device-image-image-editor-for-icons"></a>Creazione di un'immagine per dispositivo (Editor di immagini per le icone)

Quando si crea una nuova icona o una risorsa di cursore, la **immagine** editor crea innanzitutto un'immagine in uno stile specifico (32 × 32, 32 × 32, bianco e nero per i cursori e 16 colori per le icone). È quindi possibile aggiungere immagini di diverse dimensioni e stili per l'icona iniziale o un cursore e modificare ogni ulteriore immagine, in base alle esigenze, per i dispositivi di visualizzazione diverse. È anche possibile modificare un'immagine eseguendo un'operazione di taglia e Incolla da un tipo di immagine esistente o da una bitmap creata in un programma di grafica.

Quando si apre la risorsa icona o cursore nel [editor di immagini](../windows/image-editor-for-icons.md), l'immagine che corrisponde maggiormente il dispositivo di visualizzazione corrente viene aperto per impostazione predefinita.

### <a name="to-create-a-new-icon-or-cursor"></a>Per creare una nuova icona o cursore

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC, quindi scegliere **Inserisci risorsa** dal menu di scelta rapida. (Se hai già una risorsa immagine esistente nel file RC, ad esempio un cursore, è possibile semplicemente fare doppio clic il **cursore** cartella e selezionare **Inserisci cursore** dal menu di scelta rapida.)

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nel [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md), selezionare **icona** oppure **cursore** e fare clic su **New**. Per le icone, verrà creata una risorsa icona con un 32 × 32, un'icona a 16 colori. Per i cursori, a 32 × 32, viene creata l'immagine monocromatica (2-colore).

   Se un segno più (**+**) visualizzato accanto al tipo di risorsa immagine nel **Inserisci risorsa** finestra di dialogo, significa che i modelli della barra degli strumenti sono disponibili. Fare clic sul segno più per espandere l'elenco dei modelli, selezionare un modello e fare clic su **New**.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)  
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)  
[Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)