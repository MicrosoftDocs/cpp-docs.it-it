---
title: "Which ATL Classes Facilitate ActiveX Control Containment? | Microsoft Docs"
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
  - "contenitori dei controlli ActiveX [C++], ATL control hosting"
  - "hosting controls using ATL"
ms.assetid: 803a4605-7f4c-4139-8638-49d8783d31b0
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Which ATL Classes Facilitate ActiveX Control Containment?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il codice del controllo ospitato ATL non richiede di utilizzare alcune classi ATL, è possibile creare una semplice finestra **"AtlAxWin80"** e utilizzare il controllo API di hosting se necessario per ulteriori informazioni, vedere [Qual è il controllo API di Hosting ATL?](../atl/what-is-the-atl-control-hosting-api-q.md)\).  Tuttavia, le classi seguenti restituiscono le funzionalità di contenimento più facili da utilizzare.  
  
|Classe|Descrizione|  
|------------|-----------------|  
|[CAxWindow](../atl/reference/caxwindow-class.md)|Esegue il wrapping di una finestra **"AtlAxWin80"**, fornendo i metodi per creare la finestra, creare un controllo e\/o associare un controllo alla finestra e recuperare i puntatori a interfaccia sull'host.|  
|[CAxWindow2T](../atl/reference/caxwindow2t-class.md)|Esegue il wrapping di una finestra **"AtlAxWinLic80"**, fornendo i metodi per creare la finestra, creare un controllo e\/o associare un controllo concesso in licenza nella finestra e recuperare i puntatori a interfaccia sull'host.|  
|[CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md)|Funge da una classe base per le classi di controlli ActiveX in base a una risorsa finestra di dialogo.  Tali controlli possono contenere altri controlli ActiveX.|  
|[CAxDialogImpl](../atl/reference/caxdialogimpl-class.md)|Funge da una classe base per le classi di finestre di dialogo basate su una risorsa finestra di dialogo.  Tali finestre di dialogo possono contenere i controlli ActiveX.|  
|[CWindow](../atl/reference/cwindow-class.md)|Fornisce un metodo, [GetDlgControl](../Topic/CWindow::GetDlgControl.md), che restituirà un puntatore a interfaccia su un controllo, presente l'id della finestra host.  Inoltre, i wrapper di API Windows esposti da `CWindow` in genere rendono la gestione della finestra più semplice.|  
  
## Vedere anche  
 [Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)