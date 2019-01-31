---
title: Allineare i controlli
ms.date: 11/04/2016
helpviewer_keywords:
- controls [C++], aligning
- controls [C++], positioning
- Space Evenly command
- dialog box controls [C++], placement
- Center in Dialog command
- Arrange Buttons command
- buttons, arranging push buttons in dialog boxes
- push buttons
ms.assetid: a4f49a73-4a17-44b3-8568-aa35f646b5cf
ms.openlocfilehash: abfae0f0146fa736a6427eb1180805717ce8a78e
ms.sourcegitcommit: 5270117dbecc4c49bca0cf10b927bae3c9930038
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/31/2019
ms.locfileid: "55484981"
---
# <a name="align-controls"></a>Allineare i controlli

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

Le procedure seguenti illustrano come allineare i controlli:

## <a name="to-align-groups-of-controls"></a>Per allineare i gruppi di controlli

1. [Selezionare i controlli](../windows/selecting-multiple-controls.md) che si desidera allineare. Assicurarsi di selezionare il controllo che si desidera essere prima di tutto al controllo dominante o impostarlo in modo che sia il controllo dominante prima di eseguire l'allineamento o comando di ridimensionamento.

   L'ultima posizione del gruppo di controlli dipende dalla posizione del controllo dominante. Per altre informazioni sulla selezione del controllo dominante, vedere [impostazione del controllo dominante](../windows/specifying-the-dominant-control.md).

1. Dal **formato** menu, scegliere **Align**e quindi scegliere una delle seguenti allineamenti:

   - `Lefts`: consente di allineare i controlli selezionati lungo il lato sinistro.

   - `Centers`: consente di allineare i controlli selezionati in senso orizzontale lungo il punto centrale.

   - `Rights`: consente di allineare i controlli selezionati lungo il lato destro.

   - `Tops`: consente di allineare i controlli selezionati lungo il bordo superiore.

   - `Middles`: consente di allineare i controlli selezionati verticalmente lungo il punto centrale.

   - `Bottoms`: consente di allineare i controlli selezionati lungo il bordo inferiore.

## <a name="to-even-the-spacing-between-controls"></a>Anche la spaziatura tra i controlli

Il **dialogo** editor consente ai controlli di spazio in modo uniforme tra i controlli esterni selezionati.

1. Selezionare i controlli che si desidera riordinare.

1. Dal **formato** menu, scegliere **Ripartisci uniformemente**e quindi scegliere una delle seguenti allineamenti spaziatura:

   - `Across`: spazio controlli in modo uniforme tra più a sinistra e selezionata il controllo all'estrema destra.

   - `Down`: spazio controlli in modo uniforme tra i più in alto e il controllo di livello più basso selezionato.

## <a name="to-center-controls-in-a-dialog-box"></a>Per allineare al centro di controlli in una finestra di dialogo

1. Selezionare i controlli che si desidera riordinare.

1. Dal **formato** menu, scegliere **Centra nella finestra**, quindi scegliere una delle modalità seguenti:

   - `Vertical`: Centra verticalmente i controlli nella finestra di dialogo.

   - `Horizontal`: allineare al centro orizzontalmente i controlli nella finestra di dialogo.

## <a name="to-arrange-push-buttons-along-the-right-or-bottom-of-a-dialog-box"></a>Per disporre i pulsanti di comando lungo il bordo destro o inferiore di una finestra di dialogo

1. Selezionare uno o più pulsanti di comando.

1. Dal **formato** menu, scegliere **Disponi pulsanti**, quindi scegliere una delle modalità seguenti:

   - `Right`: consente di allineare i pulsanti di comando lungo il bordo destro della finestra di dialogo.

   - `Bottom`: consente di allineare i pulsanti di comando lungo il bordo inferiore della finestra di dialogo.

       Se si seleziona un controllo diverso da un pulsante di comando, la posizione non è interessata.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)<br/>
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)