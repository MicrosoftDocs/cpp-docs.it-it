---
title: "CAtlServiceModuleT Class | Microsoft Docs"
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
  - "ATL::CAtlServiceModuleT"
  - "ATL.CAtlServiceModuleT"
  - "CAtlServiceModuleT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlServiceModuleT class"
ms.assetid: 8fc753ce-4a50-402b-9b4a-0a4ce5dd496c
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlServiceModuleT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa un servizio.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T,  
UINT nServiceNameID   
>  
class ATL_NO_VTABLE CAtlServiceModuleT :  
public CAtlExeModuleT< T>  
```  
  
#### Parametri  
 `T`  
 La classe derivata da `CAtlServiceModuleT`.  
  
 *nServiceNameID*  
 L'identificatore della risorsa del servizio.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlServiceModuleT::CAtlServiceModuleT](../Topic/CAtlServiceModuleT::CAtlServiceModuleT.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlServiceModuleT::Handler](../Topic/CAtlServiceModuleT::Handler.md)|La routine del gestore del servizio.|  
|[CAtlServiceModuleT::InitializeSecurity](../Topic/CAtlServiceModuleT::InitializeSecurity.md)|Fornisce impostazioni di sicurezza predefinite per il servizio.|  
|[CAtlServiceModuleT::Install](../Topic/CAtlServiceModuleT::Install.md)|Installare e crea il servizio.|  
|[CAtlServiceModuleT::IsInstalled](../Topic/CAtlServiceModuleT::IsInstalled.md)|Verificare che il servizio è stato installato.|  
|[CAtlServiceModuleT::LogEvent](../Topic/CAtlServiceModuleT::LogEvent.md)|Scrive il log eventi.|  
|[CAtlServiceModuleT::OnContinue](../Topic/CAtlServiceModuleT::OnContinue.md)|Eseguire l'override di questo metodo per continuare il servizio.|  
|[CAtlServiceModuleT::OnInterrogate](../Topic/CAtlServiceModuleT::OnInterrogate.md)|Eseguire l'override di questo metodo per interrogare il servizio.|  
|[CAtlServiceModuleT::OnPause](../Topic/CAtlServiceModuleT::OnPause.md)|Eseguire l'override di questo metodo per sospendere il servizio.|  
|[CAtlServiceModuleT::OnShutdown](../Topic/CAtlServiceModuleT::OnShutdown.md)|Eseguire l'override di questo metodo per interrompere il servizio|  
|[CAtlServiceModuleT::OnStop](../Topic/CAtlServiceModuleT::OnStop.md)|Eseguire l'override di questo metodo per interrompere il servizio|  
|[CAtlServiceModuleT::OnUnknownRequest](../Topic/CAtlServiceModuleT::OnUnknownRequest.md)|Eseguire l'override di questo metodo per gestire richieste sconosciute al servizio|  
|[CAtlServiceModuleT::ParseCommandLine](../Topic/CAtlServiceModuleT::ParseCommandLine.md)|Analizza la riga di comando ed esegue la registrazione se necessario.|  
|[CAtlServiceModuleT::PreMessageLoop](../Topic/CAtlServiceModuleT::PreMessageLoop.md)|Questo metodo viene chiamato immediatamente prima di fornire il ciclo di messaggi.|  
|[CAtlServiceModuleT::RegisterAppId](../Topic/CAtlServiceModuleT::RegisterAppId.md)|Registra il servizio nel Registro di sistema.|  
|[CAtlServiceModuleT::Run](../Topic/CAtlServiceModuleT::Run.md)|Indica il servizio.|  
|[CAtlServiceModuleT::ServiceMain](../Topic/CAtlServiceModuleT::ServiceMain.md)|Il metodo chiamato da Gestione controllo servizi.|  
|[CAtlServiceModuleT::SetServiceStatus](../Topic/CAtlServiceModuleT::SetServiceStatus.md)|Aggiorna lo stato del servizio.|  
|[CAtlServiceModuleT::Start](../Topic/CAtlServiceModuleT::Start.md)|Chiamato da `CAtlServiceModuleT::WinMain` quando il servizio viene avviato.|  
|[CAtlServiceModuleT::Uninstall](../Topic/CAtlServiceModuleT::Uninstall.md)|Le interruzioni e rimuove il servizio.|  
|[CAtlServiceModuleT::Unlock](../Topic/CAtlServiceModuleT::Unlock.md)|Decrementa il conteggio dei blocchi del servizio.|  
|[CAtlServiceModuleT::UnregisterAppId](../Topic/CAtlServiceModuleT::UnregisterAppId.md)|Rimuove il servizio dal Registro di sistema.|  
|[CAtlServiceModuleT::WinMain](../Topic/CAtlServiceModuleT::WinMain.md)|Questo metodo viene implementato il codice richiesto di eseguire il servizio.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlServiceModuleT::m\_bService](../Topic/CAtlServiceModuleT::m_bService.md)|Il flag che indica il programma viene eseguito come servizio.|  
|[CAtlServiceModuleT::m\_dwThreadID](../Topic/CAtlServiceModuleT::m_dwThreadID.md)|Variabile membro che archivia identificatore del thread.|  
|[CAtlServiceModuleT::m\_hServiceStatus](../Topic/CAtlServiceModuleT::m_hServiceStatus.md)|Variabile membro che archivia un handle nella struttura di informazioni sullo stato del servizio corrente.|  
|[CAtlServiceModuleT::m\_status](../Topic/CAtlServiceModuleT::m_status.md)|Variabile membro che archivia la struttura di informazioni sullo stato del servizio corrente.|  
|[CAtlServiceModuleT::m\_szServiceName](../Topic/CAtlServiceModuleT::m_szServiceName.md)|Il nome del servizio che viene registrato.|  
  
## Note  
 `CAtlServiceModuleT`, derivato da [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md), implementa un modulo di servizio ATL.  `CAtlServiceModuleT` fornisce metodi per l'elaborazione, l'installazione, registrare e rimozione della riga di comando.  Se la funzionalità aggiuntiva necessaria, questi e altri metodi possono essere sottoposti a override.  
  
 Questa classe sostituisce [classe di CComModule](../../atl/reference/ccommodule-class.md) obsoleto utilizzato nelle versioni precedenti ATL.  Vedere [Classi del modulo ATL](../../atl/atl-module-classes.md) per ulteriori informazioni.  
  
## Gerarchia di ereditarietà  
 [\_ATL\_MODULE](../Topic/_ATL_MODULE.md)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)  
  
 `CAtlServiceModuleT`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CAtlExeModuleT Class](../../atl/reference/catlexemodulet-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)