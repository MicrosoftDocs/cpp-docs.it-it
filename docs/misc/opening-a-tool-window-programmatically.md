---
title: "Apertura di una finestra degli strumenti a livello di codice | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "finestre degli strumenti, creazione a livello di codice"
ms.assetid: 0017441e-7aa3-4a61-9939-57af11d90d97
caps.latest.revision: 16
caps.handback.revision: 16
manager: "douge"
---
# Apertura di una finestra degli strumenti a livello di codice
Le finestre degli strumenti in genere vengono aperte scegliendo un comando in un menu oppure premendo un tasto di scelta rapida equivalente. Tuttavia, potrebbe essere necessario aprire una finestra degli strumenti a livello di codice, come fa il gestore del comando.  
  
 Per aprire una finestra degli strumenti in un VSPackage gestito che la fornisce, usare <xref:Microsoft.VisualStudio.Shell.Package.FindToolWindow%2A>. Per aprire una finestra degli strumenti in un altro VSPackage, usare <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.FindToolWindow%2A>. In entrambi i casi, la finestra degli strumenti viene creata come richiesto.  
  
 Il codice seguente viene ricavato dall'esempio Reference.ToolWindow di \#C.  
  
### Per aprire una finestra degli strumenti a livello di codice  
  
1.  Creare il riquadro della finestra degli strumenti, il frame e il pacchetto VSPackage che li implementa. Per altre informazioni, vedere [Aggiunta di una finestra degli strumenti](../Topic/Adding%20a%20Tool%20Window.md).  
  
2.  Aggiungere <xref:Microsoft.VisualStudio.Shell.ProvideToolWindowAttribute> al pacchetto VSPackage che lo fornisce.  
  
    ```c#  
    [ProvideToolWindow(typeof(PersistedWindowPane), Style = VsDockStyle.Tabbed, Window = "3ae79031-e1bc-11d0-8f78-00a0c9110057")] [ProvideMenuResource(1000, 1)] [MsVsShell.DefaultRegistryRoot(@"Software\Microsoft\VisualStudio\8.0Exp")] [PackageRegistration(UseManagedResourcesOnly = true)] [Guid("01069CDD-95CE-4620-AC21-DDFF6C57F012")] // your package will have a different GUID public class PackageToolWindow : Package {  
    ```  
  
     In questo modo viene registrata la finestra degli strumenti PersistedWindowPane da aprire ancorata a **Esplora soluzioni**. Per altre informazioni, vedere [Registrazione di una finestra degli strumenti](../Topic/Registering%20a%20Tool%20Window.md).  
  
3.  Usare <xref:Microsoft.VisualStudio.Shell.Package.FindToolWindow%2A> per trovare il riquadro della finestra degli strumenti o per crearlo se non esiste già.  
  
    ```vb#  
    ' Get the 1 (index 0) and only instance of our tool window. ' If it does not already exist it will get created. Dim pane As MsVsShell.ToolWindowPane = Me.FindToolWindow(GetType(PersistedWindowPane), 0, True) If pane Is Nothing Then End If  
  
    ```  
  
    ```c#  
    // Get the 1 (index 0) and only instance of our tool window. // If it does not already exist it will get created. MsVsShell.ToolWindowPane pane =     this.FindToolWindow(typeof(PersistedWindowPane), 0, true); if (pane == null) {  
    ```  
  
4.  Ottenere la cornice delle finestre degli strumenti dal riquadro della finestra degli strumenti.  
  
    ```vb#  
    Dim frame As IVsWindowFrame = TryCast(pane.Frame, IVsWindowFrame) If frame Is Nothing Then End If  
  
    ```  
  
    ```c#  
    IVsWindowFrame frame = pane.Frame as IVsWindowFrame; if (frame == null) {  
    ```  
  
5.  Visualizzare la finestra degli strumenti.  
  
    ```vb#  
    ' Bring the tool window to the front and give it focus ErrorHandler.ThrowOnFailure(frame.Show())  
  
    ```  
  
    ```c#  
    // Bring the tool window to the front and give it focus ErrorHandler.ThrowOnFailure(frame.Show());  
    ```