---
title: L'impostazione di un cursore&#39;s Hot Spot (Editor di immagini per le icone) | Microsoft Docs
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
- cursors, hot spots
- hot spots
ms.assetid: a610388a-45c8-43cd-98a2-fd31f29238b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 539f16c1de7569818a1d460730f9c48fbca82ed8
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42590825"
---
# <a name="setting-a-cursor39s-hot-spot-image-editor-for-icons"></a>L'impostazione di un cursore&#39;s Hot Spot (Editor di immagini per le icone)

L'area sensibile di un [cursore](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md) è il punto al quale fa riferimento Windows per rilevare la posizione del cursore. Per impostazione predefinita, viene impostato l'area sensibile nell'angolo superiore sinistro del cursore (coordinate 0,0). Il **Hotspot** proprietà il [finestra proprietà](/visualstudio/ide/reference/properties-window) Mostra le coordinate di area sensibile.

### <a name="to-set-a-cursors-hot-spot"></a>Per impostare l'area sensibile del cursore

1. Nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md), fare clic sui **Imposta area sensibile** dello strumento.

2. Fare clic su pixel che si desidera designare come area sensibile del cursore.

   Il **Hotspot** proprietà il **proprietà** finestra vengono visualizzate le nuove coordinate.

   > [!TIP]
   > Descrizioni comandi vengono visualizzati quando si passa il cursore su un pulsante della barra degli strumenti. Questi suggerimenti consentono di identificare la funzione di ogni pulsante.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)  
[Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)