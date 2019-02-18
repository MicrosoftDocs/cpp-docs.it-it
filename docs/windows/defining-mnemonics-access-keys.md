---
title: La definizione di valori e controllare l'accesso
ms.date: 02/15/2019
f1_keywords:
- vc.editors.dialog.combo
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
ms.openlocfilehash: 20319cd08d6d1e77faef1275e63bf3ffd354356b
ms.sourcegitcommit: 24592ba0a38c7c996ffd3d55fe1024231a59ccc2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/18/2019
ms.locfileid: "56336488"
---
# <a name="defining-control-access-and-values"></a>La definizione di valori e controllare l'accesso

## <a name="change-the-tab-order-of-controls"></a>Modificare l'ordine di tabulazione dei controlli

L'ordine di tabulazione è l'ordine in cui il **scheda** chiave sposta lo stato attivo di input da un controllo successivo all'interno di una finestra di dialogo. In genere l'ordine di tabulazione procede da sinistra a destra e dall'alto verso il basso in una finestra di dialogo. Ogni controllo ha un **Tabstop** proprietà che determina se un controllo riceve lo stato attivo.

### <a name="to-set-input-focus-for-a-control"></a>Per impostare lo stato attivo di input per un controllo

Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), selezionare **True** oppure **False** nel **Tabstop** proprietà.

Anche i controlli che non hanno le **Tabstop** impostata su **True** devono far parte dell'ordine di tabulazione. Ordine di tabulazione è importante, ad esempio, quando si [definire le chiavi di accesso (tasti di scelta)](../windows/defining-mnemonics-access-keys.md) per i controlli privi di didascalie. Testo statico che contiene una chiave di accesso per un controllo correlato deve precedere il relativo controllo nell'ordine di tabulazione.

> [!NOTE]
> Se la finestra di dialogo contiene la sovrapposizione di controlli, la modifica dell'ordine di tabulazione può cambiare il modo in cui che vengono visualizzati i controlli. Controlli disponibili più avanti nell'ordine di tabulazione vengono sempre visualizzati sopra i controlli sovrapposti che li precedono nell'ordine di tabulazione.

### <a name="to-view-the-current-tab-order-for-all-controls-in-a-dialog-box"></a>Per visualizzare l'ordine di tabulazione corrente per tutti i controlli in una finestra di dialogo

Andare alla **formato** dal menu **ordine di tabulazione**, o premere **Ctrl** + **1!d**.

### <a name="to-change-the-tab-order-for-all-controls-in-a-dialog-box"></a>Per modificare l'ordine di tabulazione per tutti i controlli in una finestra di dialogo

1. Nel **formato** dal menu **ordine di tabulazione**.

   Un numero nell'angolo superiore sinistro di ogni controllo indica la posizione nell'ordine di tabulazione corrente.

1. Impostare l'ordine di tabulazione, selezionare ogni controllo nell'ordine desiderato la **scheda** chiave da seguire.

1. Premere **invio** per uscire **ordine di tabulazione** modalità.

   > [!TIP]
   > Dopo aver immesso **ordine di tabulazione** modalità, è possibile premere **Esc** oppure **invio** per disabilitare la possibilità di modificare l'ordine di tabulazione.

### <a name="to-change-the-tab-order-for-two-or-more-controls"></a>Per modificare l'ordine di tabulazione per due o più controlli

1. Dal **formato** menu, scegliere **ordine di tabulazione**.

1. Specificare dove inizierà la modifica nell'ordine. Tenere premuto prima di tutto il **Ctrl** della chiave e selezionare il controllo, quindi selezionare quello in cui si desidera modificare l'ordine per iniziare.

   Ad esempio, se si desidera modificare l'ordine dei controlli `7` attraverso `9`, tenere premuto **Ctrl**, quindi selezionare controllo `6` prima.

   > [!NOTE]
   > Per impostare un controllo specifico al numero `1` (innanzitutto in ordine di tabulazione), fare doppio clic sul controllo.

1. Versione di **Ctrl** chiave, quindi selezionare i controlli nell'ordine desiderato la **scheda** chiave da seguire da quel punto.

1. Premere **invio** per uscire **ordine di tabulazione** modalità.

## <a name="define-mnemonics-access-keys"></a>Definire i tasti di scelta (chiavi di accesso)

In genere, gli utenti della tastiera spostare lo stato attivo di input da un controllo a un'altra in una finestra di dialogo con il **della scheda** e **freccia** chiavi. Tuttavia, è possibile definire una chiave di accesso (nome di tasti di scelta rapida o facile da ricordare) che consente agli utenti di scegliere un controllo premendo una singola chiave.

### <a name="to-define-an-access-key-for-a-control-with-a-visible-caption-push-buttons-check-boxes-and-radio-buttons"></a>Per definire una chiave di accesso per un controllo con una didascalia visibile (push pulsanti, caselle di controllo e pulsanti di opzione)

1. Selezionare il controllo nella finestra di dialogo.

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), nella **didascalia** proprietà, digitare un nuovo nome per il controllo, digitare una e commerciale (`&`) davanti alla lettera desiderata come chiave di accesso per tale controllo. Ad esempio `&Radio1`.

1. Premere **INVIO**.

   Nella barra del titolo visualizzato per indicare la chiave di accesso, ad esempio, viene visualizzata una sottolineatura **R**adio1.

### <a name="to-define-an-access-key-for-a-control-without-a-visible-caption"></a>Per definire una chiave di accesso per un controllo senza un titolo visibile

1. Creare una didascalia per il controllo utilizzando un **testo statico** controllare nel [della casella degli strumenti](/visualstudio/ide/reference/toolbox).

1. Nella didascalia di testo statico, digitare una e commerciale (`&`) davanti alla lettera desiderata come tasto di scelta rapida.

1. Assicurarsi che il controllo di testo statico precede immediatamente il controllo che etichetta nell'ordine di tabulazione.

> [!NOTE]
> Tutte le chiavi di accesso all'interno di una finestra di dialogo devono essere univoche. Per verificare le chiavi di accesso duplicato, vedere la **formato** menu e selezionare **tasti di scelta**.

## <a name="combo-box-values"></a>Valori della casella combinata

È possibile aggiungere valori per un controllo casella combinata, purché hanno le **finestra di dialogo** editor aperto.

> [!TIP]
> È una buona idea per aggiungere tutti i valori alla casella combinata *prima* di ridimensionare la casella di **dialogo** editor oppure è possibile troncare il testo che deve essere visualizzato nel controllo casella combinata.

### <a name="to-enter-values-into-a-combo-box-control"></a>Immettere i valori in un controllo casella combinata

1. Scegliere la casella combinata finestra controllo selezionandolo.

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), scorrere verso il basso il **dati** proprietà.

   > [!NOTE]
   > Se si visualizza proprietà raggruppate per tipo, **Data** viene visualizzato nei **varie** proprietà.

1. Selezionare l'area del valore per il **dati** proprietà e digitare i valori di dati, separati da punti e virgola.

   > [!NOTE]
   > Non inserire spazi tra i valori perché spazi interferiscano con l'ordinamento alfabetico nell'elenco a discesa.

1. Premere **invio** dopo aver terminato l'aggiunta di valori.

Per informazioni su ingrandimento dell'area di riepilogo a discesa di una casella combinata, vedere [impostazione delle dimensioni della casella combinata e dell'elenco a discesa](setting-the-size-of-the-combo-box-and-its-drop-down-list.md).

> [!NOTE]
> Non è possibile aggiungere valori per i progetti Win32 tramite questa procedura (il **dati** proprietà è disabilitata per i progetti Win32). Poiché i progetti Win32 non dispongono di librerie che aggiungono questa funzionalità, è necessario aggiungere valori a una casella combinata con un progetto Win32 a livello di codice.

### <a name="to-test-the-appearance-of-values-in-a-combo-box"></a>Per verificare l'aspetto dei valori in una casella combinata

Dopo aver immesso i valori nel **dati** proprietà, selezionare la **Test** pulsante il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

   Provare a scorrere l'elenco di valore intero. I valori vengono visualizzati esattamente come vengono digitati nel **dati** proprietà nel **proprietà** finestra. Non sono ortografia o controllo maiuscole/minuscole.

   Premere **Esc** da restituire per il **nella finestra di dialogo** editor.

   È quindi possibile modificare il codice per specificare il pulsante di opzione da visualizzare come selezionato. Ad esempio, `m_radioBox1 = 0;` seleziona il primo pulsante di opzione nel gruppo.
È quindi possibile modificare il codice per specificare il pulsante di opzione da visualizzare come selezionato. Ad esempio, `m_radioBox1 = 0;` seleziona il primo pulsante di opzione nel gruppo.

## <a name="radio-button-values"></a>I valori di pulsante di opzione

Quando si aggiungono pulsanti di opzione per una finestra di dialogo, è possibile gestirli come un gruppo impostando una **gruppo** proprietà nel **proprietà** finestra per il primo pulsante del gruppo. Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)viene quindi visualizzato un ID di controllo per tale pulsante di opzione, consentendo di aggiungere una variabile membro per il gruppo di pulsanti di opzione.

È possibile avere più di un gruppo di pulsanti di opzione in una finestra di dialogo. Aggiungere ciascun gruppo utilizzando la procedura seguente.

### <a name="to-add-a-group-of-radio-buttons-to-a-dialog-box"></a>Per aggiungere un gruppo di pulsanti di opzione a una finestra di dialogo

1. Selezionare il controllo pulsante di opzione nella [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox) e scegliere il percorso nella finestra di dialogo in cui inserire il controllo.

1. Ripetere il passaggio precedente per aggiungere tutti i pulsanti di opzione in base alle esigenze. Assicurarsi che i pulsanti di opzione nel gruppo siano consecutivi nell'ordine di tabulazione.

1. Nella finestra [Proprietà](/visualstudio/ide/reference/properties-window)impostare la proprietà **Group** del *primo* pulsante di opzione nell'ordine di tabulazione su **True**.

   Modifica il **gruppo** proprietà **True** aggiunge lo stile WS_GROUP alla voce del pulsante nell'oggetto finestra di dialogo dello script di risorsa e impedisce che l'utente può selezionare più di un pulsante di opzione alla volta in il gruppo di pulsanti (se l'utente seleziona un pulsante di opzione, altri utenti nel gruppo siano deselezionato).

   > [!NOTE]
   > La proprietà **Group** deve essere impostata su **True**solo per il primo pulsante di opzione del gruppo. Se sono disponibili controlli aggiuntivi che non fanno parte del gruppo di pulsanti, impostare su **True** anche la proprietà *Group* del primo controllo **non incluso nel gruppo** . È possibile identificare rapidamente il primo controllo esterno al gruppo usando **Ctrl**+**1!d** per visualizzare l'ordine di tabulazione.

### <a name="to-add-a-member-variable-for-the-radio-button-group"></a>Per aggiungere una variabile membro per il gruppo di pulsanti di opzione

1. Fare doppio clic il primo controllo pulsante di opzione nell'ordine di tabulazione (controllo dominante e a quello con il **gruppo** impostata su **True**) e scegliere **Aggiungi variabile** dal menu di scelta rapida.

1. Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)selezionare la casella di controllo **Variabile controllo** , quindi il pulsante di opzione **Valore** .

1. Nella casella **Nome variabile** digitare il nome della nuova variabile membro.

1. Nella casella di riepilogo **Tipo variabile** , selezionare **int** o digitare *int*.

   È quindi possibile modificare il codice per specificare il pulsante di opzione da visualizzare come selezionato. Ad esempio, `m_radioBox1 = 0;` seleziona il primo pulsante di opzione nel gruppo.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)