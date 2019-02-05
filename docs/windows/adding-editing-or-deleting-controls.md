---
title: Aggiunta, modifica o eliminazione di controlli
ms.date: 11/04/2016
f1_keywords:
- vc.editors.dialog.dialog
- vc.controls.activex
- vc.editors.dialog.insertActiveXControls
helpviewer_keywords:
- Dialog Editor [C++], creating controls
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
- dialog boxes [C++], adding ActiveX controls
- ActiveX controls [C++], adding to dialog boxes
- Insert ActiveX Control dialog box [C++]
- controls [C++], editing properties
- ActiveX controls [C++], properties
- controls [C++], undoing changes
- controls [C++], editing properties
- dialog box controls [C++], editing properties
- dialog box controls [C++], deleting
- controls [C++], deleting
- Dialog Editor [C++], default control events
- controls [C++], default control events
- events [C++], controls
- dialog box controls [C++], events
- member variables, defining for controls
- variables, dialog box control member variables
- controls [C++], member variables
- Dialog Editor [C++], defining member variables for controls
ms.assetid: 73cef03f-5c8c-456a-87d1-1458dff185cf
ms.openlocfilehash: b4edb5b7a51e4f6d368759ebc2e05a1cc585f19a
ms.sourcegitcommit: 52c05e10b503e834c443ef11e7ca1987e332f876
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2019
ms.locfileid: "55742752"
---
# <a name="adding-editing-or-deleting-controls"></a>Aggiunta, modifica o eliminazione di controlli

Usando il **dialogo** editor, è possibile aggiungere, ridimensionare, modificare ed eliminare i controlli nelle finestre di dialogo. È anche possibile modificare le proprietà di un controllo, ad esempio il relativo ID, o se è inizialmente visibile in fase di esecuzione.

Il **Editor finestre** verrà visualizzata la scheda nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox) quando si lavora nel **dialogo** editor. È anche possibile personalizzare il **casella degli strumenti** finestra per semplificare l'utilizzo. Per altre informazioni, vedere [usando la casella degli strumenti](/visualstudio/ide/using-the-toolbox) e [Mostra o Nascondi la finestra Casella degli strumenti](showing-or-hiding-the-dialog-editor-toolbar.md).

È possibile usare il menu di scelta rapida nel **finestra di dialogo** registrato di editor di aggiungere rapidamente controlli ActiveX a una finestra di dialogo ed è possibile aggiungere controlli ActiveX per il **della casella degli strumenti** per l'accesso rapido.

I controlli standard disponibili nel **casella degli strumenti** con impostazione predefinita gli eventi sono:

|Nome controllo|Evento predefinito|
|---|---|
|[Controllo Button](../mfc/reference/cbutton-class.md)|BN_CLICKED|
|[Controllo casella di controllo](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Controllo casella combinata](../mfc/reference/ccombobox-class.md)|CBN_SELCHANGE|
|[Controllo di modifica](../mfc/reference/cedit-class.md)|EN_CHANGE|
|Casella di gruppo|(Non applicabile)|
|[Controllo casella di riepilogo](../mfc/reference/clistbox-class.md)|LBN_SELCHANGE|
|[Controllo pulsante di opzione](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Controllo Static Text](../mfc/reference/cstatic-class.md)|(Non applicabile)|
|[Controllo immagine](../mfc/reference/cpictureholder-class.md)|(Non applicabile)|
|[Controllo Rich Edit 2.0](../mfc/using-cricheditctrl.md)|EN_CHANGE|
|[Controllo barra di scorrimento](../mfc/reference/cscrollbar-class.md)|NM_THEMECHANGED|

Per altre informazioni sull'uso di **RichEdit 1.0** controllare con MFC, vedere [utilizzo del controllo RichEdit 1.0 con MFC](../windows/using-the-richedit-1-0-control-with-mfc.md) e [esempi di controlli di modifica avanzate](../mfc/rich-edit-control-examples.md).

Il [Windows Common Controls](../mfc/controls-mfc.md) disponibile nel **della casella degli strumenti** incrementano le funzionalità nell'applicazione. e comprendono:

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
|[Controllo personalizzato](custom-controls-in-the-dialog-editor.md)|TTN_GETDISPINFO|

Per altre informazioni, vedere [classi di controlli](../mfc/control-classes.md), [classi di finestre di dialogo](../mfc/dialog-box-classes.md), e [stili barra di scorrimento](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-add-a-control"></a>Per aggiungere un controllo

Per aggiungere controlli alla nuova finestra di dialogo, trascinare i controlli dal **casella degli strumenti** alla finestra di dialogo che si sta creando. È quindi possibile spostare i controlli all'interno della finestra oppure modificarne la dimensione e la forma.

È possibile aggiungere controlli personalizzati alla finestra di dialogo selezionando il **controllo personalizzato** icona nel **della casella degli strumenti** e trascinando la finestra di dialogo. Per aggiungere un **Syslink** controllare, aggiungere un controllo personalizzato, quindi modificare il controllo **classe** proprietà **Syslink**. Questa azione causerà le proprietà da aggiornare e visualizzare il **Syslink** proprietà del controllo. Per informazioni sulla classe wrapper MFC, vedere [CLinkCtrl](../mfc/reference/clinkctrl-class.md).

### <a name="to-add-a-control-to-a-dialog-box"></a>Per aggiungere un controllo a una finestra di dialogo

1. Assicurarsi che la finestra a schede della finestra di dialogo sia il documento corrente nel frame dell'editor. Se una finestra di dialogo non è il documento corrente, non verrà visualizzato il **scheda Editor finestre** nel **della casella degli strumenti**.

1. Nel **Editor finestre** scheda della finestra di **della casella degli strumenti** finestra, selezionare il controllo desiderato e quindi:

   Selezionare la finestra di dialogo in corrispondenza della posizione in cui si desidera posizionare il controllo. Il controllo viene visualizzato in cui è stata selezionata.

   \- oppure -

   Trascinare e rilasciare il controllo dal **casella degli strumenti** finestra nella posizione sulla finestra di dialogo.

   \- oppure -

   Fare doppio clic sul controllo nella **casella degli strumenti** finestra (viene visualizzato nella finestra di dialogo) quindi riposizionare il controllo nella posizione desiderata.

### <a name="to-add-multiple-controls"></a>Per aggiungere più controlli

1. Mentre si tiene premuto il **Ctrl** chiave, selezionare un controllo nel **della casella degli strumenti** finestra.

1. Versione di **Ctrl** , selezionare la finestra di dialogo come tutte le volte che si desidera aggiungere un controllo particolare.

1. Premere **Esc** per arrestare l'inserimento di controlli.

### <a name="to-size-a-control-while-you-add-it"></a>Per ridimensionare un controllo durante l'aggiunta

1. Selezionare un controllo nel **casella degli strumenti** finestra.

1. Posizionare il cursore, che compare come mirino, in cui si desidera che l'angolo superiore sinistro del nuovo controllo in una finestra di dialogo.

1. Selezionare e tenere premuto il pulsante del mouse per ancorare l'angolo superiore sinistro del controllo nella finestra di dialogo, quindi trascinare il cursore a destra e verso il basso fino a quando il controllo è la dimensione desiderata.

   > [!NOTE]
   > È possibile ancorare uno qualsiasi dei quattro angoli del controllo che si disegna. Nell'angolo superiore sinistro di utilizzare questa procedura come esempio.

1. Rilasciare il pulsante del mouse. Il controllo verrà posizionato nella finestra di dialogo della dimensione che è specificata.

   > [!TIP]
   > È possibile ridimensionare il controllo dopo il trascinamento nella finestra di dialogo spostando i quadratini di ridimensionamento sul bordo del controllo. Per altre informazioni, vedere [ridimensionamento di singoli controlli](../windows/sizing-individual-controls.md).

### <a name="to-add-an-activex-control"></a>Per aggiungere un controllo ActiveX

Visual Studio consente di inserire controlli ActiveX nella finestra di dialogo. Per altre informazioni, vedere [controlli ActiveX MFC](../mfc/mfc-activex-controls.md) e [contenitori di controlli ActiveX](../mfc/activex-control-containers.md).

Il **Inserisci controllo ActiveX** finestra di dialogo consente di inserire controlli ActiveX nella finestra di dialogo quando si usa la [editor finestre](../windows/dialog-editor.md). Questa finestra di dialogo contiene le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Controllo ActiveX**|Visualizza un elenco di controlli ActiveX. Inserimento di un controllo dalla finestra di dialogo non viene generata una classe wrapper. Se è necessaria una classe wrapper, utilizzare [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) per crearne uno (per altre informazioni, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)). Se un controllo ActiveX non viene visualizzato nella finestra di dialogo, provare a installare il controllo in base alle istruzioni del fornitore.|
|**Path**|Visualizza il file in cui si trova il controllo ActiveX.|

#### <a name="to-see-the-activex-controls-available"></a>Per visualizzare i controlli ActiveX disponibili

1. Aprire una finestra di dialogo nell'editor finestre.

1. Pulsante destro del mouse in un punto qualsiasi all'interno della finestra di dialogo.

1. Menu di scelta rapida, selezionare **Inserisci controllo ActiveX**.

   Il **Inserisci controllo ActiveX** viene visualizzata la finestra di dialogo, che mostra tutti i controlli ActiveX nel sistema. Nella parte inferiore della finestra di dialogo è indicato il percorso del file del controllo ActiveX.

#### <a name="to-add-an-activex-control-to-a-dialog-box"></a>Per aggiungere un controllo ActiveX a una finestra di dialogo

1. Nel **Inserisci controllo ActiveX** finestra di dialogo, selezionare il controllo da aggiungere alla finestra di dialogo e selezionare **OK**.

   Il controllo viene visualizzato nella finestra di dialogo, in cui è possibile modificarlo o creare i relativi gestori, come per qualsiasi altro controllo.

   > [!NOTE]
   > È possibile aggiungere controlli ActiveX per il **casella degli strumenti** finestra per semplificare l'accesso.

   > [!CAUTION]
   > Potrebbe non essere legalmente consentito distribuire tutti i controlli ActiveX nel sistema. Fare riferimento al contratto di licenza del software che ha installato i controlli o contattare il produttore del software.

## <a name="to-edit-a-control"></a>Per modificare un controllo

### <a name="to-edit-the-properties-of-a-control-or-controls"></a>Per modificare le proprietà di uno o più controlli

1. Nella finestra di dialogo, selezionare il controllo che si desidera modificare.

   > [!NOTE]
   > Se si selezionano più controlli, solo le proprietà comuni a tutti i controlli possono essere modificate.

1. Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), modificare le proprietà del controllo.

   > [!NOTE]
   > Quando si impostano i **Bitmap** proprietà per un pulsante, un pulsante di opzione o un controllo casella di controllo uguale a **True**, lo stile BS_BITMAP viene implementata per il controllo. Per altre informazioni, vedere [stili dei pulsanti](../mfc/reference/styles-used-by-mfc.md#button-styles). Per un esempio di associazione di una bitmap con un controllo, vedere [CButton:: SetBitmap](../mfc/reference/cbutton-class.md#setbitmap). Bitmap non verranno visualizzate nel controllo mentre è attiva la **dialogo** editor di risorse.

### <a name="to-undo-changes-to-the-properties-of-a-control"></a>Per annullare le modifiche alle proprietà di un controllo

1. Assicurarsi che il controllo ha lo stato attivo **dialogo** editor.

1. Scegliere **annullare** dalle **modificare** menu (se non è stato attivo sul controllo, il **annullare** comando non sarà disponibile).

### <a name="to-edit-properties-for-an-activex-control"></a>Per modificare le proprietà per un controllo ActiveX

Controlli ActiveX forniti da fornitori indipendenti possono sono dotati di loro proprietà e le caratteristiche. Vengono visualizzate le proprietà di controlli ActiveX nel **proprietà** finestra. Inoltre, vengono visualizzate pagine delle proprietà create per i writer del controllo ActiveX nel **pagine delle proprietà** nella finestra di dialogo (per visualizzare il **pagina delle proprietà** per uno specifico controllo ActiveX, fare clic su di **Pagina delle proprietà** pulsante di [finestra proprietà](/visualstudio/ide/reference/properties-window)).

Varie schede vengono visualizzate nella pagina delle proprietà per un controllo ActiveX, a seconda delle finestre delle proprietà che fanno parte del controllo ActiveX.

> [!NOTE]
> La procedura seguente si applica a utilizzando la pagina delle proprietà per modificare i controlli ActiveX. È anche possibile esplorare e modificare le proprietà di ActiveX nella nuova **proprietà** finestra.

1. Selezionare il **ActiveX** controllo.

1. Nel **View** dal menu **pagina delle proprietà** e visualizzare le proprietà.

1. Apportare le modifiche necessarie nella pagina delle proprietà.

### <a name="to-define-a-member-variable-for-a-non-button-dialog-box-control"></a>Per definire una variabile membro per il controllo di una finestra di dialogo (non pulsante)

Per definire una variabile membro per qualsiasi controllo della finestra di dialogo ad eccezione dei pulsanti, è possibile usare il metodo seguente.

> [!NOTE]
> Questo processo si applica solo ai controlli di finestra di dialogo all'interno di un progetto MFC. I progetti ATL devono usare la **nuovi messaggi di Windows e i gestori eventi** nella finestra di dialogo. Per altre informazioni, vedere [tipi di messaggio associata a oggetti dell'interfaccia utente](../mfc/reference/message-types-associated-with-user-interface-objects.md), [modifica di un gestore di messaggi](../mfc/reference/editing-a-message-handler.md), e [definizione di un gestore di messaggi per un messaggio riflesse](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).

1. Nel [editor finestre](../windows/dialog-editor.md), selezionare un controllo.

1. Mentre si tiene premuto il **Ctrl** della chiave, fare doppio clic sul controllo finestra di dialogo.

   Il [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) viene visualizzata.

1. Digitare le informazioni appropriate nella **Aggiunta guidata variabile membro** procedura guidata. Per altre informazioni, vedere [Dialog Data Exchange](../mfc/dialog-data-exchange.md).

1. Selezionare **OK** da restituire per il **dialogo** editor.

   > [!TIP]
   > Per passare da un controllo della finestra di dialogo al gestore esistente, fare doppio clic sul controllo.

È anche possibile usare la **le variabili membro** scheda le [Creazione guidata classe MFC](../mfc/reference/mfc-class-wizard.md) per aggiungere nuove variabili membro per una classe specificata e visualizzare le variabili membro che sono già state definite.

## <a name="to-delete-a-control"></a>Per eliminare un controllo

Nella finestra di dialogo, selezionare il controllo e premere il **eliminare** chiave.

   \- oppure -

Nel **Edit** dal menu **eliminare**.

   > [!TIP]
   > Quando si usa la **dialogo** editor, in molti casi, è possibile fare clic il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi usati frequentemente.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](controls-in-dialog-boxes.md)<br/>
[Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>

<!-- excluded links
[Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)<br/>
[Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Adding a Class](../ide/adding-a-class-visual-cpp.md)<br/>
[Adding a Member Function](../ide/adding-a-member-function-visual-cpp.md)<br/>
[Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md)
[Declaring a Variable Based on Your New Control Class](../mfc/reference/declaring-a-variable-based-on-your-new-control-class.md)<br/>
-->
