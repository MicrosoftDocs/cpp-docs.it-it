---
title: Funzioni globali di identificatore di sicurezza | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlsecurity/ATL::Sids::AccountOps
- atlsecurity/ATL::Sids::Admins
- atlsecurity/ATL::Sids::AnonymousLogon
- atlsecurity/ATL::Sids::AuthenticatedUser
- atlsecurity/ATL::Sids::BackupOps
- atlsecurity/ATL::Sids::Batch
- atlsecurity/ATL::Sids::CreatorGroup
- atlsecurity/ATL::Sids::CreatorGroupServer
- atlsecurity/ATL::Sids::CreatorOwner
- atlsecurity/ATL::Sids::CreatorOwnerServer
- atlsecurity/ATL::Sids::Dialup
- atlsecurity/ATL::Sids::Guests
- atlsecurity/ATL::Sids::Interactive
- atlsecurity/ATL::Sids::Local
- atlsecurity/ATL::Sids::Network
- atlsecurity/ATL::Sids::NetworkService
- atlsecurity/ATL::Sids::Null
- atlsecurity/ATL::Sids::PowerUsers
- atlsecurity/ATL::Sids::PrintOps
- atlsecurity/ATL::Sids::Proxy
- atlsecurity/ATL::Sids::RasServers
- atlsecurity/ATL::Sids::Replicator
- atlsecurity/ATL::Sids::RestrictedCode
- atlsecurity/ATL::Sids::Self
- atlsecurity/ATL::Sids::ServerLogon
- atlsecurity/ATL::Sids::Service
- atlsecurity/ATL::Sids::System
- atlsecurity/ATL::Sids::SystemOps
- atlsecurity/ATL::Sids::TerminalServer
- atlsecurity/ATL::Sids::Users
- atlsecurity/ATL::Sids::World
dev_langs:
- C++
helpviewer_keywords:
- security IDs [C++]
- SIDs [C++], returning SID objects
ms.assetid: 85404dcb-c59b-4535-ab3d-66cfa37e87de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 153436ab5d05d0355d85ca165b2bfba9ae86d534
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32365155"
---
# <a name="security-identifier-global-functions"></a>Funzioni globali di identificatore di sicurezza
Queste funzioni restituiscono SID noto comuni di oggetti.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.  
  
|||  
|-|-|  
|[Sids::AccountOps](#accountops)|Restituisce il SID di DOMAIN_ALIAS_RID_ACCOUNT_OPS.|  
|[Sids::Admins](#admins)|Restituisce il SID di DOMAIN_ALIAS_RID_ADMINS.|  
|[Sids::AnonymousLogon](#anonymouslogon)|Restituisce il SID di SECURITY_ANONYMOUS_LOGON_RID.|  
|[Sids::AuthenticatedUser](#authenticateduser)|Restituisce il SID di SECURITY_AUTHENTICATED_USER_RID.|  
|[Sids::BackupOps](#backupops)|Restituisce il SID di DOMAIN_ALIAS_RID_BACKUP_OPS.|  
|[Sids::batch](#batch)|Restituisce il SID di SECURITY_BATCH_RID.|  
|[Sids::CreatorGroup](#creatorgroup)|Restituisce il SID di SECURITY_CREATOR_GROUP_RID.|  
|[Sids::CreatorGroupServer](#creatorgroupserver)|Restituisce il SID di SECURITY_CREATOR_GROUP_SERVER_RID.|  
|[Sids::CreatorOwner](#creatorowner)|Restituisce il SID di SECURITY_CREATOR_OWNER_RID.|  
|[Sids::CreatorOwnerServer](#creatorownerserver)|Restituisce il SID di SECURITY_CREATOR_OWNER_SERVER_RID.|  
|[Sids::Dialup](#dialup)|Restituisce il SID di SECURITY_DIALUP_RID.|  
|[Sids::Guests](#guests)|Restituisce il SID di DOMAIN_ALIAS_RID_GUESTS.|  
|[Sids::Interactive](#interactive)|Restituisce il SID di SECURITY_INTERACTIVE_RID.|  
|[Sids::Local](#local)|Restituisce il SID di SECURITY_LOCAL_RID.|  
|[Sids::Network](#network)|Restituisce il SID di SECURITY_NETWORK_RID.|  
|[Sids::NetworkService](#networkservice)|Restituisce il SID di SECURITY_NETWORK_SERVICE_RID.|  
|[Sids::null](#null)|Restituisce il SID di SECURITY_NULL_RID.|  
|[Sids::PreW2KAccess](#prew2kaccess)|Restituisce il SID di DOMAIN_ALIAS_RID_PREW2KCOMPACCESS.|  
|[Sids::PowerUsers](#powerusers)|Restituisce il SID di DOMAIN_ALIAS_RID_POWER_USERS.|  
|[Sids::PrintOps](#printops)|Restituisce il SID di DOMAIN_ALIAS_RID_PRINT_OPS.|  
|[Sids::proxy](#proxy)|Restituisce il SID di SECURITY_PROXY_RID.|  
|[Sids::RasServers](#rasservers)|Restituisce il SID di DOMAIN_ALIAS_RID_RAS_SERVERS.|  
|[Sids::Replicator](#replicator)|Restituisce il SID di DOMAIN_ALIAS_RID_REPLICATOR.|  
|[Sids::RestrictedCode](#restrictedcode)|Restituisce il SID di SECURITY_RESTRICTED_CODE_RID.|  
|[Sids::self](#self)|Restituisce il SID di SECURITY_PRINCIPAL_SELF_RID.|  
|[Sids::ServerLogon](#serverlogon)|Restituisce il SID di SECURITY_SERVER_LOGON_RID.|  
|[Sids::Service](#service)|Restituisce il SID di SECURITY_SERVICE_RID.|  
|[Sids::System](#system)|Restituisce il SID di SECURITY_LOCAL_SYSTEM_RID.|  
|[Sids::SystemOps](#systemops)|Restituisce il SID di DOMAIN_ALIAS_RID_SYSTEM_OPS.|  
|[Sids::TerminalServer](#terminalserver)|Restituisce il SID di SECURITY_TERMINAL_SERVER_RID.|  
|[Sids::Users](#users)|Restituisce il SID di DOMAIN_ALIAS_RID_USERS.|  
|[Sids::World](#world)|Restituisce il SID di SECURITY_WORLD_RID.|  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 

##  <a name="accountops"></a>  Sids::AccountOps  
 Restituisce il SID di DOMAIN_ALIAS_RID_ACCOUNT_OPS.    
  
```
CSid AccountOps() throw(...);
```  
  
##  <a name="admins"></a>  Sids::Admins  
 Restituisce il SID di DOMAIN_ALIAS_RID_ADMINS.  
```
CSid Admins() throw(...);
```  
  
##  <a name="anonymouslogon"></a>  Sids::AnonymousLogon  
 Restituisce il SID di SECURITY_ANONYMOUS_LOGON_RID.  
```
CSid AnonymousLogon() throw(...);
```  
  
##  <a name="authenticateduser"></a>  Sids::AuthenticatedUser  
 Restituisce il SID di SECURITY_AUTHENTICATED_USER_RID.  
```
CSid AuthenticatedUser() throw(...);
```  
  
##  <a name="backupops"></a>  Sids::BackupOps  
 Restituisce il SID di DOMAIN_ALIAS_RID_BACKUP_OPS.  
```
CSid BackupOps() throw(...);
```  
  
##  <a name="batch"></a>  Sids::batch  
 Restituisce il SID di SECURITY_BATCH_RID.  
```
CSid Batch() throw(...);
```  
  
##  <a name="creatorgroup"></a>  Sids::CreatorGroup  
 Restituisce il SID di SECURITY_CREATOR_GROUP_RID.  
```
CSid CreatorGroup() throw(...);
```  
  
##  <a name="creatorgroupserver"></a>  Sids::CreatorGroupServer  
 Restituisce il SID di SECURITY_CREATOR_GROUP_SERVER_RID.  
```
CSid CreatorGroupServer() throw(...);
```  
  
##  <a name="creatorowner"></a>  Sids::CreatorOwner  
 Restituisce il SID di SECURITY_CREATOR_OWNER_RID.  
```
CSid CreatorOwner() throw(...);
```  
  
##  <a name="creatorownerserver"></a>  Sids::CreatorOwnerServer  
 Restituisce il SID di SECURITY_CREATOR_OWNER_SERVER_RID.  
```
CSid CreatorOwnerServer() throw(...);
```  
  
##  <a name="dialup"></a>  Sids::Dialup  
 Restituisce il SID di SECURITY_DIALUP_RID.  
```
CSid Dialup() throw(...);
```  
  
##  <a name="guests"></a>  Sids::Guests  
 Restituisce il SID di DOMAIN_ALIAS_RID_GUESTS.  
```
CSid Guests() throw(...);
```  
  
##  <a name="interactive"></a>  Sids::Interactive  
 Restituisce il SID di SECURITY_INTERACTIVE_RID.  
```
CSid Interactive() throw(...);
```  
  
##  <a name="local"></a>  Sids::Local  
 Restituisce il SID di SECURITY_LOCAL_RID.  
```
CSid Local() throw(...);
```  
  
##  <a name="network"></a>  Sids::Network  
 Restituisce il SID di SECURITY_NETWORK_RID.  
```
CSid Network() throw(...);
```  
  
##  <a name="networkservice"></a>  Sids::NetworkService  
 Restituisce il SID di SECURITY_NETWORK_SERVICE_RID.  
```
CSid NetworkService() throw(...);
```  
  
### <a name="remarks"></a>Note  
 Per abilitare l'utente NT Authority\Servizio di rete per la lettura di un oggetto di sicurezza CPerfMon, utilizzare NetworkService. NetworkService aggiunge un stato al codice ATL Server consentirà la DLL di eseguire l'accesso con l'account NetworkService a [!INCLUDE[WinXpFamily](../../atl/reference/includes/winxpfamily_md.md)] e maggiore del sistema operativo.  
  
 Quando i contatori di log personalizzati vengono creati con le classi ATLServer CPerfMon in MMC di Perfmon, i contatori potrebbero emergere quando si visualizza il file di log, sebbene vengano visualizzati correttamente nella visualizzazione in tempo reale. Contatori delle prestazioni personalizzati CPerfMon non dispone delle autorizzazioni necessarie per l'esecuzione con il servizio "Avvisi e registri di prestazioni" (smlogsvc.exe) [!INCLUDE[WinXpFamily](../../atl/reference/includes/winxpfamily_md.md)] (o versione successiva) i sistemi operativi. Questo servizio viene eseguito con l'account "NT AUTHORITY\NetworkService".  
  
##  <a name="null"></a>  Sids::null  
 Restituisce il SID di SECURITY_NULL_RID.  
```
CSid Null() throw(...);
```  
  
##  <a name="prew2kaccess"></a>  Sids::PreW2KAccess  
 Restituisce il SID di DOMAIN_ALIAS_RID_PREW2KCOMPACCESS.  
```
CSid PreW2KAccess() throw(...);
```  
  
##  <a name="powerusers"></a>  Sids::PowerUsers  
 Restituisce il SID di DOMAIN_ALIAS_RID_POWER_USERS.  
```
CSid PowerUsers() throw(...);
```  
  
##  <a name="printops"></a>  Sids::PrintOps  
 Restituisce il SID di DOMAIN_ALIAS_RID_PRINT_OPS.  
```
CSid PrintOps() throw(...);
```  
  
##  <a name="proxy"></a>  Sids::proxy  
 Restituisce il SID di SECURITY_PROXY_RID.  
```
CSid Proxy() throw(...);
```  
  
##  <a name="rasservers"></a>  Sids::RasServers  
 Restituisce il SID di DOMAIN_ALIAS_RID_RAS_SERVERS.  
```
CSid RasServers() throw(...);
```  
  
##  <a name="replicator"></a>  Sids::Replicator  
 Restituisce il SID di DOMAIN_ALIAS_RID_REPLICATOR.  
```
CSid Replicator() throw(...);
```  
  
##  <a name="restrictedcode"></a>  Sids::RestrictedCode  
 Restituisce il SID di SECURITY_RESTRICTED_CODE_RID.  
```
CSid RestrictedCode() throw(...);
```  
  
##  <a name="self"></a>  Sids::self  
 Restituisce il SID di SECURITY_PRINCIPAL_SELF_RID.  
```
CSid Self() throw(...);
```  
  
##  <a name="serverlogon"></a>  Sids::ServerLogon  
 Restituisce il SID di SECURITY_SERVER_LOGON_RID.  
```
CSid ServerLogon() throw(...);
```  
  
##  <a name="service"></a>  Sids::Service  
 Restituisce il SID di SECURITY_SERVICE_RID.  
```
CSid Service() throw(...);
```  
  
##  <a name="system"></a>  Sids::System  
 Restituisce il SID di SECURITY_LOCAL_SYSTEM_RID.  
```
CSid System() throw(...);
```  
  
##  <a name="systemops"></a>  Sids::SystemOps  
 Restituisce il SID di DOMAIN_ALIAS_RID_SYSTEM_OPS.  
```
CSid SystemOps() throw(...);
```  
  
##  <a name="terminalserver"></a>  Sids::TerminalServer  
 Restituisce il SID di SECURITY_TERMINAL_SERVER_RID.  
```
CSid TerminalServer() throw(...);
```  
  
##  <a name="users"></a>  Sids::Users  
 Restituisce il SID di DOMAIN_ALIAS_RID_USERS.  
```
CSid Users() throw(...);
```  
  
##  <a name="world"></a>  Sids::World  
 Restituisce il SID di SECURITY_WORLD_RID.  
```
CSid World() throw(...);
```  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)
