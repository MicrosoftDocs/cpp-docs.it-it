---
title: "Utilizzo di controlli comuni in una finestra di dialogo | Microsoft Docs"
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
  - "controlli comuni [C++], in finestre di dialogo"
  - "controlli delle finestre di dialogo [C++], controlli comuni"
  - "controlli comuni di Windows [C++], in finestre di dialogo"
ms.assetid: 17713caf-09f8-484a-bf54-5f48bf09cce9
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo di controlli comuni in una finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli comuni di Windows possono essere utilizzati in [finestre di dialogo](../mfc/dialog-boxes.md), visualizzazioni di moduli, visualizzazioni di record e qualsiasi altra finestra basata su un modello di finestra di dialogo.  La procedura riportata di seguito, con modifiche non essenziali, verrà eseguita per i form.  
  
## Procedure  
  
#### Per utilizzare un controllo comune in una finestra di dialogo  
  
1.  Posizionare il controllo nel modello [utilizzando l'editor finestre di dialogo](../mfc/using-the-dialog-editor-to-add-controls.md) nel modello di finestre di dialogo.  
  
2.  Aggiungere alla classe della finestra di dialogo una variabile membro che rappresenta il controllo.  Nella finestra di dialogo **Aggiungi variabile membro**, controllare **Variabile controllo** e verificare che **Controllo** sia selezionato per la **Categoria**.  
  
3.  Se questo controllo comune produce l'input al programma, dichiarare le variabili membro aggiuntive nella classe della finestra di dialogo per gestire i valori di input.  
  
    > [!NOTE]
    >  È possibile aggiungere tali variabili membro utilizzando il menu di scelta rapida in Visualizzazione classi \(vedere [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)\).  
  
4.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md) per la classe della finestra di dialogo, impostare i termini iniziali per il controllo comune.  Utilizzo di una variabile membro creata nel passaggio precedente, utilizzare le funzioni membro per impostare il valore iniziale e altre impostazioni.  Vedere le seguenti descrizioni dei comandi per informazioni dettagliate sulle impostazioni.  
  
     È inoltre possibile utilizzare [scambio di dati della finestra di dialogo](../mfc/dialog-data-exchange-and-validation.md) \(DDX\) per inizializzare i controlli in una finestra di dialogo.  
  
5.  Nei gestori per i controlli nella finestra di dialogo, utilizzare la variabile membro per modificare il controllo.  Vedere le seguenti descrizioni dei comandi per informazioni dettagliate sui metodi.  
  
    > [!NOTE]
    >  La variabile membro esiste solo finché la finestra di dialogo stessa esiste.  Non sarà possibile eseguire una query sul controllo per i valori di input dopo che la finestra di dialogo è stata chiusa.  Per utilizzare i valori di input da un controllo comune, eseguire l'override di `OnOK` nella classe della finestra di dialogo.  Nell'override, esegue una query sul controllo per i valori di input e archivia tali valori in variabili membro della classe della finestra di dialogo.  
  
    > [!NOTE]
    >  È inoltre possibile utilizzare lo scambio di dati della finestra di dialogo per impostare o recuperare i valori dai controlli in una finestra di dialogo.  
  
## Osservazioni  
 L'aggiunta di controlli comuni a una finestra di dialogo porterà la finestra di dialogo a non funzionare a lungo.  Fare riferimento a [Adding Controls to a Dialog Causes the Dialog to No Longer Function](../mfc/adding-controls-to-a-dialog-causes-the-dialog-to-no-longer-function.md) per ulteriori informazioni sulla gestione di questa situazione.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Aggiungere manualmente i controlli in una finestra di dialogo anziché tramite l'editor finestre di dialogo](../mfc/adding-controls-by-hand.md)  
  
-   [Derivare il controllo da uno dei controlli standard comuni di Windows](../mfc/deriving-controls-from-a-standard-control.md)  
  
-   [Utilizzo di un controllo comune come finestra figlio](../mfc/using-a-common-control-as-a-child-window.md)  
  
-   [Ricevere messaggi di notifica da un controllo](../mfc/receiving-notification-from-common-controls.md)  
  
-   [Utilizzare Dialog Data Exchange \(DDX\)](../mfc/dialog-data-exchange-and-validation.md)  
  
## Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)