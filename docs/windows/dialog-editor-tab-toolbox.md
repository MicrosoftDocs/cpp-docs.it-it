---
title: Scheda Editor finestre, casella degli strumenti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Toolbox [C++], Dialog Editor tab
- controls [C++], types
- syslink controls ino dialog boxes
- custom controls [Visual Studio], dialog boxes
- controls [C++], standard
- Dialog editor, creating controls
- controls [C++], adding to dialog boxes
ms.assetid: 253885c2-dcb9-4d8e-ac9b-805ea31cbf5e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a528ece23301f707b267ed7cefd30649b34c5e60
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42613512"
---
# <a name="dialog-editor-tab-toolbox"></a>Scheda Editor finestre, Casella degli strumenti

Il **Editor finestre** verrà visualizzata la scheda nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox) quando si lavora nel **dialogo** editor. Per aggiungere controlli alla nuova finestra di dialogo, trascinare i controlli dal **casella degli strumenti** alla finestra di dialogo che si sta creando (per altre informazioni, vedere [aggiunta di un controllo a una finestra di dialogo](adding-a-control-to-a-dialog-box.md)). È quindi possibile spostare i controlli all'interno della finestra oppure modificarne la dimensione e la forma.

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

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)  
[Classi di controlli](../mfc/control-classes.md)  
[Classi di finestre di dialogo](../mfc/dialog-box-classes.md)  
[Stili di barra di scorrimento](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles)  
[Esempi di controlli Rich Edit](../mfc/rich-edit-control-examples.md)  
[Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md)  
[Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)