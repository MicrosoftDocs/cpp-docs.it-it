---
title: Modifica della griglia di Layout | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], layout grid
- snap to layout grid
- grids, turning on or off
- layout grid in Dialog Editor
- grids, changing size
ms.assetid: ec31f595-7542-485b-806f-efbaeccc1b3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 615138b44ab9fdbbf94d4130428ba708697c2aee
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42601848"
---
# <a name="modifying-the-layout-grid"></a>Modifica della griglia di layout

Durante l'inserimento o la disposizione dei controlli in una finestra di dialogo, è possibile usare la griglia del layout per il posizionamento più preciso. Quando la griglia è attivata, i controlli vengono visualizzati per "Blocca" le linee punteggiate della griglia come se magnetizzato. È possibile attivare e disattivare questa funzionalità "Blocca sulla griglia" e modificare le dimensioni delle celle della griglia di layout.

### <a name="to-turn-the-layout-grid-on-or-off"></a>Per attivare o disattivare la griglia di layout

1. Dal **formato** menu, scegliere **impostazioni Guide**.

2. Nel [finestra di dialogo Impostazioni Guide](../windows/guide-settings-dialog-box.md), selezionare o deselezionare le **griglia** pulsante.

   È comunque possibile controllare la griglia in singoli **finestra di dialogo** finestre dell'editor tramite il **Attiva/Disattiva griglia** pulsante il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

### <a name="to-change-the-size-of-the-layout-grid"></a>Per modificare le dimensioni della griglia di layout

1. Dal **formato** menu, scegliere **impostazioni Guide**.

2. Nel [finestra di dialogo Impostazioni Guide](../windows/guide-settings-dialog-box.md), digitare l'altezza e larghezza DLU per le celle della griglia. Larghezza o all'altezza minima è di 4 DLU. Per altre informazioni su DLU-Dialog Unit, vedere [disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Stati dell'editor finestre (guide e griglie)](../windows/dialog-editor-states-guides-and-grids.md)  
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)