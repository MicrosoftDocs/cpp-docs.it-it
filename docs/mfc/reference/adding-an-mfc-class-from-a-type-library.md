---
title: "Aggiunta di una classe MFC da una libreria dei tipi | Microsoft Docs"
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
  - "classi [C++], aggiunta di MFC"
  - "MFC, aggiunta di classi da librerie di tipi"
  - "librerie dei tipi, aggiunta di classi MFC da"
ms.assetid: aba40476-3cfb-47af-990e-ae2e9e0d79cf
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Aggiunta di una classe MFC da una libreria dei tipi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per creare una classe MFC da un'interfaccia in una libreria dei tipi disponibile.  È possibile aggiungere una classe MFC a un'[applicazione MFC](../../mfc/reference/creating-an-mfc-application.md), a una [DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md) o a un [controllo ActiveX MFC](../../mfc/reference/creating-an-mfc-activex-control.md).  
  
> [!NOTE]
>  Per aggiungere una classe da una libreria dei tipi, non è necessario creare il progetto MFC con l'automazione attivata.  
  
 Nelle librerie dei tipi si trova una descrizione binaria delle interfacce esposte da un componente che definisce i metodi con i relativi parametri e i tipi restituiti.  È necessario registrare la libreria dei tipi affinché venga visualizzata nell'elenco **Librerie dei tipi disponibili** nell'Aggiunta guidata classe da libreria dei tipi.  Per ulteriori informazioni, vedere Inside Distributed COM: Type Libraries and Language Integration in MSDN Library \(informazioni in lingua inglese\).  
  
### Per aggiungere una classe MFC da una libreria dei tipi  
  
1.  In **Esplora soluzioni** o [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nome del progetto al quale si desidera aggiungere la classe.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
3.  Nel riquadro Modelli della finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md) fare clic su **Classe MFC da libreria dei tipi**, quindi scegliere **Apri** per visualizzare l'[Aggiunta guidata classe da libreria dei tipi](../../mfc/reference/add-class-from-typelib-wizard.md).  
  
 Utilizzando questa procedura guidata è possibile aggiungere più classi a una libreria dei tipi.  Analogamente, è possibile aggiungere classi da più librerie dei tipi in un'unica sessione della procedura guidata.  
  
 Verrà creata una classe MFC, derivata da [COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md) per ogni interfaccia aggiunta dal tipo di libreria selezionato.  `COleDispatchDriver` implementa il lato client dell'automazione OLE.  
  
## Vedere anche  
 [Client di automazione](../../mfc/automation-clients.md)   
 [Client di automazione: utilizzo delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)