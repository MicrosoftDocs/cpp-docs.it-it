---
title: "CAtlModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CAtlModule"
  - "CAtlModule"
  - "ATL.CAtlModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlModule class"
ms.assetid: 63fe02f1-4c4b-4e7c-ae97-7ad7b4252415
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CAtlModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi utilizzati da diverse classi di modulo ATL.  
  
## Sintassi  
  
```  
  
   class ATL_NO_VTABLE CAtlModule :  
public _ATL_MODULE  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModule::CAtlModule](../Topic/CAtlModule::CAtlModule.md)|Costruttore.|  
|[CAtlModule::~CAtlModule](../Topic/CAtlModule::~CAtlModule.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModule::AddCommonRGSReplacements](../Topic/CAtlModule::AddCommonRGSReplacements.md)|Eseguire l'override di questo metodo per aggiungere parametri alla mappa di sostituzione del componente ATL il Registro Di Sistema \(Ufficiale di registrar\).|  
|[CAtlModule::AddTermFunc](../Topic/CAtlModule::AddTermFunc.md)|Aggiunge una nuova funzione da chiamare quando il modulo.|  
|[CAtlModule::GetGITPtr](../Topic/CAtlModule::GetGITPtr.md)|Restituisce un puntatore a interfaccia globale.|  
|[CAtlModule::GetLockCount](../Topic/CAtlModule::GetLockCount.md)|Restituisce il conteggio dei blocchi.|  
|[CAtlModule::Lock](../Topic/CAtlModule::Lock.md)|Incrementa il conteggio dei blocchi.|  
|[CAtlModule::Term](../Topic/CAtlModule::Term.md)|Rilascia tutti i membri dati.|  
|[CAtlModule::Unlock](../Topic/CAtlModule::Unlock.md)|Consente di diminuire il conteggio dei blocchi.|  
|[CAtlModule::UpdateRegistryFromResourceD](../Topic/CAtlModule::UpdateRegistryFromResourceD.md)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|  
|[CAtlModule::UpdateRegistryFromResourceDHelper](../Topic/CAtlModule::UpdateRegistryFromResourceDHelper.md)|Questo metodo viene chiamato da `UpdateRegistryFromResourceD` per eseguire l'aggiornamento del Registro di sistema.|  
|[CAtlModule::UpdateRegistryFromResourceS](../Topic/CAtlModule::UpdateRegistryFromResourceS.md)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.  Collegamenti di questo metodo statico a componente ATL il Registro Di Sistema.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModule::m\_libid](../Topic/CAtlModule::m_libid.md)|Contiene il GUID del modulo corrente.|  
|[CAtlModule::m\_pGIT](../Topic/CAtlModule::m_pGIT.md)|Puntatore alla Tabella globale dell'interfaccia.|  
  
## Note  
 Questa classe viene utilizzata da [classe di CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md), da [classe di CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)e da [classe di CAtlServiceModuleT](../../atl/reference/catlservicemodulet-class.md) per fornire il supporto per le applicazioni di DLL, le applicazioni EXE e servizi Windows, rispettivamente.  
  
 Per ulteriori informazioni sui moduli in ATL, vedere [Classi del modulo ATL](../../atl/atl-module-classes.md).  
  
 Questa classe sostituisce [classe di CComModule](../../atl/reference/ccommodule-class.md) obsoleto utilizzato nelle versioni precedenti ATL.  
  
## Gerarchia di ereditarietà  
 [\_ATL\_MODULE](../Topic/_ATL_MODULE.md)  
  
 `CAtlModule`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [\_ATL\_MODULE](../Topic/_ATL_MODULE.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)   
 [Registro di sistema ATL \(Registrar\)](../../atl/atl-registry-component-registrar.md)