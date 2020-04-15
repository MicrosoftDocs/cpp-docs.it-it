---
title: Funzioni globali dell'identificatore di sicurezzaSecurity Identifier Global Functions
ms.date: 11/04/2016
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
helpviewer_keywords:
- security IDs [C++]
- SIDs [C++], returning SID objects
ms.assetid: 85404dcb-c59b-4535-ab3d-66cfa37e87de
ms.openlocfilehash: 83326c13de7585806ab841f728f587f1131b5e8d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325986"
---
# <a name="security-identifier-global-functions"></a>Funzioni globali dell'identificatore di sicurezzaSecurity Identifier Global Functions

Queste funzioni restituiscono oggetti SID noti comuni.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[Sids::AccountOps](#accountops)|Restituisce il SID di DOMAIN_ALIAS_RID_ACCOUNT_OPS.|
|[Sids::Admins](#admins)|Restituisce il SID di DOMAIN_ALIAS_RID_ADMINS.|
|[Sids::AnonymousLogon](#anonymouslogon)|Restituisce il SID di SECURITY_ANONYMOUS_LOGON_RID.|
|[Sids::AuthenticatedUser](#authenticateduser)|Restituisce il SID di SECURITY_AUTHENTICATED_USER_RID.|
|[Sids::BackupOps](#backupops)|Restituisce il SID di DOMAIN_ALIAS_RID_BACKUP_OPS.|
|[Sids::Batch](#batch)|Restituisce il SID di SECURITY_BATCH_RID.|
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
|[Sids::Null](#null)|Restituisce il SID di SECURITY_NULL_RID.|
|[Sids::PreW2KAccess](#prew2kaccess)|Restituisce il SID di DOMAIN_ALIAS_RID_PREW2KCOMPACCESS.|
|[Sids::PowerUsers](#powerusers)|Restituisce il SID di DOMAIN_ALIAS_RID_POWER_USERS.|
|[Sids::PrintOps](#printops)|Restituisce il SID di DOMAIN_ALIAS_RID_PRINT_OPS.|
|[Sids::Proxy](#proxy)|Restituisce il SID di SECURITY_PROXY_RID.|
|[Sids::RasServers](#rasservers)|Restituisce il SID di DOMAIN_ALIAS_RID_RAS_SERVERS.|
|[Sids::Replicator](#replicator)|Restituisce il SID di DOMAIN_ALIAS_RID_REPLICATOR.|
|[Sids::RestrictedCode](#restrictedcode)|Restituisce il SID di SECURITY_RESTRICTED_CODE_RID.|
|[Sids::Self](#self)|Restituisce il SID di SECURITY_PRINCIPAL_SELF_RID.|
|[Sids::ServerLogon](#serverlogon)|Restituisce il SID di SECURITY_SERVER_LOGON_RID.|
|[Sids::Service](#service)|Restituisce il SID di SECURITY_SERVICE_RID.|
|[Sids::System](#system)|Restituisce il SID di SECURITY_LOCAL_SYSTEM_RID.|
|[Sids::SystemOps](#systemops)|Restituisce il SID di DOMAIN_ALIAS_RID_SYSTEM_OPS.|
|[Sids::TerminalServer](#terminalserver)|Restituisce il SID di SECURITY_TERMINAL_SERVER_RID.|
|[Sids::Users](#users)|Restituisce il SID di DOMAIN_ALIAS_RID_USERS.|
|[Sids::Mondo](#world)|Restituisce il SID di SECURITY_WORLD_RID.|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="sidsaccountops"></a><a name="accountops"></a>Sids::AccountOps

Restituisce il SID di DOMAIN_ALIAS_RID_ACCOUNT_OPS.

```
CSid AccountOps() throw(...);
```

## <a name="sidsadmins"></a><a name="admins"></a>Sids::Admins

Restituisce il SID di DOMAIN_ALIAS_RID_ADMINS.

```
CSid Admins() throw(...);
```

## <a name="sidsanonymouslogon"></a><a name="anonymouslogon"></a>Sids::Accesso anonimo

Restituisce il SID di SECURITY_ANONYMOUS_LOGON_RID.

```
CSid AnonymousLogon() throw(...);
```

## <a name="sidsauthenticateduser"></a><a name="authenticateduser"></a>Sids::AuthenticatedUser (UtentiSids::AuthenticatedUser)

Restituisce il SID di SECURITY_AUTHENTICATED_USER_RID.

```
CSid AuthenticatedUser() throw(...);
```

## <a name="sidsbackupops"></a><a name="backupops"></a>Sids::BackupOps

Restituisce il SID di DOMAIN_ALIAS_RID_BACKUP_OPS.

```
CSid BackupOps() throw(...);
```

## <a name="sidsbatch"></a><a name="batch"></a>Sids::Batch

Restituisce il SID di SECURITY_BATCH_RID.

```
CSid Batch() throw(...);
```

## <a name="sidscreatorgroup"></a><a name="creatorgroup"></a>Sids::CreatorGroup

Restituisce il SID di SECURITY_CREATOR_GROUP_RID.

```
CSid CreatorGroup() throw(...);
```

## <a name="sidscreatorgroupserver"></a><a name="creatorgroupserver"></a>Sids::CreatorGroupServer

Restituisce il SID di SECURITY_CREATOR_GROUP_SERVER_RID.

```
CSid CreatorGroupServer() throw(...);
```

## <a name="sidscreatorowner"></a><a name="creatorowner"></a>Sids::CreatorOwner

Restituisce il SID di SECURITY_CREATOR_OWNER_RID.

```
CSid CreatorOwner() throw(...);
```

## <a name="sidscreatorownerserver"></a><a name="creatorownerserver"></a>Sids::CreatorOwnerServer

Restituisce il SID di SECURITY_CREATOR_OWNER_SERVER_RID.

```
CSid CreatorOwnerServer() throw(...);
```

## <a name="sidsdialup"></a><a name="dialup"></a>Sids::Dialup

Restituisce il SID di SECURITY_DIALUP_RID.

```
CSid Dialup() throw(...);
```

## <a name="sidsguests"></a><a name="guests"></a>Sids::Ospiti

Restituisce il SID di DOMAIN_ALIAS_RID_GUESTS.

```
CSid Guests() throw(...);
```

## <a name="sidsinteractive"></a><a name="interactive"></a>Sids::Interattivo

Restituisce il SID di SECURITY_INTERACTIVE_RID.

```
CSid Interactive() throw(...);
```

## <a name="sidslocal"></a><a name="local"></a>Sids::Locale

Restituisce il SID di SECURITY_LOCAL_RID.

```
CSid Local() throw(...);
```

## <a name="sidsnetwork"></a><a name="network"></a>Sids::Rete

Restituisce il SID di SECURITY_NETWORK_RID.

```
CSid Network() throw(...);
```

## <a name="sidsnetworkservice"></a><a name="networkservice"></a>Sids::NetworkService

Restituisce il SID di SECURITY_NETWORK_SERVICE_RID.

```
CSid NetworkService() throw(...);
```

### <a name="remarks"></a>Osservazioni

Utilizzare NetworkService per consentire all'utente NT AUTHORITY di NetworkService di leggere un oggetto di protezione CPerfMon. NetworkService aggiunge un SecurityAttribute al codice ATLServer che consentirà alla DLL di accedere con l'account NetworkService in Windows XP Home Edition, Windows XP Professional, Windows Server 2003 e un sistema operativo superiore.

Quando i contatori di log personalizzati vengono creati con ATLServer CPerfMon classe in MMC Perfmon, i contatori potrebbero non essere visualizzati durante la visualizzazione del file di registro, anche se verranno visualizzati correttamente nella visualizzazione in tempo reale. I contatori delle prestazioni personalizzate CPerfMon non dispongono delle autorizzazioni necessarie per l'esecuzione nel servizio "Avvisi e registri di prestazioni" (smlogsvc.exe) nei sistemi operativi Windows XP Home Edition, Windows XP Professional, Windows Server 2003 (o versione successiva). Questo servizio viene eseguito con l'account "NT AUTHORITY-NetworkService".

## <a name="sidsnull"></a><a name="null"></a>Sids::Null

Restituisce il SID di SECURITY_NULL_RID.

```
CSid Null() throw(...);
```

## <a name="sidsprew2kaccess"></a><a name="prew2kaccess"></a>Sids::PreW2KAccess

Restituisce il SID di DOMAIN_ALIAS_RID_PREW2KCOMPACCESS.

```
CSid PreW2KAccess() throw(...);
```

## <a name="sidspowerusers"></a><a name="powerusers"></a>Sids::PowerUtenti

Restituisce il SID di DOMAIN_ALIAS_RID_POWER_USERS.

```
CSid PowerUsers() throw(...);
```

## <a name="sidsprintops"></a><a name="printops"></a>Sids::PrintOps

Restituisce il SID di DOMAIN_ALIAS_RID_PRINT_OPS.

```
CSid PrintOps() throw(...);
```

## <a name="sidsproxy"></a><a name="proxy"></a>Sids::Proxia

Restituisce il SID di SECURITY_PROXY_RID.

```
CSid Proxy() throw(...);
```

## <a name="sidsrasservers"></a><a name="rasservers"></a>Sids::RasServers

Restituisce il SID di DOMAIN_ALIAS_RID_RAS_SERVERS.

```
CSid RasServers() throw(...);
```

## <a name="sidsreplicator"></a><a name="replicator"></a>Sids::Replicatore

Restituisce il SID di DOMAIN_ALIAS_RID_REPLICATOR.

```
CSid Replicator() throw(...);
```

## <a name="sidsrestrictedcode"></a><a name="restrictedcode"></a>Sids::RestrictedCode

Restituisce il SID di SECURITY_RESTRICTED_CODE_RID.

```
CSid RestrictedCode() throw(...);
```

## <a name="sidsself"></a><a name="self"></a>Sids::Self

Restituisce il SID di SECURITY_PRINCIPAL_SELF_RID.

```
CSid Self() throw(...);
```

## <a name="sidsserverlogon"></a><a name="serverlogon"></a>Sids::ServerLogon (Accesso server)

Restituisce il SID di SECURITY_SERVER_LOGON_RID.

```
CSid ServerLogon() throw(...);
```

## <a name="sidsservice"></a><a name="service"></a>Sids::Servizio

Restituisce il SID di SECURITY_SERVICE_RID.

```
CSid Service() throw(...);
```

## <a name="sidssystem"></a><a name="system"></a>Sids::Sistema

Restituisce il SID di SECURITY_LOCAL_SYSTEM_RID.

```
CSid System() throw(...);
```

## <a name="sidssystemops"></a><a name="systemops"></a>Sids::SystemOps

Restituisce il SID di DOMAIN_ALIAS_RID_SYSTEM_OPS.

```
CSid SystemOps() throw(...);
```

## <a name="sidsterminalserver"></a><a name="terminalserver"></a>Sids::ServerTerminalServer::TerminalServer

Restituisce il SID di SECURITY_TERMINAL_SERVER_RID.

```
CSid TerminalServer() throw(...);
```

## <a name="sidsusers"></a><a name="users"></a>Sids::Utenti

Restituisce il SID di DOMAIN_ALIAS_RID_USERS.

```
CSid Users() throw(...);
```

## <a name="sidsworld"></a><a name="world"></a>Sids::Mondo

Restituisce il SID di SECURITY_WORLD_RID.

```
CSid World() throw(...);
```

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
