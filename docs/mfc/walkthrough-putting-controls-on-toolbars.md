---
title: 'Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti'
ms.date: 04/25/2019
helpviewer_keywords:
- Customize dialog box, adding controls
- toolbars [MFC], adding controls
ms.assetid: 8fc94bdf-0da7-45d9-8bc4-52b7b1edf205
ms.openlocfilehash: 0c62a8b484cb666427f873244221afec5d4719da
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69510733"
---
# <a name="walkthrough-putting-controls-on-toolbars"></a>Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti

Questo articolo descrive come aggiungere un pulsante della barra degli strumenti che contiene un controllo Windows a una barra degli strumenti. In MFC un pulsante della barra degli strumenti deve essere una classe CMFCToolBarButton derivata dalla [classe](../mfc/reference/cmfctoolbarbutton-class.md), ad esempio la classe [CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md), la classe [CMFCToolBarEditBoxButton](../mfc/reference/cmfctoolbareditboxbutton-class.md), la [classe CMFCDropDownToolbarButton](../mfc/reference/cmfcdropdowntoolbarbutton-class.md)o [ Classe CMFCToolBarMenuButton](../mfc/reference/cmfctoolbarmenubutton-class.md).

## <a name="adding-controls-to-toolbars"></a>Aggiunta di controlli alle barre degli strumenti

Per aggiungere un controllo a una barra degli strumenti, attenersi alla seguente procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre. Per ulteriori informazioni su come creare i pulsanti utilizzando l' **Editor della barra degli strumenti** in Visual Studio, vedere l'articolo relativo all' [Editor della barra degli](../windows/toolbar-editor.md) strumenti.

1. Riservare un'immagine della barra degli strumenti (icona del pulsante) per il pulsante in tutte le bitmap nella barra degli strumenti padre.

1. Nel gestore messaggi che elabora il `AFX_WM_RESETTOOLBAR` messaggio, attenersi alla procedura seguente:

   1. Costruire il controllo pulsante utilizzando una classe derivata da `CMFCToolbarButton`.

   1. Sostituire il pulsante fittizio con il nuovo controllo tramite [CMFCToolBar:: ReplaceButton](../mfc/reference/cmfctoolbar-class.md#replacebutton). È possibile creare l'oggetto pulsante nello stack, perché `ReplaceButton` copia l'oggetto pulsante e mantiene la copia.

> [!NOTE]
>  Se è stata abilitata la personalizzazione nell'applicazione, potrebbe essere necessario reimpostare la barra degli strumenti utilizzando il pulsante **Reimposta** nella scheda **barre degli strumenti** della finestra di dialogo **Personalizza** per visualizzare il controllo aggiornato nell'applicazione dopo la ricompilazione. Lo stato della barra degli strumenti viene salvato nel Registro di sistema di Windows e le informazioni del Registro vengono caricate e applicate dopo che il metodo `ReplaceButton` viene eseguito durante l'avvio dell'applicazione.

## <a name="toolbar-controls-and-customization"></a>Controlli della barra degli strumenti e personalizzazione

Nella scheda **comandi** della finestra di dialogo **Personalizza** è contenuto un elenco di comandi disponibili nell'applicazione. Per impostazione predefinita, la finestra di dialogo **Personalizza** elabora i menu dell'applicazione e compila un elenco di pulsanti della barra degli strumenti standard in ogni categoria di menu. Per garantire la funzionalità estesa fornita dai controlli della barra degli strumenti, è necessario sostituire il pulsante della barra degli strumenti standard con il controllo personalizzato nella finestra di dialogo **Personalizza** .

Quando si Abilita la personalizzazione, si crea la finestra di dialogo **Personalizza** nel gestore `OnViewCustomize` di personalizzazione usando la classe [CMFCToolBarsCustomizeDialog](../mfc/reference/cmfctoolbarscustomizedialog-class.md) . Prima di visualizzare la finestra di dialogo **Personalizza** chiamando [CMFCToolBarsCustomizeDialog:: create](../mfc/reference/cmfctoolbarscustomizedialog-class.md#create), chiamare [CMFCToolBarsCustomizeDialog:: ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) per sostituire il pulsante standard con il nuovo controllo.

## <a name="example-creating-a-find-combo-box"></a>Esempio: Creazione di una casella combinata trova

In questa sezione viene descritto come creare un controllo casella combinata **trova** visualizzato su una barra degli strumenti e contenente le stringhe di ricerca utilizzate di recente. L'utente può immettere una stringa nel controllo e premere il tasto INVIO per cercare un documento, oppure premere il tasto ESC per riportare lo stato attivo sulla cornice principale. Questo esempio presuppone che il documento venga visualizzato in una vista derivata dalla [classe CEditView](../mfc/reference/ceditview-class.md).

### <a name="creating-the-find-control"></a>Creazione del controllo Find

Per prima cosa, creare il controllo casella combinata **trova** :

1. Aggiungere il pulsante e i relativi comandi alle risorse dell'applicazione:

   1. Nelle risorse dell'applicazione, aggiungere un nuovo pulsante con un ID di comando `ID_EDIT_FIND` a una barra degli strumenti dell'applicazione e a tutte le bitmap associate alla barra degli strumenti.

   1. Creare una nuova voce di menu con `ID_EDIT_FIND` l'ID di comando.

   1. Aggiungere una nuova stringa "Trova il testo\nTrova" alla tabella di stringhe e assegnarle un ID di comando `ID_EDIT_FIND_COMBO` . Questo ID verrà usato come ID comando del pulsante casella combinata **trova** .

        > [!NOTE]
        > Poiché `ID_EDIT_FIND` è un comando standard che viene elaborato da `CEditView`, non è necessario implementare un gestore speciale per questo comando.  Tuttavia, è necessario implementare un gestore per il nuovo comando `ID_EDIT_FIND_COMBO`.

1. Creare una nuova classe, `CFindComboBox`, derivata dalla [Classe CComboBox](../mfc/reference/ccombobox-class.md).

1. Nella classe `CFindComboBox` eseguire l'override del metodo virtuale `PreTranslateMessage`. Questo metodo consentirà alla casella combinata di elaborare il messaggio [WM_KEYDOWN](/windows/win32/inputdev/wm-keydown) . Se l'utente preme il tasto ESC (`VK_ESCAPE`), restituisce lo stato attivo alla finestra cornice principale. Se l'utente preme il tasto INVIO (`VK_ENTER`), viene inserito nella finestra cornice principale un messaggio `WM_COMMAND` contenente l'ID di comando `ID_EDIT_FIND_COMBO`.

1. Creare una classe per il pulsante della casella combinata **trova** , derivata dalla [Classe CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md). In questo esempio è denominato `CFindComboButton`.

1. Il costruttore di `CMFCToolbarComboBoxButton` accetta tre parametri: l'ID di comando del pulsante, l'indice dell'immagine del pulsante e lo stile della casella combinata. Impostare questi parametri come segue:

   1. Passare `ID_EDIT_FIND_COMBO` come ID di comando.

   1. Usare [CCommandManager:: GetCmdImage](reference/internal-classes.md) con `ID_EDIT_FIND` per ottenere l'indice dell'immagine.

   1. Per un elenco degli stili della casella combinata disponibili, vedere [stili casella combinata](../mfc/reference/styles-used-by-mfc.md#combo-box-styles).

1. Nella classe `CFindComboButton` eseguire l'override del metodo `CMFCToolbarComboBoxButton::CreateCombo`. A questo punto è necessario creare l'oggetto `CFindComboButton` e restituire un puntatore ad esso.

1. Usare la macro [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) per rendere persistente il pulsante combinato. Il gestore dell'area di lavoro carica e salva automaticamente lo stato del pulsante nel Registro di sistema di Windows.

1. Implementare il gestore `ID_EDIT_FIND_COMBO` nella visualizzazione del documento. Usare [CMFCToolBar::](../mfc/reference/cmfctoolbar-class.md#getcommandbuttons) GetCommandButtons con `ID_EDIT_FIND_COMBO` per recuperare tutti i pulsanti della casella combinata **Find** . Possono essere presenti più copie di un pulsante con lo stesso ID di comando a causa della personalizzazione.

1. Nel gestore `OnFind`di [messaggi, utilizzare CMFCToolBar:: IsLastCommandFromButton](../mfc/reference/cmfctoolbar-class.md#islastcommandfrombutton) per determinare se il comando trova è stato inviato dal pulsante Trova casella combinata. `ID_EDIT_FIND` In caso affermativo, cercare il testo e aggiungere la stringa di ricerca nella casella combinata.

### <a name="adding-the-find-control-to-the-main-toolbar"></a>Aggiunta del controllo Find alla barra degli strumenti principale

Per aggiungere il pulsante della casella combinata alla barra degli strumenti, attenersi alla seguente procedura:

1. Implementare il gestore di messaggi `AFX_WM_RESETTOOLBAR``OnToolbarReset` nella finestra cornice principale.

    > [!NOTE]
    > Il framework invia il messaggio alla finestra cornice principale quando una barra degli strumenti viene inizializzata durante l'avvio dell'applicazione, oppure quando una barra degli strumenti viene reimpostata durante la personalizzazione. In entrambi i casi, è necessario sostituire il pulsante della barra degli strumenti standard con il pulsante casella combinata **trova** personalizzata.

1. Nel gestore esaminare l'ID della barra degli strumenti, ovvero il wParam del messaggio AFX_WM_RESETTOOLBAR. `AFX_WM_RESETTOOLBAR` Se l'ID della barra degli strumenti è uguale a quello della barra degli strumenti contenente il pulsante **trova** casella combinata, chiamare [CMFCToolBar:: ReplaceButton](../mfc/reference/cmfctoolbar-class.md#replacebutton) per sostituire il pulsante **trova** , ovvero il pulsante con l'ID `ID_EDIT_FIND)` di comando `CFindComboButton` con un oggetto.

    > [!NOTE]
    > È possibile creare un oggetto `CFindComboBox` nello stack, perché `ReplaceButton` copia l'oggetto pulsante e mantiene la copia.

### <a name="adding-the-find-control-to-the-customize-dialog-box"></a>Aggiunta del controllo Find alla finestra di dialogo Personalizza

Nel `OnViewCustomize`gestore di personalizzazione, chiamare [CMFCToolBarsCustomizeDialog:: ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) per sostituire il pulsante **Find** (ovvero il pulsante con l'ID `ID_EDIT_FIND`di comando) con un `CFindComboButton` oggetto.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../mfc/hierarchy-chart.md)<br/>
[Classi](../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarButton](../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[Classe CMFCToolBarsCustomizeDialog](../mfc/reference/cmfctoolbarscustomizedialog-class.md)
