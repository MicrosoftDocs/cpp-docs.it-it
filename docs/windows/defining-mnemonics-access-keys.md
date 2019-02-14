---
title: La definizione di valori e controllare l'accesso
ms.date: 11/04/2016
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
ms.openlocfilehash: 3a885ad57ba05304d51cb45d0b498d81ad37a148
ms.sourcegitcommit: eb2b34a24e6edafb727e87b138499fa8945f981e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2019
ms.locfileid: "56264855"
---
# <a name="defining-control-access-and-values"></a>La definizione di valori e controllare l'accesso

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="change-the-tab-order-of-controls"></a>Modificare l'ordine di tabulazione dei controlli

L'ordine di tabulazione è l'ordine in cui il **scheda** chiave sposta lo stato attivo di input da un controllo successivo all'interno di una finestra di dialogo. In genere l'ordine di tabulazione procede da sinistra a destra e dall'alto verso il basso in una finestra di dialogo. Ogni controllo ha un **Tabstop** proprietà che determina se un controllo riceve lo stato attivo.

### <a name="to-set-input-focus-for-a-control"></a>Per impostare lo stato attivo di input per un controllo

Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), selezionare **True** oppure **False** nel **Tabstop** proprietà.

Anche i controlli che non hanno le **Tabstop** impostata su **True** devono far parte dell'ordine di tabulazione. Ordine di tabulazione è importante, ad esempio, quando si [definire le chiavi di accesso (tasti di scelta)](../windows/defining-mnemonics-access-keys.md) per i controlli privi di didascalie. Testo statico che contiene una chiave di accesso per un controllo correlato deve precedere il relativo controllo nell'ordine di tabulazione.

> [!NOTE]
> Se la finestra di dialogo contiene la sovrapposizione di controlli, la modifica dell'ordine di tabulazione può cambiare il modo in cui che vengono visualizzati i controlli. Controlli disponibili più avanti nell'ordine di tabulazione vengono sempre visualizzati sopra i controlli sovrapposti che li precedono nell'ordine di tabulazione.

### <a name="to-view-the-current-tab-order-for-all-controls-in-a-dialog-box"></a>Per visualizzare l'ordine di tabulazione corrente per tutti i controlli in una finestra di dialogo

Nel **formato** dal menu **ordine di tabulazione**.

\- oppure -

- Premere **Ctrl** + **1!d**.

### <a name="to-change-the-tab-order-for-all-controls-in-a-dialog-box"></a>Per modificare l'ordine di tabulazione per tutti i controlli in una finestra di dialogo

1. Nel **formato** dal menu **ordine di tabulazione**.

   Un numero nell'angolo superiore sinistro di ogni controllo indica la posizione nell'ordine di tabulazione corrente.

1. Impostare l'ordine di tabulazione facendo clic su ogni controllo nell'ordine desiderato la **scheda** chiave da seguire.

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

2. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), nella **didascalia** proprietà, digitare un nuovo nome per il controllo, digitare una e commerciale (`&`) davanti alla lettera desiderata come chiave di accesso per tale controllo. Ad esempio `&Radio1`.

3. Premere **INVIO**.

   Nella barra del titolo visualizzato per indicare la chiave di accesso, ad esempio, viene visualizzata una sottolineatura **R**adio1.

### <a name="to-define-an-access-key-for-a-control-without-a-visible-caption"></a>Per definire una chiave di accesso per un controllo senza un titolo visibile

1. Creare una didascalia per il controllo utilizzando un **testo statico** controllare nel [della casella degli strumenti](/visualstudio/ide/reference/toolbox).

2. Nella didascalia di testo statico, digitare una e commerciale (`&`) davanti alla lettera desiderata come tasto di scelta rapida.

3. Assicurarsi che il controllo di testo statico precede immediatamente il controllo che etichetta nell'ordine di tabulazione.

Tutte le chiavi di accesso all'interno di una finestra di dialogo devono essere univoche.

### <a name="to-check-for-duplicate-access-keys"></a>Per verificare la presenza di chiavi di accesso duplicati

1. Nel **formato** menu, fare clic su **tasti**.

## <a name="add-values-to-a-combo-box-control"></a>Aggiungere i valori per un controllo casella combinata

È possibile aggiungere valori per un controllo casella combinata, purché hanno le **finestra di dialogo** editor aperto.

> [!TIP]
> È una buona idea per aggiungere tutti i valori alla casella combinata *prima* di ridimensionare la casella di **dialogo** editor oppure è possibile troncare il testo che deve essere visualizzato nel controllo casella combinata.

### <a name="to-enter-values-into-a-combo-box-control"></a>Immettere i valori in un controllo casella combinata

1. Selezionare la casella combinata facendo clic su di esso.

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

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)