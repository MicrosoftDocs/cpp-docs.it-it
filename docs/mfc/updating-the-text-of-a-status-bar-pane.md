---
title: "Aggiornamento del testo di un riquadro barra di stato | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "CStatusBar (classe), aggiornamento"
  - "ON_UPDATE_COMMAND_UI (macro)"
  - "riquadri, barra di stato"
  - "SetText (metodo)"
  - "barre di stato, aggiornamento"
  - "testo, barra di stato"
  - "aggiornamento di oggetti dell'interfaccia utente"
  - "oggetti dell'interfaccia utente, aggiornamento"
ms.assetid: 4984a3f4-9905-4d8c-a927-dca19781053b
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiornamento del testo di un riquadro barra di stato
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come modificare il testo visualizzato in un riquadro della barra di stato MFC.  Una barra di stato a un oggetto finestra di classe [CStatusBar](../mfc/reference/cstatusbar-class.md) \- "contiene diversi riquadri." Ciascun riquadro è un'area rettangolare della barra di stato che è possibile utilizzare per visualizzare le informazioni.  Ad esempio, molte applicazioni visualizzare lo stato del tasto BLOC MAIUSC, BLOC NUM e altri tipi più riquadri a destra.  Le applicazioni anche perché il testo informativo nel riquadro a sinistra riquadro \(0\), talvolta denominato "il riquadro del messaggio". Ad esempio, la barra di stato predefinito di MFC utilizza il riquadro dei messaggi per visualizzare una stringa che espande la voce di menu o sul pulsante della barra degli strumenti attualmente selezionata.  Nella figura [Barre di stato](../mfc/status-bar-implementation-in-mfc.md) visualizzata una barra di stato in un'applicazione MFC Procedura creazioni guidate applicazione creata.  
  
 Per impostazione predefinita, in MFC non consente un riquadro di `CStatusBar` quando si crea il riquadro.  Per attivare un riquadro, è necessario utilizzare la macro di `ON_UPDATE_COMMAND_UI` per ciascun riquadro sulla barra di stato e aggiornare i riquadri.  Poiché i riquadri non riceve i messaggi di **WM\_COMMAND** \(non sono simili ai pulsanti della barra degli strumenti, è necessario immettere manualmente il codice.  
  
 Ad esempio, si supponga che un riquadro di `ID_INDICATOR_PAGE` come unico identificatore di comando e che contiene il numero di pagina corrente in un documento.  La procedura seguente viene illustrato come creare un nuovo riquadro la barra di stato.  
  
### Per creare un nuovo riquadro  
  
1.  Definire gli ID di comando del riquadro  
  
     Dal menu di **Visualizza** , fare clic su **Visualizzazione risorse**.  Fare clic con il pulsante destro del mouse sulla risorsa di progetto e fare clic **Simboli risorsa**.  Nella finestra di dialogo simboli risorsa, fare clic `New`.  Digitare un nome di ID di comando: ad esempio, `ID_INDICATOR_PAGE`.  Specificare un valore per ID, o accettare il valore consigliato dalla finestra di dialogo simboli risorsa.  Ad esempio, per `ID_INDICATOR_PAGE`, accettare il valore predefinito.  Chiudere la finestra di dialogo simboli risorsa.  
  
2.  Definire una stringa predefinita per visualizzare il riquadro.  
  
     Con la visualizzazione risorse aperta, fare doppio clic su **Tabella di stringhe** nella finestra tipi di risorsa di elenchi per l'applicazione.  Con l'editor di **Tabella di stringhe** aperto, scegliere **Nuova stringa** dal menu di **Inserimento** .  Nella finestra delle proprietà stringa, selezionare l'id di comando del riquadro \(ad esempio, `ID_INDICATOR_PAGE`\) e immettere un valore stringa predefinito, ad esempio "pagina".  Chiudere l'editor stringhe. \(È necessaria una stringa predefinita di evitare un errore del compilatore.\)  
  
3.  Aggiungere il riquadro alla matrice di **indicatori**.  
  
     In file MAINFRM.CPP, individuare la matrice di **indicatori**.  ID di comando degli elenchi di questa matrice per gli indicatori di una barra di stato, in ordine da sinistra a destra.  Il punto appropriato nella matrice, immettere l'id di comando del riquadro, come illustrato di seguito per `ID_INDICATOR_PAGE`:  
  
     [!code-cpp[NVC_MFCDocView#10](../mfc/codesnippet/CPP/updating-the-text-of-a-status-bar-pane_1.cpp)]  
  
 La modalità consigliata visualizzare il testo in un riquadro consiste nel chiamare la funzione membro di **SetText** di classe `CCmdUI` in una funzione del gestore aggiornamento per il riquadro.  Ad esempio, è possibile installare una variabile Integer `m_nPage` contenente il numero di pagina corrente e l'utilizzo **SetText** impostare il testo del riquadro a una versione della stringa di tale numero.  
  
> [!NOTE]
>  L'approccio di **SetText** è consigliato.  È possibile eseguire questa attività leggermente a un livello inferiore chiamando la funzione membro `SetPaneText`di `CStatusBar`.  Tuttavia, è necessario un gestore aggiornamento.  Senza tale gestore per il riquadro, MFC automaticamente disabilita il riquadro, deselezionando il contenuto.  
  
 La procedura riportata di seguito viene mostrato come utilizzare una funzione del gestore aggiornamento per visualizzare testo in un riquadro.  
  
#### Per rendere una visualizzazione del riquadro al testo a  
  
1.  Aggiungere un gestore aggiornamento di comando.  
  
     Aggiungere manualmente un prototipo per il gestore, come illustrato di seguito per `ID_INDICATOR_PAGE` \(in MAINFRM.H\):  
  
     [!code-cpp[NVC_MFCDocView#11](../mfc/codesnippet/CPP/updating-the-text-of-a-status-bar-pane_2.h)]  
  
2.  Nel file appropriato di .CPP, aggiungere la definizione del gestore, come illustrato di seguito per `ID_INDICATOR_PAGE` \(in MAINFRM.CPP\):  
  
     [!code-cpp[NVC_MFCDocView#12](../mfc/codesnippet/CPP/updating-the-text-of-a-status-bar-pane_3.cpp)]  
  
     Le ultime tre righe del gestore nel codice che visualizza il testo.  
  
3.  Nella mappa messaggi appropriato, aggiungere la macro di `ON_UPDATE_COMMAND_UI`, come illustrato di seguito per `ID_INDICATOR_PAGE` \(in MAINFRM.CPP\):  
  
     [!code-cpp[NVC_MFCDocView#13](../mfc/codesnippet/CPP/updating-the-text-of-a-status-bar-pane_4.cpp)]  
  
 Una volta definite il valore di una variabile membro di `m_nPage` \(classe `CMainFrame`\), cause di questa tecnica il numero di pagina da visualizzare nel riquadro durante l'elaborazione inattiva nello stesso modo in cui l'applicazione aggiornare gli indicatori.  Se modifiche di `m_nPage`, le modifiche della visualizzazione durante il ciclo inattivo seguente.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Aggiornamento degli oggetti dell'interfaccia utente \(come aggiornare i pulsanti della barra degli strumenti e le voci di menu come modifica dello stato del programma\)](../mfc/how-to-update-user-interface-objects.md)  
  
## Vedere anche  
 [Implementazione della barra di stato in MFC](../mfc/status-bar-implementation-in-mfc.md)   
 [CStatusBar Class](../mfc/reference/cstatusbar-class.md)