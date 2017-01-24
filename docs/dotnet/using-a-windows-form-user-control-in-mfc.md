---
title: "Utilizzo di un controllo utente Windows Form in MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Supporto di Windows Form MFC [C++]"
  - "interoperabilità [C++], Windows Form in MFC"
  - "interoperabilità [C++], MFC"
  - "interoperabilità [C++], Windows Form in MFC"
  - "interoperabilità [C++], MFC"
  - "Supporto di MFC di Windows Form [C++]"
ms.assetid: 63fb099b-1dff-469c-9e34-dab52e122fcd
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di un controllo utente Windows Form in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzando le classi di supporto di MFC Windows Form, è possibile ospitare i controlli Windows Form all'interno delle applicazioni MFC come controllo ActiveX in finestre di dialogo MFC o visualizzazioni. Inoltre, Windows Form possono essere ospitati come finestre di dialogo MFC.  
  
 Le sezioni seguenti descrivono come:  
  
-   Ospitare un controllo Windows Form in una finestra di dialogo MFC.  
  
-   Ospitare un controllo utente Windows Form come visualizzazione MFC.  
  
-   Ospitare un controllo Windows form come una finestra di dialogo MFC.  
  
> [!NOTE]
>  L'integrazione di Windows Form MFC funziona solo nei progetti che si collegano in modo dinamico con MFC (progetti in cui è definito AFXDLL).  
  
> [!NOTE]
>  Quando si compila l'applicazione utilizzando una copia privata (modificata) delle interfacce di Windows Form MFC DLL (mfcmifc80. dll), non si installa nella Global Assembly CACHE solo se si sostituisce la chiave di Microsoft con la propria chiave del fornitore. Per ulteriori informazioni sulla firma degli assembly, vedere [programmazione con assembly](../Topic/Programming%20with%20Assemblies.md) e [assembly con nome sicuro (firma degli Assembly) (C + c++ /CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
 Per le applicazioni di esempio tramite Windows Form, vedere [esempio BirthdayPicker: illustra delle risorse di .NET Framework con Windows Form](http://msdn.microsoft.com/it-it/ac932aed-5502-4667-be29-709bca435317), [esempio Calculator: calcolatrice tascabile di Windows Form](http://msdn.microsoft.com/it-it/2283b516-3b7e-45f2-80c4-fdcfb366ce25), e [esempio Scribble: applicazione di disegno MDI](http://msdn.microsoft.com/it-it/f025da3e-659b-4222-b991-554a1b8b2358).  
  
 Per un'applicazione di esempio che mostra i Windows Form con MFC, vedere [MFC e Windows Forms Integration](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
 Se l'applicazione MFC utilizza Windows Form, è necessario ridistribuire mfcmifc90 con l'applicazione. Per ulteriori informazioni, vedere [Ridistribuzione della libreria MFC](../ide/redistributing-the-mfc-library.md).  
  
## <a name="in-this-section"></a>Contenuto della sezione  
 [Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)  
  
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)  
  
 [Hosting di un controllo utente Windows Form come una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)  
  
## <a name="reference"></a>Riferimento  
 [Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md)  
  
 [Classe CWinFormsDialog](../mfc/reference/cwinformsdialog-class.md)  
  
 [Classe CWinFormsView](../mfc/reference/cwinformsview-class.md)  
  
 [Interfaccia ICommandSource](../mfc/reference/icommandsource-interface.md)  
  
 [Interfaccia ICommandTarget](../mfc/reference/icommandtarget-interface.md)  
  
 [Interfaccia ICommandUI](../mfc/reference/icommandui-interface.md)  
  
 [Interfaccia IView](../mfc/reference/iview-interface.md)  
  
 [CommandHandler](../Topic/CommandHandler%20Delegate.md)  
  
 [CommandUIHandler](../Topic/CommandUIHandler%20Delegate.md)  
  
 [DDX_ManagedControl](../Topic/DDX_ManagedControl.md)  
  
 [UICheckState](../Topic/UICheckState%20Enumeration.md)  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Windows Form](../Topic/Windows%20Forms.md)  
  
 [Controlli Windows Form](../Topic/Windows%20Forms%20Controls.md)  
  
 [Controlli utente ASP.NET](../Topic/ASP.NET%20User%20Controls.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Visualizzazioni di form](../mfc/form-views-mfc.md)