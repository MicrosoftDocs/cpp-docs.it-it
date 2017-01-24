---
title: "Aggiunta di una classe da un controllo ActiveX (Visual C++) | Microsoft Docs"
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
  - "ActiveX (controlli) [C++], aggiunta di classi"
  - "classi [C++], creazione"
ms.assetid: 729fcb37-54b8-44d5-9b4e-50bb16e0eea4
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di una classe da un controllo ActiveX (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa procedura guidata per creare una classe MFC da un'interfaccia in un controllo ActiveX disponibile.  È possibile aggiungere una classe MFC a un'[applicazione MFC](../mfc/reference/creating-an-mfc-application.md), a una [DLL MFC](../mfc/reference/creating-an-mfc-dll-project.md) o a un [controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md).  
  
> [!NOTE]
>  Per aggiungere una classe da un controllo ActiveX, non è necessario creare il progetto MFC con l'automazione attivata.  
  
 Un controllo ActiveX è un componente software riutilizzabile basato sul modello COM \(Component Object Model\) che supporta una vasta gamma di funzionalità OLE e che è possibile personalizzare in modo da rispondere a numerosi requisiti software.  I controlli ActiveX sono progettati per essere utilizzati sia nei normali contenitori di controlli ActiveX sia sulle pagine Web di Internet.  
  
### Per aggiungere una classe MFC da un controllo ActiveX  
  
1.  In **Esplora soluzioni** o [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nome del progetto al quale si desidera aggiungere una classe del controllo ActiveX.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
3.  Nel riquadro Modelli della finestra di dialogo [Aggiungi classe](../ide/add-class-dialog-box.md) fare clic su **Classe MFC da controllo ActiveX**, quindi scegliere **Apri** per visualizzare l'[Aggiunta guidata classe da controllo ActiveX](../ide/add-class-from-activex-control-wizard.md).  
  
 La procedura guidata consente di aggiungere più interfacce in un controllo ActiveX.  Analogamente, è possibile creare classi da più controlli ActiveX in un'unica sessione della procedura guidata.  
  
 È possibile aggiungere classi da controlli ActiveX registrati nel sistema oppure da controlli ActiveX presenti nei file delle librerie dei tipi \(TLB, OLB, DLL, OCX o EXE\) senza effettuarne prima la registrazione nel sistema.  Per ulteriori informazioni sulla registrazione di controlli ActiveX, vedere [Registrazione di controlli OLE](../mfc/reference/registering-ole-controls.md).  
  
 Verrà creata una classe MFC, derivata da [CWnd](../mfc/reference/cwnd-class.md) o [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dal controllo ActiveX selezionato.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Introduction to COM and ATL](../atl/introduction-to-com-and-atl.md)