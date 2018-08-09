---
title: Utilizzo dei colori (Editor di immagini per le icone) | Microsoft Docs
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
ms.openlocfilehash: 37e469b18af727bea29681b284fd123bcce64c93
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647420"
---
# <a name="working-with-color-image-editor-for-icons"></a>Utilizzo del colori (Editor di immagini per le icone)
Il **Editor di immagini** contiene molte funzionalità che gestiscono e personalizzare i colori in modo specifico. È possibile impostare un colore di primo piano o in background, riempire le aree limitate con il colore o selezionare un colore in un'immagine da utilizzare come colore di primo piano o di sfondo corrente. È possibile usare gli strumenti nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) con la tavolozza dei colori nella [finestra colori](../windows/colors-window-image-editor-for-icons.md) per creare immagini.  
  
 Tutti i colori per monocromatico e le immagini di 16 colori, vengono visualizzati nei **colori** tavolozza nel **colori** finestra. Oltre a 16 colori standard, è possibile creare colori personalizzati. Modifica di uno qualsiasi dei colori della tavolozza immediatamente cambierà il colore corrispondente nell'immagine.  
  
 Quando si lavora con icona a 256 colori e immagini di cursore, la **colori** proprietà nel [finestra proprietà](/visualstudio/ide/reference/properties-window) viene usato. Per altre informazioni, vedere [creazione di un cursore o l'icona a 256 colori](creating-a-256-color-icon-or-cursor-image-editor-for-icons.md).  
  
> [!NOTE]
>  Usando il **Editor di immagini**, è possibile visualizzare immagini a 32 bit, ma non modificarli.  
  
 È possibile creare anche le immagini a colori true. Tuttavia, gli esempi di colore true non vengono visualizzati nella tavolozza completa nel **colori** finestra; appaiono solo nell'area indicatore di colore in primo piano o in background. Colori true vengono creati utilizzando il [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md). Per altre informazioni, vedere [personalizzazione o modifica di colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md).  
  
 È possibile salvare le tavolozze di colori personalizzati sul disco e ricaricarli in base alle esigenze. La tavolozza dei colori usata più di recente è salvato nel Registro di sistema e caricato automaticamente al successivo che avvio di Visual Studio.  
  
-   [Selezione dei colori di sfondo e primo piano](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md)  
  
-   [Un'Area delimitata di un'immagine con un colore di riempimento](../windows/filling-a-bounded-area-of-an-image-with-a-color-image-editor-for-icons.md)  
  
-   [Selezione di un colore di un'immagine da utilizzare altrove](../windows/picking-up-a-color-from-an-image-to-use-elsewhere-image-editor-for-icons.md)  
  
-   [Selezione di uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md)  
  
-   [Inversione dei colori in una selezione](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md)  
  
-   [La personalizzazione o modifica dei colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md)  
  
-   [Salvataggio e caricamento di tavolozze dei colori diversi](../windows/saving-and-loading-different-color-palettes-image-editor-for-icons.md)  
  
-   [Finestra colori](../windows/colors-window-image-editor-for-icons.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   