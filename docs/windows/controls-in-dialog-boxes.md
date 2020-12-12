---
description: 'Altre informazioni su: controlli della finestra di dialogo (C++)'
title: Controlli della finestra di dialogo (C++) | Microsoft Docs
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
ms.openlocfilehash: e68547ebd550797d4ad195c6bef4c3f2a71e769e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327148"
---
# <a name="dialog-box-controls-c"></a>Controlli della finestra di dialogo (C++)

È possibile aggiungere controlli a una finestra di dialogo utilizzando la scheda **editor finestre** della [casella degli strumenti](/visualstudio/ide/reference/toolbox) che consente di scegliere il controllo desiderato e trascinarlo nella finestra di dialogo. Per impostazione predefinita, la finestra **casella degli strumenti** è impostata su Nascondi automaticamente. Viene visualizzato come una scheda sul margine sinistro della soluzione quando l' **editor finestre** è aperto. Tuttavia, è possibile aggiungere la finestra **casella degli strumenti** nella posizione selezionando il pulsante **Nascondi automaticamente** nell'angolo superiore destro della finestra. Per ulteriori informazioni su come controllare il comportamento di questa finestra, vedere [gestione della finestra](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Il modo più rapido per aggiungere controlli a una finestra di dialogo, riposizionare i controlli esistenti o spostare i controlli da una finestra di dialogo a un'altra consiste nell'usare il metodo di trascinamento della selezione. La posizione del controllo viene evidenziata in una linea tratteggiata finché non viene rilasciata nella finestra di dialogo. Quando si aggiunge un controllo a una finestra di dialogo con il metodo di trascinamento della selezione, al controllo viene assegnata un'altezza standard appropriata per tale tipo di controllo.

Quando si aggiunge un controllo a una finestra di dialogo o lo si riposiziona, il posizionamento finale può essere determinato da guide o margini oppure dal fatto che la griglia di layout sia attivata.

Una volta aggiunto un controllo alla finestra di dialogo, è possibile modificare le proprietà, ad esempio la didascalia, nella [finestra Proprietà](/visualstudio/ide/reference/properties-window). È anche possibile selezionare più controlli e modificarne tutte le proprietà in una sola volta.

Per ulteriori informazioni sull' **editor finestre**, vedere come [aggiungere, modificare o eliminare i controlli](adding-editing-or-deleting-controls.md), i [controlli di layout](../windows/arrangement-of-controls-on-dialog-boxes.md)e [definire i valori e l'accesso ai](../windows/defining-mnemonics-access-keys.md)controlli.

Per altre informazioni sui controlli e le finestre di dialogo, vedere [classi di controlli](../mfc/control-classes.md), classi della finestra di [dialogo](../mfc/dialog-box-classes.md)e stili della [barra di scorrimento](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles).

I controlli standard disponibili nella **casella degli strumenti** con gli eventi predefiniti sono:

|Nome del controllo|Evento predefinito|
|---|---|
|[Button (controllo)](../mfc/reference/cbutton-class.md)|BN_CLICKED|
|[Controllo Check Box](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Controllo Combo Box](../mfc/reference/ccombobox-class.md)|CBN_SELCHANGE|
|[Controllo Edit](../mfc/reference/cedit-class.md)|EN_CHANGE|
|Casella di gruppo|(non applicabile)|
|[Controllo casella di riepilogo](../mfc/reference/clistbox-class.md)|LBN_SELCHANGE|
|[Controllo Radio Button](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Controllo Static Text](../mfc/reference/cstatic-class.md)|(non applicabile)|
|[Controllo Picture](../mfc/reference/cpictureholder-class.md)|(non applicabile)|
|[Controllo Rich Edit 2.0](../mfc/using-cricheditctrl.md)|EN_CHANGE|
|[Controllo Scroll Bar](../mfc/reference/cscrollbar-class.md)|NM_THEMECHANGED|

> [!NOTE]
> Per ulteriori informazioni sull'utilizzo del controllo **Richedit 1,0** con MFC, vedere [utilizzo del controllo richedit 1,0 con gli](./adding-editing-or-deleting-controls.md) esempi di controlli MFC e [Rich Edit](../mfc/rich-edit-control-examples.md).

I [controlli comuni di Windows](../mfc/controls-mfc.md) disponibili nella **casella degli strumenti** per fornire funzionalità migliorate sono:

|Nome del controllo|Evento predefinito|
|---|---|
|[Controllo dispositivo di scorrimento](../mfc/slider-control-styles.md)|NM_CUSTOMDRAW|
|[Controllo Spin](../mfc/using-cspinbuttonctrl.md)|UDN_DELTAPOS|
|[Controllo Progress](../mfc/styles-for-the-progress-control.md)|NM_CUSTOMDRAW|
|[Controllo Hot Key](../mfc/using-a-hot-key-control.md)|NM_OUTOFMEMORY|
|[Controllo List](../mfc/list-control-and-list-view.md)|LVN_ITEMCHANGE|
|[Controllo Tree](../mfc/tree-control-styles.md)|TVN_SELCHANGE|
|[Controllo Tab](../mfc/tab-controls-and-property-sheets.md)|TCN_SELCHANGE|
|[Controllo Animation](../mfc/using-an-animation-control.md)|ACN_START|
|[Controllo selezione data e ora](../mfc/creating-the-date-and-time-picker-control.md)|DTN_DATETIMECHANGE|
|[Controllo Month Calendar](../mfc/month-calendar-control-examples.md)|MCN_SELCHANGE|
|[Controllo indirizzi IP](../mfc/reference/cipaddressctrl-class.md)|IPN_FIELDCHANGED|
|[Controllo Extended Combo Box](../mfc/creating-an-extended-combo-box-control.md)||
|Controllo personalizzato|TTN_GETDISPINFO|

## <a name="custom-controls"></a>Controlli personalizzati

L' **editor finestre** consente di utilizzare i controlli utente o personalizzati esistenti in un modello di finestra di dialogo.

> [!NOTE]
> I controlli personalizzati in questo senso non devono essere confusi con i controlli ActiveX. I controlli ActiveX venivano talvolta chiamati controlli personalizzati OLE. Inoltre, non confondere questi controlli con i controlli creati dal proprietario in Windows.

Questa funzionalità ha lo scopo di consentire l'uso di controlli diversi da quelli forniti da Windows. In fase di esecuzione, il controllo è associato a una classe della finestra (non uguale a una classe C++). Un modo più comune per eseguire la stessa attività consiste nell'installare qualsiasi controllo, ad esempio un controllo statico, nella finestra di dialogo. Quindi, in fase di esecuzione, nella funzione [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) rimuovere tale controllo e sostituirlo con il proprio controllo personalizzato.

> [!NOTE]
> Si tratta di una tecnica obsoleta. Attualmente, nella maggior parte dei casi è consigliabile scrivere un controllo ActiveX o una sottoclasse di un controllo comune di Windows.

Per questi controlli personalizzati, si è limitati a:

- Impostazione della posizione nella finestra di dialogo.

- Digitando una didascalia.

- Identificazione del nome della classe Windows del controllo poiché il codice dell'applicazione deve registrare il controllo con questo nome.

- Digitando un valore esadecimale a 32 bit che imposta lo stile del controllo.

- Impostazione dello stile esteso.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedi anche

[Editor finestre](../windows/dialog-editor.md)

<!--
[Adding Event Handlers for Dialog Box Controls](./adding-editing-or-deleting-controls.md)<br/>
[Dialog Box Controls and Variable Types](../ide/adding-a-member-variable-visual-cpp.md#dialog-box-controls-and-variable-types)<br/>
[Controls](../mfc/controls-mfc.md)<br/>-->
