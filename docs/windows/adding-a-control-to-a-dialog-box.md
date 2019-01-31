---
title: Aggiunta di un controllo alla finestra di dialogo (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.dialog.dialog
helpviewer_keywords:
- dialog boxes [C++], adding controls to
- Toolbox [C++], Dialog Editor tab
- controls [C++], types
- syslink controls in dialog boxes
- custom controls [C++], dialog boxes
- controls [C++], standard
- Dialog Editor [C++], creating controls
- controls [C++], adding to dialog boxes
- controls [C++], adding multiple
- dialog box controls [C++], size
- controls [C++], sizing
ms.assetid: b2a26d19-093f-49ca-93da-fef00dfbb381
ms.openlocfilehash: 92b644769bcbe2649d00ba68437bd474ee06dfcc
ms.sourcegitcommit: b488462a6e035131121e6f32d8f3b108cc798b5e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/30/2019
ms.locfileid: "55293624"
---
# <a name="adding-a-control-to-a-dialog-box-c"></a>Aggiunta di un controllo alla finestra di dialogo (C++)

Il **Editor finestre** verrà visualizzata la scheda nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox) quando si lavora nel **dialogo** editor. Per aggiungere controlli alla nuova finestra di dialogo, trascinare i controlli dal **casella degli strumenti** alla finestra di dialogo che si sta creando. È quindi possibile spostare i controlli all'interno della finestra oppure modificarne la dimensione e la forma.

I controlli standard disponibili nel **casella degli strumenti** sono:

- [Controllo Button](../mfc/reference/cbutton-class.md)

- [Controllo casella di controllo](../mfc/reference/styles-used-by-mfc.md#button-styles)

- [Controllo casella combinata](../mfc/reference/ccombobox-class.md)

- [Controllo di modifica](../mfc/reference/cedit-class.md)

- Casella di gruppo

- [Controllo casella di riepilogo](../mfc/reference/clistbox-class.md)

- [Controllo pulsante di opzione](../mfc/reference/styles-used-by-mfc.md#button-styles)

- [Controllo Static Text](../mfc/reference/cstatic-class.md)

- [Controllo immagine](../mfc/reference/cpictureholder-class.md)

- [Controllo Rich Edit 2.0](../mfc/using-cricheditctrl.md)

- [Controllo barra di scorrimento](../mfc/reference/cscrollbar-class.md)

Il [Windows Common Controls](../mfc/controls-mfc.md) disponibile nel **della casella degli strumenti** incrementano le funzionalità nell'applicazione. e comprendono:

- [Controllo dispositivo di scorrimento](../mfc/slider-control-styles.md)

- [Controllo di selezione](../mfc/using-cspinbuttonctrl.md)

- [Controllo Progress](../mfc/styles-for-the-progress-control.md)

- [Controllo hot Key](../mfc/using-a-hot-key-control.md)

- [Controllo elenco](../mfc/list-control-and-list-view.md)

- [Controllo albero](../mfc/tree-control-styles.md)

- [Controllo struttura a schede](../mfc/tab-controls-and-property-sheets.md)

- [Controllo Animation](../mfc/using-an-animation-control.md)

- [Controllo Date Time Picker](../mfc/creating-the-date-and-time-picker-control.md)

- [Controllo calendario mensile](../mfc/month-calendar-control-examples.md)

- [Controllo indirizzo IP](../mfc/reference/cipaddressctrl-class.md)

- [Controllo Extended Combo Box](../mfc/creating-an-extended-combo-box-control.md)

- [Controllo personalizzato](custom-controls-in-the-dialog-editor.md)

È possibile aggiungere controlli personalizzati alla finestra di dialogo selezionando il **controllo personalizzato** icona nel **della casella degli strumenti** e trascinando la finestra di dialogo. Per aggiungere un **Syslink** controllare, aggiungere un controllo personalizzato, quindi modificare il controllo **classe** proprietà **Syslink**. In questo modo le proprietà da aggiornare e visualizzare il **Syslink** proprietà del controllo. Per informazioni sulla classe wrapper MFC, vedere [CLinkCtrl](../mfc/reference/clinkctrl-class.md).

È anche possibile [aggiungere i controlli ActiveX alla finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).

È anche possibile personalizzare il **casella degli strumenti** finestra per semplificare l'utilizzo. Per altre informazioni, vedere [Uso della casella degli strumenti](/visualstudio/ide/using-the-toolbox).

Per altre informazioni sull'uso di **RichEdit 1.0** controllare con MFC, vedere [utilizzo del controllo RichEdit 1.0 con MFC](../windows/using-the-richedit-1-0-control-with-mfc.md)

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-add-a-control-to-a-dialog-box"></a>Per aggiungere un controllo a una finestra di dialogo

1. Assicurarsi che la finestra a schede della finestra di dialogo sia il documento corrente nel frame dell'editor. Se una finestra di dialogo non è il documento corrente, non verrà visualizzato il **scheda Editor finestre** nel **della casella degli strumenti**.

1. Nel **Editor finestre** scheda della finestra di [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox), selezionare il controllo desiderato e quindi:

   - Selezionare la finestra di dialogo in corrispondenza della posizione in cui si desidera posizionare il controllo. Il controllo viene visualizzato in cui è stata selezionata.

       \- oppure -

   - Trascinare e rilasciare il controllo dal **casella degli strumenti** finestra nella posizione sulla finestra di dialogo.

       \- oppure -

   - Fare doppio clic sul controllo nella **casella degli strumenti** finestra (viene visualizzato nella finestra di dialogo) quindi riposizionare il controllo nella posizione desiderata.

## <a name="to-add-multiple-controls"></a>Per aggiungere più controlli

1. Mentre si tiene premuto il **Ctrl** chiave, selezionare un controllo nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox).

1. Versione di **Ctrl** , selezionare la finestra di dialogo come tutte le volte che si desidera aggiungere un controllo particolare.

1. Premere **Esc** per arrestare l'inserimento di controlli.

## <a name="to-size-a-control-while-you-add-it"></a>Per ridimensionare un controllo durante l'aggiunta

1. Selezionare un controllo nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox).

1. Posizionare il cursore, che compare come mirino, in cui si desidera che l'angolo superiore sinistro del nuovo controllo in una finestra di dialogo.

1. Selezionare e tenere premuto il pulsante del mouse per ancorare l'angolo superiore sinistro del controllo nella finestra di dialogo, quindi trascinare il cursore a destra e verso il basso fino a quando il controllo è la dimensione desiderata.

   > [!NOTE]
   > È possibile ancorare uno qualsiasi dei quattro angoli del controllo che si disegna. Nell'angolo superiore sinistro di utilizzare questa procedura come esempio.

1. Rilasciare il pulsante del mouse. Il controllo verrà posizionato nella finestra di dialogo della dimensione che è specificata.

   > [!TIP]
   > È possibile ridimensionare il controllo dopo il trascinamento nella finestra di dialogo spostando i quadratini di ridimensionamento sul bordo del controllo. Per altre informazioni, vedere [ridimensionamento di singoli controlli](../windows/sizing-individual-controls.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md)<br/>
[Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)<br/>
[Controlli](../mfc/controls-mfc.md)<br/>
[Classi di controlli](../mfc/control-classes.md)<br/>
[Classi di finestre di dialogo](../mfc/dialog-box-classes.md)<br/>
[Stili di barra di scorrimento](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles)<br/>
[Esempi di controlli Rich Edit](../mfc/rich-edit-control-examples.md)<br/>
