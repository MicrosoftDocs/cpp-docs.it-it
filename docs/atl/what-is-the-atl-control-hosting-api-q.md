---
title: "What Is the ATL Control-Hosting API? | Microsoft Docs"
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
  - "API [C++], hosting"
  - "control-hosting API"
  - "controlli [ATL], API di hosting"
ms.assetid: 75b27e45-cfba-4950-aa35-96cc7d8da753
caps.latest.revision: 15
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# What Is the ATL Control-Hosting API?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il controllo API di hosting ATL è il set di funzioni che consente a qualsiasi finestra fungono da contenitore di controlli ActiveX.  Queste funzioni consentono il collegamento statico o dinamico nel progetto poiché sono disponibili come codice sorgente ed esposto da ATL90.dll.  Le funzioni di controlli host sono elencate nella tabella riportata di seguito.  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[AtlAxAttachControl](../Topic/AtlAxAttachControl.md)|Crea un oggetto host, lo connette alla finestra fornita, si associa un controllo esistente.|  
|[AtlAxCreateControl](../Topic/AtlAxCreateControl.md)|Crea un oggetto host, lo connette alla finestra fornita, quindi carica un controllo.|  
|[AtlAxCreateControlLic](../Topic/AtlAxCreateControlLic.md)|Crea un controllo ActiveX con licenza, la inizializza e lo ospita nella finestra specificata, simile a [AtlAxCreateControl](../Topic/AtlAxCreateControl.md).|  
|[AtlAxCreateControlEx](../Topic/AtlAxCreateControlEx.md)|Crea un oggetto host, lo connette alla finestra fornita, quindi carica un controllo \(consente inoltre ai sink di evento da installare\).|  
|[AtlAxCreateControlLicEx](../Topic/AtlAxCreateControlLicEx.md)|Crea un controllo ActiveX con licenza, la inizializza e lo ospita nella finestra specificata, simile a [AtlAxCreateControlLic](../Topic/AtlAxCreateControlLic.md).|  
|[AtlAxCreateDialog](../Topic/AtlAxCreateDialog.md)|Crea una finestra di dialogo non modale da una risorsa finestra di dialogo e restituisce l'handle della finestra.|  
|[AtlAxDialogBox](../Topic/AtlAxDialogBox.md)|Crea una finestra di dialogo modale da una risorsa finestra di dialogo.|  
|[AtlAxGetControl](../Topic/AtlAxGetControl.md)|Restituisce un puntatore a interfaccia **IUnknown** del controllo ospitato in una finestra.|  
|[AtlAxGetHost](../Topic/AtlAxGetHost.md)|Restituisce un puntatore a interfaccia **IUnknown** dell'oggetto host connesso a una finestra.|  
|[AtlAxWinInit](../Topic/AtlAxWinInit.md)|Inizializza il codice del controllo ospitato.|  
|[AtlAxWinTerm](../Topic/AtlAxWinTerm.md)|Uninitializes il codice del controllo ospitato.|  
  
 I parametri `HWND` nelle prime tre funzioni devono essere una finestra esistente \(quasi\) di qualsiasi tipo.  Se si chiama uno di questi tre funzioni in modo esplicito \(in genere, non è necessario\), non passare l'handle della finestra già viene utilizzato come host \(in questo caso, l'oggetto host esistente non sarà liberato\).  
  
 La prima chiamata di sette funzioni [AtlAxWinInit](../Topic/AtlAxWinInit.md) in modo implicito.  
  
> [!NOTE]
>  Il controllo API di hosting costituisce la base del supporto ATL a contenimento del controllo ActiveX.  Tuttavia, esiste in genere un occorre chiamare direttamente le funzioni se si avvale di o utilizzare appieno le classi wrapper ATL.  Per ulteriori informazioni, vedere [Quale le classi ATL facilita il contenimento del controllo ActiveX?](../atl/which-atl-classes-facilitate-activex-control-containment-q.md).  
  
## Vedere anche  
 [Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)