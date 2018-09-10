---
title: Utilizzo della tavolozza da 256 colori (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- 256-color palette
- colors [C++], icons and cursors
- cursors [C++], color
- color palettes, 256-color
- palettes, 256-color
- icons, color
ms.assetid: 1506ed00-669b-4a21-b1a4-39b6a84a78bb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2eeadca20a722cc0e7e63d903f470cb3aced6d32
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44313677"
---
# <a name="using-the-256-color-palette-image-editor-for-icons"></a>Utilizzo della tavolozza da 256 colori (Editor di immagini per le icone)

Per disegnare una selezione dalla tavolozza da 256 colori, è necessario selezionare i colori dal **colori** tavolozza le [finestra colori](../windows/colors-window-image-editor-for-icons.md).

### <a name="to-choose-a-color-from-the-256-color-palette-for-large-icons"></a>Per scegliere un colore della tavolozza da 256 colori per le icone grandi

1. Selezionare l'icona di grandi dimensioni o cursore, o creare una nuova icona di grandi dimensioni o un cursore.

2. Scegliere un colore da 256 colori visualizzati nella **colori** tavolozza il **colori** finestra.

   Colore selezionato diventerà il colore corrente nella **colori** tavolozza il **colori** finestra.

   > [!NOTE]
   > La tavolozza iniziale usata per le immagini di 256 colori corrisponde a quella restituita dalla `CreateHalftonePalette` API Windows. Tutte le icone progettate per la shell di Windows devono usare questo riquadro per evitare lo sfarfallio durante la realizzazione della tavolozza.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)  
[Creazione di un cursore o di un'icona a 256 colori](creating-a-256-color-icon-or-cursor-image-editor-for-icons.md)  
[Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)