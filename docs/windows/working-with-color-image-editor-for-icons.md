---
title: Utilizzo dei colori (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.image.color
dev_langs:
- C++
helpviewer_keywords:
- images [C++], background colors
- Image editor [C++], Colors Palette
- colors [C++], image
- Colors Palette, Image editor
- palettes, Image editor colors
- foreground colors, Image editor
- colors [C++]
ms.assetid: d34ff96f-241d-494f-abdd-13811ada8cd3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1f9016e36ce6b081446a00136445fd7ebdd5a341
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891659"
---
# <a name="working-with-color-image-editor-for-icons"></a>Utilizzo del colori (Editor di immagini per le icone)
L'editor di immagini contiene molte funzionalità che, in particolare, gestire e personalizzare i colori. È possibile impostare un colore di primo piano o in background, Riempi aree delimitate o selezionare un colore in un'immagine da utilizzare come colore di primo piano o di sfondo corrente. È possibile utilizzare strumenti nel [barra degli strumenti dell'Editor di immagini](../windows/toolbar-image-editor-for-icons.md) con la tavolozza di colori di [finestra colori](../windows/colors-window-image-editor-for-icons.md) per creare immagini.  
  
 Nella tavolozza di colori della finestra colori, vengono visualizzati tutti i colori per monocromatico e immagini a 16 colori. Oltre a 16 colori standard, è possibile creare colori personalizzati. Uno dei colori nella tavolozza verrà immediatamente la modifica il colore corrispondente nell'immagine.  
  
 Quando le immagini lavoro con un'icona a 256 colori e il cursore, la proprietà di colori nel [finestra proprietà](/visualstudio/ide/reference/properties-window) viene utilizzato. Per ulteriori informazioni, vedere [la creazione di un cursore o un'icona a 256 colori](creating-a-256-color-icon-or-cursor-image-editor-for-icons.md).  
  
> [!NOTE]
>  Utilizzando l'Editor immagini, è possibile visualizzare, ma non modificare, immagini a 32 bit.  
  
 Inoltre è possibile creare immagini a colori a true. Tuttavia, campioni di colore true non vengono visualizzati nella tavolozza completa nella finestra colori. vengono visualizzati solo nell'area indicatore di colore di primo piano o in background. Colori true vengono creati mediante il [la finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md). Per ulteriori informazioni, vedere [personalizzazione o modifica dei colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md).  
  
 È possibile salvare le tavolozze di colori personalizzati sul disco e ricaricarli in base alle esigenze. La tavolozza dei colori utilizzati di recente viene salvato nel Registro di sistema e caricato automaticamente al successivo che avvio di Visual Studio.  
  
-   [Selezione dei colori di sfondo e primo piano](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md)  
  
-   [La compilazione di un'Area delimitata di un'immagine con un colore](../windows/filling-a-bounded-area-of-an-image-with-a-color-image-editor-for-icons.md)  
  
-   [Selezione di un colore da un'immagine da utilizzare altrove](../windows/picking-up-a-color-from-an-image-to-use-elsewhere-image-editor-for-icons.md)  
  
-   [Selezione di uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md)  
  
-   [Inversione dei colori in una selezione](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md)  
  
-   [Personalizzazione o modifica dei colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md)  
  
-   [Salvataggio e caricamento di tavolozze dei colori diverse](../windows/saving-and-loading-different-color-palettes-image-editor-for-icons.md)  
  
-   [Finestra colori](../windows/colors-window-image-editor-for-icons.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   

