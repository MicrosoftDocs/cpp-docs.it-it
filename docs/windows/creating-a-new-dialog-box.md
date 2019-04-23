---
title: 'Procedura: Creare una finestra di dialogo (C++)'
ms.date: 02/15/2019
f1_keywords:
- vc.editors.dialog
helpviewer_keywords:
- dialog boxes [C++], creating
- Dialog Editor [C++], creating dialog boxes
- modal dialog boxes [C++], logon screens
- logon screens
- Test Dialog command
- testing, dialog boxes
- dialog boxes [C++], testing
- dialog boxes [C++], size
- dialog boxes [C++], positioning
ms.assetid: 303de801-c4f8-42e1-b622-353f6423f688
ms.openlocfilehash: c5f026683881ba8e608bd00089879e0e2a7b4af2
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59036328"
---
# <a name="how-to-create-a-dialog-box-c"></a>Procedura: Creare una finestra di dialogo (C++)

La posizione e dimensioni di una finestra di dialogo di C++ e la posizione e dimensioni dei controlli in essa contenuti vengono misurati in unità di misura della finestra. I valori per i singoli controlli e la finestra di dialogo vengono visualizzati in basso a destra della barra quando si seleziona di stato di Visual Studio.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

## <a name="how-to"></a>Procedure

Il **finestra di dialogo Editor** consente di:

### <a name="to-create-a-new-dialog-box"></a>Per creare una nuova finestra di dialogo

1. In [visualizzazione di risorse](how-to-create-a-resource-script-file.md#create-resources), fare doppio clic sui *RC* del file e selezionare **Aggiungi risorsa**.

1. Nel **Aggiungi risorsa** finestra di dialogo **finestra di dialogo** nel **tipo di risorsa** elenco e quindi scegliere **New**.

   Se un segno più (**+**) accanto al **dialogo** tipo di risorsa, significa che i modelli di finestra di dialogo sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **New**.

   Verrà visualizzata la finestra di dialogo Nuova nel **finestra di dialogo Editor**.

È anche possibile aprire finestre di dialogo esistenti nell'editor di finestra di dialogo per la modifica.

### <a name="to-create-a-dialog-box-that-a-user-cant-exit"></a>Per creare una finestra di dialogo che è possibile uscire

È possibile creare una finestra di dialogo di runtime che non è possibile uscire. Una finestra di dialogo di questo tipo è utile per gli accessi e per i blocchi di applicazioni o documenti.

1. Nel riquadro **Proprietà** per la finestra di dialogo impostare la proprietà **System Menu** su **false**.

   Questa impostazione disabilita il menu di sistema di finestra di dialogo e **Chiudi** pulsante.

1. Nel form della finestra di dialogo eliminare i pulsanti **Annulla** e **OK** .

   In fase di esecuzione, un utente non può chiudere una finestra di dialogo modale con queste caratteristiche.

Per abilitare il test di questo tipo di finestra di dialogo, la funzione DialogBox test rileva quando **Esc** viene premuto. **ESC** è noto anche come tasto virtuale VK_ESCAPE. Indipendentemente dal modo in cui la finestra di dialogo è progettata per comportarsi in fase di esecuzione, è possibile terminare la modalità test premendo **Esc**.

> [!NOTE]
> Per le applicazioni MFC, per creare una finestra di dialogo che non è possibile uscire è necessario eseguire l'override del comportamento predefinito di `OnOK` e `OnCancel` perché anche se si eliminano i pulsanti associati, la finestra di dialogo può comunque essere chiusa premendo  **Immettere** oppure **Esc**.

### <a name="to-specify-the-location-and-size-of-a-dialog-box"></a>Per specificare la posizione e dimensione di una finestra di dialogo

È possibile impostare nella proprietà il [finestra proprietà](/visualstudio/ide/reference/properties-window) per specificare in una finestra di dialogo verrà visualizzata sullo schermo.

- Il valore booleano **Center** proprietà.

   Se si imposta il valore su **True**, la finestra di dialogo verrà sempre visualizzato al centro della schermata. Se si imposta questa proprietà su **False**, quindi è possibile impostare il **XPos** e **YPos** proprietà.

- Il **XPos** e **YPos** proprietà che vengono usate per definire in modo esplicito in cui sullo schermo verrà visualizzate nella finestra di dialogo.

   Queste proprietà di posizione sono valori di offset dall'angolo superiore sinistro dell'area di visualizzazione, che è definita come `{X=0, Y=0}`.

- Il **Absolute Align** proprietà che influiscono sulla posizione.

   Se **True**, le coordinate sono relative allo schermo. Se **False**, le coordinate sono relativi alla finestra del proprietario della finestra di dialogo.

### <a name="to-test-a-dialog-box"></a>Per testare una finestra di dialogo

Quando si progetta una finestra di dialogo, è possibile simularne e verificarne il comportamento in fase di esecuzione senza compilare il programma. In questo modo è possibile:

- Digitare un testo, selezionare elementi dagli elenchi della casella combinata, attivare o disattivare le opzioni e scegliere i comandi.

- Testare l'ordine di tabulazione.

- Verificare il raggruppamento di controlli, quali pulsanti di opzione e caselle di controllo.

- Verificare i tasti di scelta rapida per i controlli nella finestra di dialogo.

> [!NOTE]
> Le connessioni al codice della finestra di dialogo effettuate tramite procedure guidate non vengono incluse nella simulazione.

Durante la verifica di una finestra di dialogo, la posizione in cui quest'ultima viene visualizzata è in genere relativa alla finestra principale del programma. Se è stata impostata nella finestra di dialogo **Absolute Align** proprietà **True**, la finestra di dialogo vengono visualizzati in una posizione esterna rispetto all'angolo superiore sinistro della schermata.

1. Quando la **finestra di dialogo Editor** è la finestra attiva, passare al menu **formato** > **verifica finestra di dialogo**.

1. Per terminare la simulazione, premere **Esc** oppure selezionare la **Chiudi** pulsante nella finestra di dialogo si sta testando.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor finestre](../windows/dialog-editor.md)<br/>
[Procedura: Gestire i controlli finestra di dialogo](../windows/controls-in-dialog-boxes.md)<br/>