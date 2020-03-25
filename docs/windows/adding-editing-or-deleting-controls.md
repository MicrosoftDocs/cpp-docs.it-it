---
title: 'Procedura: aggiungere, modificare o eliminare controlli (C++)'
ms.date: 02/15/2019
f1_keywords:
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
- controls [C++], troubleshooting
- Dialog Editor [C++], troubleshooting
- dialog boxes [C++], troubleshooting
- InitCommonControls
- RichEdit 1.0 control
- rich edit controls [C++], RichEdit 1.0
ms.assetid: 73cef03f-5c8c-456a-87d1-1458dff185cf
ms.openlocfilehash: ad14a0500336bc1ca61e00bcd6d9a6e1088afc81
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80167524"
---
# <a name="how-to-add-edit-or-delete-controls-c"></a>Procedura: aggiungere, modificare o eliminare controlli (C++)

Utilizzando l' **editor finestre**, è possibile aggiungere, ridimensionare, modificare ed eliminare controlli nelle finestre di dialogo. È anche possibile modificare le proprietà di un controllo, ad esempio l'ID, o se inizialmente è visibile in fase di esecuzione.

La scheda **editor finestre** viene visualizzata nella [finestra casella degli strumenti](/visualstudio/ide/reference/toolbox) quando si lavora nell' **editor finestre**. È anche possibile personalizzare la finestra **casella degli strumenti** per facilitarne l'uso. Per ulteriori informazioni, vedere [utilizzo della casella degli strumenti](/visualstudio/ide/using-the-toolbox) e [visualizzare o nascondere la finestra della casella degli strumenti](showing-or-hiding-the-dialog-editor-toolbar.md).

> [!TIP]
> Quando si utilizza l' **editor finestre**, in molti casi è possibile selezionare il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi utilizzati di frequente.

## <a name="add-controls"></a>Aggiungere controlli

### <a name="to-add-a-control"></a>Per aggiungere un controllo

1. Assicurarsi che la finestra a schede della finestra di dialogo sia il documento corrente nel frame dell'editor. Se una finestra di dialogo non è il documento corrente, non verrà visualizzata la **scheda Editor finestre** nella **casella degli strumenti**.

1. Nella scheda **editor finestre** della finestra **casella degli strumenti** Selezionare il controllo desiderato, quindi eseguire una delle operazioni seguenti:

   - Selezionare la finestra di dialogo in corrispondenza della posizione in cui si desidera posizionare il controllo e il controllo viene visualizzato nel punto in cui è stato selezionato.

   - Trascinare e rilasciare il controllo dalla finestra **casella degli strumenti** al percorso nella finestra di dialogo. È quindi possibile spostare il controllo in un punto o modificarne le dimensioni e la forma.

   - Fare doppio clic sul controllo nella finestra **casella degli strumenti** e che verrà visualizzato nella finestra di dialogo. Riposiziona il controllo nella posizione che preferisci.

### <a name="to-add-multiple-controls"></a>Per aggiungere più controlli

1. Tenendo premuto il tasto **CTRL** , selezionare un controllo nella finestra **casella degli strumenti** .

1. Rilasciare il tasto **CTRL** e selezionare la finestra di dialogo tutte le volte che si desidera aggiungere il controllo specifico.

1. Premere **ESC** per arrestare l'inserimento di controlli.

### <a name="to-size-a-control-while-you-add-it"></a>Per ridimensionare un controllo durante l'aggiunta

1. Selezionare un controllo nella finestra **casella degli strumenti** .

1. Posizionare il cursore visualizzato come incrociato, in cui si desidera che l'angolo superiore sinistro del nuovo controllo si trovi nella finestra di dialogo.

1. Selezionare e tener premuto il pulsante del mouse per ancorare l'angolo superiore sinistro del controllo nella finestra di dialogo. Trascinare quindi il cursore a destra e in basso, fino a quando il controllo non corrisponde alle dimensioni desiderate.

   > [!NOTE]
   > È possibile ancorare uno dei quattro angoli del controllo che si sta disegnando. Questa procedura usa l'angolo superiore sinistro come esempio.

1. Rilasciare il pulsante del mouse. Il controllo si installa nella finestra di dialogo con le dimensioni specificate.

> [!TIP]
> È possibile ridimensionare il controllo dopo averlo rilasciato nella finestra di dialogo spostando gli handle di ridimensionamento sul bordo del controllo. Per altre informazioni, vedere [ridimensionamento di singoli controlli](../windows/sizing-individual-controls.md).

### <a name="to-add-a-custom-control"></a>Per aggiungere un controllo personalizzato

È possibile aggiungere controlli personalizzati alla finestra di dialogo. Selezionare l'icona del **controllo personalizzato** nella **casella degli strumenti** e trascinarla nella finestra di dialogo. Per aggiungere un controllo `Syslink`, aggiungere un controllo personalizzato, quindi impostare la proprietà della **classe** del controllo su `Syslink`. Questa azione comporterà l'aggiornamento delle proprietà e la visualizzazione delle proprietà del controllo `Syslink`. Per informazioni sulla classe wrapper MFC, vedere [CLinkCtrl](../mfc/reference/clinkctrl-class.md).

## <a name="edit-controls"></a>Controlli di modifica

### <a name="to-edit-the-properties-of-a-control-or-controls"></a>Per modificare le proprietà di un controllo o di controlli

1. Nella finestra di dialogo selezionare il controllo che si desidera modificare.

   > [!NOTE]
   > Se si selezionano più controlli, è possibile modificare solo le proprietà comuni ai controlli selezionati.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)modificare le proprietà del controllo.

   > [!NOTE]
   > Quando si imposta la proprietà **bitmap** per un pulsante, un pulsante di opzione o un controllo casella di controllo uguale a **true**, lo stile BS_BITMAP viene implementato per il controllo. Per altre informazioni, vedere [stili dei pulsanti](../mfc/reference/styles-used-by-mfc.md#button-styles). Per un esempio di associazione di una bitmap a un controllo, vedere [CButton:: ToBitmap](../mfc/reference/cbutton-class.md#setbitmap). Le bitmap non verranno visualizzate nel controllo mentre si è nell' **editor finestre**.

### <a name="to-undo-changes-to-the-properties-of-a-control"></a>Per annullare le modifiche apportate alle proprietà di un controllo

1. Verificare che il controllo abbia lo stato attivo nell' **editor finestre**.

1. Vai a menu **modifica** > **Annulla**. Se lo stato attivo non è sul controllo, il comando **Annulla** non sarà disponibile.

### <a name="to-define-a-member-variable-for-a-non-button-dialog-box-control"></a>Per definire una variabile membro per il controllo di una finestra di dialogo (non pulsante)

> [!NOTE]
> Questo processo si applica solo ai controlli della finestra di dialogo all'interno di un progetto MFC. I progetti ATL devono utilizzare la finestra di dialogo **nuovi messaggi e gestori eventi di Windows** . Per ulteriori informazioni, vedere [tipi di messaggi associati a oggetti dell'interfaccia utente](../mfc/reference/message-types-associated-with-user-interface-objects.md), [modifica di un gestore di messaggi](../mfc/reference/editing-a-message-handler.md)e [definizione di un gestore di messaggi per un messaggio riflesso](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).

1. Nell' [editor finestre](../windows/dialog-editor.md)selezionare un controllo.

1. Quando si preme il tasto **CTRL** , fare doppio clic sul controllo della finestra di dialogo.

   Verrà visualizzata la [procedura guidata Aggiungi variabile membro](../ide/add-member-variable-wizard.md) .

1. Digitare le informazioni appropriate nella procedura guidata **Aggiungi variabile membro** . Per ulteriori informazioni, vedere [Dialog Data Exchange](../mfc/dialog-data-exchange.md).

1. Selezionare **OK** per tornare all' **editor finestre**.

> [!TIP]
> Per passare da un controllo della finestra di dialogo al gestore esistente, fare doppio clic sul controllo.

È inoltre possibile utilizzare la scheda **variabili membro** della [creazione guidata classe MFC](../mfc/reference/mfc-class-wizard.md) per aggiungere nuove variabili membro per una classe specificata e visualizzare variabili membro già definite.

## <a name="delete-controls"></a>Elimina controlli

Nella finestra di dialogo selezionare il controllo, quindi premere il tasto **Canc** o vai a menu **modifica** > **Elimina**.

## <a name="other-issues"></a>Altri problemi

### <a name="troubleshooting"></a>risoluzione dei problemi

Dopo aver aggiunto un controllo comune o un controllo Rich Edit a una finestra di dialogo, non verrà visualizzato quando si testa la finestra di dialogo. In alternativa, la finestra di dialogo non verrà visualizzata. Ad esempio:

1. Creare un progetto Win32, modificando le impostazioni dell'applicazione in modo da creare un'applicazione Windows (non un'app console).

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare doppio clic sul file *RC* .

1. Nell'opzione della finestra di dialogo fare doppio clic sulla casella **informazioni su** .

1. Aggiungere un **controllo indirizzo IP** alla finestra di dialogo.

1. Salvare e **ricompilare tutti**.

1. Eseguire il programma.

1. Nel **menu? della finestra** di dialogo selezionare il comando **About** e osservare che non viene visualizzata alcuna finestra di dialogo.

Attualmente, l' **editor finestre** non aggiunge automaticamente codice al progetto quando si trascinano e rilasciano i controlli comuni seguenti o i controlli Rich Edit in una finestra di dialogo. Inoltre, Visual Studio non fornisce un errore o un avviso quando si verifica questo problema. Per risolvere il problema, aggiungere manualmente il codice per il controllo.

||||
|-|-|-|
|Dispositivo di scorrimento|Controllo Tree|Selezione data e ora|
|Controllo di selezione|Controllo Tab|Month Calendar|
|Controllo dello stato di avanzamento|Controllo animazione|Controllo indirizzo IP|
|Tasto di scelta|Controllo Rich Edit|Casella combinata estesa|
|Controllo elenco|Controllo Rich Edit 2,0|Controllo personalizzato|

Per utilizzare i controlli comuni in una finestra di dialogo, è necessario chiamare [InitCommonControlsEx](/windows/win32/api/commctrl/nf-commctrl-initcommoncontrolsex) o `AFXInitCommonControls` prima di creare la finestra di dialogo.

Per usare i controlli RichEdit, è necessario chiamare `LoadLibrary`. Per ulteriori informazioni, vedere [informazioni sui controlli Rich Edit](/windows/win32/Controls/about-rich-edit-controls) nell'Windows SDK e [Panoramica del controllo Rich Edit](../mfc/overview-of-the-rich-edit-control.md).

> [!NOTE]
> Per usare un controllo RichEdit con MFC, è prima necessario chiamare [AfxInitRichEdit2](../mfc/reference/application-information-and-management.md#afxinitrichedit2) per caricare il controllo richedit 2,0 (Riched20. DLL) oppure chiamare [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) per caricare il controllo richedit 1,0 precedente (Riched32. DLL).
>
> È possibile usare la classe [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) corrente con il controllo richedit 1,0 precedente, ma `CRichEditCtrl` è progettato solo per supportare il controllo richedit 2,0. Poiché RichEdit 1,0 e RichEdit 2,0 sono simili, la maggior parte dei metodi funzionerà. Tuttavia, esistono alcune differenze tra i controlli 1,0 e 2,0, quindi alcuni metodi potrebbero funzionare in modo errato o non funzionare affatto.

### <a name="activex-controls"></a>Controlli ActiveX

Visual Studio consente di inserire controlli ActiveX nella finestra di dialogo. Per ulteriori informazioni, vedere [controlli ActiveX MFC](../mfc/mfc-activex-controls.md) e [contenitori di controlli ActiveX](../mfc/activex-control-containers.md).

La finestra di dialogo **Inserisci controllo ActiveX** consente di inserire controlli ActiveX nella finestra di dialogo durante l'utilizzo dell' [editor finestre](../windows/dialog-editor.md). Questa finestra di dialogo contiene le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Controllo ActiveX**|Visualizza un elenco di controlli ActiveX.<br/><br/>L'inserimento di un controllo da questa finestra di dialogo non genera una classe wrapper. Se è necessaria una classe wrapper, usare [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) per crearne una, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md).<br/><br/>Se in questa finestra di dialogo non viene visualizzato un controllo ActiveX, provare a installare il controllo in base alle istruzioni del fornitore.|
|**Percorso**|Consente di visualizzare il file in cui viene trovato il controllo ActiveX.|

> [!CAUTION]
> Potrebbe non essere legalmente consentito distribuire tutti i controlli ActiveX nel sistema. Fare riferimento al contratto di licenza del software che ha installato i controlli o contattare la società di software.

#### <a name="to-add-an-activex-control"></a>Per aggiungere un controllo ActiveX

1. Aprire una finestra di dialogo nell' **Editor della finestra di dialogo**.

1. Fare clic con il pulsante destro del mouse in un punto qualsiasi del corpo della finestra di dialogo e scegliere **Inserisci controllo ActiveX**.

   Viene visualizzata la finestra di dialogo **Inserisci controllo ActiveX** , che Mostra tutti i controlli ActiveX nel sistema. Nella parte inferiore della finestra di dialogo è indicato il percorso del file del controllo ActiveX.

1. Selezionare il controllo che si desidera aggiungere alla finestra di dialogo e scegliere **OK**.

   Il controllo viene visualizzato nella finestra di dialogo, in cui è possibile modificarlo o creare i relativi gestori, come per qualsiasi altro controllo.

> [!TIP]
> È possibile utilizzare il menu di scelta rapida nell' **editor finestre** per aggiungere rapidamente controlli ActiveX registrati a una finestra di dialogo oppure provare ad aggiungere controlli ActiveX alla finestra **casella degli strumenti** per semplificare l'accesso.

#### <a name="to-edit-properties-for-an-activex-control"></a>Per modificare le proprietà di un controllo ActiveX

I controlli ActiveX forniti da fornitori indipendenti possono essere dotati di proprietà e caratteristiche specifiche. Queste proprietà vengono visualizzate nella finestra **Proprietà** . Tutte le pagine delle proprietà create dai writer del controllo ActiveX vengono visualizzate nella finestra di dialogo **pagine delle proprietà** . (Per visualizzare la **pagina delle proprietà** per un controllo ActiveX specifico, selezionare il pulsante della **pagina delle proprietà** nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)).

- Selezionare il controllo **ActiveX** e passare a **visualizzazione** menu > **pagina delle proprietà** per visualizzare le proprietà. Apportare le modifiche necessarie nella pagina delle proprietà.

   Diverse schede vengono visualizzate nella pagina delle proprietà di un controllo ActiveX, a seconda delle finestre delle proprietà che provengono come parte del controllo ActiveX.

> [!NOTE]
> Questa procedura si applica all'utilizzo della pagina delle proprietà per modificare i controlli ActiveX. È inoltre possibile esplorare e modificare le proprietà ActiveX nella nuova finestra **Proprietà** .

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli della finestra di dialogo Gestisci](controls-in-dialog-boxes.md)<br/>
[Procedura: layout di controlli](arrangement-of-controls-on-dialog-boxes.md)<br/>
[Procedura: definire l'accesso e i valori del controllo](defining-mnemonics-access-keys.md)

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
