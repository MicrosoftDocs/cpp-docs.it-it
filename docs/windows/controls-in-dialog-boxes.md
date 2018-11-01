---
title: I controlli nelle finestre di dialogo (C++) | Microsoft Docs
ms.date: 11/04/2016
helpviewer_keywords:
- controls [C++], dialog boxes
- dialog box controls [C++], about dialog box controls
- dialog box controls
ms.assetid: e216c4f9-2fd4-429d-889a-8ebce7bad177
ms.openlocfilehash: 3f559a82d7c73dd8050f23e0b3af34f0bcb410c8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644882"
---
# <a name="controls-in-dialog-box-ces"></a>Controlli nella finestra di dialogo (C++) es

È possibile aggiungere controlli a una finestra di dialogo tramite il [scheda Editor finestre](../windows/dialog-editor-tab-toolbox.md) nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox), che consente di scegliere il controllo desiderato e trascinarlo nella finestra di dialogo. Per impostazione predefinita, la finestra Casella degli strumenti è impostata per l'opzione Nascondi automaticamente. Viene visualizzata come scheda sul margine sinistro della soluzione quando l'editor finestre è aperta. Tuttavia, è possibile aggiungere il **della casella degli strumenti** finestra nella posizione desiderata, fare clic il **Nascondi automaticamente** pulsante nell'angolo superiore destro della finestra. Per altre informazioni su come controllare il comportamento di questa finestra, vedere [gestione delle finestre](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Il modo più rapido per aggiungere controlli a una finestra di dialogo, riposizionare i controlli esistenti o spostare i controlli da una finestra di dialogo a altro, consiste nell'utilizzare il metodo di trascinamento e rilascio. La posizione del controllo è descritto in una linea punteggiata finché non viene eliminato nella finestra di dialogo. Quando si aggiunge un controllo alla finestra di dialogo con il metodo di trascinamento e rilascio, il controllo ha un'altezza standard appropriata per tale tipo di controllo.

Quando si aggiunge un controllo a una finestra di dialogo o riposizionarlo, la posizione finale può essere determinata mediante le guide o i margini, o se si dispone della griglia di layout attivata.

Dopo aver aggiunto un controllo alla finestra di dialogo, è possibile modificare le proprietà, ad esempio la didascalia, nella [finestra proprietà](/visualstudio/ide/reference/properties-window). È possibile selezionare più controlli e modificarne le proprietà in una sola volta.

- [Aggiunta, modifica o eliminazione di controlli](adding-editing-or-deleting-controls.md)

- [Selezione di controlli](../windows/selecting-controls.md)

- [Ridimensionamento di singoli controlli](../windows/sizing-individual-controls.md)

- [Impostazione della stessa larghezza, altezza o dimensione per i controlli](../windows/making-controls-the-same-width-height-or-size.md)

- [Impostazione della dimensione di una casella combinata e dell'elenco a discesa](setting-the-size-of-the-combo-box-and-its-drop-down-list.md)

- [Aggiunta di valori a un controllo casella combinata](../windows/adding-values-to-a-combo-box-control.md)

- [Impostazione della larghezza di una barra di scorrimento orizzontale](../windows/setting-the-width-of-a-horizontal-scroll-bar.md)

- [La disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)

- [Controlli personalizzati nell'editor finestre](custom-controls-in-the-dialog-editor.md)

- [Definizione di tasti di scelta](../windows/defining-mnemonics-access-keys.md)

- [Impostazione della posizione e della dimensione di una finestra di dialogo](../windows/specifying-the-location-and-size-of-a-dialog-box.md)

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md)<br/>
[Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)<br/>
[Editor finestre](../windows/dialog-editor.md)