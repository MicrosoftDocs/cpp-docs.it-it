---
title: "CAtlModuleT Class | Microsoft Docs"
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
  - "ATL::CAtlModuleT<T>"
  - "ATL.CAtlModuleT"
  - "ATL.CAtlModuleT<T>"
  - "ATL::CAtlModuleT"
  - "CAtlModuleT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlModuleT class"
ms.assetid: 9b74d02f-9117-47b1-a05e-c5945f83dd2b
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlModuleT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa un modulo ATL.  
  
## Sintassi  
  
```  
  
      template <  
   class T   
>   
class ATL_NO_VTABLE CAtlModuleT :  
   public CAtlModule  
```  
  
#### Parametri  
 `T`  
 La classe derivata da `CAtlModuleT`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModuleT::CAtlModuleT](../Topic/CAtlModuleT::CAtlModuleT.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModuleT::InitLibId](../Topic/CAtlModuleT::InitLibId.md)|Inizializzare il membro dati contenente il GUID del modulo corrente.|  
|[CAtlModuleT::RegisterAppId](../Topic/CAtlModuleT::RegisterAppId.md)|Aggiungere il FILE al Registro di sistema.|  
|[CAtlModuleT::RegisterServer](../Topic/CAtlModuleT::RegisterServer.md)|Aggiunge il servizio al Registro di sistema.|  
|[CAtlModuleT::UnregisterAppId](../Topic/CAtlModuleT::UnregisterAppId.md)|Rimuovere il FILE dal Registro di sistema.|  
|[CAtlModuleT::UnregisterServer](../Topic/CAtlModuleT::UnregisterServer.md)|Rimuove il servizio dal Registro di sistema.|  
|[CAtlModuleT::UpdateRegistryAppId](../Topic/CAtlModuleT::UpdateRegistryAppId.md)|Aggiorna le informazioni EXE nel Registro di sistema.|  
  
## Note  
 `CAtlModuleT`, derivato da [CAtlModule](../../atl/reference/catlmodule-class.md), implementa un eseguibile \(EXE\) o un modulo del servizio \(EXE\) ATL.  Un modulo eseguibile è un server locale e out\-of\-process, mentre un modulo di servizio è un'applicazione Windows che viene eseguito in background quando inizia Windows.  
  
 `CAtlModuleT` fornisce supporto per inizializzare, a registrare e per annullare la registrazione del modulo.  
  
## Gerarchia di ereditarietà  
 [\_ATL\_MODULE](../Topic/_ATL_MODULE.md)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 `CAtlModuleT`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CAtlModule Class](../../atl/reference/catlmodule-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)