---
title: "Procedura: aggiungere il routing dei comandi al controllo Windows Form | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi (routing) [C++], aggiunta a controlli Windows Form"
  - "Routing di comandi di controlli Windows Form [C++]"
ms.assetid: bf138ece-b463-442a-b0a0-de7063a760c0
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: aggiungere il routing dei comandi al controllo Windows Form
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[CWinFormsView](../mfc/reference/cwinformsview-class.md) Invia comandi e messaggi di comando di aggiornamento dell'interfaccia Utente per il controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti).  
  
 Il controllo utente utilizza [ICommandTarget:: Initialize](../Topic/ICommandTarget::Initialize.md) per archiviare un riferimento all'oggetto di origine del comando in `m_CmdSrc`, come illustrato nell'esempio seguente. Utilizzare `ICommandTarget` è necessario aggiungere un riferimento a mfcmifc80. dll.  
  
 `CWinFormsView` gestisce diverse delle notifiche di visualizzazione MFC comuni inoltrandole al controllo utente gestito. Tali notifiche includono il [OnInitialUpdate](../Topic/IView::OnInitialUpdate.md), [OnUpdate](../Topic/IView::OnUpdate.md) e [OnActivateView](../Topic/IView::OnActivateView.md) metodi di [IView Interface](../mfc/reference/iview-interface.md).  
  
 In questo argomento si presuppone che in precedenza sono state [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) e [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).  
  
### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC  
  
1.  Aprire una libreria di controlli Windows Form creato in [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).  
  
2.  Aggiungere un riferimento a mfcmifc80. dll, che è possibile effettuare facendo clic sul nodo del progetto in **Esplora**, selezionando **Aggiungi**, **riferimento**, e quindi passando a 10.0\VC\atlmfc\lib Microsoft Visual Studio.  
  
3.  Aprire UserControl1. Designer.cs e aggiungere la seguente istruzione using:  
  
    ```  
    using Microsoft.VisualC.MFC;  
    ```  
  
4.  Inoltre, in UserControl1 modificare questa riga:  
  
    ```  
    partial class UserControl1  
    ```  
  
     a questo:  
  
    ```  
    partial class UserControl1 : System.Windows.Forms.UserControl, ICommandTarget  
    ```  
  
5.  Aggiungere quanto segue come prima riga della definizione di classe per `UserControl1`:  
  
    ```  
    private ICommandSource m_CmdSrc;  
    ```  
  
6.  Aggiungere le seguenti definizioni di metodo a `UserControl1` (nel passaggio successivo verrà creato l'ID del controllo MFC):  
  
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
  
     Passare a **visualizzazione risorse** (Ctrl + MAIUSC + E), espandere il **Menu** cartella, quindi fare doppio clic **IDR_MFC02TYPE**. Verrà visualizzato l'editor di menu.  
  
     Aggiungere una voce di menu nella parte inferiore del **visualizzazione** menu. Si noti l'ID dell'opzione di menu nel **proprietà** finestra. Salvare il file.  
  
     In **Esplora**, aprire il file Resource. h, copiare il valore ID per l'opzione di menu appena aggiunto e incollare tale valore come primo parametro per il `m_CmdSrc.AddCommandHandler` chiamare del progetto c# `Initialize` metodo (sostituendo `32771` se necessario).  
  
9. Compilare ed eseguire il progetto.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.  
  
     Selezionare l'opzione di menu che è stato aggiunto. Si noti che viene chiamato il metodo nel file DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)   
 [Interfaccia ICommandSource](../mfc/reference/icommandsource-interface.md)   
 [Interfaccia ICommandTarget](../mfc/reference/icommandtarget-interface.md)   
 [CommandHandler](../Topic/CommandHandler%20Delegate.md)