---
title: Creazione di un'immagine per dispositivo (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.editors.icon
dev_langs: C++
helpviewer_keywords:
- cursors [C++], creating
- icons [C++], creating
- display devices
- display devices, creating image
- images [C++], creating for display devices
- icons [C++], inserting
ms.assetid: 5a536928-32df-4ace-beb1-1521ce3b871f
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d68a9d35471e43296cade829700fc6c5b311ce2a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-a-device-image-image-editor-for-icons"></a>Creazione di un'immagine per dispositivo (Editor di immagini per le icone)
Quando si crea una nuova risorsa icona o cursore, l'immagine editor crea innanzitutto un'immagine in uno stile specifico (32 × 32 a 16 colori per le icone e 32 × 32 monocromatica per i cursori). È quindi possibile aggiungere immagini di diverse dimensioni e stili iniziale sull'icona o cursore e modificare ciascuna immagine aggiuntiva, in base alle esigenze, per i dispositivi di visualizzazione diverse. È anche possibile modificare un'immagine eseguendo un'operazione di taglia e Incolla da un tipo di immagine esistente o da una bitmap creato in un'applicazione grafica.  
  
 Quando si apre la risorsa icona o cursore nel [editor di immagini](../windows/image-editor-for-icons.md), l'immagine che corrisponde maggiormente il dispositivo di visualizzazione corrente è aperto per impostazione predefinita.  
  
### <a name="to-create-a-new-icon-or-cursor"></a>Per creare una nuova icona o cursore  
  
1.  In [visualizzazione risorse](../windows/resource-view-window.md), fare doppio clic sul file RC, quindi scegliere **Inserisci risorsa** dal menu di scelta rapida. (Se si dispone già di una risorsa immagine esistente nel file RC, ad esempio un cursore, è possibile fare semplicemente il **cursore** cartella e selezionare **Inserisci cursore** dal menu di scelta rapida.)  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel [la finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md)selezionare **icona** o **cursore** e fare clic su **New**. Per le icone, verrà creata una risorsa icona con una 32 × 32, un'icona a 16 colori. Per i cursori, 32 × 32, viene creata l'immagine monocromatica di (2-colore).  
  
     Se un segno più (**+**) visualizzato accanto il tipo di risorsa immagine il **Inserisci risorsa** la finestra di dialogo, significa che i modelli della barra degli strumenti sono disponibili. Fare clic sul segno più per espandere l'elenco dei modelli, selezionare un modello e fare clic su **New**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 **Requisiti**  
  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)   
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)
