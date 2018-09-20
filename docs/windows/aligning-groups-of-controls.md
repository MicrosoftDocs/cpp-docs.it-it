---
title: Allineamento di gruppi di controlli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], aligning
ms.assetid: a4f49a73-4a17-44b3-8568-aa35f646b5cf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c791f2951eb7ac9947d48b563bde624bc3b7979f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46393581"
---
# <a name="aligning-groups-of-controls"></a>Allineamento di gruppi di controlli

La procedura seguente viene illustrato come allineare gruppi di controlli.

### <a name="to-align-groups-of-controls"></a>Per allineare i gruppi di controlli

1. [Selezionare i controlli](../windows/selecting-multiple-controls.md) che si desidera allineare. Assicurarsi di selezionare il controllo che si desidera essere prima di tutto al controllo dominante o impostarlo in modo che sia il controllo dominante prima di eseguire l'allineamento o comando di ridimensionamento.

   L'ultima posizione del gruppo di controlli dipende dalla posizione del controllo dominante. Per altre informazioni sulla selezione del controllo dominante, vedere [impostazione del controllo dominante](../windows/specifying-the-dominant-control.md).

2. Dal **formato** menu, scegliere **Align**e quindi scegliere una delle seguenti allineamenti:

   - `Lefts`: consente di allineare i controlli selezionati lungo il lato sinistro.

   - `Centers`: consente di allineare i controlli selezionati in senso orizzontale lungo il punto centrale.

   - `Rights`: consente di allineare i controlli selezionati lungo il lato destro.

   - `Tops`: consente di allineare i controlli selezionati lungo il bordo superiore.

   - `Middles`: consente di allineare i controlli selezionati verticalmente lungo il punto centrale.

   - `Bottoms`: consente di allineare i controlli selezionati lungo il bordo inferiore.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)<br/>
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)