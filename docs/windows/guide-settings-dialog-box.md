---
title: Guida alla finestra di dialogo Impostazioni (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DLUs (dialog units)
- Dialog Editor [C++], snap to guides
- grid spacing
- guides, settings
- dialog units (DLUs)
- layout grid in Dialog Editor
- snap to guides (Dialog editor)
- controls [C++], snap to guides/grid
- Guide Settings dialog box (Dialog editor)
ms.assetid: 55381e1c-146a-4fa7-b1b3-b1492817615f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a9ebc7828916b0c5809563a8f1e153d5e59a1ad7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46382026"
---
# <a name="guide-settings-dialog-box-c"></a>Finestra di dialogo Impostazioni guide (C++)

## <a name="layout-guides"></a>Guide

Consente di visualizzare le impostazioni per le guide di layout.

### <a name="none"></a>nessuno

Nasconde gli strumenti di layout.

### <a name="rulers-and-guides"></a>Righelli e guide

Quando abilitato, aggiunge i righelli per strumenti di layout. le guide possono essere posizionate nei righelli. Le guide all'impostazione predefinita sono i margini, che possono essere spostati mediante il trascinamento. Fare clic sui righelli per posizionare una Guida. Controlli "Guide" guide alle procedure quando i controlli vengono spostati sopra o accanto a essi. Controlli vengono spostati anche con una guida sono associati a esso. Quando un controllo associato a una Guida su ciascun lato e una Guida viene spostata, il controllo viene ridimensionato.

### <a name="grid"></a>Grid

Crea una griglia di layout. Nuovi controlli vengono automaticamente allineati alla griglia.

## <a name="grid-spacing"></a>spaziatura di griglia

Consente di visualizzare le impostazioni per la spaziatura della griglia in unità di finestra di dialogo (DLU-Dialog Unit).

### <a name="width-dlus"></a>Width: DLU-Dialog Unit

Imposta la larghezza della griglia di layout in DLU-Dialog Unit. Una DLU orizzontale sia la larghezza media del tipo di carattere finestra dialogo diviso per quattro.

### <a name="height-dlus"></a>Height: DLU-Dialog Unit

Imposta l'altezza della griglia di layout in DLU-Dialog Unit. Una DLU verticale è l'altezza di average del tipo di carattere nella finestra di dialogo diviso per 8.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica della griglia di layout](../windows/modifying-the-layout-grid.md)<br/>
[Stati dell'editor finestre (guide e griglie)](../windows/dialog-editor-states-guides-and-grids.md)