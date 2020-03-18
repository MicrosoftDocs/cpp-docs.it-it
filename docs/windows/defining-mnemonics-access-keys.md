---
title: "Procedura: definire l'accesso e i valori delC++controllo ()"
ms.date: 02/15/2019
helpviewer_keywords:
- access keys [C++], adding
- keyboard shortcuts [C++], controls
- dialog box controls [C++], mnemonics
- access keys [C++], checking
- mnemonics [C++], checking for duplicate
- mnemonics
- mnemonics [C++], dialog box controls
- keyboard shortcuts [C++], uniqueness checking
- Check Mnemonics command
- controls [C++], access keys
- access keys [C++]
- combo boxes [C++], Data property
- controls [C++], testing values in combo boxes
- combo boxes [C++], adding values
- combo boxes [C++], previewing values
- Data property
- combo boxes [C++], testing values
ms.assetid: 60a85435-aa30-4c5c-98b6-42fb045b9eb2
ms.openlocfilehash: 8ebd8d48b68581bf00215b4ca14f5ac0a543a3c0
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79443906"
---
# <a name="how-to-define-control-access-and-values-c"></a>Procedura: definire l'accesso e i valori delC++controllo ()

## <a name="tab-order"></a>Ordine di tabulazione

L'ordine di tabulazione è l'ordine in cui il tasto **Tab** sposta lo stato attivo di input da un controllo all'altro all'interno di una finestra di dialogo. In genere l'ordine di tabulazione continua da sinistra verso destra e dall'alto verso il basso in una finestra di dialogo. Ogni controllo ha una proprietà **TabStop** che determina se un controllo riceve lo stato attivo per l'input.

- Per impostare lo stato attivo per l'input per un controllo, nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)selezionare **true** o **false** nella proprietà **TabStop** .

Anche i controlli che non dispongono della proprietà **TabStop** impostata su **true** devono far parte dell'ordine di tabulazione, in particolare per i controlli che non hanno didascalie. Il testo statico che contiene una chiave di accesso per un controllo correlato deve precedere immediatamente il controllo correlato nell'ordine di tabulazione.

> [!NOTE]
> Se la finestra di dialogo contiene controlli sovrapposti, la modifica dell'ordine di tabulazione può cambiare il modo in cui vengono visualizzati i controlli. I controlli che si trovano in un secondo momento nell'ordine di tabulazione vengono sempre visualizzati sopra tutti i controlli sovrapposti che li precedono nell'ordine di tabulazione.

- Per visualizzare l'ordine di tabulazione corrente per tutti i controlli, passare a **formato** menu > **ordine di tabulazione**oppure premere **CTRL** + **D**.

   Un numero nell'angolo superiore sinistro di ogni controllo ne mostra la posizione nell'ordine di tabulazione corrente.

- Per modificare l'ordine di tabulazione per tutti i controlli, passare a **formato** menu > **ordine di tabulazione** e impostare l'ordine di tabulazione selezionando ogni controllo nell'ordine in cui si desidera che il tasto **Tab** segua.

- Per modificare l'ordine di tabulazione per due o più controlli, passare a **formato** menu > **ordine di tabulazione**. Tenere premuto il tasto **CTRL** e selezionare il controllo in cui inizierà la modifica in ordine, quindi rilasciare il tasto **CTRL** e selezionare i controlli nell'ordine in cui si desidera che il tasto **Tab** segua tale punto.

   Se, ad esempio, si desidera modificare l'ordine dei controlli `7` tramite `9`, tenere premuto **CTRL**, quindi selezionare prima `6` controllo.

- Per impostare un controllo specifico su numero `1`o prima nell'ordine di tabulazione, fare doppio clic sul controllo.

> [!TIP]
> Dopo aver immesso l'ordine di **tabulazione** , premere **ESC** o **invio** per uscire dalla modalità **ordine** di tabulazione e disabilitare la possibilità di modificare l'ordine di tabulazione.

## <a name="mnemonics-access-keys"></a>Tasti di scelta (chiavi di accesso)

In genere, gli utenti della tastiera spostano lo stato attivo di input da un controllo all'altro in una finestra di dialogo con la **scheda** e **i tasti di** direzione. Tuttavia, è possibile definire una chiave di accesso (un tasto di scelta o un nome facile da ricordare) che consente agli utenti di scegliere un controllo premendo un solo tasto.

### <a name="to-define-an-access-key-for-a-control-with-a-visible-caption-push-buttons-check-boxes-and-radio-buttons"></a>Per definire una chiave di accesso per un controllo con una didascalia visibile (pulsanti di comando, caselle di controllo e pulsanti di opzione)

1. Selezionare il controllo nella finestra di dialogo.

1. Nella proprietà **didascalia** della [finestra Proprietà](/visualstudio/ide/reference/properties-window)Digitare un nuovo nome per il controllo, digitando una e commerciale (`&`) davanti alla lettera desiderata come chiave di accesso per il controllo. Ad esempio: `&Radio1`.

1. Premere **Invio**.

   Una sottolineatura viene visualizzata nella didascalia visualizzata per indicare la chiave di accesso, ad esempio **R**adio1.

### <a name="to-define-an-access-key-for-a-control-without-a-visible-caption"></a>Per definire una chiave di accesso per un controllo senza una didascalia visibile

1. Creare una didascalia per il controllo utilizzando un controllo **testo statico** nella [casella degli strumenti](/visualstudio/ide/reference/toolbox).

1. Nella didascalia di testo statico digitare una e commerciale (`&`) davanti alla lettera desiderata come chiave di accesso.

1. Verificare che il controllo testo statico preceda immediatamente il controllo da essa etichettato nell'ordine di tabulazione.

> [!NOTE]
> Tutte le chiavi di accesso all'interno di una finestra di dialogo devono essere univoche. Per verificare la presenza di chiavi di accesso duplicate, passare a **formato** menu > **selezionare il tasto**di scelta.

## <a name="combo-box-values"></a>Valori della casella combinata

È possibile aggiungere valori a un controllo casella combinata fino a quando l' **editor finestre** è aperto.

> [!TIP]
> È consigliabile aggiungere tutti i valori alla casella combinata *prima* di ridimensionare la casella nell' **editor finestre**oppure è possibile troncare il testo che dovrebbe essere visualizzato nel controllo combinato.

### <a name="to-enter-values-into-a-combo-box-control"></a>Per immettere i valori in un controllo casella combinata

1. Per selezionare il controllo casella combinata, selezionarlo.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)scorrere verso il basso fino alla proprietà **dati** .

   > [!NOTE]
   > Se si visualizzano le proprietà raggruppate per tipo, i **dati** verranno visualizzati nelle proprietà **varie** .

1. Selezionare l'area valore per la proprietà **dati** e digitare i valori dei dati, separati da punti e virgola.

   > [!NOTE]
   > Non inserire spazi tra i valori perché gli spazi interferiscono con anche nell'elenco a discesa.

1. Premere **invio** al termine dell'aggiunta di valori.

Per informazioni sull'ampliamento della parte a discesa di una casella combinata, vedere [impostazione delle dimensioni della casella combinata e del relativo elenco a discesa](setting-the-size-of-the-combo-box-and-its-drop-down-list.md).

> [!NOTE]
> Non è possibile aggiungere valori ai progetti Win32 utilizzando questa procedura (la proprietà **dei dati** è disattivata per i progetti Win32). Poiché i progetti Win32 non dispongono di librerie che aggiungono questa funzionalità, è necessario aggiungere i valori a una casella combinata con un progetto Win32 a livello di codice.

### <a name="to-test-the-appearance-of-values-in-a-combo-box"></a>Per verificare l'aspetto dei valori in una casella combinata

1. Dopo aver immesso i valori nella proprietà **Data** , selezionare il pulsante **test** nella [barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

1. Provare a scorrere l'intero elenco di valori. I valori vengono visualizzati esattamente come sono digitati nella proprietà **dati** nella finestra **Proprietà** . Non esiste alcun controllo ortografico o di maiuscole.

1. Premere **ESC** per tornare all'editor della finestra di **dialogo** .

## <a name="radio-button-values"></a>Valori dei pulsanti di opzione

Quando si aggiungono pulsanti di opzione a una finestra di dialogo, considerarli come gruppi impostando una proprietà **Group** nella finestra **Proprietà** per il primo pulsante del gruppo. Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)viene quindi visualizzato un ID di controllo per tale pulsante di opzione, consentendo di aggiungere una variabile membro per il gruppo di pulsanti di opzione.

È possibile avere più di un gruppo di pulsanti di opzione in una finestra di dialogo. Aggiungere ogni gruppo utilizzando la procedura riportata di seguito.

### <a name="to-add-a-group-of-radio-buttons-to-a-dialog-box"></a>Per aggiungere un gruppo di pulsanti di opzione a una finestra di dialogo

1. Selezionare il controllo pulsante di opzione nella [finestra casella degli strumenti](/visualstudio/ide/reference/toolbox) e scegliere il percorso nella finestra di dialogo in cui inserire il controllo.

1. Ripetere il passaggio precedente per aggiungere tutti i pulsanti di opzione necessari. Verificare che i pulsanti di opzione del gruppo siano consecutivi nell'ordine di tabulazione.

1. Nella finestra [Proprietà](/visualstudio/ide/reference/properties-window)impostare la proprietà **Group** del *primo* pulsante di opzione nell'ordine di tabulazione su **True**.

   Se si modifica la proprietà **Group** su **true** , lo stile WS_GROUP viene aggiunto alla voce del pulsante nell'oggetto finestra di dialogo dello script di risorsa e si impedisce all'utente di selezionare più pulsanti di opzione alla volta nel gruppo di pulsanti (se l'utente seleziona un pulsante di opzione, gli altri nel gruppo vengono cancellati).

   > [!NOTE]
   > La proprietà **Group** deve essere impostata su **True**solo per il primo pulsante di opzione del gruppo. Se sono presenti controlli aggiuntivi che non fanno parte del gruppo di pulsanti, impostare anche la proprietà **Group** del primo controllo *che non è incluso nel gruppo* su **true** . È possibile identificare rapidamente il primo controllo esterno al gruppo utilizzando **Ctrl**+**D** per visualizzare l'ordine di tabulazione.

### <a name="to-add-a-member-variable-for-the-radio-button-group"></a>Per aggiungere una variabile membro per il gruppo di pulsanti di opzione

1. Fare clic con il pulsante destro del mouse sul primo controllo pulsante di opzione nell'ordine di tabulazione (il controllo dominante e quello con la proprietà **Group** impostata su **true**) e scegliere **Aggiungi variabile**.

1. Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)selezionare la casella di controllo **Variabile controllo** , quindi il pulsante di opzione **Valore** .

   - Nella casella **Nome variabile** digitare il nome della nuova variabile membro.

   - Nella casella di riepilogo **Tipo variabile** , selezionare **int** o digitare *int*.

   È quindi possibile modificare il codice per specificare il pulsante di opzione da visualizzare come selezionato. Ad esempio, `m_radioBox1 = 0;` seleziona il primo pulsante di opzione nel gruppo.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli della finestra di dialogo Gestisci](controls-in-dialog-boxes.md)<br/>
[Procedura: aggiungere, modificare o eliminare controlli](adding-editing-or-deleting-controls.md)<br/>
[Procedura: layout di controlli](arrangement-of-controls-on-dialog-boxes.md)<br/>