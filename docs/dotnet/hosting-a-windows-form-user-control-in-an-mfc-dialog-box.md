---
title: "Hosting di un controllo utente Windows Form in una finestra di dialogo MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "hosting di un controllo Windows Form [C++]"
  - "MFC [C++], supporto di Windows Form"
  - "Windows Form [C++], supporto MFC"
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Hosting di un controllo utente Windows Form in una finestra di dialogo MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC ospita un controllo Windows Form sotto forma di tipo speciale di controllo ActiveX e comunica con tale controllo tramite interfacce ActiveX e proprietà e metodi della classe <xref:System.Windows.Forms.Control>.  Per operare sul controllo, si consiglia di utilizzare proprietà e metodi di .NET Framework.  
  
 Per un'applicazione di esempio che illustri il controllo Windows Form utilizzato con MFC, vedere la pagina relativa all' [integrazione di Windows Form e MFC](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
> [!NOTE]
>  Nella versione corrente, un oggetto `CDialogBar`  non può ospitare i controlli Windows Form.  
  
## In questa sezione  
 [Procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)  
  
 [Procedura: eseguire associazioni dati DDX\/DDV con Windows Form](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md)  
  
 [Procedura: elaborare eventi di Windows Form da classi C\+\+ native](../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)  
  
## Riferimenti  
 [CWinFormsControl Class](../mfc/reference/cwinformscontrol-class.md) &#124; [CDialog Class](../mfc/reference/cdialog-class.md) &#124; [Classe CWnd](../mfc/reference/cwnd-class.md) &#124; <xref:System.Windows.Forms.Control>  
  
## Vedere anche  
 [Utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
 [Differenze tra la programmazione con Windows Form e quella con MFC](../dotnet/windows-forms-mfc-programming-differences.md)   
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)   
 [Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)