---
title: 'Esempio: visualizzazione di una finestra di dialogo tramite un comando di menu'
ms.date: 09/07/2019
helpviewer_keywords:
- MFC dialog boxes [MFC], examples
- MFC dialog boxes [MFC], displaying
- modeless dialog boxes [MFC], displaying
- dialog boxes [MFC], MFC
- modal dialog boxes [MFC], displaying
- examples [MFC], dialog boxes
- menu items [MFC], examples
ms.assetid: e8692549-acd7-478f-9c5e-ba310ce8cccd
ms.openlocfilehash: 1cada8124cd7ea71a24367626508782b522cc746
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506766"
---
# <a name="example-displaying-a-dialog-box-via-a-menu-command"></a>Esempio: visualizzazione di una finestra di dialogo tramite un comando di menu

Questo argomento contiene le procedure per:

- Visualizza una finestra di dialogo modale tramite un comando di menu.

- Visualizza una finestra di dialogo non modale tramite un comando di menu.

Entrambe le procedure di esempio sono per le applicazioni MFC e funzionano in un'applicazione creata con la [creazione guidata applicazione MFC](reference/mfc-application-wizard.md).

Le procedure utilizzano i nomi e i valori seguenti:

|Elemento|Nome o valore|
|----------|-------------------|
|Applicazione|DisplayDialog|
|Comando di menu|Comando di test nel menu Visualizza; ID comando = ID_VIEW_TEST|
|Finestra di dialogo|Finestra di dialogo test; Classe = CTestDialog; File di intestazione = TestDialog. h; Variabile = testdlg, ptestdlg|
|Gestore comando|OnViewTest|

### <a name="to-display-a-modal-dialog-box"></a>Per visualizzare una finestra di dialogo modale

1. Creare il comando di menu; vedere [creazione di menu o voci di menu](../windows/menu-editor.md).

1. Creare la finestra di dialogo; vedere [avvio dell'editor finestre](../windows/creating-a-new-dialog-box.md).

1. Aggiungere una classe per la finestra di dialogo. Per ulteriori informazioni, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md) .

1. In **Visualizzazione classi**selezionare la classe Document (CDisplayDialogDoc). Nella finestra **Proprietà** fare clic sul pulsante **Eventi** . Fare doppio clic sull'ID del comando di menu (ID_VIEW_TEST). Fare quindi clic sulla freccia verso il basso e selezionare ** \<Add> OnViewTest**.

   Se il comando di menu è stato aggiunto al mainframe di un'applicazione MDI, selezionare invece la classe dell'applicazione (CDisplayDialogApp).

1. Aggiungere la seguente istruzione include a CDisplayDialogDoc. cpp (o CDisplayDialogApp. cpp) dopo le istruzioni di inclusione esistenti:

   ```cpp
   #include "TestDialog.h"
   ```

1. Aggiungere il codice seguente a `OnViewTest` per implementare la funzione:

   ```cpp
   CTestDialog testdlg;
   testdlg.DoModal();
   ```

### <a name="to-display-a-modeless-dialog-box"></a>Per visualizzare una finestra di dialogo non modale

1. Eseguire i primi quattro passaggi per visualizzare una finestra di dialogo modale, eccetto selezionare la classe di visualizzazione (CDisplayDialogView) nel passaggio 4.

1. Modificare DisplayDialogView. h:

   - Dichiarare la classe della finestra di dialogo che precede la prima dichiarazione di classe:

   ```cpp
   class CTestDialog;
   ```

   - Dichiarare un puntatore alla finestra di dialogo dopo la sezione attributi pubblici:

   ```cpp
   CTestDialog* m_pTestDlg;
   ```

1. Modificare DisplayDialogView. cpp:

   - Aggiungere la seguente istruzione include dopo le istruzioni di inclusione esistenti:

   ```cpp
   #include "TestDialog.h"
   ```

   - Aggiungere il codice seguente al costruttore:

   ```cpp
   m_pTestDlg = NULL;
   ```

   - Aggiungere il codice seguente al distruttore:

   ```cpp
   delete m_pTestDlg;
   ```

   - Aggiungere il codice seguente a `OnViewTest` per implementare la funzione:

   ```cpp
   if (NULL == m_pTestDlg)
   {
      m_pTestDlg = new CTestDialog(this);
      m_pTestDlg->Create(CTestDialog::IDD, this);
   }
   m_pTestDlg->ShowWindow(SW_SHOW);
   ```

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](dialog-boxes.md)<br/>
[Finestre di dialogo modali e non modali](modal-and-modeless-dialog-boxes.md)
