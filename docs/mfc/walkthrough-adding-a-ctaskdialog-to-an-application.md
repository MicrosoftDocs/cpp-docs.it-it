---
title: "Procedura dettagliata: Aggiunta di CTaskDialog a un'applicazione | Documenti Microsoft"
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CTaskDialog, adding
- walkthroughs [MFC], dialogs
ms.assetid: 3a62abb8-2d86-4bec-bdb8-5784d5f9a9f8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4a0a3d93815a740be59960e6d3e0f9e9ed690923
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122954"
---
# <a name="walkthrough-adding-a-ctaskdialog-to-an-application"></a>Procedura dettagliata: aggiunta di CTaskDialog a un'applicazione

Questa procedura dettagliata illustra [CTaskDialog Class](../mfc/reference/ctaskdialog-class.md) e descrive come aggiungerla a un'applicazione.

Il `CTaskDialog` è una finestra di dialogo delle attività che sostituisce la finestra di messaggio di Windows in Windows Vista o versioni successive. `CTaskDialog` migliora la finestra di messaggio originale e consente di aggiungere funzionalità. La finestra di messaggio di Windows è ancora supportata in Visual Studio.

> [!NOTE]
> Versioni di Windows precedenti a Windows Vista non supportano il `CTaskDialog`. Se si desidera far visualizzare un messaggio a un utente che esegue l'applicazione su una versione precedente di Windows, è necessario programmare un'opzione alternativa per la finestra di dialogo. È possibile usare il metodo statico [CTaskDialog::IsSupported](../mfc/reference/ctaskdialog-class.md#issupported) per determinare in fase di esecuzione se un computer è in grado di visualizzare `CTaskDialog`. Inoltre, `CTaskDialog` è disponibile solo quando l'applicazione viene compilata con la libreria Unicode.

`CTaskDialog` supporta diversi elementi facoltativi per raccogliere e visualizzare informazioni. Ad esempio, `CTaskDialog` consente di visualizzare collegamenti ai comandi, pulsanti personalizzati, icone personalizzate e un piè di pagina. `CTaskDialog` include anche diversi metodi che consentono di eseguire query sullo stato della finestra di dialogo delle attività per determinare gli elementi facoltativi selezionati dall'utente.

## <a name="prerequisites"></a>Prerequisiti

Per completare la procedura dettagliata, è necessario disporre dei componenti seguenti:

- Visual Studio 2010 o versione successiva

- Windows Vista o versioni successive

## <a name="replacing-a-windows-message-box-with-a-ctaskdialog"></a>Sostituzione di una finestra di messaggio di Windows con CTaskDialog

La procedura seguente illustra l'uso di base di `CTaskDialog`, che consiste nel sostituire la finestra di messaggio di Windows. In questo esempio viene anche modificata l'icona associata alla finestra di dialogo delle attività. Tale modifica fa in modo che `CTaskDialog` sembri identica alla finestra di messaggio di Windows.

### <a name="to-replace-a-windows-message-box-with-a-ctaskdialog"></a>Per sostituire una finestra di messaggio di Windows con CTaskDialog

1. Generare una nuova applicazione MFC con le impostazioni predefinite e Chiamarlo *MyProject*.

2. Usare la finestra **Esplora soluzioni** per aprire il file MyProject.cpp.

3. Aggiungere `#include "afxtaskdialog.h"` dopo l'elenco di inclusioni.

4. Trovare il metodo `CMyProjectApp::InitInstance`. Inserire le seguenti righe di codice prima dell'istruzione `return TRUE;` . Questo codice crea le stringhe usate nella finestra di messaggio di Windows o in `CTaskDialog`.  

    ```cpp
    CString message("My message to the user");
    CString dialogTitle("My Task Dialog title");
    CString emptyString;
    ```

5. Aggiungere il codice seguente dopo il codice del passaggio 4. Questo codice garantisce che il computer dell'utente supporti `CTaskDialog`. Se la finestra di dialogo non è supportata, l'applicazione visualizza invece una finestra di messaggio di Windows.

    ```cpp
    if (CTaskDialog::IsSupported())
    {

    }
    else
    {
        AfxMessageBox(message);
    }
    ```

6. Inserire il codice seguente tra le parentesi dopo l'istruzione `if` del passaggio 5. Questo codice crea `CTaskDialog`.

    ```cpp
    CTaskDialog taskDialog(message, emptyString, dialogTitle, TDCBF_OK_BUTTON);
    ```

7. Nella riga successiva aggiungere il codice seguente. Questo codice imposta l'icona di avviso.

    ```cpp
    taskDialog.SetMainIcon(TD_WARNING_ICON);
    ```

8. Nella riga successiva aggiungere il codice seguente. Questo codice consente di visualizzare la finestra di dialogo delle attività.

    ```cpp
    taskDialog.DoModal();
    ```

Se non si desidera che `CTaskDialog` visualizzi la stessa icona della finestra di messaggio di Windows, omettere il passaggio 7. Se si omette questo passaggio, `CTaskDialog` non disporrà di alcuna icona quando verrà visualizzata dall'applicazione.

Compilare l'applicazione ed eseguirla. L'applicazione consente di visualizzare la finestra di dialogo delle attività dopo l'avvio.

## <a name="adding-functionality-to-the-ctaskdialog"></a>Aggiunta di funzionalità a CTaskDialog

La procedura seguente descrive come aggiungere funzionalità alla classe `CTaskDialog` creata nella procedura precedente. Il codice di esempio illustra come eseguire istruzioni specifiche in base alle selezioni dell'utente.

### <a name="to-add-functionality-to-the-ctaskdialog"></a>Per aggiungere funzionalità a CTaskDialog

1. Passare alla finestra **Visualizzazione risorse**. Se non è possibile visualizzare **Visualizzazione risorse**, aprire questa finestra dal menu **Visualizza** .

2. Espandere la finestra **Visualizzazione risorse** fino a quando non è possibile selezionare la cartella **Tabelle delle stringhe** . Espandere la finestra e fare doppio clic sulla voce **Tabelle delle stringhe** .

3. Scorrere fino alla fine della tabella delle stringhe e aggiungere una nuova voce. Modificare l'ID in `TEMP_LINE1`. Impostare la didascalia su **Riga di comando 1**.

4. Aggiungere un'altra nuova voce. Modificare l'ID in `TEMP_LINE2`. Impostare la didascalia su **Riga di comando 2**.

5. Tornare a MyProject.cpp.

6. Dopo `CString emptyString;`, aggiungere il codice seguente:

    ```cpp
    CString expandedLabel("Hide extra information");
    CString collapsedLabel("Show extra information");
    CString expansionInfo("This is the additional information to the user,\nextended over two lines.");
    ```

7. Trovare l'istruzione `taskDialog.DoModal()` e sostituirla con il codice seguente. Questo codice aggiorna la finestra di dialogo delle attività e aggiunge nuovi controlli:

    ```cpp
    taskDialog.SetMainInstruction(L"Warning");
    taskDialog.SetCommonButtons(
        TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON);
    taskDialog.LoadCommandControls(TEMP_LINE1, TEMP_LINE2);
    taskDialog.SetExpansionArea(
        expansionInfo, collapsedLabel, expandedLabel);
    taskDialog.SetFooterText(L"This is the a small footnote to the user");
    taskDialog.SetVerificationCheckboxText(L"Remember your selection");
    ```

8. Aggiungere la seguente riga di codice che consente all'utente di visualizzare la finestra di dialogo delle attività e recupera la selezione dell'utente:

    ```cpp
    INT_PTR result = taskDialog.DoModal();
    ```

9. Inserire il codice seguente dopo la chiamata a `taskDialog.DoModal()`. Questa sezione di codice elabora l'input dell'utente:

    ```cpp
    if (taskDialog.GetVerificationCheckboxState())
    {
        // PROCESS IF the user selects the verification checkbox
    }

    switch (result)
    {
    case TEMP_LINE1:
        // PROCESS IF the first command line
        break;
    case TEMP_LINE2:
        // PROCESS IF the second command line
        break;
    case IDYES:
        // PROCESS IF the user clicks yes
        break;
    case IDNO:
        // PROCESS IF the user clicks no
        break;
    case IDCANCEL:
        // PROCESS IF the user clicks cancel
        break;
    default:
        // This case should not be hit because closing
        // the dialog box results in IDCANCEL
        break;
    }
    ```

Nel codice del passaggio 9 sostituire i commenti che iniziano con PROCESS IF con il codice che si desidera eseguire nelle condizioni specificate.

Compilare l'applicazione ed eseguirla. L'applicazione visualizza la finestra di dialogo delle attività che usa i nuovi controlli e le informazioni aggiuntive.

## <a name="displaying-a-ctaskdialog-without-creating-a-ctaskdialog-object"></a>Visualizzazione di CTaskDialog senza creare un oggetto CTaskDialog

La procedura seguente illustra come visualizzare `CTaskDialog` senza prima creare un oggetto `CTaskDialog` . Questo esempio è una continuazione delle procedure precedenti.

### <a name="to-display-a-ctaskdialog-without-creating-a-ctaskdialog-object"></a>Per visualizzare CTaskDialog senza creare un oggetto CTaskDialog

1. Se non è già aperto, aprire il file MyProject.cpp.

2. Passare alla parentesi di chiusura per l'istruzione `if (CTaskDialog::IsSupported())` .

3. Inserire il codice seguente prima della parentesi di chiusura dell'istruzione `if` (prima del blocco `else` ):

    ```cpp
    HRESULT result2 = CTaskDialog::ShowDialog(L"My error message",
        L"Error",
        L"New Title",
        TEMP_LINE1,
        TEMP_LINE2);
    ```

Compilare l'applicazione ed eseguirla. L'applicazione visualizza due finestre di dialogo delle attività. La prima finestra di dialogo deriva dalla procedura descritta in Per aggiungere funzionalità a CTaskDialog mentre la seconda finestra di dialogo dall'ultima procedura.

Questi esempi non presentano tutte le opzioni disponibili per `CTaskDialog`, ma devono offrire un supporto per iniziare. Per una descrizione completa della classe, vedere [CTaskDialog Class](../mfc/reference/ctaskdialog-class.md) .

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)  
[Classe CTaskDialog](../mfc/reference/ctaskdialog-class.md)  
[CTaskDialog::CTaskDialog](../mfc/reference/ctaskdialog-class.md#ctaskdialog)  
