---
title: Controlli di finestre di dialogo (C++) | Microsoft Docs
ms.date: 02/15/2019
f1_keywords:
- Custom Control
helpviewer_keywords:
- controls [C++], dialog boxes
- dialog box controls [C++], about dialog box controls
- dialog box controls
- controls [C++], templates
- custom controls [C++], dialog boxes
- custom controls [C++]
- dialog box controls [C++], custom (user) controls
- Dialog Editor [C++], custom controls
ms.assetid: e216c4f9-2fd4-429d-889a-8ebce7bad177
ms.openlocfilehash: 152113200fd7aa9ee87b749380e370fe4e6ad9ff
ms.sourcegitcommit: b4645761ce5acf8c2fc7a662334dd5a471ea976d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/07/2019
ms.locfileid: "57563355"
---
# <a name="dialog-box-controls-c"></a>Controlli di finestre di dialogo (C++)

È possibile aggiungere controlli a una finestra di dialogo con il **finestra di dialogo Editor** scheda le [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox) che consente di scegliere il controllo desiderato e trascinarlo nella finestra di dialogo. Per impostazione predefinita, il **casella degli strumenti** intervallo è impostato per l'opzione Nascondi automaticamente. Viene visualizzata come scheda sul margine sinistro della soluzione quando la **finestra di dialogo Editor** è aperto. Tuttavia, è possibile aggiungere il **casella degli strumenti** finestra nella posizione desiderata, selezionare il **Nascondi automaticamente** pulsante nell'angolo superiore destro della finestra. Per altre informazioni su come controllare il comportamento di questa finestra, vedere [gestione delle finestre](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Il modo più rapido per aggiungere controlli a una finestra di dialogo, riposizionare i controlli esistenti o spostare i controlli da una finestra di dialogo a altro, consiste nell'utilizzare il metodo di trascinamento e rilascio. La posizione del controllo è descritto in una linea punteggiata finché non viene eliminato nella finestra di dialogo. Quando si aggiunge un controllo alla finestra di dialogo con il metodo di trascinamento e rilascio, il controllo ha un'altezza standard appropriata per tale tipo di controllo.

Quando si aggiunge un controllo a una finestra di dialogo o riposizionarlo, la posizione finale può essere determinata mediante le guide o i margini, o se si dispone della griglia di layout attivata.

Dopo aver aggiunto un controllo alla finestra di dialogo, è possibile modificare le proprietà, ad esempio la didascalia, nella [finestra proprietà](/visualstudio/ide/reference/properties-window). È anche possibile selezionare più controlli e modificarne le proprietà in una sola volta.

Per altre informazioni sul **finestra di dialogo Editor**, vedere come [aggiungere, modificare o eliminare i controlli](adding-editing-or-deleting-controls.md), [controlli di Layout](../windows/arrangement-of-controls-on-dialog-boxes.md), e [definire controllare l'accesso e i valori](../windows/defining-mnemonics-access-keys.md).

Per altre informazioni sui controlli e finestre di dialogo, vedere [classi di controlli](../mfc/control-classes.md), [classi di finestre di dialogo](../mfc/dialog-box-classes.md), e [stili barra di scorrimento](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles).

I controlli standard disponibili nel **casella degli strumenti** con impostazione predefinita gli eventi sono:

|Nome controllo|Evento predefinito|
|---|---|
|[Controllo Button](../mfc/reference/cbutton-class.md)|BN_CLICKED|
|[Controllo casella di controllo](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Controllo casella combinata](../mfc/reference/ccombobox-class.md)|CBN_SELCHANGE|
|[Controllo di modifica](../mfc/reference/cedit-class.md)|EN_CHANGE|
|Casella di gruppo|(non applicabile)|
|[Controllo casella di riepilogo](../mfc/reference/clistbox-class.md)|LBN_SELCHANGE|
|[Controllo pulsante di opzione](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Controllo Static Text](../mfc/reference/cstatic-class.md)|(non applicabile)|
|[Controllo immagine](../mfc/reference/cpictureholder-class.md)|(non applicabile)|
|[Controllo Rich Edit 2.0](../mfc/using-cricheditctrl.md)|EN_CHANGE|
|[Controllo barra di scorrimento](../mfc/reference/cscrollbar-class.md)|NM_THEMECHANGED|

> [!NOTE]
> Per altre informazioni sull'uso di **RichEdit 1.0** controllare con MFC, vedere [utilizzo del controllo RichEdit 1.0 con MFC](../windows/using-the-richedit-1-0-control-with-mfc.md) e [esempi di controlli di modifica avanzate](../mfc/rich-edit-control-examples.md).

Il [Windows Common Controls](../mfc/controls-mfc.md) disponibile nel **della casella degli strumenti** per fornire funzionalità aggiuntive sono:

|Nome controllo|Evento predefinito|
|---|---|
|[Controllo dispositivo di scorrimento](../mfc/slider-control-styles.md)|NM_CUSTOMDRAW|
|[Controllo di selezione](../mfc/using-cspinbuttonctrl.md)|UDN_DELTAPOS|
|[Controllo Progress](../mfc/styles-for-the-progress-control.md)|NM_CUSTOMDRAW|
|[Controllo hot Key](../mfc/using-a-hot-key-control.md)|NM_OUTOFMEMORY|
|[Controllo elenco](../mfc/list-control-and-list-view.md)|LVN_ITEMCHANGE|
|[Controllo albero](../mfc/tree-control-styles.md)|TVN_SELCHANGE|
|[Controllo struttura a schede](../mfc/tab-controls-and-property-sheets.md)|TCN_SELCHANGE|
|[Controllo Animation](../mfc/using-an-animation-control.md)|ACN_START|
|[Controllo Date Time Picker](../mfc/creating-the-date-and-time-picker-control.md)|DTN_DATETIMECHANGE|
|[Controllo calendario mensile](../mfc/month-calendar-control-examples.md)|MCN_SELCHANGE|
|[Controllo indirizzo IP](../mfc/reference/cipaddressctrl-class.md)|IPN_FIELDCHANGED|
|[Controllo Extended Combo Box](../mfc/creating-an-extended-combo-box-control.md)||
|Controllo personalizzato|TTN_GETDISPINFO|

## <a name="custom-controls"></a>Controlli personalizzati

Il **finestra di dialogo Editor** consente Usa esistente personalizzati o controlli dell'utente in un modello di finestra di dialogo.

> [!NOTE]
> Controlli personalizzati in questo senso non sono deve essere confusa con i controlli ActiveX. Controlli ActiveX a volte sono stati chiamati controlli OLE personalizzati. Inoltre, non confondere questi controlli con i controlli creati dal proprietario Windows.

Questa funzionalità è progettata per consentire di usare i controlli diversi da quelli forniti da Windows. In fase di esecuzione, il controllo è associato a una classe di finestra (non come una classe C++). Un modo più comune per eseguire la stessa attività consiste nell'installare qualsiasi controllo, ad esempio un controllo statico, nella finestra di dialogo. Quindi in fase di esecuzione, nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) funzionamento, rimuovere il controllo e sostituirlo con un controllo personalizzato.

> [!NOTE]
> Questa è una tecnica precedente. Oggi è consigliabile nella maggior parte dei casi per scrivere un controllo ActiveX o una sottoclasse di un controllo comune di Windows.

Per questi controlli personalizzati, sono limitati a:

- Impostazione del percorso nella finestra di dialogo.

- Se si digita una didascalia.

- Poiché il codice dell'applicazione deve registrare il controllo con questo nome, che identifica il nome della classe di Windows del controllo.

- Digitare un valore esadecimale a 32 bit che imposta lo stile del controllo.

- Impostazione dello stile esteso.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor finestre](../windows/dialog-editor.md)<br/>

<!--
[Adding Event Handlers for Dialog Box Controls](../windows/adding-event-handlers-for-dialog-box-controls.md)<br/>
[Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)<br/>
[Controls](../mfc/controls-mfc.md)<br/>-->