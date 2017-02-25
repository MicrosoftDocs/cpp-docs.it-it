---
title: "CAtlBaseModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CAtlBaseModule"
  - "ATL.CAtlBaseModule"
  - "CAtlBaseModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlBaseModule class"
ms.assetid: 55ade80c-9b0c-4c51-933e-2158436c1096
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# CAtlBaseModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene creata un'istanza in ogni progetto ATL.  
  
## Sintassi  
  
```  
  
   class CAtlBaseModule :  
public _ATL_BASE_MODULE  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlBaseModule::CAtlBaseModule](../Topic/CAtlBaseModule::CAtlBaseModule.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlBaseModule::AddResourceInstance](../Topic/CAtlBaseModule::AddResourceInstance.md)|Aggiunge un'istanza delle risorse all'elenco di handle memorizzato.|  
|[CAtlBaseModule::GetHInstanceAt](../Topic/CAtlBaseModule::GetHInstanceAt.md)|Restituisce un handle a una determinata istanza di risorse.|  
|[CAtlBaseModule::GetModuleInstance](../Topic/CAtlBaseModule::GetModuleInstance.md)|Restituisce l'istanza di modulo da un oggetto `CAtlBaseModule`.|  
|[CAtlBaseModule::GetResourceInstance](../Topic/CAtlBaseModule::GetResourceInstance.md)|Restituisce l'istanza di risorse da un oggetto `CAtlBaseModule`.|  
|[CAtlBaseModule::RemoveResourceInstance](../Topic/CAtlBaseModule::RemoveResourceInstance.md)|Rimuove un'istanza di risorse dall'elenco di handle memorizzato.|  
|[CAtlBaseModule::SetResourceInstance](../Topic/CAtlBaseModule::SetResourceInstance.md)|Imposta l'istanza delle risorse di un oggetto `CAtlBaseModule`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlBaseModule::m\_bInitFailed](../Topic/CAtlBaseModule::m_bInitFailed.md)|Una variabile che indica se l'inizializzazione del modulo non è riuscita.|  
  
## Note  
 Un'istanza `CAtlBaseModule` denominato il \_AtlBaseModule è presente in ogni progetto ATL, contenente un handle all'istanza del form, handle del modulo contenente le risorse \(che per impostazione predefinita, sono fondamentali e le stesse\) e una matrice di handle ai moduli contenenti le risorse principale.  `CAtlBaseModule` in modo sicuro possibile accedere da più thread.  
  
 Questa classe sostituisce la classe precedente [CComModule](../../atl/reference/ccommodule-class.md) utilizzata nelle versioni precedenti ATL.  
  
## Gerarchia di ereditarietà  
 [\_ATL\_BASE\_MODULE](../Topic/_ATL_BASE_MODULE.md)  
  
 `CAtlBaseModule`  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)