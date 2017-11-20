---
title: Classe CAccessToken | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAccessToken
- ATLSECURITY/ATL::CAccessToken
- ATLSECURITY/ATL::CAccessToken::Attach
- ATLSECURITY/ATL::CAccessToken::CheckTokenMembership
- ATLSECURITY/ATL::CAccessToken::CreateImpersonationToken
- ATLSECURITY/ATL::CAccessToken::CreatePrimaryToken
- ATLSECURITY/ATL::CAccessToken::CreateProcessAsUser
- ATLSECURITY/ATL::CAccessToken::CreateRestrictedToken
- ATLSECURITY/ATL::CAccessToken::Detach
- ATLSECURITY/ATL::CAccessToken::DisablePrivilege
- ATLSECURITY/ATL::CAccessToken::DisablePrivileges
- ATLSECURITY/ATL::CAccessToken::EnablePrivilege
- ATLSECURITY/ATL::CAccessToken::EnablePrivileges
- ATLSECURITY/ATL::CAccessToken::GetDefaultDacl
- ATLSECURITY/ATL::CAccessToken::GetEffectiveToken
- ATLSECURITY/ATL::CAccessToken::GetGroups
- ATLSECURITY/ATL::CAccessToken::GetHandle
- ATLSECURITY/ATL::CAccessToken::GetImpersonationLevel
- ATLSECURITY/ATL::CAccessToken::GetLogonSessionId
- ATLSECURITY/ATL::CAccessToken::GetLogonSid
- ATLSECURITY/ATL::CAccessToken::GetOwner
- ATLSECURITY/ATL::CAccessToken::GetPrimaryGroup
- ATLSECURITY/ATL::CAccessToken::GetPrivileges
- ATLSECURITY/ATL::CAccessToken::GetProcessToken
- ATLSECURITY/ATL::CAccessToken::GetProfile
- ATLSECURITY/ATL::CAccessToken::GetSource
- ATLSECURITY/ATL::CAccessToken::GetStatistics
- ATLSECURITY/ATL::CAccessToken::GetTerminalServicesSessionId
- ATLSECURITY/ATL::CAccessToken::GetThreadToken
- ATLSECURITY/ATL::CAccessToken::GetTokenId
- ATLSECURITY/ATL::CAccessToken::GetType
- ATLSECURITY/ATL::CAccessToken::GetUser
- ATLSECURITY/ATL::CAccessToken::HKeyCurrentUser
- ATLSECURITY/ATL::CAccessToken::Impersonate
- ATLSECURITY/ATL::CAccessToken::ImpersonateLoggedOnUser
- ATLSECURITY/ATL::CAccessToken::IsTokenRestricted
- ATLSECURITY/ATL::CAccessToken::LoadUserProfile
- ATLSECURITY/ATL::CAccessToken::LogonUser
- ATLSECURITY/ATL::CAccessToken::OpenCOMClientToken
- ATLSECURITY/ATL::CAccessToken::OpenNamedPipeClientToken
- ATLSECURITY/ATL::CAccessToken::OpenRPCClientToken
- ATLSECURITY/ATL::CAccessToken::OpenThreadToken
- ATLSECURITY/ATL::CAccessToken::PrivilegeCheck
- ATLSECURITY/ATL::CAccessToken::Revert
- ATLSECURITY/ATL::CAccessToken::SetDefaultDacl
- ATLSECURITY/ATL::CAccessToken::SetOwner
- ATLSECURITY/ATL::CAccessToken::SetPrimaryGroup
dev_langs: C++
helpviewer_keywords: CAccessToken class
ms.assetid: bb5c5945-56a5-4083-b442-76573cee83ab
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e217f73afcf00d5569f731d86c726ae3191ffa93
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="caccesstoken-class"></a>Classe CAccessToken
Questa classe è un wrapper per un token di accesso.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAccessToken
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAccessToken:: ~ CAccessToken](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAccessToken::Attach](#attach)|Chiamare questo metodo per diventare proprietario dell'handle del token di accesso specificata.|  
|[CAccessToken::CheckTokenMembership](#checktokenmembership)|Chiamare questo metodo per determinare se un SID specificato è abilitato nel `CAccessToken` oggetto.|  
|[CAccessToken::CreateImpersonationToken](#createimpersonationtoken)|Chiamare questo metodo per creare un nuovo token di accesso di rappresentazione.|  
|[CAccessToken::CreatePrimaryToken](#createprimarytoken)|Chiamare questo metodo per creare un nuovo token primario.|  
|[CAccessToken::CreateProcessAsUser](#createprocessasuser)|Chiamare questo metodo per creare un nuovo processo in esecuzione nel contesto di sicurezza dell'utente rappresentato dal `CAccessToken` oggetto.|  
|[CAccessToken::CreateRestrictedToken](#createrestrictedtoken)|Chiamare questo metodo per creare un nuovo limitato `CAccessToken` oggetto.|  
|[CAccessToken::Detach](#detach)|Chiamare questo metodo per revocare la proprietà del token di accesso.|  
|[CAccessToken::DisablePrivilege](#disableprivilege)|Chiamare questo metodo per disabilitare un privilegio nel `CAccessToken` oggetto.|  
|[CAccessToken::DisablePrivileges](#disableprivileges)|Chiamare questo metodo per disabilitare uno o più privilegi nel `CAccessToken` oggetto.|  
|[CAccessToken::EnablePrivilege](#enableprivilege)|Chiamare questo metodo per abilitare un privilegio nel `CAccessToken` oggetto.|  
|[CAccessToken::EnablePrivileges](#enableprivileges)|Chiamare questo metodo per abilitare uno o più i privilegi nel `CAccessToken` oggetto.|  
|[CAccessToken::GetDefaultDacl](#getdefaultdacl)|Chiamare questo metodo per restituire il `CAccessToken` DACL predefiniti dell'oggetto.|  
|[CAccessToken::GetEffectiveToken](#geteffectivetoken)|Chiamare questo metodo per ottenere il `CAccessToken` oggetto uguale al token di accesso per il thread corrente.|  
|[CAccessToken::GetGroups](#getgroups)|Chiamare questo metodo per restituire il `CAccessToken` gruppi token dell'oggetto.|  
|[CAccessToken::GetHandle](#gethandle)|Chiamare questo metodo per recuperare un handle per il token di accesso.|  
|[CAccessToken::GetImpersonationLevel](#getimpersonationlevel)|Chiamare questo metodo per ottenere il livello di rappresentazione del token di accesso.|  
|[CAccessToken::GetLogonSessionId](#getlogonsessionid)|Chiamare questo metodo per ottenere l'ID di sessione di accesso associato il `CAccessToken` oggetto.|  
|[CAccessToken::GetLogonSid](#getlogonsid)|Chiamare questo metodo per ottenere il SID di accesso associato il `CAccessToken` oggetto.|  
|[CAccessToken::GetOwner](#getowner)|Chiamare questo metodo per ottenere il proprietario associato il `CAccessToken` oggetto.|  
|[CAccessToken::GetPrimaryGroup](#getprimarygroup)|Chiamare questo metodo per ottenere il gruppo primario associato il `CAccessToken` oggetto.|  
|[CAccessToken::GetPrivileges](#getprivileges)|Chiamare questo metodo per ottenere i privilegi associati di `CAccessToken` oggetto.|  
|[CAccessToken::GetProcessToken](#getprocesstoken)|Chiamare questo metodo per inizializzare `CAccessToken` al token di accesso dal processo dato.|  
|[CAccessToken::GetProfile](#getprofile)|Chiamare questo metodo per ottenere l'handle che puntano al profilo utente associato il `CAccessToken` oggetto.|  
|[CAccessToken::GetSource](#getsource)|Chiamare questo metodo per ottenere l'origine del `CAccessToken` oggetto.|  
|[CAccessToken::GetStatistics](#getstatistics)|Chiamare questo metodo per ottenere informazioni associate di `CAccessToken` oggetto.|  
|[CAccessToken::GetTerminalServicesSessionId](#getterminalservicessessionid)|Chiamare questo metodo per ottenere l'ID di sessione Servizi Terminal associato il `CAccessToken` oggetto.|  
|[CAccessToken::GetThreadToken](#getthreadtoken)|Chiamare questo metodo per inizializzare il `CAccessToken` con il token dal thread specificato.|  
|[CAccessToken::GetTokenId](#gettokenid)|Chiamare questo metodo per ottenere l'ID del Token associato il `CAccessToken` oggetto.|  
|[CAccessToken::GetType](#gettype)|Chiamare questo metodo per ottenere il tipo di token di `CAccessToken` oggetto.|  
|[CAccessToken::GetUser](#getuser)|Chiamare questo metodo per identificare l'utente associato il `CAccessToken` oggetto.|  
|[CAccessToken::HKeyCurrentUser](#hkeycurrentuser)|Chiamare questo metodo per ottenere l'handle che puntano al profilo utente associato il `CAccessToken` oggetto.|  
|[CAccessToken::Impersonate](#impersonate)|Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.|  
|[CAccessToken::ImpersonateLoggedOnUser](#impersonateloggedonuser)|Chiamare questo metodo per consentire il thread chiamante rappresentare il contesto di sicurezza di un utente connesso.|  
|[CAccessToken::IsTokenRestricted](#istokenrestricted)|Chiamare questo metodo per verificare se il `CAccessToken` oggetto contiene un elenco di SID con restrizioni.|  
|[CAccessToken::LoadUserProfile](#loaduserprofile)|Chiamare questo metodo per caricare il profilo utente associato il `CAccessToken` oggetto.|  
|[CAccessToken::LogonUser](#logonuser)|Chiamare questo metodo per creare una sessione di accesso per l'utente associato alle credenziali specificate.|  
|[CAccessToken::OpenCOMClientToken](#opencomclienttoken)|Chiamare questo metodo all'interno di un server COM, la gestione di una chiamata da un client per inizializzare il `CAccessToken` con il token di accesso da client COM.|  
|[CAccessToken::OpenNamedPipeClientToken](#opennamedpipeclienttoken)|Chiamare questo metodo all'interno di un server di acquisire richieste tramite una named pipe per inizializzare il `CAccessToken` con il token di accesso dal client.|  
|[CAccessToken::OpenRPCClientToken](#openrpcclienttoken)|Chiamare questo metodo all'interno di un server di gestione di una chiamata da un client RPC per inizializzare il `CAccessToken` con il token di accesso dal client.|  
|[CAccessToken::OpenThreadToken](#openthreadtoken)|Chiamare questo metodo per impostare il livello di rappresentazione e quindi inizializzare la `CAccessToken` con il token dal thread specificato.|  
|[CAccessToken::PrivilegeCheck](#privilegecheck)|Chiamare questo metodo per determinare l'abilitazione un set specificato di privilegi di **CAccessToken** oggetto.|  
|[CAccessToken::Revert](#revert)|Chiamare questo metodo per interrompere un thread che sta utilizzando un token di rappresentazione.|  
|[CAccessToken::SetDefaultDacl](#setdefaultdacl)|Chiamare questo metodo per impostare il valore predefinito elenco DACL del `CAccessToken` oggetto.|  
|[CAccessToken::SetOwner](#setowner)|Chiamare questo metodo per impostare il proprietario del `CAccessToken` oggetto.|  
|[CAccessToken::SetPrimaryGroup](#setprimarygroup)|Chiamare questo metodo per impostare il gruppo primario del `CAccessToken` oggetto.|  
  
## <a name="remarks"></a>Note  
 Un [token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909) è un oggetto che descrive il contesto di sicurezza di un processo o thread e viene allocato per ogni utente connesso a un sistema di Windows NT o Windows 2000.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in Windows SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="attach"></a>CAccessToken::Attach  
 Chiamare questo metodo per diventare proprietario dell'handle del token di accesso specificata.  
  
```
void Attach(HANDLE hToken) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *hToken*  
 Handle per il token di accesso.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug è si verifica un errore di asserzione se il `CAccessToken` oggetto dispone già di proprietà di un token di accesso.  
  
##  <a name="dtor"></a>CAccessToken:: ~ CAccessToken  
 Distruttore.  
  
```
virtual ~CAccessToken() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="checktokenmembership"></a>CAccessToken::CheckTokenMembership  
 Chiamare questo metodo per determinare se un SID specificato è abilitato nel `CAccessToken` oggetto.  
  
```
bool CheckTokenMembership(
    const CSid& rSid, 
    bool* pbIsMember) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rSid`  
 Riferimento a un [classe IDSR](../../atl/reference/csid-class.md) oggetto.  
  
 `pbIsMember`  
 Puntatore a una variabile che riceve i risultati della verifica.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il `CheckTokenMembership` metodo verifica la presenza del SID in utenti e SID di gruppo del token di accesso. Se il SID è presente e ha l'attributo SE_GROUP_ENABLED, *pbIsMember* è impostato su true; in caso contrario, è impostato su false.  
  
 Nelle build di debug è si verifica un errore di asserzione se `pbIsMember` non è un puntatore valido.  
  
> [!NOTE]
>  Il `CAccessToken` l'oggetto deve essere un token di rappresentazione e non un token primario.  
  
##  <a name="createimpersonationtoken"></a>CAccessToken::CreateImpersonationToken  
 Chiamare questo metodo per creare un token di accesso di rappresentazione.  
  
```
bool CreateImpersonationToken(
    CAccessToken* pImp, 
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pImp`  
 Puntatore al nuovo `CAccessToken` oggetto.  
  
 `sil`  
 Specifica un [SECURITY_IMPERSONATION_LEVEL](http://msdn.microsoft.com/library/windows/desktop/aa379572) tipo enumerato che fornisce il livello di rappresentazione del token di nuovo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 `CreateImpersonationToken`chiamate [DuplicateToken](http://msdn.microsoft.com/library/windows/desktop/aa446616) per creare un nuovo token di rappresentazione.  
  
##  <a name="createprimarytoken"></a>CAccessToken::CreatePrimaryToken  
 Chiamare questo metodo per creare un nuovo token primario.  
  
```
bool CreatePrimaryToken(
    CAccessToken* pPri,
    DWORD dwDesiredAccess = MAXIMUM_ALLOWED,
    const CSecurityAttributes* pTokenAttributes = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *pPri*  
 Puntatore al nuovo `CAccessToken` oggetto.  
  
 `dwDesiredAccess`  
 Specifica i diritti di accesso richiesto per il nuovo token. Il valore predefinito, MAXIMUM_ALLOWED, richieste di tutti i diritti di accesso valide per il chiamante. Vedere [diritti di accesso e le maschere di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374902) per i diritti di accesso in altre.  
  
 *pTokenAttributes*  
 Puntatore a un [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che specifica un descrittore di sicurezza per il nuovo token e determina se i processi figlio possono ereditare il token. Se *pTokenAttributes* è NULL, il token Ottiene un descrittore di protezione e l'handle non può essere ereditato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 `CreatePrimaryToken`chiamate [DuplicateTokenEx](http://msdn.microsoft.com/library/windows/desktop/aa446617) per creare un nuovo token primario.  
  
##  <a name="createprocessasuser"></a>CAccessToken::CreateProcessAsUser  
 Chiamare questo metodo per creare un nuovo processo in esecuzione nel contesto di sicurezza dell'utente rappresentato dal `CAccessToken` oggetto.  
  
```
bool CreateProcessAsUser(
    LPCTSTR pApplicationName,
    LPTSTR pCommandLine,
    LPPROCESS_INFORMATION pProcessInformation,
    LPSTARTUPINFO pStartupInfo,
    DWORD dwCreationFlags = NORMAL_PRIORITY_CLASS,
    bool bLoadProfile = false,
    const CSecurityAttributes* pProcessAttributes = NULL,
    const CSecurityAttributes* pThreadAttributes = NULL,
    bool bInherit = false,
    LPCTSTR pCurrentDirectory = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pApplicationName*  
 Puntatore a una stringa con terminazione null che specifica il modulo da eseguire. Questo parametro non può essere NULL.  
  
 *pCommandLine*  
 Puntatore a una stringa con terminazione null che specifica la riga di comando da eseguire.  
  
 *pProcessInformation*  
 Puntatore a un [PROCESS_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/ms684873) struttura che riceve informazioni di identificazione del nuovo processo.  
  
 *pStartupInfo*  
 Puntatore a un [STARTUPINFO](http://msdn.microsoft.com/library/windows/desktop/ms686331) struttura che specifica come visualizzare la finestra principale per il nuovo processo.  
  
 `dwCreationFlags`  
 Specifica i flag aggiuntivi che consentono di controllare la classe di priorità e la creazione del processo. Vedere la funzione Win32 [CreateProcessAsUser](http://msdn.microsoft.com/library/windows/desktop/ms682429) per un elenco di flag.  
  
 *bLoadProfile*  
 Se true, il profilo dell'utente viene caricato con [LoadUserProfile](http://msdn.microsoft.com/library/windows/desktop/bb762281).  
  
 *pProcessAttributes*  
 Puntatore a un [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che specifica un descrittore di sicurezza per il nuovo processo e determina se l'handle restituito possono ereditare da processi figlio. Se *pProcessAttributes* è NULL, il processo Ottiene un descrittore di protezione e l'handle non può essere ereditato.  
  
 *pThreadAttributes*  
 Puntatore a un [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che specifica un descrittore di sicurezza per il nuovo thread e determina se l'handle restituito possono ereditare da processi figlio. Se *pThreadAttributes* è NULL, il thread Ottiene un descrittore di protezione e l'handle non può essere ereditato.  
  
 *bInherit*  
 Indica se il nuovo processo eredita l'handle del processo chiamante. Se true, ogni handle aperto ereditabile nel processo chiamante viene ereditata dal processo di nuovo. Handle ereditati hanno gli stessi privilegi di accesso e valore di handle originali.  
  
 *pCurrentDirectory*  
 Puntatore a una stringa con terminazione null che specifica l'unità corrente e la directory per il nuovo processo. La stringa deve essere un percorso completo che include una lettera di unità. Se questo parametro è NULL, il nuovo processo avranno la stessa unità e directory corrente del processo chiamante.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 **CreateProcessAsUser** utilizza il `CreateProcessAsUser` funzione Win32 per creare un nuovo processo viene eseguito nel contesto di sicurezza dell'utente rappresentato dal `CAccessToken` oggetto. Vedere la descrizione del [CreateProcessAsUser](http://msdn.microsoft.com/library/windows/desktop/ms682429) funzione per una descrizione completa dei parametri necessari.  
  
 Per questo metodo abbia esito positivo, il `CAccessToken` oggetto deve contenere AssignPrimaryToken (a meno che non sia un token con restrizioni) e i privilegi IncreaseQuota.  
  
##  <a name="createrestrictedtoken"></a>CAccessToken::CreateRestrictedToken  
 Chiamare questo metodo per creare un nuovo limitato `CAccessToken` oggetto.  
  
```
bool CreateRestrictedToken(
    CAccessToken* pRestrictedToken,
    const CTokenGroups& SidsToDisable,
    const CTokenGroups& SidsToRestrict,
    const CTokenPrivileges& PrivilegesToDelete = CTokenPrivileges()) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *pRestrictedToken*  
 Limitato il nuovo `CAccessToken` oggetto.  
  
 `SidsToDisable`  
 Oggetto `CTokenGroups` oggetto che specifica il SID di sola negazione.  
  
 *SidsToRestrict*  
 Oggetto `CTokenGroups` oggetto che specifica il SID con restrizioni.  
  
 `PrivilegesToDelete`  
 Oggetto `CTokenPrivileges` oggetto che specifica i privilegi da eliminare nel token con restrizioni. Il valore predefinito crea un oggetto vuoto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 `CreateRestrictedToken`Usa il [CreateRestrictedToken](http://msdn.microsoft.com/library/windows/desktop/aa446583) funzione Win32 per creare un nuovo `CAccessToken` oggetto, con restrizioni.  
  
> [!NOTE]
>  Questo metodo è disponibile in Windows 2000 o versione successiva.  
  
> [!IMPORTANT]
>  Quando si utilizza `CreateRestrictedToken`, verificare quanto segue: il token esistente è valido (e non immesso dall'utente) e `SidsToDisable` e `PrivilegesToDelete` sono validi (e non immesso dall'utente). Se il metodo restituisce false, è possibile negare funzionalità.  
  
##  <a name="detach"></a>CAccessToken::Detach  
 Chiamare questo metodo per revocare la proprietà del token di accesso.  
  
```
HANDLE Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle per il `CAccessToken` che è stato scollegato.  
  
### <a name="remarks"></a>Note  
 Questo metodo richiama il `CAccessToken`del proprietario del token di accesso.  
  
##  <a name="disableprivilege"></a>CAccessToken::DisablePrivilege  
 Chiamare questo metodo per disabilitare un privilegio nel `CAccessToken` oggetto.  
  
```
bool DisablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pszPrivilege`  
 Puntatore a una stringa contenente il privilegio per disabilitare nel `CAccessToken` oggetto.  
  
 `pPreviousState`  
 Puntatore a un `CTokenPrivileges` oggetto che contiene lo stato precedente dei privilegi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="disableprivileges"></a>CAccessToken::DisablePrivileges  
 Chiamare questo metodo per disabilitare uno o più privilegi nel `CAccessToken` oggetto.  
  
```
bool DisablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rPrivileges`  
 Puntatore a una matrice di stringhe contenente i privilegi per disabilitare nel `CAccessToken` oggetto.  
  
 `pPreviousState`  
 Puntatore a un `CTokenPrivileges` oggetto che contiene lo stato precedente dei privilegi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="enableprivilege"></a>CAccessToken::EnablePrivilege  
 Chiamare questo metodo per abilitare un privilegio nel `CAccessToken` oggetto.  
  
```
bool EnablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pszPrivilege`  
 Puntatore a una stringa contenente il privilegio per abilitare nel `CAccessToken` oggetto.  
  
 `pPreviousState`  
 Puntatore a un `CTokenPrivileges` oggetto che contiene lo stato precedente dei privilegi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="enableprivileges"></a>CAccessToken::EnablePrivileges  
 Chiamare questo metodo per abilitare uno o più i privilegi nel `CAccessToken` oggetto.  
  
```
bool EnablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rPrivileges`  
 Puntatore a una matrice di stringhe contenente i privilegi per abilitare nel `CAccessToken` oggetto.  
  
 `pPreviousState`  
 Puntatore a un `CTokenPrivileges` oggetto che contiene lo stato precedente dei privilegi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="getdefaultdacl"></a>CAccessToken::GetDefaultDacl  
 Chiamare questo metodo per restituire il `CAccessToken` DACL predefiniti dell'oggetto.  
  
```
bool GetDefaultDacl(CDacl* pDacl) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pDacl`  
 Puntatore al [CDacl classe](../../atl/reference/cdacl-class.md) oggetto che riceverà il **CAccessToken** DACL predefiniti dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il valore predefinito DACL è stato recuperato in caso contrario.  
  
##  <a name="geteffectivetoken"></a>CAccessToken::GetEffectiveToken  
 Chiamare questo metodo per ottenere il `CAccessToken` oggetto uguale al token di accesso per il thread corrente.  
  
```
bool GetEffectiveToken(DWORD dwDesiredAccess) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwDesiredAccess`  
 Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="getgroups"></a>CAccessToken::GetGroups  
 Chiamare questo metodo per restituire il `CAccessToken` gruppi token dell'oggetto.  
  
```
bool GetGroups(CTokenGroups* pGroups) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *pGroups*  
 Puntatore al [CTokenGroups classe](../../atl/reference/ctokengroups-class.md) oggetto che riceverà le informazioni del gruppo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="gethandle"></a>CAccessToken::GetHandle  
 Chiamare questo metodo per recuperare un handle per il token di accesso.  
  
```
HANDLE GetHandle() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle per il `CAccessToken` token di accesso dell'oggetto.  
  
##  <a name="getimpersonationlevel"></a>CAccessToken::GetImpersonationLevel  
 Chiamare questo metodo per ottenere il livello di rappresentazione del token di accesso.  
  
```
bool GetImpersonationLevel(
    SECURITY_IMPERSONATION_LEVEL* pImpersonationLevel) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *pImpersonationLevel*  
 Puntatore a un [SECURITY_IMPERSONATION_LEVEL](http://msdn.microsoft.com/library/windows/desktop/aa379572) tipo di enumerazione che riceverà le informazioni di livello di rappresentazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="getlogonsessionid"></a>CAccessToken::GetLogonSessionId  
 Chiamare questo metodo per ottenere l'ID di sessione di accesso associato il `CAccessToken` oggetto.  
  
```
bool GetLogonSessionId(LUID* pluid) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pluid`  
 Puntatore a un [LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261) che riceverà l'accesso ID di sessione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug è si verifica un errore di asserzione se `pluid` è un valore non valido.  
  
##  <a name="getlogonsid"></a>CAccessToken::GetLogonSid  
 Chiamare questo metodo per ottenere il SID di accesso associato il `CAccessToken` oggetto.  
  
```
bool GetLogonSid(CSid* pSid) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSid`  
 Puntatore a un [classe IDSR](../../atl/reference/csid-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug è si verifica un errore di asserzione se *pSid* è un valore non valido.  
  
##  <a name="getowner"></a>CAccessToken::GetOwner  
 Chiamare questo metodo per ottenere il proprietario associato il `CAccessToken` oggetto.  
  
```
bool GetOwner(CSid* pSid) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSid`  
 Puntatore a un [classe IDSR](../../atl/reference/csid-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il proprietario è impostato per impostazione predefinita su tutti gli oggetti creati mentre è in corso di questo token di accesso.  
  
##  <a name="getprimarygroup"></a>CAccessToken::GetPrimaryGroup  
 Chiamare questo metodo per ottenere il gruppo primario associato il `CAccessToken` oggetto.  
  
```
bool GetPrimaryGroup(CSid* pSid) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSid`  
 Puntatore a un [classe IDSR](../../atl/reference/csid-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il gruppo è impostato per impostazione predefinita su tutti gli oggetti creati mentre è in corso di questo token di accesso.  
  
##  <a name="getprivileges"></a>CAccessToken::GetPrivileges  
 Chiamare questo metodo per ottenere i privilegi associati di `CAccessToken` oggetto.  
  
```
bool GetPrivileges(CTokenPrivileges* pPrivileges) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pPrivileges`  
 Puntatore a un [CTokenPrivileges classe](../../atl/reference/ctokenprivileges-class.md) oggetto che riceverà i privilegi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="getprocesstoken"></a>CAccessToken::GetProcessToken  
 Chiamare questo metodo per inizializzare `CAccessToken` al token di accesso dal processo dato.  
  
```
bool GetProcessToken(DWORD dwDesiredAccess, HANDLE hProcess = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwDesiredAccess`  
 Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.  
  
 *hProcess*  
 Gestisce il processo il cui il token di accesso è aperto. Se viene usato il valore predefinito di `NULL`, viene utilizzato il processo corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `true` in caso di esito positivo, `false` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate di [OpenProcessToken](http://msdn.microsoft.com/library/aa379295\(vs.85\).aspx) funzione Win32.  
  
##  <a name="getprofile"></a>CAccessToken::GetProfile  
 Chiamare questo metodo per ottenere l'handle che puntano al profilo utente associato il `CAccessToken` oggetto.  
  
```
HANDLE GetProfile() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle che puntano al profilo utente, o NULL se è disponibile alcun profilo.  
  
##  <a name="getsource"></a>CAccessToken::GetSource  
 Chiamare questo metodo per ottenere l'origine del `CAccessToken` oggetto.  
  
```
bool GetSource(TOKEN_SOURCE* pSource) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *pSource*  
 Puntatore a un [TOKEN_SOURCE](http://msdn.microsoft.com/library/windows/desktop/aa379631) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="getstatistics"></a>CAccessToken::GetStatistics  
 Chiamare questo metodo per ottenere informazioni associate di `CAccessToken` oggetto.  
  
```
bool GetStatistics(TOKEN_STATISTICS* pStatistics) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *pStatistics*  
 Puntatore a un [TOKEN_STATISTICS](http://msdn.microsoft.com/library/windows/desktop/aa379632) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="getterminalservicessessionid"></a>CAccessToken::GetTerminalServicesSessionId  
 Chiamare questo metodo per ottenere l'ID di sessione Servizi Terminal associato il `CAccessToken` oggetto.  
  
```
bool GetTerminalServicesSessionId(DWORD* pdwSessionId) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *pdwSessionId*  
 L'ID di sessione Servizi Terminal.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="getthreadtoken"></a>CAccessToken::GetThreadToken  
 Chiamare questo metodo per inizializzare il `CAccessToken` con il token dal thread specificato.  
  
```
bool GetThreadToken(
    DWORD dwDesiredAccess,
    HANDLE hThread = NULL,
    bool bOpenAsSelf = true) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwDesiredAccess`  
 Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.  
  
 `hThread`  
 Handle per il thread viene aperto il cui token di accesso.  
  
 `bOpenAsSelf`  
 Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza del chiamante thread di `GetThreadToken` metodo o sul contesto di sicurezza del processo per il thread chiamante.  
  
 Se questo parametro è false, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, il contesto di sicurezza può essere di un processo client. Se questo parametro è true, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="gettokenid"></a>CAccessToken::GetTokenId  
 Chiamare questo metodo per ottenere l'ID del Token associato il `CAccessToken` oggetto.  
  
```
bool GetTokenId(LUID* pluid) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pluid`  
 Puntatore a un [LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261) che riceverà il Token ID.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="gettype"></a>CAccessToken::GetType  
 Chiamare questo metodo per ottenere il tipo di token di `CAccessToken` oggetto.  
  
```
bool GetType(TOKEN_TYPE* pType) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pType`  
 Indirizzo del [TOKEN_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379633) variabile che, se l'operazione riesce, riceve il tipo di token.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il **TOKEN_TYPE** tipo di enumerazione contiene valori che distinguere tra un token primario e un token di rappresentazione.  
  
##  <a name="getuser"></a>CAccessToken::GetUser  
 Chiamare questo metodo per identificare l'utente associato il `CAccessToken` oggetto.  
  
```
bool GetUser(CSid* pSid) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSid`  
 Puntatore a un [classe IDSR](../../atl/reference/csid-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
##  <a name="hkeycurrentuser"></a>CAccessToken::HKeyCurrentUser  
 Chiamare questo metodo per ottenere l'handle che puntano al profilo utente associato il `CAccessToken` oggetto.  
  
```
HKEY HKeyCurrentUser() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle che puntano al profilo utente, o NULL se è disponibile alcun profilo.  
  
##  <a name="impersonate"></a>CAccessToken::Impersonate  
 Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.  
  
```
bool Impersonate(HANDLE hThread = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `hThread`  
 Handle per assegnare il token di rappresentazione per il thread. Questo handle deve essere aperto con diritti di accesso TOKEN_IMPERSONATE. Se `hThread` è NULL, il metodo determina che il thread di interrompere l'utilizzo di un token di rappresentazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug è si verifica un errore di asserzione se `CAccessToken` non dispone di un puntatore a un token valido.  
  
 Il [CAutoRevertImpersonation classe](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzato per ripristinare automaticamente i token di accesso rappresentato.  
  
##  <a name="impersonateloggedonuser"></a>CAccessToken::ImpersonateLoggedOnUser  
 Chiamare questo metodo per consentire il thread chiamante rappresentare il contesto di sicurezza di un utente connesso.  
  
```
bool ImpersonateLoggedOnUser() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
  
> [!IMPORTANT]
>  Se una chiamata a una funzione di rappresentazione non riesce per qualsiasi motivo, non è la rappresentazione del client e la richiesta del client viene eseguita nel contesto di sicurezza del processo da cui è stata effettuata la chiamata. Se il processo viene eseguito come un account con privilegi elevati, o come membro di un gruppo amministrativo, l'utente potrebbe essere in grado di eseguire azioni che verrebbe in caso contrario non consentita. Pertanto, il valore restituito per questa funzione deve sempre essere confermato.  
  
##  <a name="istokenrestricted"></a>CAccessToken::IsTokenRestricted  
 Chiamare questo metodo per verificare se il `CAccessToken` oggetto contiene un elenco di SID con restrizioni.  
  
```
bool IsTokenRestricted() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'oggetto contiene un elenco di limitare i SID, false se non esistono alcun SID con restrizioni o se il metodo ha esito negativo.  
  
##  <a name="loaduserprofile"></a>CAccessToken::LoadUserProfile  
 Chiamare questo metodo per caricare il profilo utente associato il `CAccessToken` oggetto.  
  
```
bool LoadUserProfile() throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug è si verifica un errore di asserzione se il `CAccessToken` non contiene un token valido, o se il profilo di un utente è già presente.  
  
##  <a name="logonuser"></a>CAccessToken::LogonUser  
 Chiamare questo metodo per creare una sessione di accesso per l'utente associato alle credenziali specificate.  
  
```
bool LogonUser(
    LPCTSTR pszUserName,
    LPCTSTR pszDomain,
    LPCTSTR pszPassword,
    DWORD dwLogonType = LOGON32_LOGON_INTERACTIVE,
    DWORD dwLogonProvider = LOGON32_PROVIDER_DEFAULT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszUserName`  
 Puntatore a una stringa con terminazione null che specifica il nome utente. Questo è il nome dell'account utente di accedere a.  
  
 *pszDomain*  
 Puntatore a una stringa con terminazione null che specifica il nome del dominio o del server contiene database il cui account di `pszUserName` account.  
  
 `pszPassword`  
 Puntatore a una stringa con terminazione null che specifica la password crittografata per l'account utente specificato da `pszUserName`.  
  
 *dwLogonType*  
 Specifica il tipo di operazione di accesso da eseguire. Vedere [LogonUser](http://msdn.microsoft.com/library/windows/desktop/aa378184) per altri dettagli.  
  
 *dwLogonProvider*  
 Specifica il provider di accesso. Vedere [LogonUser](http://msdn.microsoft.com/library/windows/desktop/aa378184) per altri dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 L'accesso token risultante dall'account di accesso verrà associato il `CAccessToken`. Per questo metodo abbia esito positivo, il `CAccessToken` oggetto deve contenere privilegi SE_TCB_NAME, identificare il proprietario come parte del computer attendibile base. Vedere [LogonUser](http://msdn.microsoft.com/library/windows/desktop/aa378184) per altre informazioni sui privilegi necessari.  
  
##  <a name="opencomclienttoken"></a>CAccessToken::OpenCOMClientToken  
 Chiamare questo metodo all'interno di un server COM, la gestione di una chiamata da un client per inizializzare il `CAccessToken` con il token di accesso da client COM.  
  
```
bool OpenCOMClientToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDesiredAccess`  
 Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.  
  
 `bImpersonate`  
 Se true, il thread corrente verrà rappresentato il client COM chiamante se la chiamata ha esito positivo. Se false, verrà aperto il token di accesso, ma il thread non avrà un token di rappresentazione al completamento di questa chiamata.  
  
 `bOpenAsSelf`  
 Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza del chiamante thread di [GetThreadToken](http://msdn.microsoft.com/library/windows/desktop/ms683182) metodo o sul contesto di sicurezza del processo per il thread chiamante.  
  
 Se questo parametro è false, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, il contesto di sicurezza può essere di un processo client. Se questo parametro è true, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il [CAutoRevertImpersonation classe](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzato per ripristinare automaticamente i token di accesso rappresentato creati impostando il `bImpersonate` flag *true*.  
  
##  <a name="opennamedpipeclienttoken"></a>CAccessToken::OpenNamedPipeClientToken  
 Chiamare questo metodo all'interno di un server di acquisire richieste tramite una named pipe per inizializzare il `CAccessToken` con il token di accesso dal client.  
  
```
bool OpenNamedPipeClientToken(
    HANDLE hPipe,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *hPipe*  
 Handle per una named pipe.  
  
 `dwDesiredAccess`  
 Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.  
  
 `bImpersonate`  
 Se true, il thread corrente verrà rappresentato il client chiamante se la chiamata ha esito positivo. Se false, verrà aperto il token di accesso, ma il thread non avrà un token di rappresentazione al completamento di questa chiamata.  
  
 `bOpenAsSelf`  
 Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza del chiamante thread di [GetThreadToken](http://msdn.microsoft.com/library/windows/desktop/ms683182) metodo o sul contesto di sicurezza del processo per il thread chiamante.  
  
 Se questo parametro è false, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, il contesto di sicurezza può essere di un processo client. Se questo parametro è true, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il [CAutoRevertImpersonation classe](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzato per ripristinare automaticamente i token di accesso rappresentato creati impostando il `bImpersonate` flag *true*.  
  
##  <a name="openrpcclienttoken"></a>CAccessToken::OpenRPCClientToken  
 Chiamare questo metodo all'interno di un server di gestione di una chiamata da un client RPC per inizializzare il `CAccessToken` con il token di accesso dal client.  
  
```
bool OpenRPCClientToken(
    RPC_BINDING_HANDLE BindingHandle,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *BindingHandle*  
 Handle di binding nel server che rappresenta un'associazione a un client.  
  
 `dwDesiredAccess`  
 Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.  
  
 `bImpersonate`  
 Se true, il thread corrente verrà rappresentato il client RPC chiamante se la chiamata ha esito positivo. Se false, verrà aperto il token di accesso, ma il thread non avrà un token di rappresentazione al completamento di questa chiamata.  
  
 `bOpenAsSelf`  
 Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza del chiamante thread di [GetThreadToken](http://msdn.microsoft.com/library/windows/desktop/ms683182) metodo o sul contesto di sicurezza del processo per il thread chiamante.  
  
 Se questo parametro è false, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, il contesto di sicurezza può essere di un processo client. Se questo parametro è true, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il [CAutoRevertImpersonation classe](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzato per ripristinare automaticamente i token di accesso rappresentato creati impostando il `bImpersonate` flag *true*.  
  
##  <a name="openthreadtoken"></a>CAccessToken::OpenThreadToken  
 Chiamare questo metodo per impostare il livello di rappresentazione e quindi inizializzare la `CAccessToken` con il token dal thread specificato.  
  
```
bool OpenThreadToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true,
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDesiredAccess`  
 Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.  
  
 `bImpersonate`  
 Se true, il thread verrà lasciato a livello di rappresentazione richiesta dopo il completamento del metodo. Se false, il thread verrà ripristinato il livello di rappresentazione originale.  
  
 `bOpenAsSelf`  
 Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza del chiamante thread di [GetThreadToken](http://msdn.microsoft.com/library/windows/desktop/ms683182) metodo o sul contesto di sicurezza del processo per il thread chiamante.  
  
 Se questo parametro è false, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, il contesto di sicurezza può essere di un processo client. Se questo parametro è true, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.  
  
 `sil`  
 Specifica un [SECURITY_IMPERSONATION_LEVEL](http://msdn.microsoft.com/library/windows/desktop/aa379572) tipo enumerato che fornisce il livello di rappresentazione del token.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 `OpenThreadToken`è simile a [CAccessToken::GetThreadToken](#getthreadtoken), ma imposta il livello di rappresentazione prima di inizializzare il `CAccessToken` dal token di accesso del thread.  
  
 Il [CAutoRevertImpersonation classe](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzato per ripristinare automaticamente i token di accesso rappresentato creati impostando il `bImpersonate` flag *true*.  
  
##  <a name="privilegecheck"></a>CAccessToken::PrivilegeCheck  
 Chiamare questo metodo per determinare l'abilitazione un set specificato di privilegi di **CAccessToken** oggetto.  
  
```
bool PrivilegeCheck(
    PPRIVILEGE_SET RequiredPrivileges,
     bool* pbResult) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *RequiredPrivileges*  
 Puntatore a un [PRIVILEGE_SET](http://msdn.microsoft.com/library/windows/desktop/aa379307) struttura.  
  
 *pbResult*  
 Puntatore a un valore, il metodo imposta per indicare se sono abilitati uno o tutti il privilegio specificato nella `CAccessToken` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Quando `PrivilegeCheck` restituisce, il **attributi** membro di ogni [LUID_AND_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379263) struttura è impostata su SE_PRIVILEGE_USED_FOR_ACCESS se è abilitato il privilegio corrispondente. Questo metodo chiama il [PrivilegeCheck](http://msdn.microsoft.com/library/windows/desktop/aa379304) funzione Win32.  
  
##  <a name="revert"></a>CAccessToken::Revert  
 Chiamare questo metodo per interrompere un thread da tramite un token di rappresentazione.  
  
```
bool Revert(HANDLE hThread = NULL) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hThread`  
 Handle per il thread per ripristinare dalla rappresentazione. Se *hThread* è NULL, si presuppone che il thread corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Modificare token di rappresentazione può essere eseguite automaticamente con il [CAutoRevertImpersonation classe](../../atl/reference/cautorevertimpersonation-class.md).  
  
##  <a name="setdefaultdacl"></a>CAccessToken::SetDefaultDacl  
 Chiamare questo metodo per impostare il valore predefinito elenco DACL del `CAccessToken` oggetto.  
  
```
bool SetDefaultDacl(const CDacl& rDacl) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rDacl`  
 Il nuovo valore predefinito [CDacl classe](../../atl/reference/cdacl-class.md) informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito DACL è utilizzato per impostazione predefinita quando vengono creati nuovi oggetti con questo token di accesso in effetti, l'elenco DACL.  
  
##  <a name="setowner"></a>CAccessToken::SetOwner  
 Chiamare questo metodo per impostare il proprietario del `CAccessToken` oggetto.  
  
```
bool SetOwner(const CSid& rSid) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rSid`  
 Il [classe IDSR](../../atl/reference/csid-class.md) oggetto contenente le informazioni sul proprietario.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il proprietario è il proprietario predefinito utilizzato per i nuovi oggetti creati mentre è in corso di questo token di accesso.  
  
##  <a name="setprimarygroup"></a>CAccessToken::SetPrimaryGroup  
 Chiamare questo metodo per impostare il gruppo primario del `CAccessToken` oggetto.  
  
```
bool SetPrimaryGroup(const CSid& rSid) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rSid`  
 Il [classe IDSR](../../atl/reference/csid-class.md) oggetto contenente le informazioni di gruppo primario.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il gruppo primario è il gruppo predefinito per nuovi oggetti creati mentre è in corso di questo token di accesso.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio ATLSecurity](../../visual-cpp-samples.md)   
 [Token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
