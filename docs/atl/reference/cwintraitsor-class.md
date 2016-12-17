---
title: "CWinTraitsOR Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CWinTraitsOR"
  - "ATL::CWinTraitsOR"
  - "CWinTraitsOR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinTraitsOR class"
  - "window styles, default values for ATL"
ms.assetid: 1eb7b1e8-a9bd-411b-a30a-35a8a10af989
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWinTraitsOR Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce un metodo per la standardizzazione degli stili utilizzati quando si crea un oggetto finestra.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
DWORD t_dwStyle= 0,  
DWORDt_dwExStyle= 0,  
class TWinTraits = CControlWinTraits   
>  
class CWinTraitsOR  
```  
  
#### Parametri  
 `t_dwStyle`  
 Stili predefiniti della finestra.  
  
 `t_dwExStyle`  
 Stili estesi della finestra di impostazione predefinita.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinTraitsOR::GetWndExStyle](../Topic/CWinTraitsOR::GetWndExStyle.md)|Recupera gli stili estesi per l'oggetto `CWinTraitsOR`.|  
|[CWinTraitsOR::GetWndStyle](../Topic/CWinTraitsOR::GetWndStyle.md)|Recupera gli stili standard per l'oggetto `CWinTraitsOR`.|  
  
## Note  
 Questa classe [tratti della finestra](../../atl/understanding-window-traits.md) fornisce un metodo semplice per la standardizzazione degli stili utilizzati per la creazione di un oggetto window ATL.  Utilizzare una specializzazione di questa classe come parametro di modello a [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un altro classi della finestra ATL per specificare il set minimo standard e degli stili estesi da utilizzare per le istanze della classe della finestra.  
  
 Utilizzare una specializzazione di questo modello per garantire che vengano determinati stili impostati per tutte le istanze della classe della finestra mentre altri stili consentono di essere impostato su una base di per istanza nella chiamata a [CWindowImpl::Create](../Topic/CWindowImpl::Create.md).  
  
 Se si desidera fornire stili predefiniti della finestra che verranno utilizzati solo quando nessuno altro stile è specificato nella chiamata a `CWindowImpl::Create`, utilizzare [CWinTraits](../../atl/reference/cwintraits-class.md) anziché.  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Understanding Window Traits](../../atl/understanding-window-traits.md)