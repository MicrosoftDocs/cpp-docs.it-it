---
title: "Implementing a Dialog Box | Microsoft Docs"
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
  - "ATL, finestre di dialogo"
  - "CAxDialogImpl class, implementing dialog boxes in ATL"
  - "CSimpleDialog class, implementing dialog boxes in ATL"
  - "finestre di dialogo, ATL"
ms.assetid: 478525f2-aa6a-435a-b162-68fc8aa98a8e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Implementing a Dialog Box
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono due modi per aggiungere una finestra di dialogo al progetto ATL: utilizzare la procedura guidata finestra di dialogo ATL o aggiungerlo manualmente.  
  
## Aggiunta della finestra di dialogo con la procedura guidata finestra di dialogo ATL  
 In [Aggiungere la finestra di dialogo della classe](../ide/add-class-dialog-box.md), selezionare l'oggetto finestra di dialogo ATL per aggiungere una finestra di dialogo al progetto ATL.  Completare la procedura guidata finestra di dialogo ATL in base alle esigenze e scegliere **Fine**.  La procedura guidata aggiunge una classe derivata da [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) al progetto.  Aprire la Visualizzazione risorse dal menu **Visualizza**, individuare la finestra di dialogo e fare doppio clic su per aprirla nell'editor di risorse.  
  
> [!NOTE]
>  Se la finestra di dialogo è derivata da `CAxDialogImpl`, può contenere sia ActiveX dei controlli Windows.  Per evitare l'overhead del supporto del controllo ActiveX nella classe della finestra di dialogo, utilizzare [CSimpleDialog](../atl/reference/csimpledialog-class.md) o [CDialogImpl](../atl/reference/cdialogimpl-class.md) anziché.  
  
 Il messaggio e i gestori eventi possono essere aggiunti alla classe della finestra di dialogo da Visualizzazione classi.  Per ulteriori informazioni, vedere [Aggiunta di un gestore messaggi ATL](../atl/adding-an-atl-message-handler.md).  
  
## Aggiunta di una finestra di dialogo manualmente  
 Implementare una finestra di dialogo è simile all'implementazione di una finestra.  Derivare la classe da [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md), da [CDialogImpl](../atl/reference/cdialogimpl-class.md), o da [CSimpleDialog](../atl/reference/csimpledialog-class.md) e si dichiara [mappa messaggi](../atl/message-maps-atl.md) per gestire i messaggi.  Tuttavia, è necessario specificare un ID di risorsa modello di finestra di dialogo nella classe derivata.  La classe deve disporre di un membro dati denominato `IDD` per utilizzare questo valore.  
  
> [!NOTE]
>  Quando si crea una finestra di dialogo utilizzando la procedura guidata finestra di dialogo ATL, la procedura guidata aggiungerà automaticamente il membro `IDD` come tipo `enum`.  
  
 `CDialogImpl` consente di distribuire un oggetto o una finestra di dialogo non modale che ospita controlli Windows.  `CAxDialogImpl` consente di distribuire un oggetto o una finestra di dialogo non modale che ospita sia ActiveX dei controlli Windows.  
  
 Per creare una finestra di dialogo modale, creare un'istanza del `CDialogImpl`\- \- deriva dalla classe derivata o `CAxDialogImpl`quindi chiama il metodo [DoModal](../Topic/CDialogImpl::DoModal.md).  Per chiudere una finestra di dialogo modale, chiamare il metodo [EndDialog](../Topic/CDialogImpl::EndDialog.md) da un gestore messaggi.  Per creare una finestra di dialogo non modale, chiamare il metodo [Crea](../Topic/CDialogImpl::Create.md) anziché `DoModal`.  Per eliminare una finestra di dialogo non modale, chiamare [DestroyWindow](../Topic/CDialogImpl::DestroyWindow.md).  
  
 Il affondamento degli eventi viene automaticamente eseguito in [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md).  Implementare i gestori di messaggi finestra di dialogo come gestori in `CWindowImpl`classe derivata da.  Se è presente un valore restituito messaggio\- specifico, restituirne il valore come `LRESULT`.  I valori restituiti `LRESULT` vengono mappati da ATL per gestione corretta dall'amministratore della finestra di dialogo di Windows.  Per informazioni dettagliate, vedere il codice sorgente per [CDialogImplBaseT::DialogProc](../Topic/CDialogImpl::DialogProc.md) in atlwin.h.  
  
## Esempio  
 La classe implementa una finestra di dialogo:  
  
 [!code-cpp[NVC_ATL_Windowing#66](../atl/codesnippet/CPP/implementing-a-dialog-box_1.h)]  
  
## Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)