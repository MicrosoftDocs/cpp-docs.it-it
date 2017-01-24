---
title: "Procedura dettagliata: Chiamata in Visual Studio SDK mediante l&#39;automazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "procedure dettagliate [Visual Studio SDK], esecuzione di chiamate con l'automazione"
ms.assetid: ca4dab48-632c-4c2a-8c84-57c027e37987
caps.latest.revision: 31
caps.handback.revision: 31
manager: "douge"
---
# Procedura dettagliata: Chiamata in Visual Studio SDK mediante l&#39;automazione
Questa procedura dettagliata illustra come creare un componente aggiuntivo di Visual Studio che utilizza un servizio di Visual Studio. Il componente aggiuntivo creato ottiene un provider di servizi e lo usa per ottenere un servizio. È possibile usare questa stessa tecnica per ottenere qualsiasi servizio di Visual Studio offerto. Per altre informazioni sui servizi e sui provider di servizi, vedere [Utilizzo e servizi](../Topic/Using%20and%20Providing%20Services.md). Le routine seguenti illustrano come creare un componente aggiuntivo e quindi ottenere un servizio dal componente aggiuntivo.  
  
## Creazione di un componente aggiuntivo  
 In questa sezione si crea un componente aggiuntivo di Visual Studio usando il modello di progetto di componente aggiuntivo di Visual Studio.  
  
#### Per creare un componente aggiuntivo  
  
1.  Creare un nuovo progetto di Visual Studio \(**File\/Nuovo\/Progetto**\).  
  
2.  Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** espandere il nodo **Altri tipi di progetto** e quindi fare clic sul nodo **Extensibility**. Selezionare **Componente aggiuntivo Visual Studio**.  
  
3.  Creare un nuovo progetto di componente aggiuntivo denominato `Addin`.  
  
     Nella Creazione guidata componente aggiuntivo di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] fare clic su **Avanti**.  
  
4.  Nella pagina **Selezionare un linguaggio di programmazione** selezionare **Crea componente aggiuntivo utilizzando Visual C\#** o **Crea componente aggiuntivo utilizzando Visual Basic**.  
  
5.  Nella pagina **Selezionare un'applicazione host** selezionare **Microsoft Visual Studio \<versione\>**.  
  
6.  Nella pagina **Specificare un nome e una descrizione** digitare `MyAddin` nella casella **Nome** e `MyAddin Walkthrough` nella casella **Descrizione**.  
  
7.  Nella pagina **Scegliere le opzioni del componente aggiuntivo** selezionare l'opzione per una voce del menu Strumenti in **Creare un'interfaccia utente con barra dei comandi per il componente aggiuntivo?**. Deselezionare le altre caselle di controllo.  
  
8.  Accettare tutte le altre impostazioni predefinite.  
  
9. Compilare la soluzione e verificare che l'operazione avvenga senza errori.  
  
## Recupero di un servizio da un componente aggiuntivo  
 La procedura seguente consente di acquisire un servizio dal componente aggiuntivo.  
  
#### Per ottenere un servizio  
  
1.  Aprire il file Connect.cs o Connect.vb e aggiungere le righe seguenti alle istruzioni `using` \(C\#\) o `Imports` \(Visual Basic\):  
  
     [!code-cs[VSSDKAddin#1](../misc/codesnippet/CSharp/walkthrough-calling-into-the-visual-studio-sdk-by-using-automation_1.cs)]
     [!code-vb[VSSDKAddin#1](../misc/codesnippet/VisualBasic/walkthrough-calling-into-the-visual-studio-sdk-by-using-automation_1.vb)]  
  
2.  Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e aggiungere questi riferimenti .NET:  
  
    ```  
    Microsoft.VisualStudio.OLE.Interop Microsoft.VisualStudio.Shell.Interop  
    ```  
  
3.  Aggiungere queste righe di codice alla clausola `if(commandName == "Addin.Connect.Addin")` o `If commandName = "Addin.Connect.Addin" Then` del metodo `Exec`:  
  
     [!code-cs[VSSDKAddin#2](../misc/codesnippet/CSharp/walkthrough-calling-into-the-visual-studio-sdk-by-using-automation_2.cs)]
     [!code-vb[VSSDKAddin#2](../misc/codesnippet/VisualBasic/walkthrough-calling-into-the-visual-studio-sdk-by-using-automation_2.vb)]  
  
     Il codice esegue il cast dell'oggetto applicazione corrente \(tipo `DTE2`\) in un oggetto `IOleServiceProvider` e quindi chiama `QueryService` per ottenere il servizio <xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell>. Questo servizio fornisce un'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell>. Il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.ShowMessageBox%2A> visualizza una finestra di messaggio quando il componente aggiuntivo viene eseguito.  
  
4.  Compilare e avviare il progetto di componente aggiuntivo in modalità di debug premendo F5.  
  
     Verrà avviata un'altra istanza di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
5.  Nella nuova istanza di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] scegliere **Componente aggiuntivo** dal menu **Strumenti**. La finestra di messaggio sarà simile alla seguente:  
  
    ```  
    MyAddin Inside Addin.Connect  
    ```  
  
## Vedere anche  
 [Procedura: disattivare e rimuovere un componente aggiuntivo](../Topic/How%20to:%20Deactivate%20and%20Remove%20an%20Add-In.md)