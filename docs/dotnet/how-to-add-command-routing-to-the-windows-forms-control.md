---
title: 'Procedura: aggiungere il routing dei comandi al controllo Windows Form'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- command routing [C++], adding to Windows Forms controls
- Windows Forms controls [C++], command routing
ms.assetid: bf138ece-b463-442a-b0a0-de7063a760c0
ms.openlocfilehash: ad64a12051c22a0cfca99d3ec9c5abef579902f4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365163"
---
# <a name="how-to-add-command-routing-to-the-windows-forms-control"></a>Procedura: aggiungere il routing dei comandi al controllo Windows Form

[CWinFormsView](../mfc/reference/cwinformsview-class.md) indirizza i comandi e i messaggi dell'interfaccia utente di comando di aggiornamento al controllo utente per consentirgli di gestire i comandi MFC (ad esempio, voci di menu cornice e pulsanti della barra degli strumenti).

Il controllo utente utilizza [ICommandTarget::Initialize](../mfc/reference/icommandtarget-interface.md#initialize) per archiviare `m_CmdSrc`un riferimento all'oggetto origine comando in , come illustrato nell'esempio seguente. Per `ICommandTarget` utilizzare è necessario aggiungere un riferimento a mfcmifc80.dll.

`CWinFormsView`gestisce diverse delle notifiche di visualizzazione MFC comuni inoltrandole al controllo utente gestito. Queste notifiche includono i metodi [OnInitialUpdate](../mfc/reference/iview-interface.md#oninitialupdate), [OnUpdate](../mfc/reference/iview-interface.md#onupdate) e [OnActivateView](../mfc/reference/iview-interface.md#onactivateview) .

In questo argomento si presuppone che sia stata completata in precedenza [procedura: creare il controllo utente e host in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) e [procedura: creare il controllo utente e Host visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Aprire la libreria di controlli Windows Form creata in [Procedura: creare il controllo utente e ospitarlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

1. Aggiungere un riferimento a mfcmifc80.dll, operazione che è possibile eseguire facendo clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni**, scegliendo **Aggiungi**, **Riferimento**e quindi individuando Microsoft Visual Studio 10.0.

1. Aprire UserControl1.Designer.cs e aggiungere l'istruzione using seguente:Open and add the following using statement:

    ```
    using Microsoft.VisualC.MFC;
    ```

1. Inoltre, in UserControl1.Designer.cs, modificare questa riga:

    ```
    partial class UserControl1
    ```

   con questo:

    ```
    partial class UserControl1 : System.Windows.Forms.UserControl, ICommandTarget
    ```

1. Aggiungere questo come prima riga della `UserControl1`definizione di classe per :

    ```
    private ICommandSource m_CmdSrc;
    ```

1. Aggiungere le seguenti `UserControl1` definizioni di metodo a (verrà creato l'ID del controllo MFC nel passaggio successivo):

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

1. Aprire l'applicazione MFC creata in [Procedura: creare il controllo utente e ospitare la visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

1. Aggiungere un'opzione di `singleMenuHandler`menu che richiami .

   Passare alla **visualizzazione Risorse** (CTRL-MAIUSC-E), espandere la cartella **Menu** e quindi fare doppio clic su **IDR_MFC02TYPE**. Verrà visualizzato l'editor di menu.

   Aggiungere un'opzione di menu nella parte inferiore del menu **Visualizza.** Si noti l'ID dell'opzione di menu nella finestra **Proprietà.** Salvare il file.

   In **Esplora soluzioni**, aprire il file Resource.h , copiare il valore ID per l'opzione di menu appena aggiunta e incollare tale valore come primo parametro per la `m_CmdSrc.AddCommandHandler` chiamata nel metodo del `Initialize` progetto C, `32771` se necessario.

1. Compilare ed eseguire il progetto.

   Nel menu **Compila** scegliere **Compila soluzione**.

   Scegliere Avvia senza **eseguire debug**dal menu **Debug** .

   Selezionare l'opzione di menu aggiunta. Si noti che viene chiamato il metodo nella DLL.

## <a name="see-also"></a>Vedere anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)<br/>
[Interfaccia ICommandSource](../mfc/reference/icommandsource-interface.md)<br/>
[Interfaccia ICommandTarget](../mfc/reference/icommandtarget-interface.md)
