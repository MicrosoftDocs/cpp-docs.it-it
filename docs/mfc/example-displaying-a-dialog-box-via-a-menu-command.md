---
title: "Esempio: visualizzazione di una finestra di dialogo tramite un comando di menu | Microsoft Docs"
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
  - "finestre di dialogo, MFC"
  - "esempi [MFC], finestre di dialogo"
  - "voci di menu, esempi"
  - "MFC (finestre di dialogo), visualizzazione"
  - "MFC (finestre di dialogo), esempi"
  - "finestre di dialogo modali, visualizzazione"
  - "finestre di dialogo non modali, visualizzazione"
ms.assetid: e8692549-acd7-478f-9c5e-ba310ce8cccd
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Esempio: visualizzazione di una finestra di dialogo tramite un comando di menu
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento sono contenute le procedure:  
  
-   Viene visualizzata una finestra di dialogo modale tramite un comando di menu.  
  
-   Viene visualizzata una finestra di dialogo non modale tramite un comando di menu.  
  
 Entrambe le procedure di campionamento sono per le applicazioni MFC e funzioneranno in un'applicazione creata con [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md).  
  
 Le procedure utilizzano i seguenti nomi e valori:  
  
|Elemento|Nome o valore|  
|--------------|-------------------|  
|Applicazione|DisplayDialog|  
|Comando di menu|Comando test dal menu Visualizza; ID comando \= ID\_VIEW\_TEST|  
|Finestra di dialogo|Finestra di dialogo di test; Classe CTestDialog; \= File di intestazione \= TestDialog.h; Variabile \= testdlg, ptestdlg|  
|Gestore comando|OnViewTest|  
  
### Per visualizzare una finestra di dialogo modale  
  
1.  Creare il comando di menu; vedere [Creare menu o voci di menu](../windows/creating-a-menu.md).  
  
2.  Creare la finestra di dialogo; vedere [Avviare l'editor finestre](../mfc/creating-a-new-dialog-box.md).  
  
3.  Aggiungere una classe per la finestra di dialogo.  Vedere [Aggiunta di un classe](../ide/adding-a-class-visual-cpp.md) per ulteriori informazioni.  
  
4.  In **Visualizzazione classi**, selezionare la classe document \(CDisplayDialogDoc\).  Nella finestra di **Proprietà**, fare clic sul pulsante di **Eventi** .  Fare doppio clic sull'ID del comando di menu \(ID\_VIEW\_TEST\) nel riquadro sinistro della finestra di **Proprietà** e selezionare **Comando**.  Nel riquadro destro, fare clic sulla freccia giù e selezionare **\<Add\> OnViewTest**.  
  
     Se è stato aggiunto il comando di menu al computer centrale di un'applicazione MDI, selezionare classe di applicazione \(CDisplayDialogApp\).  
  
5.  Aggiungere le seguenti istruzioni tra l'istruzione in CDisplayDialogDoc.cpp \(o a CDisplayDialogApp.cpp\) dopo l'esistenza istruzioni:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#42](../mfc/codesnippet/CPP/example-displaying-a-dialog-box-via-a-menu-command_1.cpp)]  
  
6.  Aggiungere il codice seguente a `OnViewTest` per implementare la funzione:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#43](../mfc/codesnippet/CPP/example-displaying-a-dialog-box-via-a-menu-command_2.cpp)]  
  
### Per visualizzare una finestra di dialogo non modale  
  
1.  Fare i primi quattro passaggi per visualizzare una finestra di dialogo modale, a meno che selezionare la classe di visualizzazione \(CDisplayDialogView\) al passaggio 4.  
  
2.  Modifica DisplayDialogView.h:  
  
    -   Dichiarare la classe della finestra di dialogo che precede la dichiarazione di classe:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#44](../mfc/codesnippet/CPP/example-displaying-a-dialog-box-via-a-menu-command_3.h)]  
  
    -   Dichiarare un puntatore alla finestra di dialogo dopo la sezione public di attributi:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#45](../mfc/codesnippet/CPP/example-displaying-a-dialog-box-via-a-menu-command_4.h)]  
  
3.  Modifica DisplayDialogView.cpp:  
  
    -   Aggiungere le seguenti istruzioni relative all'istruzione successiva l'esistenza istruzioni:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#42](../mfc/codesnippet/CPP/example-displaying-a-dialog-box-via-a-menu-command_1.cpp)]  
  
    -   Aggiungere il seguente codice al costruttore:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#46](../mfc/codesnippet/CPP/example-displaying-a-dialog-box-via-a-menu-command_5.cpp)]  
  
    -   Aggiungere il seguente codice al distruttore:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#47](../mfc/codesnippet/CPP/example-displaying-a-dialog-box-via-a-menu-command_6.cpp)]  
  
    -   Aggiungere il codice seguente a `OnViewTest` per implementare la funzione:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#48](../mfc/codesnippet/CPP/example-displaying-a-dialog-box-via-a-menu-command_7.cpp)]  
  
 Inoltre, vedere il seguente articolo della Knowledge Base:  
  
-   Q251059: HOWTO: Immettere il proprio nome della classe della finestra per una finestra di dialogo MFC  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Finestre di dialogo modali e non modali](../mfc/modal-and-modeless-dialog-boxes.md)