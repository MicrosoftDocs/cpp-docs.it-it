---
title: 'Procedura: creare una finestra di dialogo (C++)'
ms.date: 02/15/2019
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
ms.openlocfilehash: 3eae1aca53c40a33b8d120b02fdde8f68d58b723
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160425"
---
# <a name="how-to-create-a-dialog-box-c"></a>Procedura: creare una finestra di dialogo (C++)

La posizione e le dimensioni di C++ una finestra di dialogo, nonché la posizione e le dimensioni dei controlli al suo interno, vengono misurate in unità di dialogo. I valori per i singoli controlli e la finestra di dialogo vengono visualizzati nella parte inferiore destra della barra di stato di Visual Studio quando vengono selezionati.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

## <a name="how-to"></a>Procedure

L' **editor finestre** consente di:

### <a name="to-create-a-new-dialog-box"></a>Per creare una nuova finestra di dialogo

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare clic con il pulsante destro del mouse sul file *RC* e scegliere **Aggiungi risorsa**.

1. Nella finestra di dialogo **Aggiungi risorsa** selezionare **finestra di dialogo** nell'elenco **tipo di risorsa** , quindi scegliere **nuovo**.

   Se accanto al tipo di risorsa **finestra di dialogo** viene visualizzato un segno più ( **+** ), significa che i modelli della finestra di dialogo sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **nuovo**.

   Verrà visualizzata la finestra di dialogo nuovo nell' **editor finestre**.

È inoltre possibile aprire le finestre di dialogo esistenti nell'editor della finestra di dialogo per la modifica.

### <a name="to-create-a-dialog-box-that-a-user-cant-exit"></a>Per creare una finestra di dialogo che non può essere chiusa da un utente

È possibile creare una finestra di dialogo di runtime che non può essere chiusa da un utente. Una finestra di dialogo di questo tipo è utile per gli accessi e per i blocchi di applicazioni o documenti.

1. Nel riquadro **Proprietà** per la finestra di dialogo impostare la proprietà **System Menu** su **false**.

   Questa impostazione Disabilita il menu di sistema della finestra di dialogo e il pulsante **Chiudi** .

1. Nel form della finestra di dialogo eliminare i pulsanti **Annulla** e **OK** .

   In fase di esecuzione, un utente non può uscire da una finestra di dialogo modale con queste caratteristiche.

Per abilitare il test di questo tipo di finestra di dialogo, la funzione di test della finestra di dialogo rileva quando viene premuto **ESC** . **ESC** è anche noto come chiave virtuale VK_ESCAPE. Indipendentemente dal modo in cui la finestra di dialogo è progettata in modo da comportarsi in fase di esecuzione, è possibile terminare la modalità di test premendo **ESC**.

> [!NOTE]
> Per le applicazioni MFC, per creare una finestra di dialogo che gli utenti non possono uscire, è necessario eseguire l'override del comportamento predefinito di `OnOK` e `OnCancel` perché anche se si eliminano i pulsanti associati, la finestra di dialogo può comunque essere chiusa premendo **invio** o **ESC**.

### <a name="to-specify-the-location-and-size-of-a-dialog-box"></a>Per specificare la posizione e le dimensioni di una finestra di dialogo

Sono disponibili proprietà che è possibile impostare nella [finestra Proprietà](/visualstudio/ide/reference/properties-window) per specificare dove verrà visualizzata una finestra di dialogo sullo schermo.

- Proprietà **centrale** booleana.

   Se si imposta il valore su **true**, la finestra di dialogo viene sempre visualizzata al centro dello schermo. Se si imposta questa proprietà su **false**, è possibile impostare le proprietà **XPos** e **YPos** .

- Le proprietà **XPos** e **YPos** utilizzate per definire in modo esplicito dove verrà visualizzata la finestra di dialogo.

   Queste proprietà di posizione sono valori di offset dall'angolo superiore sinistro dell'area di visualizzazione, definito come `{X=0, Y=0}`.

- Proprietà di **allineamento assoluta** che influiscono sulla posizione.

   Se **true**, le coordinate sono relative allo schermo. Se **false**, le coordinate sono relative alla finestra del proprietario della finestra di dialogo.

### <a name="to-test-a-dialog-box"></a>Per testare una finestra di dialogo

Quando si progetta una finestra di dialogo, è possibile simularne e verificarne il comportamento in fase di esecuzione senza compilare il programma. In questo modo è possibile:

- Digitare un testo, selezionare elementi dagli elenchi della casella combinata, attivare o disattivare le opzioni e scegliere i comandi.

- Testare l'ordine di tabulazione.

- Verificare il raggruppamento di controlli, quali pulsanti di opzione e caselle di controllo.

- Verificare i tasti di scelta rapida per i controlli nella finestra di dialogo.

> [!NOTE]
> Le connessioni al codice della finestra di dialogo effettuate tramite le procedure guidate non vengono incluse nella simulazione.

Durante la verifica di una finestra di dialogo, la posizione in cui quest'ultima viene visualizzata è in genere relativa alla finestra principale del programma. Se la proprietà **Absolute align** della finestra di dialogo è stata impostata su **true**, la finestra di dialogo viene visualizzata in una posizione relativa all'angolo superiore sinistro dello schermo.

1. Quando l' **editor finestre** è la finestra attiva, passare a **formato** menu > **finestra di dialogo test**.

1. Per terminare la simulazione, premere **ESC** oppure fare clic sul pulsante **Chiudi** nella finestra di dialogo che si sta testando.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor finestre](../windows/dialog-editor.md)<br/>
[Procedura: gestire i controlli della finestra di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
