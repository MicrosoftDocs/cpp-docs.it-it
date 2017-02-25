---
title: "Hosting di un controllo utente Windows Form come visualizzazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "controlli Windows Form [C++], hosting come visualizzazione MFC"
ms.assetid: 43c02ab4-1366-434c-a980-0b19326d6ea0
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Hosting di un controllo utente Windows Form come visualizzazione MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In MFC viene utilizzata la classe CWinFormsView per ospitare un controllo utente Windows Form in una visualizzazione MFC.  Le visualizzazioni Windows Form di MFC sono controlli ActiveX.  Il controllo utente viene ospitato come figlio della visualizzazione nativa e occupa l'intera area client di tale visualizzazione.  
  
 Il risultato finale è simile al modello utilizzato da [CFormView Class](../mfc/reference/cformview-class.md).  In tal modo, è possibile sfruttare la finestra di progettazione e il runtime di Windows Form per creare visualizzazioni complesse basate su form.  
  
 Le visualizzazioni Windows Form di MFC sono controlli ActiveX, pertanto non dispongono dello stesso `hwnd` delle visualizzazioni MFC.  Non possono inoltre essere passate come puntatore a una visualizzazione [CView](../mfc/reference/cview-class.md).  Per operare con visualizzazioni Windows Form, è in generale preferibile adottare metodi .NET Framework e fare minor affidamento su Win32.  
  
 Per un'applicazione di esempio che illustri il controllo Windows Form utilizzato con MFC, vedere la pagina relativa all' [integrazione di Windows Form e MFC](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
## In questa sezione  
 [Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md)  
  
 [Procedura: aggiungere il routing dei comandi al controllo Windows Form](../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)  
  
 [Procedura: chiamare proprietà e metodi del controllo Windows Form](../dotnet/how-to-call-properties-and-methods-of-the-windows-forms-control.md)  
  
## Vedere anche  
 [Utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
 [Procedura: modificare controlli compositi](../Topic/How%20to:%20Author%20Composite%20Controls.md)