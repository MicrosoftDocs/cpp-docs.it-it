---
title: Utilizzando un Windows Form controllo utente in MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MFC [C++], Windows Forms support
- interoperability [C++], Windows Forms in MFC
- interoperability [C++], MFC
- interop [C++], Windows Forms in MFC
- interop [C++], MFC
- Windows Forms [C++], MFC support
ms.assetid: 63fb099b-1dff-469c-9e34-dab52e122fcd
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 59b4d974a6b25b896067bce0042d9a5ff9221cc2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-a-windows-form-user-control-in-mfc"></a>Utilizzo di un controllo utente Windows Form in MFC
Utilizzando le classi di supporto di Windows Form di MFC, è possibile ospitare i controlli Windows Form nelle applicazioni MFC come controllo ActiveX in finestre di dialogo MFC o visualizzazioni. Inoltre, Windows Form possono essere ospitati come finestre di dialogo MFC.  
  
 Le sezioni seguenti descrivono come:  
  
-   Ospitare un controllo Windows Form in una finestra di dialogo MFC.  
  
-   Ospitare un controllo utente Windows Form come visualizzazione MFC.  
  
-   Ospitare un controllo Windows form come una finestra di dialogo MFC.  
  
> [!NOTE]
>  Integrazione di Windows Form MFC funziona solo nei progetti di collegano in modo dinamico con MFC (progetti in cui è definito AFXDLL).  
  
> [!NOTE]
>  Quando si compila l'applicazione utilizzando una copia privata (modificata) delle interfacce di Windows Form MFC DLL (mfcmifc80), non riuscirà installare nella Global Assembly Cache solo se si sostituisce la chiave di Microsoft con la propria chiave del fornitore. Per ulteriori informazioni sulla firma degli assembly, vedere [programmazione con assembly](/dotnet/framework/app-domains/programming-with-assemblies) e [assembly con nome sicuro (firma degli Assembly) (C + + CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
 Per le applicazioni di esempio tramite Windows Form, vedere [esempio BirthdayPicker: illustra delle risorse di .NET Framework con Windows Form](http://msdn.microsoft.com/en-us/ac932aed-5502-4667-be29-709bca435317), [esempio Calculator: calcolatrice tascabile di Windows Form](http://msdn.microsoft.com/en-us/2283b516-3b7e-45f2-80c4-fdcfb366ce25)e [ Esempio Scribble: Applicazione di disegno MDI](http://msdn.microsoft.com/en-us/f025da3e-659b-4222-b991-554a1b8b2358).  
  
 Per un'applicazione di esempio che mostra i Windows Form con MFC, vedere [MFC e integrazione con Windows Form](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
 Se l'applicazione MFC utilizza Windows Form, è necessario ridistribuire mfcmifc90 con l'applicazione. Per ulteriori informazioni, vedere [ridistribuzione della libreria MFC](../ide/redistributing-the-mfc-library.md).  
  
## <a name="in-this-section"></a>In questa sezione  
 [Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)  
  
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)  
  
 [Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)  
  
## <a name="reference"></a>Riferimenti  
 [Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md)  
  
 [Classe CWinFormsDialog](../mfc/reference/cwinformsdialog-class.md)  
  
 [Classe CWinFormsView](../mfc/reference/cwinformsview-class.md)  
  
 [Interfaccia ICommandSource](../mfc/reference/icommandsource-interface.md)  
  
 [Interfaccia ICommandTarget](../mfc/reference/icommandtarget-interface.md)  
  
 [Interfaccia ICommandUI](../mfc/reference/icommandui-interface.md)  
  
 [Interfaccia IView](../mfc/reference/iview-interface.md)  
  
 [CommandHandler](../atl/commandhandler.md)  
  
 [DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol)  
  
 [UICheckState](../mfc/reference/uicheckstate-enumeration.md)  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Windows Form](/dotnet/framework/winforms/index)  
  
 [Controlli Windows Form](/dotnet/framework/winforms/controls/index)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Visualizzazioni di form](../mfc/form-views-mfc.md)