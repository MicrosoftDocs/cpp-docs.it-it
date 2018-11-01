---
title: Creazione di una descrizione comando per un pulsante della barra degli strumenti (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- tool tips [C++], adding to toolbar buttons
- "\nin tool tip"
- toolbar buttons [C++], tool tips
- buttons [C++], tool tips
- Toolbar editor [C++], creating tool tips
ms.assetid: 0af65342-fd78-4e78-8d0d-dc68f7fc462e
ms.openlocfilehash: 9179dfcc47f69b9f5db131467f0216da6363085c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50558006"
---
# <a name="creating-a-tool-tip-for-a-toolbar-button-c"></a>Creazione di una descrizione comando per un pulsante della barra degli strumenti (C++)

### <a name="to-create-a-tool-tip"></a>Per creare una descrizione comando

1. Selezionare il pulsante della barra degli strumenti.

2. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), nella **dei messaggi di richiesta** campo della proprietà, aggiungere una descrizione del pulsante per la barra di stato; dopo il messaggio, aggiungere `\n` e il nome della descrizione comandi.

Un esempio comune di una descrizione comando è il **Print** sul pulsante **WordPad**:

1. Aprire **WordPad**.

2. Posizionare il puntatore del mouse sulle **stampa** pulsante della barra degli strumenti.

3. Si noti che la parola `Print` ora è mobile sotto il puntatore del mouse.

4. Nella barra di stato (nella parte inferiore del **WordPad** finestra)-si noti che viene ora visualizzato il testo `Prints the active document`.

Il `Print` nel **passaggio 3** è il "nome della descrizione comandi," e il `Prints the active document` dalla **passaggio 4** "descrizione del pulsante della barra di stato".

Se si desidera che questo effetto usando il **sulla barra degli strumenti** editor, si imposta la **dei messaggi di richiesta** proprietà `Prints the active document\nPrint`.

> [!NOTE]
> È possibile modificare il testo del messaggio utilizzando la [finestra proprietà](/visualstudio/ide/reference/properties-window).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Creazione, spostamento e modifica dei pulsanti delle barre degli strumenti](../windows/creating-moving-and-editing-toolbar-buttons.md)<br/>
[Editor barra degli strumenti](../windows/toolbar-editor.md)