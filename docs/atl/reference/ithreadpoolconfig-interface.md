---
title: "IThreadPoolConfig Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IThreadPoolConfig"
  - "ATL::IThreadPoolConfig"
  - "ATL.IThreadPoolConfig"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IThreadPoolConfig interface"
ms.assetid: 69e642bf-6925-46e6-9a37-cce52231b1cc
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# IThreadPoolConfig Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa interfaccia fornisce metodi per la configurazione del pool di thread.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      __interface  
__declspec(uuid("B1F64757-6E88-4fa2-8886-7848B0D7E660"))  
IThreadPoolConfig :  
public IUnknown  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[GetSize](../Topic/IThreadPoolConfig::GetSize.md)|Chiamare questo metodo per ottenere il numero di thread nel pool.|  
|[GetTimeout](../Topic/IThreadPoolConfig::GetTimeout.md)|Chiamare questo metodo per ottenere il tempo massimo in millisecondi che il pool di thread rimarrà un thread per interrompere.|  
|[SetSize](../Topic/IThreadPoolConfig::SetSize.md)|Chiamare questo metodo per impostare il numero di thread nel pool.|  
|[SetTimeout](../Topic/IThreadPoolConfig::SetTimeout.md)|Chiamare questo metodo per impostare il tempo massimo in millisecondi che il pool di thread rimarrà un thread per interrompere.|  
  
## Note  
 L'interfaccia viene implementata da [CThreadPool](../../atl/reference/cthreadpool-class.md).  
  
## Requisiti  
 **Header:** atlutil.h  
  
## Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)   
 [CThreadPool Class](../../atl/reference/cthreadpool-class.md)