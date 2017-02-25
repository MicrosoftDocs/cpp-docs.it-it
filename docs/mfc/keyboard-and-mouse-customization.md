---
title: "Personalizzazione di tastiera e mouse | Microsoft Docs"
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
  - "personalizzazioni, tastiera e mouse (estensioni MFC)"
  - "personalizzazioni tastiera e mouse (estensioni MFC)"
ms.assetid: 1f789f1b-5f2e-4b11-b974-e3e2a2e49d82
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Personalizzazione di tastiera e mouse
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC consente all'utente dell'applicazione di personalizzare come gestire l'input della tastiera e del mouse.  L'utente può personalizzare l'input della tastiera assegnando un tasto di scelta rapida ai controlli.  L'utente può inoltre personalizzare l'input del mouse selezionando il comando che deve essere eseguito quando l'utente fa doppio clic nelle finestre specifiche dell'applicazione.  In questo argomento viene illustrato come personalizzare l'input per l'applicazione.  
  
 Nella finestra di dialogo **Personalizzazione**, l'utente può modificare i controlli personalizzati del mouse e della tastiera.  Per visualizzare questa finestra di dialogo, selezionare **Personalizza** dal menu di **Visualizza** quindi scegliere **Finestre di ancoraggio e barre degli strumenti**.  Nella finestra di dialogo, l'utente deviare fare selezionare la scheda **Tastiera** o la scheda **Mouse**.  
  
## Personalizzazione della tastiera  
 Di seguito viene illustrata la scheda **Tastiera** della finestra di dialogo **Personalizzazione**.  
  
 ![Scheda Tastiera nella finestra di dialogo Personalizza](../mfc/media/mfcnextkeyboardtab.png "MFCNextKeyboardTab")  
Scheda di personalizzazione della tastiera  
  
 L'utente interagisce con la scheda della tastiera per assegnare uno o più tasti di scelta rapida ad un comando.  I controlli disponibili sono elencati sul lato sinistro della scheda.  L'utente può selezionare i comandi disponibili dal menu.  Solo i comandi del menu possono essere associati ad un tasto di scelta rapida.  Dopo che l'utente immette un nuovo collegamento, diventa attivo il pulsante **Assegnare**.  Quando l'utente fa clic su questo pulsante, l'applicazione associa il comando selezionato al collegamento.  
  
 Tutte le scelte rapide da tastiera attualmente assegnate sono elencate nella casella di riepilogo nella colonna destra.  L'utente può inoltre selezionare singolarmente i collegamenti e rimuoverli, o reimpostare tutti i mapping per l'applicazione.  
  
 Se si desidera supportare questa personalizzazione dell'applicazione, è necessario creare un oggetto [CKeyboardManager](../mfc/reference/ckeyboardmanager-class.md).  Per creare un oggetto `CKeyboardManager` chiamare la funzione [CWinAppEx::InitKeyboardManager](../Topic/CWinAppEx::InitKeyboardManager.md).  Questo metodo crea e inizializza un amministratore della tastiera.  Se si crea un amministratore della tastiera manualmente, è comunque necessario chiamare `CWinAppEx::InitKeyboardManager` per inizializzarla.  
  
 Se si utilizza la procedura guidata per creare l'applicazione, la procedura guidata inizializzerà il gestore della tastiera.  Dopo che l'applicazione inizializza il gestore della tastiera, il framework aggiunge una scheda **Tastiera** alla finestra di dialogo **Personalizzazione**.  
  
## Personalizzazione del mouse  
 Di seguito viene illustrata la scheda **Mouse** della finestra di dialogo **Personalizzazione**.  
  
 ![Scheda Mouse nella finestra di dialogo Personalizza](../mfc/media/mfcnextmousetab.png "MFCNextMouseTab")  
Scheda di personalizzazione del mouse  
  
 L'utente interagisce con questa scheda per assegnare un comando all'azione doppio clic del mouse.  L'utente seleziona una visualizzazione dalla parte sinistra della finestra e quindi utilizza i controlli sulla parte destra per associare un comando all'azione doppio clic.  Dopo che l'utente ha selezionato **Chiudi**, l'applicazione esegue il comando associato ogni volta che l'utente fa doppio clic in qualsiasi punto della visualizzazione.  
  
 Per impostazione predefinita, la personalizzazione del mouse non è abilitata quando si crea un'applicazione tramite la procedura guidata.  
  
#### Per attivare la personalizzazione del mouse  
  
1.  Inizializzare un oggetto [CMouseManager](../mfc/reference/cmousemanager-class.md) chiamando [CWinAppEx::InitMouseManager](../Topic/CWinAppEx::InitMouseManager.md).  
  
2.  Ottenere un puntatore all'amministratore del mouse utilizzando [CWinAppEx::GetMouseManager](../Topic/CWinAppEx::GetMouseManager.md).  
  
3.  Aggiungere le visualizzazioni all'amministratore del mouse tramite il metodo [CMouseManager::AddView](../Topic/CMouseManager::AddView.md).  Eseguire questa operazione per ogni visualizzazione che si desidera aggiungere alla gestione del mouse.  
  
 Dopo che l'applicazione inizializza il gestore del mouse, il framework aggiunge la scheda **Mouse** alla finestra di dialogo **Personalizza**.  Se non si aggiungono alcune visualizzazioni, accedere alla scheda può generare un'eccezione non gestita.  Dopo avere creato un elenco delle visualizzazioni, la scheda **Mouse** è disponibile per l'utilizzo dell'utente.  
  
 Quando si aggiunge una nuova visualizzazione all'amministratore del mouse, assegnare un ID univoco.  Se si desidera supportare la personalizzazione del mouse per una finestra, è necessario elaborare il messaggio `WM_LBUTTONDBLCLICK` e chiamare la funzione [CWinAppEx::OnViewDoubleClick](../Topic/CWinAppEx::OnViewDoubleClick.md).  Quando si chiama questa funzione, uno dei parametri è l'ID per tale finestra.  È responsabilità del programmatore di tenere traccia dei numeri ID e degli oggetti ad essi associati.  
  
## Aspetti relativi alla sicurezza  
 Come descritto [Strumenti definiti dall'utente](../mfc/user-defined-tools.md), l'utente può associare uno strumento ID definito dall'utente stesso con l'azione del doppio clic.  Quando l'utente fa doppio clic su una visualizzazione, l'applicazione trova uno strumento dell'utente che corrisponde all'ID associato.  Se tale ricerca ha uno strumento corrispondente, esegue lo strumento.  Se l'applicazione non trova uno strumento corrispondente, invia un messaggio WM\_COMMAND con l'ID alla visualizzazione alla quale si è fatto il doppio clic.  
  
 Le impostazioni personalizzate vengono archiviate nel Registro di sistema.  Modificando il Registro di sistema, un utente malintenzionato può sostituire uno strumento ID definito dall'utente valido con un comando arbitrario.  Quando l'utente fa doppio clic su una visualizzazione, la visualizzazione elabora il comando che un utente malintenzionato ha inserito.  Ciò potrebbe causare un comportamento imprevisto e potenzialmente pericoloso.  
  
 Inoltre, questo tipo di attacco può ignorare le misure di sicurezza dell'interfaccia utente.  Ad esempio, si supponga che venga disabilitata un'applicazione di stampa.  Ovvero nell'interfaccia utente, il menu **Stampa** e il pulsante non sono disponibili.  In genere ciò impedisce all'applicazione di stampare.  Ma se un utente malintenzionato modificasse il Registro di sistema, un utente potrebbe ora inviare il comando di stampa direttamente facendo doppio clic su visualizzazione, ignorando gli elementi dell'interfaccia utente che non sono disponibili.  
  
 Per proteggere il sistema da questo tipo di attacco, aggiungere il codice del gestore del comando all'applicazione per verificare che un comando sia valido prima che venga eseguito.  Non dipende dall'interfaccia utente impedire ad un comando di essere inviato all'applicazione.  
  
## Vedere anche  
 [Personalizzazione per MFC](../mfc/customization-for-mfc.md)   
 [CKeyboardManager Class](../mfc/reference/ckeyboardmanager-class.md)   
 [CMouseManager Class](../mfc/reference/cmousemanager-class.md)   
 [Implicazioni relative alla sicurezza della personalizzazione](../mfc/security-implications-of-customization.md)