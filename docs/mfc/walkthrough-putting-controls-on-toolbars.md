---
title: "Procedura dettagliata: inserimento di controlli nelle barre degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Personalizza (finestra di dialogo), aggiunta di controlli"
  - "barre degli strumenti, aggiunta di controlli"
ms.assetid: 8fc94bdf-0da7-45d9-8bc4-52b7b1edf205
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Procedura dettagliata: inserimento di controlli nelle barre degli strumenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene descritto come aggiungere un pulsante della barra degli strumenti contenente un controllo Windows in una barra degli strumenti.  In MFC, un pulsante della barra degli strumenti deve essere una classe derivata di [CMFCToolBarButton Class](../mfc/reference/cmfctoolbarbutton-class.md), ad esempio [CMFCToolBarComboBoxButton Class](../mfc/reference/cmfctoolbarcomboboxbutton-class.md), [CMFCToolBarEditBoxButton Class](../mfc/reference/cmfctoolbareditboxbutton-class.md), [CMFCDropDownToolbarButton Class](../mfc/reference/cmfcdropdowntoolbarbutton-class.md), o [CMFCToolBarMenuButton Class](../mfc/reference/cmfctoolbarmenubutton-class.md).  
  
## Aggiungere Controlli alla Barra degli Strumenti  
 Per aggiungere un controllo ad una barra degli strumenti, seguire la seguente procedura:  
  
1.  Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.  Per ulteriori informazioni su come creare pulsanti mediante l'editor della barra degli strumenti in Visual Studio, vedere l'argomento [Toolbar Editor](../mfc/toolbar-editor.md).  
  
2.  Riservare un'immagine della barra degli strumenti \(icona del pulsante\) per il pulsante in tutte le bitmap nella barra degli strumenti padre.  
  
3.  Nel gestore di messaggi che elabora il messaggio `AFX_WM_RESETTOOLBAR`, effettuare le seguenti operazioni:  
  
    1.  Costruire il pulsante utilizzando una classe che deriva da `CMFCToolbarButton`.  
  
    2.  Sostituire il pulsante fittizio con il nuovo controllo mediante [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md).  È possibile creare l'oggetto del pulsante sullo stack, perché `ReplaceButton` copia l'oggetto del pulsante e mantiene la copia.  
  
> [!NOTE]
>  Se è stata attivata la personalizzazione nell'applicazione, è necessario reimpostare la barra degli strumenti mediante il pulsante **Reimposta** nella scheda **Barre degli strumenti** della finestra di dialogo **Personalizza** per cercare il controllo aggiornato nell'applicazione dopo aver ricompilato.  Lo stato della barra degli strumenti viene salvato nel registro di sistema di Windows e le informazioni del registro vengono caricate e applicate dopo che il metodo `ReplaceButton` viene eseguito durante l'avvio dell'applicazione.  
  
## Controlli della barra degli strumenti e Personalizzazione  
 La scheda **Comandi** della finestra di dialogo **Personalizza** contiene un elenco di controlli disponibili nell'applicazione.  Per impostazione predefinita, la finestra di dialogo **Personalizza** elabora i menu dell'applicazione e compila un elenco di pulsanti della barra degli strumenti standard in ogni categoria del menu.  Per mantenere le funzionalità estese che i controlli della barra degli strumenti offrono, è necessario sostituire il pulsante della barra degli strumenti standard con il controllo personalizzato nella finestra di dialogo **Personalizza**.  
  
 Quando si abilita la personalizzazione, creare la finestra di dialogo **Personalizza** nel gestore della personalizzazione `OnViewCustomize` utilizzando la classe [CMFCToolBarsCustomizeDialog Class](../mfc/reference/cmfctoolbarscustomizedialog-class.md).  Prima di visualizzare la finestra di dialogo **Personalizza** chiamando [CMFCToolBarsCustomizeDialog::Create](../Topic/CMFCToolBarsCustomizeDialog::Create.md), chiamare [CMFCToolBarsCustomizeDialog::ReplaceButton](../Topic/CMFCToolBarsCustomizeDialog::ReplaceButton.md) per sostituire il pulsante standard con il nuovo controllo.  
  
## Esempio: Creare una Casella Combinata di Ricerca  
 In questa sezione viene descritto come creare una casella combinata `Find` visualizzata su una barra degli strumenti e contenente le stringhe di ricerca utilizzate recentemente.  L'utente può immettere una stringa nel controllo e premere il tasto invio per cercare un documento, oppure premere il tasto escape per riportare lo stato attivo alla cornice principale.  In questo esempio si presuppone che il documento venga mostrato in una visualizzazione derivata di [CEditView Class](../mfc/reference/ceditview-class.md).  
  
### Creazione del Controllo di Ricerca  
 Innanzitutto, creare il controllo casella combinata `Find` :  
  
1.  Aggiungere il pulsante e i relativi comandi alle risorse dell'applicazione:  
  
    1.  Nelle risorse dell'applicazione, aggiungere un nuovo pulsante con un ID di comando `ID_EDIT_FIND` ad una barra degli strumenti dell'applicazione e a tutte le bitmap associate alla barra degli strumenti.  
  
    2.  Creare una nuova voce di menu con l'ID di comando ID\_EDIT\_FIND.  
  
    3.  Aggiungere una nuova stringa "Cerca il testo\\nCerca" alla tabella di stringhe e assegnare un ID di comando `ID_EDIT_FIND_COMBO` .  Questo ID verrà utilizzato come l'ID di comando del pulsante della casella combinata `Find`.  
  
        > [!NOTE]
        >  Poiché `ID_EDIT_FIND` è un comando standard elaborato da `CEditView`, non è necessario implementare un gestore speciale per questo comando.  Tuttavia, è necessario implementare un gestore per il nuovo comando `ID_EDIT_FIND_COMBO`.  
  
2.  Creare una nuova classe, `CFindComboBox`, derivata da [CComboBox Class](../mfc/reference/ccombobox-class.md).  
  
3.  Nella classe `CFindComboBox`, eseguire l'override del metodo virtuale `PreTranslateMessage` .  Questo metodo consente alla casella combinata di elaborare il messaggio di [WM\_KEYDOWN](http://msdn.microsoft.com/library/windows/desktop/ms646280).  Se l'utente preme il tasto escape \(`VK_ESCAPE`\), restituisce lo stato attivo alla finestra del frame principale.  Se l'utente preme il tasto invio \(`VK_ENTER`\), viene inserito nella finestra del frame principale un messaggio `WM_COMMAND` contenente l'ID di comando `ID_EDIT_FIND_COMBO` .  
  
4.  Creare una classe per il pulsante della casella combinata `Find`, derivata da [CMFCToolBarComboBoxButton Class](../mfc/reference/cmfctoolbarcomboboxbutton-class.md).  In questo esempio è chiamato `CFindComboButton`.  
  
5.  Il costruttore di `CMFCToolbarComboBoxButton` accetta tre parametri: l'id di comando del pulsante, l'indice dell'immagine del pulsante e lo stile della casella combinata.  Impostare questi parametri come segue:  
  
    1.  Passare `ID_EDIT_FIND_COMBO` come ID di comando.  
  
    2.  Utilizzare [CCommandManager::GetCmdImage](http://msdn.microsoft.com/it-it/4094d08e-de74-4398-a483-76d27a742dca) con `ID_EDIT_FIND` per ottenere l'indice dell'immagine.  
  
    3.  Per un elenco degli stili disponibili per la casella combinata, vedere [Stili casella combinata](../mfc/reference/combo-box-styles.md).  
  
6.  Nella classe `CFindComboButton` eseguire l'override del metodo `CMFCToolbarComboBoxButton::CreateCombo`.  Qui è necessario creare l'oggetto `CFindComboButton` e restituire un puntatore ad esso.  
  
7.  Utilizzare la macro [IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md) per rendere il pulsante di una casella combinata persistente.  L'amministratore dell'area di lavoro carica e salva automaticamente lo stato del pulsante nel registro di sistema di Windows.  
  
8.  Implementare il gestore `ID_EDIT_FIND_COMBO` nella visualizzazione del documento.  Utilizzare [CMFCToolBar::GetCommandButtons](../Topic/CMFCToolBar::GetCommandButtons.md) con `ID_EDIT_FIND_COMBO` per recuperare tutti i pulsanti della casella combinata `Find`.  Possono essere presenti più copie di un pulsante con lo stesso ID di comando a causa della personalizzazione.  
  
9. Nel gestore di messaggi `OnFind`di ID\_EDIT\_FIND, utilizzare [CMFCToolBar::IsLastCommandFromButton](../Topic/CMFCToolBar::IsLastCommandFromButton.md) per determinare se il comando di ricerca è stato inviato dal pulsante della casella combinata `Find`.  In caso affermativo, cercare il testo e aggiungere la stringa di ricerca nella casella combinata.  
  
### Aggiungere il Controllo di Ricerca alla barra degli strumenti principale  
 Per aggiungere il pulsante della casella combinata nella barra degli strumenti, seguire la seguente procedura:  
  
1.  Implementare il gestore di messaggi `AFX_WM_RESETTOOLBAR` `OnToolbarReset` nella finestra del frame principale.  
  
    > [!NOTE]
    >  Il framework invia il messaggio alla finestra del frame principale quando una barra degli strumenti viene inizializzata durante l'avvio dell'applicazione, oppure quando una barra degli strumenti viene reimpostata durante la personalizzazione.  In entrambi i casi, è necessario sostituire il pulsante della barra degli strumenti standard con il pulsante personalizzato della casella combinata `Find` .  
  
2.  Nel gestore `AFX_WM_RESETTOOLBAR`, esaminare la barra degli strumenti ID, ovvero, `WPARAM` del messaggio `AFX_WM_RESETTOOLBAR`.  Se la barra degli strumenti ID è uguale a quella barra degli strumenti che contiene il pulsante della casella combinata `Find`, chiamare [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md) per sostituire il pulsante `Find` \(ovvero il pulsante con l'id di comando `ID_EDIT_FIND)` con un oggetto `CFindComboButton`.  
  
    > [!NOTE]
    >  È possibile creare un oggetto `CFindComboBox` sullo stack, perché `ReplaceButton` copia l'oggetto del pulsante e mantiene la copia.  
  
### Aggiungere il Controllo di Ricerca alla Finestra di Dialogo Personalizzata  
 Nel gestore di personalizzazione `OnViewCustomize`, chiamare [CMFCToolBarsCustomizeDialog::ReplaceButton](../Topic/CMFCToolBarsCustomizeDialog::ReplaceButton.md) per sostituire il pulsante `Find` \(ovvero il pulsante con l'ID di comando `ID_EDIT_FIND)` con un oggetto `CFindComboButton`.  
  
## Vedere anche  
 [Grafico delle gerarchie](../mfc/hierarchy-chart.md)   
 [Classi](../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarButton Class](../mfc/reference/cmfctoolbarbutton-class.md)   
 [CMFCToolBarComboBoxButton Class](../mfc/reference/cmfctoolbarcomboboxbutton-class.md)   
 [CMFCToolBarsCustomizeDialog Class](../mfc/reference/cmfctoolbarscustomizedialog-class.md)