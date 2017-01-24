---
title: "Procedura: Aggiornare una pagina iniziale personalizzata di Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 78342ce6-36c8-485b-a5f6-760e7a420a26
caps.latest.revision: 8
caps.handback.revision: 8
manager: "douge"
---
# Procedura: Aggiornare una pagina iniziale personalizzata di Visual Studio
La procedura illustrata di seguito consente di aggiornare una pagina iniziale personalizzata di Visual Studio 2010 o Visual Studio 2012 a Visual Studio 2015.  
  
> [!WARNING]
>  La pagina iniziale personalizzata aggiornata in questa routine è quella creata con il modello [Custom Start Page](http://visualstudiogallery.msdn.microsoft.com/f655a5dc-1a2d-4eca-b774-76c352c03b87) disponibile in Visual Studio Gallery. La pagina iniziale dell'utente potrebbe contenere altre funzionalità che occorre aggiornare.  
  
### Per aggiornare una pagina iniziale personalizzata a Visual Studio 2015  
  
1.  Verificare che Visual Studio 2015 e Visual Studio 2015 SDK siano installati. È possibile scaricare l'SDK dalla pagina di [Microsoft Visual Studio 2013 SDK](http://go.microsoft.com/?linkid=9863867).  
  
2.  Aprire il progetto di modello personalizzato. Verrà visualizzato un messaggio che informare che è necessario aggiornare il progetto. Fare clic su **OK** e attendere il completamento dell'aggiornamento.  
  
3.  Nelle proprietà di progetto sia del progetto di pagina iniziale che del progetto di controllo assicurarsi che il framework di destinazione sia almeno .NET Framework 4.5.  
  
4.  Nella categoria Debug delle proprietà di progetto per il progetto di pagina iniziale impostare il percorso per la versione Visual Studio 2015 di devenv.exe.  
  
5.  Nei riferimenti al progetto di entrambi i progetti rimuovere i riferimenti a Microsoft.VisualStudio.Shell.11.0 e aggiungere riferimenti a Microsoft.VisualStudio.Shell.14.0.  
  
6.  Aprire StartPage.xaml con l'editor XML e apportare le modifiche seguenti:  
  
    1.  Aggiornare gli spazi dei nomi. Modificare le righe seguenti:  
  
        ```  
  
        xmlns:vs="clr-namespace:Microsoft.VisualStudio.PlatformUI;assembly=Microsoft.VisualStudio.Shell.11.0" xmlns:vsfxim="clr-namespace:Microsoft.VisualStudio.Shell;assembly=Microsoft.VisualStudio.Shell.Immutable.11.0" xmlns:vsfx="clr-namespace:Microsoft.VisualStudio.Shell;assembly=Microsoft.VisualStudio.Shell.11.0"  
        ```  
  
         in:  
  
        ```  
  
        xmlns:vs="clr-namespace:Microsoft.VisualStudio.PlatformUI;assembly=Microsoft.VisualStudio.Shell.142.0" xmlns:vsfxim="clr-namespace:Microsoft.VisualStudio.Shell;assembly=Microsoft.VisualStudio.Shell.Immutable.14.0" xmlns:vsfx="clr-namespace:Microsoft.VisualStudio.Shell;assembly=Microsoft.VisualStudio.Shell.14.0"  
        ```  
  
7.  Aprire MyControl.xaml e modificare il riferimento allo spazio dei nomi `xmlns:vs="clr-namespace:Microsoft.VisualStudio.Shell;assembly=Microsoft.VisualStudio.Shell.11.0"` in `xmlns:vs="clr-namespace:Microsoft.VisualStudio.Shell;assembly=Microsoft.VisualStudio.Shell.14.0"`.