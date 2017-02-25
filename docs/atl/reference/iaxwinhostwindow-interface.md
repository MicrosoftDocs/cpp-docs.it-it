---
title: "IAxWinHostWindow Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IAxWinHostWindow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAxWinHostWindow interface"
ms.assetid: 9821c035-cd52-4c46-b58a-9278064f09b4
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# IAxWinHostWindow Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa interfaccia fornisce metodi per modificare un controllo e il relativo oggetto host.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
interface IAxWinHostWindow : IUnknown  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AttachControl](../Topic/IAxWinHostWindow::AttachControl.md)|Associa un controllo esistente all'oggetto host.|  
|[CreateControl](../Topic/IAxWinHostWindow::CreateControl.md)|Crea un controllo e lo aggiunge all'oggetto host.|  
|[CreateControlEx](../Topic/IAxWinHostWindow::CreateControlEx.md)|Crea un controllo, lo aggiunge all'oggetto host e facoltativamente l'installazione di un gestore eventi.|  
|[QueryControl](../Topic/IAxWinHostWindow::QueryControl.md)|Restituisce un puntatore a interfaccia al controllo ospitato.|  
|[SetExternalDispatch](../Topic/IAxWinHostWindow::SetExternalDispatch.md)|Imposta l'interfaccia esterna `IDispatch`.|  
|[SetExternalUIHandler](../Topic/IAxWinHostWindow::SetExternalUIHandler.md)|Imposta l'interfaccia esterna `IDocHostUIHandlerDispatch`.|  
  
## Note  
 Questa interfaccia è esposta dagli oggetti di hosting di controlli ActiveX ATL.  Chiamare i metodi su questa interfaccia per creare e\/o associare un controllo all'oggetto host, per ottenere un'interfaccia da un controllo ospitato, o per impostare l'interfaccia dispatch o gestore esterna dell'interfaccia utente da utilizzare per l'hosting nel browser.  
  
## Requisiti  
 La definizione di questa interfaccia è disponibile come IDL o C\+\+, come illustrato di seguito.  
  
|Tipo di definizione|File|  
|-------------------------|----------|  
|IDL|ATLIFace.idl|  
|C\+\+|ATLIFace.h \(anche incluso in ATLBase.h\)|  
  
## Vedere anche  
 [IAxWinAmbientDispatch Interface](../../atl/reference/iaxwinambientdispatch-interface.md)   
 [CAxWindow::QueryHost](../Topic/CAxWindow::QueryHost.md)   
 [AtlAxGetHost](../Topic/AtlAxGetHost.md)