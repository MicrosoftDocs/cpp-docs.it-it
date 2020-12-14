---
description: 'Altre informazioni su: procedura: aggiungere il routing dei comandi al controllo Windows Forms'
title: 'Procedura: aggiungere il routing dei comandi al controllo Windows Form'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- command routing [C++], adding to Windows Forms controls
- Windows Forms controls [C++], command routing
ms.assetid: bf138ece-b463-442a-b0a0-de7063a760c0
ms.openlocfilehash: b46087d7df3da5f402432731db4b994b257a385b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335413"
---
# <a name="how-to-add-command-routing-to-the-windows-forms-control"></a>Procedura: aggiungere il routing dei comandi al controllo Windows Form

[CWinFormsView](../mfc/reference/cwinformsview-class.md) instrada i comandi e i messaggi dell'interfaccia utente del comando Update al controllo utente per consentire all'IT di gestire i comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti).

Il controllo utente usa [ICommandTarget:: Initialize](../mfc/reference/icommandtarget-interface.md#initialize) per archiviare un riferimento all'oggetto di origine del comando in `m_CmdSrc` , come illustrato nell'esempio seguente. Per usare `ICommandTarget` è necessario aggiungere un riferimento a mfcmifc80.dll.

`CWinFormsView` gestisce diverse notifiche comuni della visualizzazione MFC tramite l'invio al controllo utente gestito. Queste notifiche includono i metodi [OnInitialUpdate](../mfc/reference/iview-interface.md#oninitialupdate), [OnUpdate](../mfc/reference/iview-interface.md#onupdate) e [OnActivateView](../mfc/reference/iview-interface.md#onactivateview) .

In questo argomento si presuppone che sia stata completata la [procedura: creare il controllo utente e l'host in una](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) finestra di dialogo e [procedura: creare il controllo utente e la visualizzazione MDI host](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Aprire Windows Forms libreria di controlli creata in [procedura: creare il controllo utente e l'host in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

1. Aggiungere un riferimento a mfcmifc80.dll, a tale scopo facendo clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni**, selezionando **Aggiungi**, **riferimento** e quindi passando a Microsoft Visual Studio 10.0 \ VC\atlmfc\lib.

1. Aprire UserControl1.Designer.cs e aggiungere l'istruzione using seguente:

    ```
    using Microsoft.VisualC.MFC;
    ```

1. Inoltre, in UserControl1.Designer.cs modificare questa riga:

    ```
    partial class UserControl1
    ```

   con questo:

    ```
    partial class UserControl1 : System.Windows.Forms.UserControl, ICommandTarget
    ```

1. Aggiungere come prima riga della definizione di classe per `UserControl1` :

    ```
    private ICommandSource m_CmdSrc;
    ```

1. Aggiungere le definizioni di metodo seguenti a `UserControl1` (l'ID del controllo MFC verrà creato nel passaggio successivo):

    ```
    public void Initialize (ICommandSource cmdSrc)
    {
       m_CmdSrc = cmdSrc;
       // need ID of control in MFC dialog and callback function
       m_CmdSrc.AddCommandHandler(32771, new CommandHandler (singleMenuHandler));
    }

    private void singleMenuHandler (uint cmdUI)
    {
       // User command handler code
       System.Windows.Forms.MessageBox.Show("Custom menu option was clicked.");
    }
    ```

1. Aprire l'applicazione MFC creata in [procedura: creare il controllo utente e la visualizzazione MDI host](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

1. Consente di aggiungere un'opzione di menu che richiama `singleMenuHandler` .

   Passare a **visualizzazione risorse** (CTRL + MAIUSC + E), espandere la cartella dei **menu** , quindi fare doppio clic su **IDR_MFC02TYPE**. Verrà visualizzato l'editor dei menu.

   Aggiungere un'opzione di menu nella parte inferiore del menu **Visualizza** . Si noti l'ID dell'opzione di menu nella finestra **Proprietà** . Salvare il file.

   In **Esplora soluzioni** aprire il file Resource. h, copiare il valore ID per l'opzione di menu appena aggiunta e incollare il valore come primo parametro per la `m_CmdSrc.AddCommandHandler` chiamata nel metodo del progetto C# `Initialize` (sostituendo `32771` se necessario).

1. Compilare ed eseguire il progetto.

   Nel menu **Compila** scegliere **Compila soluzione**.

   Scegliere **Avvia senza eseguire debug** dal menu **debug** .

   Selezionare l'opzione di menu aggiunta. Si noti che viene chiamato il metodo nel file con estensione dll.

## <a name="see-also"></a>Vedi anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)<br/>
[Interfaccia ICommandSource](../mfc/reference/icommandsource-interface.md)<br/>
[Interfaccia ICommandTarget](../mfc/reference/icommandtarget-interface.md)
