---
title: 'Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Customize dialog box, adding controls
- toolbars [MFC], adding controls
ms.assetid: 8fc94bdf-0da7-45d9-8bc4-52b7b1edf205
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 258d8f10238db58be26743694943ae3bd6abc20e
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43693575"
---
# <a name="walkthrough-putting-controls-on-toolbars"></a>Procedura dettagliata: inserimento di controlli nelle barre degli strumenti
In questo argomento viene descritto come aggiungere un pulsante contenente un controllo Windows a una barra degli strumenti. In MFC un pulsante della barra degli strumenti deve essere un [classe CMFCToolBarButton](../mfc/reference/cmfctoolbarbutton-class.md)-derivato (classe), ad esempio [classe CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md), [classe CMFCToolBarEditBoxButton](../mfc/reference/cmfctoolbareditboxbutton-class.md), [Classe CMFCDropDownToolbarButton](../mfc/reference/cmfcdropdowntoolbarbutton-class.md), o [classe CMFCToolBarMenuButton](../mfc/reference/cmfctoolbarmenubutton-class.md).  
  
## <a name="adding-controls-to-toolbars"></a>Aggiunta di controlli alle barre degli strumenti  
 Per aggiungere un controllo a una barra degli strumenti, attenersi alla seguente procedura:  
  
1.  Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre. Per altre informazioni su come creare pulsanti utilizzando l'Editor barra degli strumenti in Visual Studio, vedere la [sulla barra degli strumenti Editor](../windows/toolbar-editor.md) argomento.  
  
2.  Riservare un'immagine della barra degli strumenti (icona del pulsante) per il pulsante in tutte le bitmap nella barra degli strumenti padre.  
  
3.  Nel gestore di messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR, effettuare le operazioni seguenti:  
  
    1.  Costruire il controllo pulsante utilizzando una classe derivata da `CMFCToolbarButton`.  
  
    2.  Sostituire il pulsante fittizio con il nuovo controllo usando [CMFCToolBar::ReplaceButton](../mfc/reference/cmfctoolbar-class.md#replacebutton). È possibile creare l'oggetto pulsante nello stack, perché `ReplaceButton` copia l'oggetto pulsante e mantiene la copia.  
  
> [!NOTE]
>  Se è stata attivata la personalizzazione nell'applicazione, si potrebbe essere necessario reimpostare la barra degli strumenti tramite il **reimpostare** pulsante il **barre degli strumenti** scheda della finestra di **Personalizza** finestra di dialogo per visualizzare il controllo aggiornato nell'applicazione dopo la ricompilazione. Lo stato della barra degli strumenti viene salvato nel Registro di sistema di Windows e le informazioni del Registro vengono caricate e applicate dopo che il metodo `ReplaceButton` viene eseguito durante l'avvio dell'applicazione.  
  
## <a name="toolbar-controls-and-customization"></a>Controlli della barra degli strumenti e personalizzazione  
 Il **comandi** scheda della finestra di **Personalizza** nella finestra di dialogo contiene un elenco di comandi disponibili nell'applicazione. Per impostazione predefinita, il **Personalizza** nella finestra di dialogo Elabora i menu dell'applicazione e compila un elenco di pulsanti della barra degli strumenti standard in ogni categoria di menu. Per mantenere le funzionalità estese che forniscono i controlli della barra degli strumenti, è necessario sostituire il pulsante della barra degli strumenti standard con il controllo personalizzato nel **Personalizza** nella finestra di dialogo.  
  
 Quando si abilita la personalizzazione, si crea il **Personalizza** finestra di dialogo nel gestore della personalizzazione `OnViewCustomize` utilizzando le [classe CMFCToolBarsCustomizeDialog](../mfc/reference/cmfctoolbarscustomizedialog-class.md) classe. Prima di visualizzare il **Personalizza** finestra di dialogo chiamando [CMFCToolBarsCustomizeDialog::Create](../mfc/reference/cmfctoolbarscustomizedialog-class.md#create), chiamare [CMFCToolBarsCustomizeDialog::ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) sostituire il pulsante standard con il nuovo controllo.  
  
## <a name="example-creating-a-find-combo-box"></a>Esempio: creazione di una casella combinata Find  
 In questa sezione viene descritto come creare un **trovare** controllo casella combinata che viene visualizzata una barra degli strumenti e contiene le stringhe di ricerca usati di recente. L'utente può immettere una stringa nel controllo e premere il tasto INVIO per cercare un documento, oppure premere il tasto ESC per riportare lo stato attivo sulla cornice principale. Questo esempio si presuppone che il documento viene visualizzato una [classe CEditView](../mfc/reference/ceditview-class.md)-visualizzazione derivata.  
  
### <a name="creating-the-find-control"></a>Creazione del controllo Find  
 Innanzitutto, creare il controllo casella combinata `Find`:  
  
1.  Aggiungere il pulsante e i relativi comandi alle risorse dell'applicazione:  
  
    1.  Nelle risorse dell'applicazione, aggiungere un nuovo pulsante con un ID di comando `ID_EDIT_FIND` a una barra degli strumenti dell'applicazione e a tutte le bitmap associate alla barra degli strumenti.  
  
    2.  Creare una nuova voce di menu con l'ID di comando ID_EDIT_FIND.  
  
    3.  Aggiungere una nuova stringa "Trova il testo\nTrova" alla tabella di stringhe e assegnarle un ID di comando `ID_EDIT_FIND_COMBO` . Questo ID verrà utilizzato come l'ID di comando del pulsante casella combinata `Find`.  
  
        > [!NOTE]
        >  Poiché `ID_EDIT_FIND` è un comando standard che viene elaborato da `CEditView`, non è necessario implementare un gestore speciale per questo comando.  Tuttavia, è necessario implementare un gestore per il nuovo comando `ID_EDIT_FIND_COMBO`.  
  
2.  Creare una nuova classe `CFindComboBox`, derivata da [classe CComboBox](../mfc/reference/ccombobox-class.md).  
  
3.  Nella classe `CFindComboBox` eseguire l'override del metodo virtuale `PreTranslateMessage`. Questo metodo consentirà alla casella combinata di elaborare il [WM_KEYDOWN](/windows/desktop/inputdev/wm-keydown) messaggio. Se l'utente preme il tasto ESC (`VK_ESCAPE`), restituisce lo stato attivo alla finestra cornice principale. Se l'utente preme il tasto INVIO (`VK_ENTER`), invio alla finestra cornice principale un messaggio WM_COMMAND che contiene il `ID_EDIT_FIND_COMBO` comando ID.  
  
4.  Creare una classe per il **trovare** pulsante casella combinata, derivato da [classe CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md). In questo esempio è denominata `CFindComboButton`.  
  
5.  Il costruttore di `CMFCToolbarComboBoxButton` accetta tre parametri: l'ID di comando del pulsante, l'indice dell'immagine del pulsante e lo stile della casella combinata. Impostare questi parametri come segue:  
  
    1.  Passare `ID_EDIT_FIND_COMBO` come ID di comando.  
  
    2.  Uso [CCommandManager::GetCmdImage](reference/internal-classes.md) con `ID_EDIT_FIND` per ottenere l'indice dell'immagine.  
  
    3.  Per un elenco di stili delle caselle combinate disponibili, vedere [stili casella combinata](../mfc/reference/styles-used-by-mfc.md#combo-box-styles).  
  
6.  Nella classe `CFindComboButton` eseguire l'override del metodo `CMFCToolbarComboBoxButton::CreateCombo`. A questo punto è necessario creare l'oggetto `CFindComboButton` e restituire un puntatore ad esso.  
  
7.  Usare la [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) macro per rendere persistente il pulsante casella combinata. Il gestore dell'area di lavoro carica e salva automaticamente lo stato del pulsante nel Registro di sistema di Windows.  
  
8.  Implementare il gestore `ID_EDIT_FIND_COMBO` nella visualizzazione del documento. Uso [CMFCToolBar::GetCommandButtons](../mfc/reference/cmfctoolbar-class.md#getcommandbuttons) con `ID_EDIT_FIND_COMBO` per recuperare tutti **trovare** i pulsanti della casella combinata. Possono essere presenti più copie di un pulsante con lo stesso ID di comando a causa della personalizzazione.  
  
9. Nel gestore di messaggi ID_EDIT_FIND `OnFind`, usare [CMFCToolBar::IsLastCommandFromButton](../mfc/reference/cmfctoolbar-class.md#islastcommandfrombutton) per determinare se il comando di ricerca è stato inviato dal **trovare** pulsante casella combinata. In caso affermativo, cercare il testo e aggiungere la stringa di ricerca nella casella combinata.  
  
### <a name="adding-the-find-control-to-the-main-toolbar"></a>Aggiunta del controllo Find alla barra degli strumenti principale  
 Per aggiungere il pulsante della casella combinata alla barra degli strumenti, attenersi alla seguente procedura:  
  
1.  Implementare il gestore di messaggi `AFX_WM_RESETTOOLBAR` `OnToolbarReset` nella finestra cornice principale.  
  
    > [!NOTE]
    >  Il framework invia il messaggio alla finestra cornice principale quando una barra degli strumenti viene inizializzata durante l'avvio dell'applicazione, oppure quando una barra degli strumenti viene reimpostata durante la personalizzazione. In entrambi i casi, è necessario sostituire il pulsante della barra degli strumenti standard con l'oggetto personalizzato **trovare** pulsante casella combinata.  
  
2.  Nel `AFX_WM_RESETTOOLBAR` gestore, esaminare l'ID della barra degli strumenti, vale a dire, il *WPARAM* del messaggio AFX_WM_RESETTOOLBAR. Se l'ID della barra degli strumenti è uguale a quello della barra degli strumenti che contiene il **trovare** pulsante casella combinata, chiamare [CMFCToolBar::ReplaceButton](../mfc/reference/cmfctoolbar-class.md#replacebutton) per sostituire il **trovare** pulsante (vale a dire il pulsante con l'ID di comando `ID_EDIT_FIND)` con un `CFindComboButton` oggetto.  
  
    > [!NOTE]
    >  È possibile creare un oggetto `CFindComboBox` nello stack, perché `ReplaceButton` copia l'oggetto pulsante e mantiene la copia.  
  
### <a name="adding-the-find-control-to-the-customize-dialog-box"></a>Aggiunta del controllo Find alla finestra di dialogo Personalizza  
 Nel gestore della personalizzazione `OnViewCustomize`, chiamare [CMFCToolBarsCustomizeDialog::ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) sostituire la **trovare** pulsante (vale a dire, il pulsante con l'ID di comando `ID_EDIT_FIND)` con un `CFindComboButton` oggetti.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../mfc/hierarchy-chart.md)   
 [Classi](../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCToolBarButton](../mfc/reference/cmfctoolbarbutton-class.md)   
 [Classe CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md)   
 [Classe CMFCToolBarsCustomizeDialog](../mfc/reference/cmfctoolbarscustomizedialog-class.md)
