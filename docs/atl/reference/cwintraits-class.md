---
title: "CWinTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWinTraits"
  - "CMDIChildWinTraits"
  - "ATL.CWinTraits"
  - "CFrameWinTraits"
  - "ATL::CWinTraits"
  - "CControlWinTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CControlWinTraits class"
  - "CFrameWinTraits class"
  - "CMDIChildWinTraits class"
  - "CWinTraits class"
  - "window styles, default values for ATL"
ms.assetid: f78f486e-6d9c-42c6-8e86-371e05aa7e59
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CWinTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce un metodo per la standardizzazione degli stili utilizzati quando si crea un oggetto finestra.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
DWORD t_dwStyle= 0,  
DWORD t_dwExStyle= 0  
>  
class CWinTraits  
```  
  
#### Parametri  
 `t_dwStyle`  
 Impostare stili predefiniti delle finestre standard.  
  
 `t_dwExStyle`  
 Stili estesi della finestra di impostazione predefinita.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinTraits::GetWndExStyle](../Topic/CWinTraits::GetWndExStyle.md)|\(Proprietà statica\) recupera gli stili estesi per l'oggetto `CWinTraits`.|  
|[CWinTraits::GetWndStyle](../Topic/CWinTraits::GetWndStyle.md)|\(Proprietà statica\) recupera gli stili standard per l'oggetto `CWinTraits`.|  
  
## Note  
 Questa classe [tratti della finestra](../../atl/understanding-window-traits.md) fornisce un metodo semplice per la standardizzazione degli stili utilizzati per la creazione di un oggetto window ATL.  Utilizzare una specializzazione di questa classe come parametro di modello a [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un altro classi della finestra ATL per specificare lo standard predefinito e gli stili estesi utilizzati per le istanze della classe della finestra.  
  
 Utilizzare questo modello quando si desidera fornire stili predefiniti della finestra che verranno utilizzati solo quando nessuno altro stile è specificato nella chiamata a [CWindowImpl::Create](../Topic/CWindowImpl::Create.md).  
  
 ATL fornisce tre specializzazioni predefinite del modello per le combinazioni di uso comune di stili della finestra:  
  
 `CControlWinTraits`  
 Progettato per una finestra di controllo standard.  Gli stili standard vengono utilizzati: **WS\_CHILD**, **WS\_VISIBLE**, **WS\_CLIPCHILDREN**e **WS\_CLIPSIBLINGS**.  Non esistono stili estesi.  
  
 `CFrameWinTraits`  
 Progettato per una finestra cornice standard.  Gli stili utilizzati standard includono: **WS\_OVERLAPPEDWINDOW**, **WS\_CLIPCHILDREN**e **WS\_CLIPSIBLINGS**.  Gli stili estesi utilizzati includono: **WS\_EX\_APPWINDOW** e **WS\_EX\_WINDOWEDGE**.  
  
 `CMDIChildWinTraits`  
 Progettato per una finestra figlio MDI standard.  Gli stili utilizzati standard includono: **WS\_OVERLAPPEDWINDOW**, **WS\_CHILD**, **WS\_VISIBLE**, **WS\_CLIPCHILDREN**e **WS\_CLIPSIBLINGS**.  Gli stili estesi utilizzati includono: **WS\_EX\_MDICHILD**.  
  
 Se si desidera che vengano determinati stili impostati per tutte le istanze della classe della finestra mentre altri stili consentono di essere impostato su una base di per istanza, l'utilizzo [CWinTraitsOR](../../atl/reference/cwintraitsor-class.md) anziché.  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Class Members](http://msdn.microsoft.com/it-it/dbe6a147-3f01-4aea-a3fb-fe6ebadc31f8)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Understanding Window Traits](../../atl/understanding-window-traits.md)