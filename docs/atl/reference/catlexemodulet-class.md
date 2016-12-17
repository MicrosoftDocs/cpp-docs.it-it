---
title: "CAtlExeModuleT Class | Microsoft Docs"
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
  - "ATL::CAtlExeModuleT<T>"
  - "CAtlExeModuleT"
  - "ATL.CAtlExeModuleT<T>"
  - "ATL::CAtlExeModuleT"
  - "ATL.CAtlExeModuleT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlExeModuleT class"
ms.assetid: 82245f3d-91d4-44fa-aa86-7cc7fbd758d9
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlExeModuleT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta il modulo per un'applicazione.  
  
## Sintassi  
  
```  
  
      template <  
   class T   
>  
class ATL_NO_VTABLE CAtlExeModuleT :  
   public CAtlModuleT< T >  
```  
  
#### Parametri  
 `T`  
 La classe derivata da `CAtlExeModuleT`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlExeModuleT::CAtlExeModuleT](../Topic/CAtlExeModuleT::CAtlExeModuleT.md)|Costruttore.|  
|[CAtlExeModuleT::~CAtlExeModuleT](../Topic/CAtlExeModuleT::~CAtlExeModuleT.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlExeModuleT::InitializeCom](../Topic/CAtlExeModuleT::InitializeCom.md)|Inizializza COM.|  
|[CAtlExeModuleT::ParseCommandLine](../Topic/CAtlExeModuleT::ParseCommandLine.md)|Analizza la riga di comando ed esegue la registrazione se necessario.|  
|[CAtlExeModuleT::PostMessageLoop](../Topic/CAtlExeModuleT::PostMessageLoop.md)|Questo metodo viene chiamato subito dopo la chiusura del ciclo di messaggi.|  
|[CAtlExeModuleT::PreMessageLoop](../Topic/CAtlExeModuleT::PreMessageLoop.md)|Questo metodo viene chiamato immediatamente prima di fornire il ciclo di messaggi.|  
|[CAtlExeModuleT::RegisterClassObjects](../Topic/CAtlExeModuleT::RegisterClassObjects.md)|Registra oggetto classe.|  
|[CAtlExeModuleT::RevokeClassObjects](../Topic/CAtlExeModuleT::RevokeClassObjects.md)|Revoca oggetto classe.|  
|[CAtlExeModuleT::Run](../Topic/CAtlExeModuleT::Run.md)|Questo metodo esegue il codice nel modulo EXE per inizializzare, esegue il ciclo di messaggi e pulita.|  
|[CAtlExeModuleT::RunMessageLoop](../Topic/CAtlExeModuleT::RunMessageLoop.md)|Questo metodo esegue il ciclo di messaggi.|  
|[CAtlExeModuleT::UninitializeCom](../Topic/CAtlExeModuleT::UninitializeCom.md)|COM di Uninitializes.|  
|[CAtlExeModuleT::Unlock](../Topic/CAtlExeModuleT::Unlock.md)|Decrementa il conteggio dei blocchi di modulo.|  
|[CAtlExeModuleT::WinMain](../Topic/CAtlExeModuleT::WinMain.md)|Questo metodo viene implementato il codice necessario per eseguire un file EXE.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlExeModuleT::m\_bDelayShutdown](../Topic/CAtlExeModuleT::m_bDelayShutdown.md)|Un flag che indica che deve essere un ritardo che interrompe il modulo.|  
|[CAtlExeModuleT::m\_dwPause](../Topic/CAtlExeModuleT::m_dwPause.md)|Un valore di sospensione utilizzati per fornire tutti gli oggetti viene rilasciato prima della chiusura.|  
|[CAtlExeModuleT::m\_dwTimeOut](../Topic/CAtlExeModuleT::m_dwTimeOut.md)|Un valore di timeout utilizzato per ritardare lo scaricamento di modulo.|  
  
## Note  
 `CAtlExeModuleT` rappresenta il modulo per un'applicazione \(EXE\) e contiene il codice che supporta creare un EXE, elaborare la riga di comando, registrare gli oggetti di classe, eseguire il ciclo di messaggi e pulire uscire.  
  
 Questa classe è progettata per migliorare le prestazioni quando gli oggetti COM nel server EXE continuamente creati e vengono eliminati.  Dopo l'ultimo oggetto COM viene rilasciato, attende EXE una durata è specificato dal membro dati [CAtlExeModuleT::m\_dwTimeOut](../Topic/CAtlExeModuleT::m_dwTimeOut.md).  Se non esiste alcuna attività durante questo periodo ovvero nessun oggetto COM viene creato\), il processo di chiusura viene avviato.  
  
 Il membro dati [CAtlExeModuleT::m\_bDelayShutdown](../Topic/CAtlExeModuleT::m_bDelayShutdown.md) è un flag utilizzato per determinare se la TECNOLOGIA utilizza il meccanismo definito in precedenza.  Se è impostato su false, il modulo verrà immediatamente.  
  
 Per ulteriori informazioni sui moduli in ATL, vedere [Classi del modulo ATL](../../atl/atl-module-classes.md).  
  
## Gerarchia di ereditarietà  
 [\_ATL\_MODULE](../Topic/_ATL_MODULE.md)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 `CAtlExeModuleT`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Esempio ATLDuck](../../top/visual-cpp-samples.md)   
 [CAtlModuleT Class](../../atl/reference/catlmodulet-class.md)   
 [CAtlDllModuleT Class](../../atl/reference/catldllmodulet-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)