---
title: Disabilitazione delle Guide | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- guides, disabling snapping
- Dialog editor [C++], snap to guides
- snap to guides (Dialog editor)
- controls [C++], snap to guides/grid
ms.assetid: 51efa07b-8684-474e-a0b4-191ec5d91d1a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1e3ae2e982ce04743644f9c94d9c163478c0b67e
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44313117"
---
# <a name="disabling-guides"></a>Disabilitazione delle guide

È possibile usare i tasti speciali in combinazione con il mouse per disabilitare l'effetto di blocco delle Guide. Usando il **Alt** chiave disabilita gli effetti di blocco della Guida selezionata. Lo spostamento di una Guida con i **MAIUSC** chiave che impedisce lo spostamento con la Guida di controlli bloccati.

### <a name="to-disable-the-snapping-effect-of-the-guides"></a>Per disabilitare l'effetto di blocco delle Guide

1. Trascinare il controllo e tenendo premuto il **Alt** chiave.

### <a name="to-move-guides-without-moving-the-snapped-controls"></a>Per spostare le guide senza spostare i controlli bloccati

1. Trascinare la Guida e tenendo premuto il **MAIUSC** chiave.

### <a name="to-turn-off-the-guides"></a>Per disattivare le guide

1. Dal **formato** menu, scegliere **impostazioni Guide**.

2. Nel [finestra di dialogo Impostazioni Guide](../windows/guide-settings-dialog-box.md), in **Guide**, selezionare **None**.

   > [!NOTE]
   > È anche possibile fare doppio clic sulla barra del righello per accedere la **impostazioni della Guida** nella finestra di dialogo.

\- oppure -

- Nel **formato** menu, fare clic su **Attiva/Disattiva guide**.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Stati dell'editor finestre (guide e griglie)](../windows/dialog-editor-states-guides-and-grids.md)  
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)