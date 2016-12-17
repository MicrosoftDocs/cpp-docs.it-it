---
title: "Adding Event Handlers for Dialog Box Controls | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Dialog editor, adding event handlers to controls"
  - "controls [C++], event handlers"
  - "dialog box controls, events"
  - "event handlers, for dialog box controls"
ms.assetid: f9c70f24-ea6f-44df-82eb-78a2deaee769
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding Event Handlers for Dialog Box Controls
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per le finestre di dialogo di progetto già associate a una classe, quando si creano i gestori eventi è possibile usufruire di alcune procedure rapide.  È possibile creare rapidamente un gestore per l'evento di notifica del controllo predefinito o per qualsiasi messaggio di Windows.  
  
#### Per creare un gestore per l'evento di notifica del controllo predefinito  
  
1.  Fare doppio clic sul controllo.  Verrà aperto l'editor di testo.  
  
2.  Aggiungere il codice del gestore della notifica del controllo nell'editor di testo.  
  
#### Per creare un gestore eventi per qualsiasi messaggio di Windows  
  
1.  Fare clic sul controllo per il quale si desidera gestire l'evento di notifica.  
  
2.  Nella [finestra Proprietà](../Topic/Properties%20Window.md) scegliere il pulsante **Eventi di controllo**. Verrà visualizzato l'elenco degli eventi comuni di Windows associati al controllo.  Per il pulsante **OK** standard della finestra di dialogo **Informazioni su**, ad esempio, vengono elencati i seguenti eventi di notifica:  
  
     **BN\_CLICKED**  
  
     **BN\_DOUBLECLICKED**  
  
     **BN\_KILLFOCUS**  
  
     **BN\_SETFOCUS**  
  
    > [!NOTE]
    >  In alternativa, selezionare la finestra di dialogo e scegliere il pulsante **Eventi di controllo** per visualizzare l'elenco degli eventi comuni di Windows per tutti i controlli della finestra di dialogo.  
  
3.  Nella finestra **Proprietà** fare clic sulla colonna destra accanto all'evento da gestire, quindi selezionare il nome dell'evento di notifica suggerito \(**OnBnClickedOK**, ad esempio, gestisce **BN\_CLICKED**\).  
  
    > [!NOTE]
    >  In alternativa, anziché selezionare il nome del gestore eventi predefinito è possibile specificare il nome personalizzato per il gestore eventi.  
  
     Dopo avere selezionato l'evento, viene aperto l'editor di testo e visualizzato il codice del gestore eventi.  All'elemento **OnBnClickedOK** predefinito, ad esempio, viene aggiunto il seguente codice:  
  
    ```  
    void CAboutDlg::OnBnClickedOk(void)  
    {  
       // TODO: Add your control notification handler code here  
    }  
    ```  
  
 Per aggiungere il gestore eventi a una classe diversa da quella che implementa la finestra di dialogo, utilizzare la [Creazione guidata gestore eventi](../ide/event-handler-wizard.md).  Per ulteriori informazioni, vedere [Aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requisiti  
 Win32  
  
## Vedere anche  
 [Default Control Events](../mfc/default-control-events.md)   
 [Defining Member Variables for Dialog Controls](../mfc/defining-member-variables-for-dialog-controls.md)   
 [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)