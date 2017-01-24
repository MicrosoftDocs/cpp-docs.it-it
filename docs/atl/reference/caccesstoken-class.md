---
title: "CAccessToken Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATLSECURITY/CAccessToken"
  - "ATL.CAccessToken"
  - "CAccessToken"
  - "ATL::CAccessToken"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccessToken class"
ms.assetid: bb5c5945-56a5-4083-b442-76573cee83ab
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAccessToken Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper di un token di accesso.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CAccessToken  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAccessToken::~CAccessToken](../Topic/CAccessToken::~CAccessToken.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAccessToken::Attach](../Topic/CAccessToken::Attach.md)|Chiamare questo metodo per eseguire la proprietà dell'handle specificare il token di accesso.|  
|[CAccessToken::CheckTokenMembership](../Topic/CAccessToken::CheckTokenMembership.md)|Chiamare questo metodo per determinare se il PROCESSO specificato è abilitato nell'oggetto `CAccessToken`.|  
|[CAccessToken::CreateImpersonationToken](../Topic/CAccessToken::CreateImpersonationToken.md)|Chiamare questo metodo per creare un nuovo token di accesso visivo.|  
|[CAccessToken::CreatePrimaryToken](../Topic/CAccessToken::CreatePrimaryToken.md)|Chiamare questo metodo per creare un nuovo token primario.|  
|[CAccessToken::CreateProcessAsUser](../Topic/CAccessToken::CreateProcessAsUser.md)|Chiamare questo metodo per creare un nuovo processo in esecuzione nel contesto di sicurezza dell'utente rappresentato dall'oggetto `CAccessToken`.|  
|[CAccessToken::CreateRestrictedToken](../Topic/CAccessToken::CreateRestrictedToken.md)|Chiamare questo metodo per creare un nuovo oggetto, limitato `CAccessToken`.|  
|[CAccessToken::Detach](../Topic/CAccessToken::Detach.md)|Chiamare questo metodo per revocare la proprietà del token di accesso.|  
|[CAccessToken::DisablePrivilege](../Topic/CAccessToken::DisablePrivilege.md)|Chiamare questo metodo per disabilitare un privilegio nell'oggetto `CAccessToken`.|  
|[CAccessToken::DisablePrivileges](../Topic/CAccessToken::DisablePrivileges.md)|Chiamare questo metodo per disabilitare uno o più privilegi dell'oggetto `CAccessToken`.|  
|[CAccessToken::EnablePrivilege](../Topic/CAccessToken::EnablePrivilege.md)|Chiamare questo metodo per attivare un privilegio nell'oggetto `CAccessToken`.|  
|[CAccessToken::EnablePrivileges](../Topic/CAccessToken::EnablePrivileges.md)|Chiamare questo metodo per attivare uno o più privilegi dell'oggetto `CAccessToken`.|  
|[CAccessToken::GetDefaultDacl](../Topic/CAccessToken::GetDefaultDacl.md)|Chiamare questo metodo per restituire l'oggetto predefinito DACL dell'oggetto `CAccessToken`.|  
|[CAccessToken::GetEffectiveToken](../Topic/CAccessToken::GetEffectiveToken.md)|Chiamare questo metodo per ottenere l'oggetto `CAccessToken` uguale al token di accesso in effetti del thread corrente.|  
|[CAccessToken::GetGroups](../Topic/CAccessToken::GetGroups.md)|Chiamare questo metodo per restituire gruppi di token dell'oggetto `CAccessToken`.|  
|[CAccessToken::GetHandle](../Topic/CAccessToken::GetHandle.md)|Chiamare questo metodo per recuperare l'handle per il token di accesso.|  
|[CAccessToken::GetImpersonationLevel](../Topic/CAccessToken::GetImpersonationLevel.md)|Chiamare questo metodo per ottenere il livello di rappresentazione il token di accesso.|  
|[CAccessToken::GetLogonSessionId](../Topic/CAccessToken::GetLogonSessionId.md)|Chiamare questo metodo per ottenere l'id sessione di accesso associato all'oggetto `CAccessToken`.|  
|[CAccessToken::GetLogonSid](../Topic/CAccessToken::GetLogonSid.md)|Chiamare questo metodo per ottenere il PROCESSO di accesso associato all'oggetto `CAccessToken`.|  
|[CAccessToken::GetOwner](../Topic/CAccessToken::GetOwner.md)|Chiamare questo metodo per ottenere il proprietario associato all'oggetto `CAccessToken`.|  
|[CAccessToken::GetPrimaryGroup](../Topic/CAccessToken::GetPrimaryGroup.md)|Chiamare questo metodo per ottenere il gruppo primario associato all'oggetto `CAccessToken`.|  
|[CAccessToken::GetPrivileges](../Topic/CAccessToken::GetPrivileges.md)|Chiamare questo metodo per ottenere privilegi associati all'oggetto `CAccessToken`.|  
|[CAccessToken::GetProcessToken](../Topic/CAccessToken::GetProcessToken.md)|Chiamare questo metodo per inizializzare `CAccessToken` con il token di accesso dal processo specificato.|  
|[CAccessToken::GetProfile](../Topic/CAccessToken::GetProfile.md)|Chiamare questo metodo per ottenere un handle che punta al profilo utente associato l'oggetto `CAccessToken`.|  
|[CAccessToken::GetSource](../Topic/CAccessToken::GetSource.md)|Chiamare questo metodo per ottenere l'origine oggetto `CAccessToken`.|  
|[CAccessToken::GetStatistics](../Topic/CAccessToken::GetStatistics.md)|Chiamare questo metodo per ottenere informazioni associate all'oggetto `CAccessToken`.|  
|[CAccessToken::GetTerminalServicesSessionId](../Topic/CAccessToken::GetTerminalServicesSessionId.md)|Chiamare questo metodo per ottenere servizi terminal l'id di sessione associato all'oggetto `CAccessToken`.|  
|[CAccessToken::GetThreadToken](../Topic/CAccessToken::GetThreadToken.md)|Chiamare questo metodo per inizializzare `CAccessToken` con il token dal thread specificato.|  
|[CAccessToken::GetTokenId](../Topic/CAccessToken::GetTokenId.md)|Chiamare questo metodo per ottenere il token l'id associato all'oggetto `CAccessToken`.|  
|[CAccessToken::GetType](../Topic/CAccessToken::GetType.md)|Chiamare questo metodo per ottenere il tipo di token dell'oggetto `CAccessToken`.|  
|[CAccessToken::GetUser](../Topic/CAccessToken::GetUser.md)|Chiamare questo metodo per identificare l'utente associato all'oggetto `CAccessToken`.|  
|[CAccessToken::HKeyCurrentUser](../Topic/CAccessToken::HKeyCurrentUser.md)|Chiamare questo metodo per ottenere un handle che punta al profilo utente associato l'oggetto `CAccessToken`.|  
|[CAccessToken::Impersonate](../Topic/CAccessToken::Impersonate.md)|Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.|  
|[CAccessToken::ImpersonateLoggedOnUser](../Topic/CAccessToken::ImpersonateLoggedOnUser.md)|Chiamare questo metodo per consentire al thread chiamante rappresenti il contesto di sicurezza di un utente connesso.|  
|[CAccessToken::IsTokenRestricted](../Topic/CAccessToken::IsTokenRestricted.md)|Chiamare questo metodo per verificare se l'oggetto `CAccessToken` contiene un elenco dei SID limitato.|  
|[CAccessToken::LoadUserProfile](../Topic/CAccessToken::LoadUserProfile.md)|Chiamare questo metodo per caricare il profilo utente associato l'oggetto `CAccessToken`.|  
|[CAccessToken::LogonUser](../Topic/CAccessToken::LogonUser.md)|Chiamare questo metodo per creare una sessione di accesso per l'utente associato alle credenziali specificate.|  
|[CAccessToken::OpenCOMClientToken](../Topic/CAccessToken::OpenCOMClientToken.md)|Chiamare questo metodo da un server COM che gestisce una chiamata da un client per inizializzare `CAccessToken` al token di accesso da client COM.|  
|[CAccessToken::OpenNamedPipeClientToken](../Topic/CAccessToken::OpenNamedPipeClientToken.md)|Chiamare questo metodo da un server che riceve le richieste da una named pipe di inizializzare `CAccessToken` con il token di accesso dal client.|  
|[CAccessToken::OpenRPCClientToken](../Topic/CAccessToken::OpenRPCClientToken.md)|Chiamare questo metodo da una gestione server una chiamata da un client RPC per inizializzare `CAccessToken` con il token di accesso dal client.|  
|[CAccessToken::OpenThreadToken](../Topic/CAccessToken::OpenThreadToken.md)|Chiamare questo metodo per impostare il livello di rappresentazione quindi per inizializzare `CAccessToken` con il token dal thread specificato.|  
|[CAccessToken::PrivilegeCheck](../Topic/CAccessToken::PrivilegeCheck.md)|Chiamare questo metodo per determinare se un set specificato di privilegi è abilitato nell'oggetto **CAccessToken** .|  
|[CAccessToken::Revert](../Topic/CAccessToken::Revert.md)|Chiamare questo metodo per interrompere un thread che sta utilizzando un token di rappresentazione.|  
|[CAccessToken::SetDefaultDacl](../Topic/CAccessToken::SetDefaultDacl.md)|Chiamare questo metodo per impostare l'impostazione predefinita DACL dell'oggetto `CAccessToken`.|  
|[CAccessToken::SetOwner](../Topic/CAccessToken::SetOwner.md)|Chiamare questo metodo per impostare il proprietario dell'oggetto `CAccessToken`.|  
|[CAccessToken::SetPrimaryGroup](../Topic/CAccessToken::SetPrimaryGroup.md)|Chiamare questo metodo per impostare il gruppo primario dell'oggetto `CAccessToken`.|  
  
## Note  
 [token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909) è un oggetto che descrive il contesto di sicurezza di un processo o un thread e viene allocato a ogni utente registrati in un sistema di Windows NT o Windows 2000.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Esempio ATLSecurity](../../top/visual-cpp-samples.md)   
 [Access Tokens](http://msdn.microsoft.com/library/windows/desktop/aa374909)   
 [Class Overview](../../atl/atl-class-overview.md)