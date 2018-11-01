---
title: 'Procedura: aggiungere il routing dei comandi al controllo Windows Form'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- command routing [C++], adding to Windows Forms controls
- Windows Forms controls [C++], command routing
ms.assetid: bf138ece-b463-442a-b0a0-de7063a760c0
ms.openlocfilehash: b3f93574e007fdb1b7d4009d85c573223091adf9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50447112"
---
# <a name="how-to-add-command-routing-to-the-windows-forms-control"></a>Procedura: aggiungere il routing dei comandi al controllo Windows Form

[CWinFormsView](../mfc/reference/cwinformsview-class.md) instrada i comandi e messaggi di comando di aggiornamento dell'interfaccia utente per il controllo utente in modo che possa gestire i comandi MFC (ad esempio, voci di menu della cornice e i pulsanti della barra degli strumenti).

Il controllo utente utilizza [ICommandTarget:: Initialize](../mfc/reference/icommandtarget-interface.md#initialize) per archiviare un riferimento all'oggetto di origine del comando in `m_CmdSrc`, come illustrato nell'esempio seguente. Usare `ICommandTarget` è necessario aggiungere un riferimento a mfcmifc80.dll.

`CWinFormsView` gestisce diverse delle notifiche di visualizzazione MFC comuni inoltrandole al controllo utente gestito. Tali notifiche includono i [OnInitialUpdate](../mfc/reference/iview-interface.md#oninitialupdate), [OnUpdate](../mfc/reference/iview-interface.md#onupdate) e [OnActivateView](../mfc/reference/iview-interface.md#onactivateview) metodi.

In questo argomento si presuppone che è stata completata [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) e [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Aprire una libreria di controlli Windows Form creato nella [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

1. Aggiungere un riferimento a mfcmifc80.dll, operazione che è possibile effettuare facendo clic sul nodo del progetto in **Esplora soluzioni**, selezionando **Add**, **riferimento**e quindi passando a Microsoft Visual Studio 10.0\VC\atlmfc\lib.

1. Aprire UserControl1.Designer.cs e aggiungere la seguente istruzione using:

    ```
    using Microsoft.VisualC.MFC;
    ```

1. È inoltre in UserControl1.Designer.cs modificare questa riga:

    ```
    partial class UserControl1
    ```

   A questo scopo:

    ```
    partial class UserControl1 : System.Windows.Forms.UserControl, ICommandTarget
    ```

1. Aggiungere quanto segue come prima riga della definizione di classe per `UserControl1`:

    ```
    private ICommandSource m_CmdSrc;
    ```

1. Aggiungere le seguenti definizioni di metodo a `UserControl1` (nel passaggio successivo verrà creato l'ID del controllo MFC):

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

1. Aprire l'applicazione MFC creata in [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

1. Aggiungere un'opzione di menu che verrà richiamato `singleMenuHandler`.

   Passare a **visualizzazione di risorse** (Ctrl + MAIUSC + E), espandere il **dal Menu** cartella e quindi fare doppio clic **IDR_MFC02TYPE**. Verrà visualizzato l'editor di menu.

   Aggiungere un'opzione di menu nella parte inferiore della **vista** menu. Si noti che l'ID dell'opzione di menu nel **proprietà** finestra. Salvare il file.

   Nelle **Esplora soluzioni**, aprire il file Resource h, copiare il valore ID per l'opzione di menu appena aggiunto e incollare tale valore come primo parametro per il `m_CmdSrc.AddCommandHandler` chiamare del progetto c# `Initialize` (sostituendo (metodo)`32771` se necessario).

9. Compilare ed eseguire il progetto.

   Scegliere **Compila soluzione** dal menu **Compila**.

   Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.

   Selezionare l'opzione di menu aggiunta. Si noti che viene chiamato il metodo nel file DLL.

## <a name="see-also"></a>Vedere anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)<br/>
[Interfaccia ICommandSource](../mfc/reference/icommandsource-interface.md)<br/>
[Interfaccia ICommandTarget](../mfc/reference/icommandtarget-interface.md)
