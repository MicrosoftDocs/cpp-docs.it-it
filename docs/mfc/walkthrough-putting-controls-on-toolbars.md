---
title: 'Procedura dettagliata: inserimento di controlli nelle barre degli strumenti'
ms.date: 04/25/2019
helpviewer_keywords:
- Customize dialog box, adding controls
- toolbars [MFC], adding controls
ms.assetid: 8fc94bdf-0da7-45d9-8bc4-52b7b1edf205
ms.openlocfilehash: 2a801e61c49301d9b8780bbf7eb77025990337ad
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360261"
---
# <a name="walkthrough-putting-controls-on-toolbars"></a>Procedura dettagliata: inserimento di controlli nelle barre degli strumenti

In questo articolo viene descritto come aggiungere un pulsante della barra degli strumenti che contiene un controllo Windows a una barra degli strumenti. In MFC, un pulsante della barra degli strumenti deve essere una classe derivata da [CMFCToolBarButton](../mfc/reference/cmfctoolbarbutton-class.md), ad esempio [CMFCToolBarComboBoxButton Class](../mfc/reference/cmfctoolbarcomboboxbutton-class.md), [CMFCToolBarEditBoxButton Class](../mfc/reference/cmfctoolbareditboxbutton-class.md), [CMFCDropDownToolbarButton Class](../mfc/reference/cmfcdropdowntoolbarbutton-class.md)o [CMFCToolBarMenuButton Class](../mfc/reference/cmfctoolbarmenubutton-class.md).

## <a name="adding-controls-to-toolbars"></a>Aggiunta di controlli alle barre degli strumenti

Per aggiungere un controllo a una barra degli strumenti, attenersi alla seguente procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre. Per altre informazioni su come creare pulsanti utilizzando **l'Editor barra degli strumenti** in Visual Studio, vedere l'articolo Editor della barra degli [strumenti.](../windows/toolbar-editor.md)

1. Riservare un'immagine della barra degli strumenti (icona del pulsante) per il pulsante in tutte le bitmap nella barra degli strumenti padre.

1. Nel gestore messaggi che `AFX_WM_RESETTOOLBAR` elabora il messaggio, eseguire i passaggi seguenti:In the message handler that processes the message, do the following steps:

   1. Costruire il controllo pulsante utilizzando una classe derivata da `CMFCToolbarButton`.

   1. Sostituire il pulsante fittizio con il nuovo controllo utilizzando [CMFCToolBar::ReplaceButton](../mfc/reference/cmfctoolbar-class.md#replacebutton). È possibile creare l'oggetto pulsante nello stack, perché `ReplaceButton` copia l'oggetto pulsante e mantiene la copia.

> [!NOTE]
> Se è stata abilitata la personalizzazione nell'applicazione, potrebbe essere necessario reimpostare la barra degli strumenti utilizzando il pulsante **Reimposta** nella scheda **Barre degli strumenti** della finestra di dialogo **Personalizza** per visualizzare il controllo aggiornato nell'applicazione dopo la ricompilazione. Lo stato della barra degli strumenti viene salvato nel Registro di sistema di Windows e le informazioni del Registro vengono caricate e applicate dopo che il metodo `ReplaceButton` viene eseguito durante l'avvio dell'applicazione.

## <a name="toolbar-controls-and-customization"></a>Controlli della barra degli strumenti e personalizzazione

La scheda **Comandi** della finestra di dialogo **Personalizza** contiene un elenco di comandi disponibili nell'applicazione. Per impostazione predefinita, la finestra di dialogo **Personalizza** elabora i menu dell'applicazione e crea un elenco di pulsanti standard della barra degli strumenti in ogni categoria di menu. Per mantenere la funzionalità estesa fornita dai controlli della barra degli strumenti, è necessario sostituire il pulsante standard della barra degli strumenti con il controllo personalizzato nella finestra di dialogo **Personalizza.**

Quando si abilita la **Customize** personalizzazione, si crea `OnViewCustomize` la finestra di dialogo Personalizza nel gestore di personalizzazione utilizzando il [CMFCToolBarsCustomizeDialog classe.](../mfc/reference/cmfctoolbarscustomizedialog-class.md) Prima di visualizzare la finestra di dialogo **Personalizza** chiamando [CMFCToolBarsCustomizeDialog::Create](../mfc/reference/cmfctoolbarscustomizedialog-class.md#create), chiamare [CMFCToolBarsCustomizeDialog::ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) per sostituire il pulsante standard con il nuovo controllo.

## <a name="example-creating-a-find-combo-box"></a>Esempio: creazione di una casella combinata Find

In questa sezione viene descritto come creare un controllo casella combinata **Trova** visualizzato su una barra degli strumenti e contenente le stringhe di ricerca utilizzate di recente. L'utente può immettere una stringa nel controllo e premere il tasto INVIO per cercare un documento, oppure premere il tasto ESC per riportare lo stato attivo sulla cornice principale. In questo esempio si presuppone che il documento viene visualizzato in una visualizzazione derivata dalla [classe CEditView.](../mfc/reference/ceditview-class.md)

### <a name="creating-the-find-control"></a>Creazione del controllo Find

Creare innanzitutto il controllo casella combinata **Trova:**

1. Aggiungere il pulsante e i relativi comandi alle risorse dell'applicazione:

   1. Nelle risorse dell'applicazione, aggiungere un nuovo pulsante con un ID di comando `ID_EDIT_FIND` a una barra degli strumenti dell'applicazione e a tutte le bitmap associate alla barra degli strumenti.

   1. Creare una nuova voce `ID_EDIT_FIND` di menu con l'ID di comando.

   1. Aggiungere una nuova stringa "Trova il testo\nTrova" alla tabella di stringhe e assegnarle un ID di comando `ID_EDIT_FIND_COMBO` . Questo ID verrà utilizzato come ID di comando del pulsante della casella combinata **Trova.**

        > [!NOTE]
        > Poiché `ID_EDIT_FIND` è un comando standard che viene elaborato da `CEditView`, non è necessario implementare un gestore speciale per questo comando.  Tuttavia, è necessario implementare un gestore per il nuovo comando `ID_EDIT_FIND_COMBO`.

1. Creare una nuova `CFindComboBox`classe , , derivata dalla [classe CComboBox](../mfc/reference/ccombobox-class.md).

1. Nella classe `CFindComboBox` eseguire l'override del metodo virtuale `PreTranslateMessage`. Questo metodo consentirà alla casella combinata di elaborare il messaggio [WM_KEYDOWN.](/windows/win32/inputdev/wm-keydown) Se l'utente preme il tasto ESC (`VK_ESCAPE`), restituisce lo stato attivo alla finestra cornice principale. Se l'utente preme il tasto INVIO (`VK_ENTER`), viene inserito nella finestra cornice principale un messaggio `WM_COMMAND` contenente l'ID di comando `ID_EDIT_FIND_COMBO`.

1. Creare una classe per il pulsante della casella combinata **Trova,** derivata dalla [classe CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md). In questo esempio è denominato `CFindComboButton`.

1. Il costruttore di `CMFCToolbarComboBoxButton` accetta tre parametri: l'ID di comando del pulsante, l'indice dell'immagine del pulsante e lo stile della casella combinata. Impostare questi parametri come segue:

   1. Passare `ID_EDIT_FIND_COMBO` come ID di comando.

   1. Utilizzare [CCommandManager::GetCmdImage](reference/internal-classes.md) con `ID_EDIT_FIND` per ottenere l'indice dell'immagine.

   1. Per un elenco degli stili di casella combinata disponibili, vedere [Stili casella combinata](../mfc/reference/styles-used-by-mfc.md#combo-box-styles).

1. Nella classe `CFindComboButton` eseguire l'override del metodo `CMFCToolbarComboBoxButton::CreateCombo`. A questo punto è necessario creare l'oggetto `CFindComboButton` e restituire un puntatore ad esso.

1. Utilizzare la macro [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) per rendere persistente il pulsante combinato. Il gestore dell'area di lavoro carica e salva automaticamente lo stato del pulsante nel Registro di sistema di Windows.

1. Implementare il gestore `ID_EDIT_FIND_COMBO` nella visualizzazione del documento. Utilizzare CMFCToolBar::GetCommandButtons `ID_EDIT_FIND_COMBO` con per recuperare tutti i pulsanti della casella combinata Find.Use [CMFCToolBar::GetCommandButtons](../mfc/reference/cmfctoolbar-class.md#getcommandbuttons) with to retrieve all **Find** combo box buttons. Possono essere presenti più copie di un pulsante con lo stesso ID di comando a causa della personalizzazione.

1. `ID_EDIT_FIND` Nel gestore `OnFind`messaggi utilizzare [CMFCToolBar::IsLastCommandFromButton](../mfc/reference/cmfctoolbar-class.md#islastcommandfrombutton) per determinare se il comando di ricerca è stato inviato dal pulsante della casella combinata **Trova.** In caso affermativo, cercare il testo e aggiungere la stringa di ricerca nella casella combinata.

### <a name="adding-the-find-control-to-the-main-toolbar"></a>Aggiunta del controllo Find alla barra degli strumenti principale

Per aggiungere il pulsante della casella combinata alla barra degli strumenti, attenersi alla seguente procedura:

1. Implementare il gestore di messaggi `AFX_WM_RESETTOOLBAR``OnToolbarReset` nella finestra cornice principale.

    > [!NOTE]
    > Il framework invia il messaggio alla finestra cornice principale quando una barra degli strumenti viene inizializzata durante l'avvio dell'applicazione, oppure quando una barra degli strumenti viene reimpostata durante la personalizzazione. In entrambi i casi, è necessario sostituire il pulsante standard della barra degli strumenti con il pulsante personalizzato della casella combinata **Trova.**

1. Nel `AFX_WM_RESETTOOLBAR` gestore esaminare l'ID della barra degli strumenti, ovvero il *messaggio WPARAM* del messaggio AFX_WM_RESETTOOLBAR. Se l'ID della barra degli strumenti è uguale a quello della barra degli strumenti che contiene il pulsante della casella `ID_EDIT_FIND)` combinata `CFindComboButton` **Trova,** chiamare [CMFCToolBar::ReplaceButton](../mfc/reference/cmfctoolbar-class.md#replacebutton) per sostituire il **trova** pulsante (vale a dire, il pulsante con l'ID di comando con un oggetto.

    > [!NOTE]
    > È possibile creare un oggetto `CFindComboBox` nello stack, perché `ReplaceButton` copia l'oggetto pulsante e mantiene la copia.

### <a name="adding-the-find-control-to-the-customize-dialog-box"></a>Aggiunta del controllo Find alla finestra di dialogo Personalizza

Nel gestore `OnViewCustomize`di personalizzazione , chiamare [CMFCToolBarsCustomizeDialog::ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) per sostituire il `ID_EDIT_FIND`pulsante `CFindComboButton` **Trova** (ovvero, il pulsante con l'ID di comando ) con un oggetto .

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../mfc/hierarchy-chart.md)<br/>
[Classi](../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar (classe)](../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarButton](../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[CMFCToolBarsCustomizeDialog (classe)](../mfc/reference/cmfctoolbarscustomizedialog-class.md)
