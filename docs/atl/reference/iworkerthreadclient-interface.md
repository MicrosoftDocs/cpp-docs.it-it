---
title: "IWorkerThreadClient Interface | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IWorkerThreadClient"
  - "ATL::IWorkerThreadClient"
  - "IWorkerThreadClient"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IWorkerThreadClient interface"
ms.assetid: 56f4a2f5-007e-4a33-9e20-05187629f715
caps.latest.revision: 24
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IWorkerThreadClient Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`IWorkerThreadClient` è l'interfaccia implementata dai client della classe [CWorkerThread](../../atl/reference/cworkerthread-class.md).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
__interface IWorkerThreadClient  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CloseHandle](../Topic/IWorkerThreadClient::CloseHandle.md)|Implementare il metodo per chiudere l'handle associate all'oggetto.|  
|[Execute](../Topic/IWorkerThreadClient::Execute.md)|Implementare il metodo per eseguire il codice quando l'handle associate a questo oggetto viene segnalato.|  
  
## Note  
 Implementare questa interfaccia quando si utilizza codice che deve essere eseguito in un thread di lavoro in risposta all'handle che vengono segnalati.  
  
## Requisiti  
 **Header:** atlutil.h  
  
## Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)   
 [CWorkerThread Class](../../atl/reference/cworkerthread-class.md)