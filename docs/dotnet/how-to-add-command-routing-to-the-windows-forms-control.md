---
title: 'Procedura: aggiungere comandi Routing alle finestre di controllo Form | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs:
- C++
helpviewer_keywords:
- command routing [C++], adding to Windows Forms controls
- Windows Forms controls [C++], command routing
ms.assetid: bf138ece-b463-442a-b0a0-de7063a760c0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: bcd082b22c61e2444d70d936c225e538c2429222
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-add-command-routing-to-the-windows-forms-control"></a>Procedura: aggiungere il routing dei comandi al controllo Windows Form
[CWinFormsView](../mfc/reference/cwinformsview-class.md) invia comandi e messaggi di comando di aggiornamento dell'interfaccia utente per il controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti).  
  
 Il controllo utente utilizza [ICommandTarget:: Initialize](../mfc/reference/icommandtarget-interface.md#initialize) per archiviare un riferimento all'oggetto di origine del comando in `m_CmdSrc`, come illustrato nell'esempio seguente. Per utilizzare `ICommandTarget` è necessario aggiungere un riferimento a mfcmifc80.  
  
 `CWinFormsView`gestisce diverse delle notifiche di visualizzazione MFC comuni inoltrandole al controllo utente gestito. Tali notifiche includono il [OnInitialUpdate](../mfc/reference/iview-interface.md#oninitialupdate), [OnUpdate](../mfc/reference/iview-interface.md#onupdate) e [OnActivateView](../mfc/reference/iview-interface.md#onactivateview) metodi.  
  
 In questo argomento si presuppone che in precedenza è stata completata [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) e [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).  
  
### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC  
  
1.  Aprire una libreria di controlli Windows Form è stato creato in [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).  
  
2.  Aggiungere un riferimento a mfcmifc80, che è possibile effettuare facendo clic sul nodo del progetto in **Esplora**, se si seleziona **Aggiungi**, **riferimento**e quindi passando a Microsoft Visual Studio 10.0\VC\atlmfc\lib.  
  
3.  Aprire UserControl1. Designer.cs e aggiungere la seguente istruzione using:  
  
    ```  
    using Microsoft.VisualC.MFC;  
    ```  
  
4.  Inoltre, in UserControl1 modificare questa riga:  
  
    ```  
    partial class UserControl1  
    ```  
  
     a questo scopo:  
  
    ```  
    partial class UserControl1 : System.Windows.Forms.UserControl, ICommandTarget  
    ```  
  
5.  Aggiungere questo elemento come prima riga della definizione della classe per `UserControl1`:  
  
    ```  
    private ICommandSource m_CmdSrc;  
    ```  
  
6.  Aggiungere le seguenti definizioni di metodo `UserControl1` (nel passaggio successivo verrà creato l'ID del controllo MFC):  
  
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
  
7.  Aprire l'applicazione MFC è stato creato in [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).  
  
8.  Aggiungere una voce di menu che verrà richiamato `singleMenuHandler`.  
  
     Passare a **visualizzazione risorse** (Ctrl + MAIUSC + E), espandere il **Menu** cartella, quindi fare doppio clic **IDR_MFC02TYPE**. Consente di visualizzare l'editor di menu.  
  
     Aggiungere una voce di menu nella parte inferiore del **vista** menu. Si noti l'ID dell'opzione di menu nel **proprietà** finestra. Salvare il file.  
  
     In **Esplora**, aprire il file Resource. h, copiare il valore di ID per l'opzione di menu appena aggiunto e incollare tale valore come il primo parametro di `m_CmdSrc.AddCommandHandler` chiamare del progetto c# `Initialize` (sostituendo (metodo)`32771` se necessario).  
  
9. Compilare ed eseguire il progetto.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.  
  
     Selezionare l'opzione di menu che è stato aggiunto. Si noti che viene chiamato il metodo nella DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)   
 [Interfaccia ICommandSource](../mfc/reference/icommandsource-interface.md)   
 [Interfaccia ICommandTarget](../mfc/reference/icommandtarget-interface.md)   
 [CommandHandler](http://msdn.microsoft.com/Library/22096734-e074-4aca-8523-4b15590109f9)