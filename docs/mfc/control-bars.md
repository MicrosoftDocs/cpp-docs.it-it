---
title: "Barre di controllo | Microsoft Docs"
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
  - "CControlBar (classe), barre di controllo MFC"
  - "CDialogBar (classe), barre di controllo"
  - "barre dei comandi, tipi"
  - "barre di controllo [C++]"
  - "barre di controllo [C++], tipi"
  - "CStatusBar (classe), barre di controllo"
  - "CToolBar (classe), barre di controllo"
  - "barra della finestra, barre di controllo"
  - "MFC, barre di controllo"
  - "barre di stato, barre di controllo"
  - "barre degli strumenti [C++], barre di controllo"
ms.assetid: 31831910-3d23-4d70-9e71-03cc02f01ec4
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Barre di controllo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

"Barra di controllo" è il nome generale delle barre degli strumenti, barre di stato e barre della finestra di dialogo.  Le classi MFC `CToolBar`, `CStatusBar`, `CDialogBar`, `COleResizeBar` e **CReBar** derivano dalla classe [CControlBar](../mfc/reference/ccontrolbar-class.md), che implementa la loro funzionalità comune.  
  
 Le barre di controllo sono finestre che visualizzano righe di controlli con cui gli utenti possono selezionare le opzioni, eseguire i comandi oppure ottenere le informazioni sul programma.  I tipi di barre di controllo includono barre degli strumenti, barre delle finestre di dialogo e barre di stato.  
  
-   Barre degli strumenti, nella classe [CToolBar](../mfc/reference/ctoolbar-class.md)  
  
-   Barre di stato, nella classe [CStatusBar](../mfc/reference/cstatusbar-class.md)  
  
-   Barre della finestra di dialogo, nella classe [CDialogBar](../mfc/reference/cdialogbar-class.md)  
  
-   Rebar, nella classe [CReBar](../mfc/reference/crebar-class.md)  
  
> [!IMPORTANT]
>  A partire dalla versione 4.0 di MFC, le barre degli strumenti, barre di stato e le descrizioni comandi vengono implementate mediante la funzionalità del sistema implementata in comctl32.dll anziché l'implementazione precedente specifica di MFC.  Nella versione 6.0 di MFC, **CReBar**, il quale esegue anche il wrapping delle funzionalità di comctl32.dll, è stato aggiunto.  
  
 Di seguito una breve introduzione ai tipi di barre di controllo.  Per ulteriori informazioni, vedere i collegamenti di seguito.  
  
## Barre di controllo  
 Le barre di controllo migliorano notevolmente l'usabilità di un programma fornendo azioni di comando rapide e one\-step.  La classe `CControlBar` fornisce le funzionalità comuni a tutte le barre degli strumenti, barre di stato e barre della finestra di dialogo.  `CControlBar` fornisce la funzionalità per il posizionamento delle barre di controllo nella finestra cornice padre.  Poiché una barra di controllo è solitamente una finestra figlio di una finestra cornice padre, è un elemento di pari livello alla visualizzazione client o al client MDI della finestra cornice.  Un oggetto barra di controllo utilizza le sue informazioni sul rettangolo client della finestra padre per posizionarsi.  Quindi modifica il rettangolo della finestra client padre rimanente in modo che la visualizzazione client o la finestra MDI client riempa il resto della finestra client.  
  
> [!NOTE]
>  Se un pulsante della barra di controllo non ha un **COMMAND** o un gestore **UPDATE\_COMMAND\_UI**, il framework disabilita il pulsante automaticamente.  
  
## Barre degli strumenti  
 Una barra degli strumenti è una barra di controllo che visualizza una riga di pulsanti bitmap che eseguono i comandi.  Premere un pulsante della barra degli strumenti equivale a selezionare una voce di menu; chiama lo stesso gestore mappato ad una voce di menu se la voce di menu ha lo stesso ID del pulsante della barra degli strumenti.  È possibile configurare i pulsanti per apparire e comportarsi come i pulsanti, pulsanti di opzione o caselle di controllo.  Una barra degli strumenti in genere è allineata all'inizio di una finestra cornice, ma una barra degli strumenti MFC può essere "ancorata" a qualsiasi lato della finestra padre o muoversi in una finestra cornice piccola.  Anche una barra degli strumenti può "fluttuare", modificare le sue dimensioni ed essere trascinata con il mouse.  Una barra degli strumenti può anche visualizzare le descrizioni comandi quando l'utente sposta il mouse sui pulsanti della barra degli strumenti.  Una descrizione comandi è una finestra popup minuscola che fornisce una breve descrizione riguardante lo scopo del pulsante.  
  
> [!NOTE]
>  A partire dalla versione 4.0 di MFC, la classe [CToolBar](../mfc/reference/ctoolbar-class.md) utilizza il controllo comune della barra degli strumenti di Windows  Un `CToolBar` contiene un [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md).  Tuttavia, le barre degli strumenti precedenti sono ancora supportate.  Vedere l'articolo [Barre degli strumenti](../mfc/mfc-toolbar-implementation.md).  
  
## Barre di stato  
 Una barra di stato è una barra di controllo contenente i riquadri di output di testo o "indicatori." I riquadri di output vengono comunemente utilizzati come righe del messaggio e come indicatori di stato.  Gli esempi di riga del messaggio includono le righe del messaggio della Guida che illustrano brevemente il menu selezionato o il comando della barra degli strumenti nel riquadro a sinistra della barra di stato predefinita creata dalla Creazione Guidata Applicazione MFC.  Alcuni esempi dell'indicatore di stato includono SCROLL LOCK, NUM LOCK e altre chiavi.  Le barre di stato in genere vengono allineate alla fine di una finestra cornice.  Vedere la classe [CStatusBar](../mfc/reference/cstatusbar-class.md) e la classe [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md).  
  
## Barra di finestra di dialogo  
 Una barra della finestra di dialogo è una barra di controllo, basata su una risorsa modello di finestra di dialogo, con la funzionalità di una finestra di dialogo non modale.  Le barre di finestra di dialogo possono contenere controlli Windows, personalizzati o ActiveX.  Come in una finestra di dialogo, l'utente può spostarsi tra i controlli.  Le barre di finestra di dialogo possono essere allineate nella parte superiore, inferiore, sinistra o a destra di una finestra cornice e possono anche essere trasportate nella propria finestra cornice.  Vedere la classe [CDialogBar](../mfc/reference/cdialogbar-class.md).  
  
## Rebars  
 Una [rebar](../mfc/using-crebarctrl.md) è una barra di controllo che fornisce le informazioni su ancoraggio, layout, persistenza e stato per i controlli Rebar.  Un oggetto rebar può contenere diverse finestre figlio, in genere altri controlli, incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo.  Un oggetto rebar può visualizzare le sue finestre figlio su una bitmap specificata.  Può automaticamente o manualmente essere ridimensionata facendo clic o trascinando la sua barra gripper.  Vedere la classe [CReBar](../mfc/reference/crebar-class.md).  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)