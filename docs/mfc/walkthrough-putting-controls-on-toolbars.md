---
title: 'Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Customize dialog box, adding controls
- toolbars [MFC], adding controls
ms.assetid: 8fc94bdf-0da7-45d9-8bc4-52b7b1edf205
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f991f8ebf87535de09dc7c3dce5e0f4ca2ee457b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-putting-controls-on-toolbars"></a>Procedura dettagliata: inserimento di controlli nelle barre degli strumenti
In questo argomento viene descritto come aggiungere un pulsante contenente un controllo Windows a una barra degli strumenti. In MFC, un pulsante della barra degli strumenti deve essere un [CMFCToolBarButton classe](../mfc/reference/cmfctoolbarbutton-class.md)-classe derivata, ad esempio [CMFCToolBarComboBoxButton classe](../mfc/reference/cmfctoolbarcomboboxbutton-class.md), [CMFCToolBarEditBoxButton classe](../mfc/reference/cmfctoolbareditboxbutton-class.md), [CMFCDropDownToolbarButton classe](../mfc/reference/cmfcdropdowntoolbarbutton-class.md), o [CMFCToolBarMenuButton classe](../mfc/reference/cmfctoolbarmenubutton-class.md).  
  
## <a name="adding-controls-to-toolbars"></a>Aggiunta di controlli alle barre degli strumenti  
 Per aggiungere un controllo a una barra degli strumenti, attenersi alla seguente procedura:  
  
1.  Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre. Per ulteriori informazioni su come creare pulsanti utilizzando l'Editor barra degli strumenti in Visual Studio, vedere il [Editor barra degli strumenti](../windows/toolbar-editor.md) argomento.  
  
2.  Riservare un'immagine della barra degli strumenti (icona del pulsante) per il pulsante in tutte le bitmap nella barra degli strumenti padre.  
  
3.  Nel gestore di messaggi che elabora il messaggio `AFX_WM_RESETTOOLBAR`, effettuare le seguenti operazioni:  
  
    1.  Costruire il controllo pulsante utilizzando una classe derivata da `CMFCToolbarButton`.  
  
    2.  Sostituire il pulsante fittizio con un nuovo controllo tramite [CMFCToolBar::ReplaceButton](../mfc/reference/cmfctoolbar-class.md#replacebutton). È possibile creare l'oggetto pulsante nello stack, perché `ReplaceButton` copia l'oggetto pulsante e mantiene la copia.  
  
> [!NOTE]
>  Se è stata attivata la personalizzazione dell'applicazione, è necessario reimpostare la barra degli strumenti utilizzando il **reimpostare** pulsante il **barre degli strumenti** scheda della finestra il **Personalizza** la finestra di dialogo per visualizzare il controllo aggiornato nell'applicazione dopo la ricompilazione. Lo stato della barra degli strumenti viene salvato nel Registro di sistema di Windows e le informazioni del Registro vengono caricate e applicate dopo che il metodo `ReplaceButton` viene eseguito durante l'avvio dell'applicazione.  
  
## <a name="toolbar-controls-and-customization"></a>Controlli della barra degli strumenti e personalizzazione  
 Il **comandi** scheda della finestra di **Personalizza** la finestra di dialogo contiene un elenco di comandi che sono disponibili nell'applicazione. Per impostazione predefinita, il **Personalizza** la finestra di dialogo Elabora i menu dell'applicazione e compila un elenco dei pulsanti della barra degli strumenti standard in ogni categoria di menu. Per mantenere le funzionalità estese che forniscono i controlli della barra degli strumenti, è necessario sostituire il pulsante della barra degli strumenti standard con il controllo personalizzato nel **Personalizza** la finestra di dialogo.  
  
 Quando si abilita la personalizzazione, si crea il **Personalizza** nella finestra di dialogo del gestore di personalizzazione `OnViewCustomize` utilizzando il [CMFCToolBarsCustomizeDialog classe](../mfc/reference/cmfctoolbarscustomizedialog-class.md) classe. Prima di visualizzare il **Personalizza** la finestra di dialogo chiamando [CMFCToolBarsCustomizeDialog::Create](../mfc/reference/cmfctoolbarscustomizedialog-class.md#create), chiamare [CMFCToolBarsCustomizeDialog::ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) da sostituire pulsante standard con un nuovo controllo.  
  
## <a name="example-creating-a-find-combo-box"></a>Esempio: creazione di una casella combinata Find  
 In questa sezione viene descritto come creare un controllo casella combinata `Find` che viene visualizzato su una barra degli strumenti e che contiene le stringhe di ricerca utilizzate recentemente. L'utente può immettere una stringa nel controllo e premere il tasto INVIO per cercare un documento, oppure premere il tasto ESC per riportare lo stato attivo sulla cornice principale. Questo esempio si presuppone che il documento viene visualizzato un [classe CEditView](../mfc/reference/ceditview-class.md)-vista derivata.  
  
### <a name="creating-the-find-control"></a>Creazione del controllo Find  
 Innanzitutto, creare il controllo casella combinata `Find`:  
  
1.  Aggiungere il pulsante e i relativi comandi alle risorse dell'applicazione:  
  
    1.  Nelle risorse dell'applicazione, aggiungere un nuovo pulsante con un ID di comando `ID_EDIT_FIND` a una barra degli strumenti dell'applicazione e a tutte le bitmap associate alla barra degli strumenti.  
  
    2.  Creare una nuova voce di menu con l'ID di comando ID_EDIT_FIND.  
  
    3.  Aggiungere una nuova stringa "Trova il testo\nTrova" alla tabella di stringhe e assegnarle un ID di comando `ID_EDIT_FIND_COMBO` . Questo ID verrà utilizzato come l'ID di comando del pulsante casella combinata `Find`.  
  
        > [!NOTE]
        >  Poiché `ID_EDIT_FIND` è un comando standard che viene elaborato da `CEditView`, non è necessario implementare un gestore speciale per questo comando.  Tuttavia, è necessario implementare un gestore per il nuovo comando `ID_EDIT_FIND_COMBO`.  
  
2.  Creare una nuova classe `CFindComboBox`, derivata da [CComboBox (classe)](../mfc/reference/ccombobox-class.md).  
  
3.  Nella classe `CFindComboBox` eseguire l'override del metodo virtuale `PreTranslateMessage`. Questo metodo consentirà la casella combinata elaborare il [WM_KEYDOWN](http://msdn.microsoft.com/library/windows/desktop/ms646280) messaggio. Se l'utente preme il tasto ESC (`VK_ESCAPE`), restituisce lo stato attivo alla finestra cornice principale. Se l'utente preme il tasto INVIO (`VK_ENTER`), viene inserito nella finestra cornice principale un messaggio `WM_COMMAND` contenente l'ID di comando `ID_EDIT_FIND_COMBO`.  
  
4.  Creare una classe per il `Find` pulsante della casella combinata, derivato da [CMFCToolBarComboBoxButton classe](../mfc/reference/cmfctoolbarcomboboxbutton-class.md). In questo esempio è denominata `CFindComboButton`.  
  
5.  Il costruttore di `CMFCToolbarComboBoxButton` accetta tre parametri: l'ID di comando del pulsante, l'indice dell'immagine del pulsante e lo stile della casella combinata. Impostare questi parametri come segue:  
  
    1.  Passare `ID_EDIT_FIND_COMBO` come ID di comando.  
  
    2.  Utilizzare [CCommandManager::GetCmdImage](http://msdn.microsoft.com/en-us/4094d08e-de74-4398-a483-76d27a742dca) con `ID_EDIT_FIND` per ottenere l'indice dell'immagine.  
  
    3.  Per un elenco di stili casella combinata disponibili, vedere [stili casella combinata](../mfc/reference/styles-used-by-mfc.md#combo-box-styles).  
  
6.  Nella classe `CFindComboButton` eseguire l'override del metodo `CMFCToolbarComboBoxButton::CreateCombo`. A questo punto è necessario creare l'oggetto `CFindComboButton` e restituire un puntatore ad esso.  
  
7.  Utilizzare il [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) macro per rendere permanenti pulsante combinata. Il gestore dell'area di lavoro carica e salva automaticamente lo stato del pulsante nel Registro di sistema di Windows.  
  
8.  Implementare il gestore `ID_EDIT_FIND_COMBO` nella visualizzazione del documento. Utilizzare [CMFCToolBar::GetCommandButtons](../mfc/reference/cmfctoolbar-class.md#getcommandbuttons) con `ID_EDIT_FIND_COMBO` per recuperare tutti `Find` i pulsanti della casella combinata. Possono essere presenti più copie di un pulsante con lo stesso ID di comando a causa della personalizzazione.  
  
9. Nel gestore dei messaggi ID_EDIT_FIND `OnFind`, utilizzare [CMFCToolBar::IsLastCommandFromButton](../mfc/reference/cmfctoolbar-class.md#islastcommandfrombutton) per determinare se il comando di ricerca è stato inviato dal `Find` pulsante casella combinata. In caso affermativo, cercare il testo e aggiungere la stringa di ricerca nella casella combinata.  
  
### <a name="adding-the-find-control-to-the-main-toolbar"></a>Aggiunta del controllo Find alla barra degli strumenti principale  
 Per aggiungere il pulsante della casella combinata alla barra degli strumenti, attenersi alla seguente procedura:  
  
1.  Implementare il gestore di messaggi `AFX_WM_RESETTOOLBAR` `OnToolbarReset` nella finestra cornice principale.  
  
    > [!NOTE]
    >  Il framework invia il messaggio alla finestra cornice principale quando una barra degli strumenti viene inizializzata durante l'avvio dell'applicazione, oppure quando una barra degli strumenti viene reimpostata durante la personalizzazione. In entrambi i casi, è necessario sostituire il pulsante della barra degli strumenti standard con il pulsante personalizzato della casella combinata `Find` .  
  
2.  Nel gestore `AFX_WM_RESETTOOLBAR`, esaminare l'ID della barra degli strumenti, ovvero, `WPARAM` del messaggio `AFX_WM_RESETTOOLBAR`. Se l'ID della barra degli strumenti è uguale a quello della barra degli strumenti che contiene il `Find` pulsante casella combinata, chiamare [CMFCToolBar::ReplaceButton](../mfc/reference/cmfctoolbar-class.md#replacebutton) per sostituire il `Find` pulsante (ovvero, il pulsante con l'ID di comando `ID_EDIT_FIND)` con un `CFindComboButton` oggetto.  
  
    > [!NOTE]
    >  È possibile creare un oggetto `CFindComboBox` nello stack, perché `ReplaceButton` copia l'oggetto pulsante e mantiene la copia.  
  
### <a name="adding-the-find-control-to-the-customize-dialog-box"></a>Aggiunta del controllo Find alla finestra di dialogo Personalizza  
 Nel gestore di personalizzazione `OnViewCustomize`, chiamare [CMFCToolBarsCustomizeDialog::ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) per sostituire il `Find` pulsante (ovvero, il pulsante con l'ID di comando `ID_EDIT_FIND)` con un `CFindComboButton` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../mfc/hierarchy-chart.md)   
 [Classi](../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCToolBarButton](../mfc/reference/cmfctoolbarbutton-class.md)   
 [Classe CMFCToolBarComboBoxButton](../mfc/reference/cmfctoolbarcomboboxbutton-class.md)   
 [Classe CMFCToolBarsCustomizeDialog](../mfc/reference/cmfctoolbarscustomizedialog-class.md)
