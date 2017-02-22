---
title: "Composite Control Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli composti, funzioni globali"
ms.assetid: 536884cd-e863-4c7a-ab0a-604dc60a0bbe
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Composite Control Global Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste funzioni consentono il supporto per la creazione di finestre di dialogo e creare, all'hosting e le licenze controlli ActiveX.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlAxDialogBox](../Topic/AtlAxDialogBox.md)|Crea una finestra di dialogo modale da un modello di finestra di dialogo specificata dall'utente.  La finestra di dialogo risultante può contenere controlli ActiveX.|  
|[AtlAxCreateDialog](../Topic/AtlAxCreateDialog.md)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo specificata dall'utente.  La finestra di dialogo risultante può contenere controlli ActiveX.|  
|[AtlAxCreateControl](../Topic/AtlAxCreateControl.md)|Crea un controllo ActiveX, la inizializza e lo ospita nella finestra specificata.|  
|[AtlAxCreateControlEx](../Topic/AtlAxCreateControlEx.md)|Crea un controllo ActiveX, la inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia \(o puntatori\) dal controllo.|  
|[AtlAxCreateControlLic](../Topic/AtlAxCreateControlLic.md)|Crea un controllo ActiveX con licenza, la inizializza e lo ospita nella finestra specificata.|  
|[AtlAxCreateControlLicEx](../Topic/AtlAxCreateControlLicEx.md)|Crea un controllo ActiveX con licenza, la inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia \(o puntatori\) dal controllo.|  
|[AtlAxAttachControl](../Topic/AtlAxAttachControl.md)|Associa un controllo creato in precedenza nella finestra specificata.|  
|[AtlAxGetHost](../Topic/AtlAxGetHost.md)|Utilizzato per ottenere un puntatore a interfaccia diretto al contenitore per una finestra specifica se presente, con le relative handle.|  
|[AtlAxGetControl](../Topic/AtlAxGetControl.md)|Utilizzato per ottenere un puntatore a interfaccia diretto all'interno contenuto in una finestra specifica se presente, in base alle relative handle.|  
|[AtlSetChildSite](../Topic/AtlSetChildSite.md)|Inizializza **IUnknown** il sito figlio.|  
|[AtlAxWinInit](../Topic/AtlAxWinInit.md)|Inizializza il codice di hosting per gli oggetti di AxWin.|  
|[AtlAxWinTerm](../Topic/AtlAxWinTerm.md)|Uninitializes il codice di hosting per gli oggetti di AxWin.|  
|[AtlGetObjectSourceInterface](../Topic/AtlGetObjectSourceInterface.md)|Le informazioni di tornare su impostato come valore predefinito l'interfaccia di origine di un oggetto.|  
  
## Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Composite Control Macros](../../atl/reference/composite-control-macros.md)