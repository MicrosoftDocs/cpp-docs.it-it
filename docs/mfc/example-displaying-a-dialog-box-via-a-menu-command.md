---
title: 'Esempio: Visualizzazione di una finestra di dialogo tramite un comando di Menu'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], examples
- MFC dialog boxes [MFC], displaying
- modeless dialog boxes [MFC], displaying
- dialog boxes [MFC], MFC
- modal dialog boxes [MFC], displaying
- examples [MFC], dialog boxes
- menu items [MFC], examples
ms.assetid: e8692549-acd7-478f-9c5e-ba310ce8cccd
ms.openlocfilehash: 8c60469747c24b4c295348a14cb569c4118c76d9
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57260478"
---
# <a name="example-displaying-a-dialog-box-via-a-menu-command"></a>Esempio: Visualizzazione di una finestra di dialogo tramite un comando di Menu

Questo argomento contiene procedure per:

- Visualizzare una finestra di dialogo modale tramite un comando di menu.

- Visualizzare una finestra di dialogo non modale tramite un comando di menu.

Entrambe le procedure di esempio sono per le applicazioni MFC e funzionerà in un'applicazione creata con il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md).

Le procedure utilizzano i nomi e i valori seguenti:

|Elemento|Nome o valore|
|----------|-------------------|
|Applicazione|DisplayDialog|
|Comando di menu|Comando di test nel menu Visualizza. ID di comando = ID_VIEW_TEST|
|Finestra di dialogo|Finestra di dialogo test. Classe = CTestDialog; File di intestazione = TestDialog. H; Variabile = testdlg, ptestdlg|
|Gestore di comandi|OnViewTest|

### <a name="to-display-a-modal-dialog-box"></a>Per visualizzare una finestra di dialogo modale

1. Creare il comando di menu. visualizzare [creazione di menu e voci di Menu](../windows/creating-a-menu.md).

1. Creare la finestra di dialogo; visualizzare [avviare l'Editor finestre](../windows/creating-a-new-dialog-box.md).

1. Aggiungere una classe per la finestra di dialogo. Visualizzare [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md) per altre informazioni.

1. Nelle **Visualizzazione classi**, selezionare la classe documento (CDisplayDialogDoc). Nella finestra **Proprietà** fare clic sul pulsante **Eventi**. Fare doppio clic sull'ID del comando di menu (ID_VIEW_TEST) nel riquadro sinistro della finestra di **delle proprietà** finestra e selezionare **comando**. Nel riquadro di destra, fare clic sulla freccia in giù e selezionare  **\<Aggiungi > OnViewTest**.

   Se è stato aggiunto il comando di menu al mainframe di un'applicazione MDI, selezionare invece la classe dell'applicazione (CDisplayDialogApp).

1. Aggiungere la seguente istruzione CDisplayDialogDoc. cpp (o a CDisplayDialogApp. cpp) di inclusione dopo esistenti includono istruzioni:

   [!code-cpp[NVC_MFCControlLadenDialog#42](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_1.cpp)]

1. Aggiungere il codice seguente a `OnViewTest` per implementare la funzione:

   [!code-cpp[NVC_MFCControlLadenDialog#43](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_2.cpp)]

### <a name="to-display-a-modeless-dialog-box"></a>Per visualizzare una finestra di dialogo non modale

1. Eseguire i primi quattro passaggi per visualizzare una finestra di dialogo modale, ad eccezione del fatto selezionare la classe di visualizzazione (CDisplayDialogView) nel passaggio 4.

1. Modifica DisplayDialogView.h:

   - Dichiarare la classe di finestra di dialogo che precede la prima dichiarazione di classe:

         [!code-cpp[NVC_MFCControlLadenDialog#44](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_3.h)]

   - Dichiarare un puntatore alla finestra di dialogo dopo la sezione attributi pubblica:

         [!code-cpp[NVC_MFCControlLadenDialog#45](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_4.h)]

1. Modifica DisplayDialogView.cpp:

   - Aggiungere che la seguente istruzione di inclusione dopo esistenti includono istruzioni:

         [!code-cpp[NVC_MFCControlLadenDialog#42](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_1.cpp)]

   - Aggiungere il codice seguente al costruttore:

         [!code-cpp[NVC_MFCControlLadenDialog#46](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_5.cpp)]

   - Aggiungere il codice seguente al distruttore:

         [!code-cpp[NVC_MFCControlLadenDialog#47](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_6.cpp)]

   - Aggiungere il codice seguente a `OnViewTest` per implementare la funzione:

         [!code-cpp[NVC_MFCControlLadenDialog#48](../mfc/codesnippet/cpp/example-displaying-a-dialog-box-via-a-menu-command_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Finestre di dialogo modali e non modali](../mfc/modal-and-modeless-dialog-boxes.md)
