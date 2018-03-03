---
title: 'Esempio: Visualizzazione di una finestra di dialogo tramite un comando di Menu | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], examples
- MFC dialog boxes [MFC], displaying
- modeless dialog boxes [MFC], displaying
- dialog boxes [MFC], MFC
- modal dialog boxes [MFC], displaying
- examples [MFC], dialog boxes
- menu items [MFC], examples
ms.assetid: e8692549-acd7-478f-9c5e-ba310ce8cccd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e2715e1b64c1565d122f6eec012a8a33c2525ac9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="example-displaying-a-dialog-box-via-a-menu-command"></a>Esempio: visualizzazione di una finestra di dialogo tramite un comando di menu
In questo argomento contiene le procedure per:  
  
-   Visualizzare una finestra di dialogo modale tramite un comando di menu.  
  
-   Visualizzare una finestra di dialogo non modale tramite un comando di menu.  
  
 Entrambe le procedure di esempio sono per le applicazioni MFC e funziona in un'applicazione creata con la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md).  
  
 Le procedure di utilizzano i nomi e i valori seguenti:  
  
|Elemento|Nome o valore|  
|----------|-------------------|  
|Applicazione|DisplayDialog|  
|Comando di menu|Comando di test dal menu Visualizza. ID di comando = ID_VIEW_TEST|  
|Finestra di dialogo|La finestra di dialogo di test; Classe = CTestDialog; File di intestazione = TestDialog. H; Variabile = testdlg, ptestdlg|  
|Gestore del comando|OnViewTest|  
  
### <a name="to-display-a-modal-dialog-box"></a>Per visualizzare una finestra di dialogo modali  
  
1.  Creare il comando di menu. vedere [creazione di menu e voci di Menu](../windows/creating-a-menu.md).  
  
2.  Creare la finestra di dialogo; vedere [all'avvio dell'Editor della finestra di dialogo](../windows/creating-a-new-dialog-box.md).  
  
3.  Aggiungere una classe per la finestra di dialogo. Vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md) per ulteriori informazioni.  
  
4.  In **Visualizzazione classi**, selezionare la classe di documento (CDisplayDialogDoc). Nella finestra **Proprietà** fare clic sul pulsante **Eventi**. Fare doppio clic sull'ID del comando di menu (ID_VIEW_TEST) nel riquadro sinistro della finestra di **proprietà** window e selezionare **comando**. Nel riquadro di destra, fare clic sulla freccia rivolta verso il basso e selezionare  **\<Aggiungi > OnViewTest**.  
  
     Se è stato aggiunto il comando di menu al mainframe di un'applicazione MDI, è possibile selezionare la classe dell'applicazione (CDisplayDialogApp).  
  
5.  Aggiungere la seguente istruzione di inclusione a CDisplayDialogDoc. cpp (o a CDisplayDialogApp. cpp) dopo istruzioni di inclusione esistenti:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#42](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_1.cpp)]  
  
6.  Aggiungere il seguente codice al `OnViewTest` per implementare la funzione:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#43](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_2.cpp)]  
  
### <a name="to-display-a-modeless-dialog-box"></a>Per visualizzare una finestra di dialogo non modali  
  
1.  Eseguire i primi quattro passaggi per visualizzare una finestra di dialogo modali, selezionare la classe di visualizzazione (CDisplayDialogView) nel passaggio 4.  
  
2.  Modificare DisplayDialogView.h:  
  
    -   Dichiarare la classe di finestra di dialogo che precede la prima dichiarazione di classe:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#44](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_3.h)]  
  
    -   Dichiarare un puntatore alla finestra di dialogo dopo la sezione pubblica degli attributi:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#45](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_4.h)]  
  
3.  Modificare DisplayDialogView.cpp:  
  
    -   Aggiungere che la seguente istruzione di inclusione dopo istruzioni di inclusione esistenti:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#42](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_1.cpp)]  
  
    -   Aggiungere il codice seguente al costruttore:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#46](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_5.cpp)]  
  
    -   Aggiungere il seguente codice al distruttore:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#47](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_6.cpp)]  
  
    -   Aggiungere il seguente codice al `OnViewTest` per implementare la funzione:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#48](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_7.cpp)]  
  
 Inoltre, vedere l'articolo della Knowledge Base seguente:  
  
-   Q251059: Procedura: fornire il proprio nome di classe di finestra per la finestra di dialogo MFC  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Finestre di dialogo modali e non modali](../mfc/modal-and-modeless-dialog-boxes.md)

