---
title: Copia un'immagine per dispositivo (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- display devices, copying images
- cursors, copying
- icons, copying
ms.assetid: 0510c20c-f820-4770-92a5-e9263a63d8be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 31ba668078d80b927d6a898d4700efe1e546ea1e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600097"
---
# <a name="copying-a-device-image-image-editor-for-icons"></a>Copia di un'immagine per dispositivo (Editor di immagini per le icone)

### <a name="to-copy-a-device-image"></a>Per copiare un'immagine per dispositivo

1. Nel **immagine** menu, fare clic su **Apri immagine dispositivo** e selezionare un'immagine dall'elenco di immagini corrente. Ad esempio, scegliere i 32 × 32, versione 16 colori di un'icona.

2. Copiare l'immagine dell'icona visualizzata (**Ctrl**+**C**).

3. Aprire una diversa immagine dell'icona in un altro **Editor di immagini** finestra. Ad esempio, aprire il 16 × 16 a 16 colori versione dell'icona.

4. Incollare l'immagine dell'icona (**Ctrl**+**V**) da uno **Editor di immagini** finestra a altra. Se si incolla dimensioni maggiori in dimensioni inferiori, è possibile utilizzare gli handle icona per ridimensionare l'immagine.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)  
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)