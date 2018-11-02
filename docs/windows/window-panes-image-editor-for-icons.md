---
title: Riquadri della finestra (Editor di immagini per le icone)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.bitmap
- vc.editors.icon
helpviewer_keywords:
- graphics editor [C++]
- Image editor [C++], panes
ms.assetid: d66ea5b3-e2e2-4fc4-aa99-f50022cc690e
ms.openlocfilehash: f29766095048e4e06d16d37f2792ab18282eadf0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474334"
---
# <a name="window-panes-image-editor-for-icons"></a>Riquadri della finestra (Editor di immagini per le icone)

Il **Editor di immagini** finestra in genere visualizza un'immagine in due riquadri separati da una barra di divisione. Una vista è dimensioni effettive e l'altra viene ingrandita (il fattore di ingrandimento predefinita è 6). Le viste in questi due riquadri vengono aggiornate automaticamente: le modifiche apportate in un riquadro vengono visualizzate immediatamente in altro. I due riquadri rendono più semplice per usare una vista ingrandita dell'immagine, in cui è possibile distinguere i singoli pixel e, contemporaneamente, osservare gli effetti del lavoro svolto sulla vista dimensioni effettive dell'immagine.

Nel riquadro a sinistra viene utilizzato tutto lo spazio è necessario (fino a metà della **immagine** finestra) per visualizzare la visualizzazione di ingrandimento 1:1 (predefinito) dell'immagine. Riquadro di destra visualizza l'immagine con zoom (percentuale di ingrandimento 6:1 per impostazione predefinita). È possibile [modificare l'ingrandimento](../windows/changing-the-magnification-factor-image-editor-for-icons.md) in ogni riquadro usando la **Magnify** strumento nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) oppure usando i tasti di scelta rapida.

È possibile ingrandire il riquadro inferiore del **Editor di immagini** finestra e utilizzare i due riquadri per mostrare diverse aree di un'immagine di grandi dimensioni. Fare clic nel riquadro per selezionarlo.

È possibile modificare le dimensioni relative dei riquadri posizionando il puntatore del mouse sulla barra di divisione e spostando la barra di divisione verso destra o sinistra. Barra di divisione è possibile spostare completamente in entrambi i lati se si desidera lavorare con un solo riquadro.

Se il **Editor di immagini** riquadro viene ingrandita di un fattore pari a 4 o versione successiva, è possibile [visualizzare una griglia in pixel](../windows/displaying-or-hiding-the-pixel-grid-image-editor-for-icons.md) che delimita i singoli pixel nell'immagine.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)