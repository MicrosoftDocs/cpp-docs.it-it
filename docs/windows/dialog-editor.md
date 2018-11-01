---
title: Editor finestre (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.dialog.dialog
- vc.editors.dialog.F1
helpviewer_keywords:
- resource editors [C++], Dialog editor
- editors, dialog boxes
- Dialog editor
- dialog boxes [C++], editing
ms.assetid: d94884ef-2cca-49d8-9b58-775f34848134
ms.openlocfilehash: 9ca532e1691a5d92280c89067a943b7d2e27e3f6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50540881"
---
# <a name="dialog-editor-c"></a>Editor finestre (C++)

Il **dialogo** editor consente di creare o modificare le risorse finestra di dialogo. Si apre l'editor finestre facendo doppio clic sul file RC di una finestra di dialogo il **visualizzazione di risorse** finestra (**View** > **visualizzazione risorse**). Si noti che **visualizzazione risorse** non è disponibile nelle edizioni Express.

Uno dei primi passaggi per creare una nuova finestra di dialogo (o un modello di finestra di dialogo) consiste nell'aggiunta dei controlli alla finestra di dialogo. Nel **dialogo** editor, è possibile disporre i controlli per adattarli un determinate dimensioni, forma o allineamento oppure è possibile spostare circa affinché funzioni nella finestra di dialogo. È inoltre facile eliminare un controllo.

È possibile archiviare una finestra di dialogo come modello in modo da poterla riusare. È possibile passare facilmente dalla progettazione della finestra di dialogo e alla modifica del codice che la implementa e viceveresa.

È inoltre possibile modificare le proprietà di uno o più controlli nell'editor finestre. È possibile modificare l'ordine di tabulazione, vale a dire, l'ordine in cui i controlli vengono attivati lo stato attivo quando la **scheda** viene premuto, oppure è possibile definire una chiave di accesso (una combinazione di tasti) che consente agli utenti di scegliere un controllo usando la tastiera. Per un elenco dei tasti di scelta predefiniti, vedere [Tasti di scelta rapida per l'editor finestre](../windows/accelerator-keys-for-the-dialog-editor.md).

Il **dialogo** editor consente anche di usare i controlli personalizzati, inclusi i controlli ActiveX. Inoltre, è possibile modificare una [visualizzazione maschera](../mfc/reference/cformview-class.md), le [visualizzazioni di record](../data/record-views-mfc-data-access.md)o [le barre delle finestre di dialogo](../mfc/dialog-bars.md).

A partire da Visual Studio 2015, è possibile utilizzare l'editor finestre per definire layout dinamico che specificano come controlli spostano e ridimensionare quando l'utente ridimensiona una finestra di dialogo. Per altre informazioni, vedere [Dynamic Layout](../mfc/dynamic-layout.md).

- [Creazione di una nuova finestra di dialogo](../windows/creating-a-new-dialog-box.md)

- [Creazione di una finestra di dialogo da cui non è possibile uscire in fase di esecuzione](../windows/creating-a-dialog-box-that-users-cannot-exit.md)

- [Attivazione o disattivazione della visualizzazione della barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md)

- [Passaggio dall'editor finestre al codice e viceversa](../windows/switching-between-dialog-box-controls-and-code.md)

- [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)

- [Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md)

- [Verifica di una finestra di dialogo](../windows/testing-a-dialog-box.md)

- [Tasti di scelta rapida per l'editor finestre](../windows/accelerator-keys-for-the-dialog-editor.md)

- [Risoluzione dei problemi relativi all'editor finestre](../windows/troubleshooting-the-dialog-editor.md)

   > [!TIP]
   > Quando si usa la **dialogo** editor, in molti casi, è possibile fare clic il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi usati frequentemente.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Controlli](../mfc/controls-mfc.md)<br/>
[Classi di controlli](../mfc/control-classes.md)<br/>
[Classi di finestre di dialogo](../mfc/dialog-box-classes.md)<br/>
[Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)