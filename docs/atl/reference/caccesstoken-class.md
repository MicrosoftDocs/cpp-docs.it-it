---
title: Classe CAccessToken
ms.date: 11/04/2016
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
helpviewer_keywords:
- CAccessToken class
ms.assetid: bb5c5945-56a5-4083-b442-76573cee83ab
ms.openlocfilehash: 0b98df740b751d019c9b2852d682f61a51384818
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62260727"
---
# <a name="caccesstoken-class"></a>Classe CAccessToken

Questa classe è un wrapper per un token di accesso.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CAccessToken
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccessToken::~CAccessToken](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccessToken::Attach](#attach)|Chiamare questo metodo per acquisire la proprietà di handle del token di accesso specificata.|
|[CAccessToken::CheckTokenMembership](#checktokenmembership)|Chiamare questo metodo per determinare se un SID specificato è abilitato nel `CAccessToken` oggetto.|
|[CAccessToken::CreateImpersonationToken](#createimpersonationtoken)|Chiamare questo metodo per creare un nuovo token di accesso di rappresentazione.|
|[CAccessToken::CreatePrimaryToken](#createprimarytoken)|Chiamare questo metodo per creare un nuovo token primario.|
|[CAccessToken::CreateProcessAsUser](#createprocessasuser)|Chiamare questo metodo per creare un nuovo processo in esecuzione nel contesto di sicurezza dell'utente rappresentato dal `CAccessToken` oggetto.|
|[CAccessToken::CreateRestrictedToken](#createrestrictedtoken)|Chiamare questo metodo per creare un nuovo oggetto, con restrizioni `CAccessToken` oggetto.|
|[CAccessToken::Detach](#detach)|Chiamare questo metodo per revocare la proprietà del token di accesso.|
|[CAccessToken::DisablePrivilege](#disableprivilege)|Chiamare questo metodo per disabilitare un privilegio nel `CAccessToken` oggetto.|
|[CAccessToken::DisablePrivileges](#disableprivileges)|Chiamare questo metodo per disabilitare uno o più privilegi nel `CAccessToken` oggetto.|
|[CAccessToken::EnablePrivilege](#enableprivilege)|Chiamare questo metodo per abilitare un privilegio nel `CAccessToken` oggetto.|
|[CAccessToken::EnablePrivileges](#enableprivileges)|Chiamare questo metodo per attivare uno o più privilegi nel `CAccessToken` oggetto.|
|[CAccessToken::GetDefaultDacl](#getdefaultdacl)|Chiamare questo metodo per restituire il `CAccessToken` DACL predefiniti dell'oggetto.|
|[CAccessToken::GetEffectiveToken](#geteffectivetoken)|Chiamare questo metodo per ottenere il `CAccessToken` oggetto uguale al token di accesso attivo per il thread corrente.|
|[CAccessToken::GetGroups](#getgroups)|Chiamare questo metodo per restituire il `CAccessToken` gruppi token dell'oggetto.|
|[CAccessToken::GetHandle](#gethandle)|Chiamare questo metodo per recuperare un handle per il token di accesso.|
|[CAccessToken::GetImpersonationLevel](#getimpersonationlevel)|Chiamare questo metodo per ottenere il livello di rappresentazione dal token di accesso.|
|[CAccessToken::GetLogonSessionId](#getlogonsessionid)|Chiamare questo metodo per ottenere l'ID di sessione di accesso associato il `CAccessToken` oggetto.|
|[CAccessToken::GetLogonSid](#getlogonsid)|Chiamare questo metodo per ottenere il SID di accesso associato il `CAccessToken` oggetto.|
|[CAccessToken::GetOwner](#getowner)|Chiamare questo metodo per ottenere il proprietario associato il `CAccessToken` oggetto.|
|[CAccessToken::GetPrimaryGroup](#getprimarygroup)|Chiamare questo metodo per ottenere il gruppo primario associato il `CAccessToken` oggetto.|
|[CAccessToken::GetPrivileges](#getprivileges)|Chiamare questo metodo per ottenere i privilegi associati il `CAccessToken` oggetto.|
|[CAccessToken::GetProcessToken](#getprocesstoken)|Chiamare questo metodo per inizializzare `CAccessToken` al token di accesso dal processo dato.|
|[CAccessToken::GetProfile](#getprofile)|Chiamare questo metodo per ottenere l'handle che puntano al profilo utente associato il `CAccessToken` oggetto.|
|[CAccessToken::GetSource](#getsource)|Chiamare questo metodo per ottenere il codice sorgente del `CAccessToken` oggetto.|
|[CAccessToken::GetStatistics](#getstatistics)|Chiamare questo metodo per ottenere le informazioni associate di `CAccessToken` oggetto.|
|[CAccessToken::GetTerminalServicesSessionId](#getterminalservicessessionid)|Chiamare questo metodo per ottenere l'ID di sessione Servizi Terminal associato il `CAccessToken` oggetto.|
|[CAccessToken::GetThreadToken](#getthreadtoken)|Chiamare questo metodo per inizializzare il `CAccessToken` con il token dal thread specificato.|
|[CAccessToken::GetTokenId](#gettokenid)|Chiamare questo metodo per ottenere l'ID del Token associato il `CAccessToken` oggetto.|
|[CAccessToken::GetType](#gettype)|Chiamare questo metodo per ottenere il tipo di token di `CAccessToken` oggetto.|
|[CAccessToken::GetUser](#getuser)|Chiamare questo metodo per identificare l'utente associato il `CAccessToken` oggetto.|
|[CAccessToken::HKeyCurrentUser](#hkeycurrentuser)|Chiamare questo metodo per ottenere l'handle che puntano al profilo utente associato il `CAccessToken` oggetto.|
|[CAccessToken::Impersonate](#impersonate)|Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.|
|[CAccessToken::ImpersonateLoggedOnUser](#impersonateloggedonuser)|Chiamare questo metodo per consentire al thread chiamante di rappresentare il contesto di sicurezza di un utente connesso.|
|[CAccessToken::IsTokenRestricted](#istokenrestricted)|Chiamare questo metodo per verificare se il `CAccessToken` oggetto contiene un elenco di SID con restrizioni.|
|[CAccessToken::LoadUserProfile](#loaduserprofile)|Chiamare questo metodo per caricare il profilo utente associato il `CAccessToken` oggetto.|
|[CAccessToken::LogonUser](#logonuser)|Chiamare questo metodo per creare una sessione di accesso per l'utente associato alle credenziali specificate.|
|[CAccessToken::OpenCOMClientToken](#opencomclienttoken)|Chiamare questo metodo all'interno di un server COM che gestisce una chiamata da un client per inizializzare il `CAccessToken` con il token di accesso dal client COM.|
|[CAccessToken::OpenNamedPipeClientToken](#opennamedpipeclienttoken)|Chiamare questo metodo all'interno di un server di richieste di creazione tramite una named pipe per inizializzare il `CAccessToken` con il token di accesso dal client.|
|[CAccessToken::OpenRPCClientToken](#openrpcclienttoken)|Chiamare questo metodo all'interno di un server di gestione di una chiamata da un client RPC per inizializzare il `CAccessToken` con il token di accesso dal client.|
|[CAccessToken::OpenThreadToken](#openthreadtoken)|Chiamare questo metodo per impostare il livello di rappresentazione e quindi inizializzare il `CAccessToken` con il token dal thread specificato.|
|[CAccessToken::PrivilegeCheck](#privilegecheck)|Chiamare questo metodo per determinare se un determinato set di privilegi siano abilitati nel `CAccessToken` oggetto.|
|[CAccessToken::Revert](#revert)|Chiamare questo metodo per interrompere un thread che usa un token di rappresentazione.|
|[CAccessToken::SetDefaultDacl](#setdefaultdacl)|Chiamare questo metodo per impostare il valore predefinito elenco DACL del `CAccessToken` oggetto.|
|[CAccessToken::SetOwner](#setowner)|Chiamare questo metodo per impostare il proprietario del `CAccessToken` oggetto.|
|[CAccessToken::SetPrimaryGroup](#setprimarygroup)|Chiamare questo metodo per impostare il gruppo primario del `CAccessToken` oggetto.|

## <a name="remarks"></a>Note

Un' [token di accesso](/windows/desktop/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di sicurezza di un processo o thread e viene allocato a ogni utente connesso a un sistema di Windows.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="attach"></a>  CAccessToken::Attach

Chiamare questo metodo per acquisire la proprietà di handle del token di accesso specificata.

```
void Attach(HANDLE hToken) throw();
```

### <a name="parameters"></a>Parametri

*hToken*<br/>
Handle per il token di accesso.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se il `CAccessToken` oggetto dispone già di proprietà di un token di accesso.

##  <a name="dtor"></a>  CAccessToken::~CAccessToken

Distruttore.

```
virtual ~CAccessToken() throw();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate.

##  <a name="checktokenmembership"></a>  CAccessToken::CheckTokenMembership

Chiamare questo metodo per determinare se un SID specificato è abilitato nel `CAccessToken` oggetto.

```
bool CheckTokenMembership(
    const CSid& rSid,
    bool* pbIsMember) const throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Fare riferimento a un [classe CSid](../../atl/reference/csid-class.md) oggetto.

*pbIsMember*<br/>
Puntatore a una variabile che riceve i risultati della verifica.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il `CheckTokenMembership` metodo verifica la presenza del SID in utenti e SID di gruppo del token di accesso. Se il SID è presente e ha l'attributo SE_GROUP_ENABLED *pbIsMember* è impostato su TRUE; in caso contrario, impostarlo su FALSE.

Nelle build di debug, si verifica un errore di asserzione se *pbIsMember* non è un puntatore valido.

> [!NOTE]
>  Il `CAccessToken` oggetto deve essere un token di rappresentazione e non un token primario.

##  <a name="createimpersonationtoken"></a>  CAccessToken::CreateImpersonationToken

Chiamare questo metodo per creare un token di accesso di rappresentazione.

```
bool CreateImpersonationToken(
    CAccessToken* pImp,
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) const throw(...);
```

### <a name="parameters"></a>Parametri

*pImp*<br/>
Puntatore al nuovo `CAccessToken` oggetto.

*sil*<br/>
Specifica un [SECURITY_IMPERSONATION_LEVEL](/windows/desktop/api/winnt/ne-winnt-_security_impersonation_level) tipo enumerato che specifica il livello di rappresentazione del token di nuovo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

`CreateImpersonationToken` le chiamate [DuplicateToken](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-duplicatetoken) per creare un nuovo token di rappresentazione.

##  <a name="createprimarytoken"></a>  CAccessToken::CreatePrimaryToken

Chiamare questo metodo per creare un nuovo token primario.

```
bool CreatePrimaryToken(
    CAccessToken* pPri,
    DWORD dwDesiredAccess = MAXIMUM_ALLOWED,
    const CSecurityAttributes* pTokenAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPri*<br/>
Puntatore al nuovo `CAccessToken` oggetto.

*dwDesiredAccess*<br/>
Specifica i diritti di accesso richiesto per il nuovo token. L'impostazione predefinita, MAXIMUM_ALLOWED, richieste di tutti i diritti di accesso valide per il chiamante. Visualizzare [diritti di accesso e le maschere di accesso](/windows/desktop/SecAuthZ/access-rights-and-access-masks) ulteriori su diritti di accesso.

*pTokenAttributes*<br/>
Puntatore a un [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che consente di specificare un descrittore di sicurezza per il nuovo token e determina se i processi figlio possono ereditare il token. Se *pTokenAttributes* è NULL, il token Ottiene un descrittore di sicurezza predefinite e l'handle non può essere ereditata.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

`CreatePrimaryToken` le chiamate [DuplicateTokenEx](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-duplicatetokenex) per creare un nuovo token primario.

##  <a name="createprocessasuser"></a>  CAccessToken::CreateProcessAsUser

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

*pApplicationName*<br/>
Puntatore a una stringa con terminazione null che specifica il modulo per l'esecuzione. Questo parametro non può essere NULL.

*pCommandLine*<br/>
Puntatore a una stringa con terminazione null che specifica la riga di comando da eseguire.

*pProcessInformation*<br/>
Puntatore a un [PROCESS_INFORMATION](/windows/desktop/api/processthreadsapi/ns-processthreadsapi-_process_information) struttura che riceve informazioni di identificazione sul nuovo processo.

*pStartupInfo*<br/>
Puntatore a un [STARTUPINFO](/windows/desktop/api/processthreadsapi/ns-processthreadsapi-_startupinfoa) struttura che specifica come deve venire visualizzata la finestra principale per il nuovo processo.

*dwCreationFlags*<br/>
Specifica i flag aggiuntivi che consentono di controllare la classe di priorità e la creazione del processo. Vedere la funzione Win32 [CreateProcessAsUser](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createprocessasusera) per un elenco di flag.

*bLoadProfile*<br/>
Se TRUE, il profilo dell'utente viene caricato con [LoadUserProfile](/windows/desktop/api/userenv/nf-userenv-loaduserprofilea).

*pProcessAttributes*<br/>
Puntatore a un [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che consente di specificare un descrittore di sicurezza per il nuovo processo e determina se l'handle restituito possono ereditare da processi figlio. Se *pProcessAttributes* è NULL, il processo Ottiene un descrittore di sicurezza predefinite e l'handle non può essere ereditata.

*pThreadAttributes*<br/>
Puntatore a un [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che consente di specificare un descrittore di sicurezza per il nuovo thread e determina se l'handle restituito possono ereditare da processi figlio. Se *pThreadAttributes* è NULL, il thread Ottiene un descrittore di sicurezza predefinite e l'handle non può essere ereditata.

*bInherit*<br/>
Indica se il nuovo processo eredita l'handle dal processo chiamante. Se TRUE, ogni handle aperta ereditabile nel processo chiamante viene ereditata dal nuovo processo. Handle ereditati hanno gli stessi privilegi di accesso e valore come gli handle originali.

*pCurrentDirectory*<br/>
Puntatore a una stringa con terminazione null che specifica l'unità corrente e una directory per il nuovo processo. La stringa deve essere un percorso completo che include una lettera di unità. Se questo parametro è NULL, il nuovo processo avrà la stessa unità e directory corrente del processo chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

`CreateProcessAsUser` Usa il `CreateProcessAsUser` funzione di Win32 per creare un nuovo processo che viene eseguito nel contesto di sicurezza dell'utente rappresentato dal `CAccessToken` oggetto. Vedere la descrizione della [CreateProcessAsUser](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createprocessasusera) funzione per una spiegazione completa dei parametri necessari.

Per questo metodo abbia esito positivo, il `CAccessToken` oggetto deve contenere AssignPrimaryToken (a meno che non sia un token con restrizioni) e i privilegi IncreaseQuota.

##  <a name="createrestrictedtoken"></a>  CAccessToken::CreateRestrictedToken

Chiamare questo metodo per creare un nuovo oggetto, con restrizioni `CAccessToken` oggetto.

```
bool CreateRestrictedToken(
    CAccessToken* pRestrictedToken,
    const CTokenGroups& SidsToDisable,
    const CTokenGroups& SidsToRestrict,
    const CTokenPrivileges& PrivilegesToDelete = CTokenPrivileges()) const throw(...);
```

### <a name="parameters"></a>Parametri

*pRestrictedToken*<br/>
Nuovo, limitato `CAccessToken` oggetto.

*SidsToDisable*<br/>
Oggetto `CTokenGroups` oggetto che specifica il SID di sola negazione.

*SidsToRestrict*<br/>
Oggetto `CTokenGroups` oggetto che specifica il SID con restrizioni.

*PrivilegesToDelete*<br/>
Oggetto `CTokenPrivileges` oggetto che specifica i privilegi da eliminare nel token con restrizioni. L'impostazione predefinita crea un oggetto vuoto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

`CreateRestrictedToken` Usa il [CreateRestrictedToken](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-createrestrictedtoken) funzione di Win32 per creare un nuovo `CAccessToken` oggetto, con restrizioni.

> [!IMPORTANT]
>  Quando si usa `CreateRestrictedToken`, verificare quanto segue: il token esistente è valido (e non immesso dall'utente) e *SidsToDisable* e *PrivilegesToDelete* siano validi (e non immesso dall'utente). Se il metodo restituisce FALSE, negare la funzionalità.

##  <a name="detach"></a>  CAccessToken::Detach

Chiamare questo metodo per revocare la proprietà del token di accesso.

```
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per il `CAccessToken` che è stato scollegato.

### <a name="remarks"></a>Note

Questo metodo revoca il `CAccessToken`del proprietario del token di accesso.

##  <a name="disableprivilege"></a>  CAccessToken::DisablePrivilege

Chiamare questo metodo per disabilitare un privilegio nel `CAccessToken` oggetto.

```
bool DisablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa contenente il privilegio per disabilitare nel `CAccessToken` oggetto.

*pPreviousState*<br/>
Puntatore a un `CTokenPrivileges` oggetto che contiene lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="disableprivileges"></a>  CAccessToken::DisablePrivileges

Chiamare questo metodo per disabilitare uno o più privilegi nel `CAccessToken` oggetto.

```
bool DisablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivileges*<br/>
Puntatore a una matrice di stringhe contenente i privilegi per disabilitare nel `CAccessToken` oggetto.

*pPreviousState*<br/>
Puntatore a un `CTokenPrivileges` oggetto che contiene lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="enableprivilege"></a>  CAccessToken::EnablePrivilege

Chiamare questo metodo per abilitare un privilegio nel `CAccessToken` oggetto.

```
bool EnablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa contenente i privilegi necessari per abilitare il `CAccessToken` oggetto.

*pPreviousState*<br/>
Puntatore a un `CTokenPrivileges` oggetto che contiene lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="enableprivileges"></a>  CAccessToken::EnablePrivileges

Chiamare questo metodo per attivare uno o più privilegi nel `CAccessToken` oggetto.

```
bool EnablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivileges*<br/>
Puntatore a una matrice di stringhe contenente i privilegi per abilitare il `CAccessToken` oggetto.

*pPreviousState*<br/>
Puntatore a un `CTokenPrivileges` oggetto che contiene lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="getdefaultdacl"></a>  CAccessToken::GetDefaultDacl

Chiamare questo metodo per restituire il `CAccessToken` DACL predefiniti dell'oggetto.

```
bool GetDefaultDacl(CDacl* pDacl) const throw(...);
```

### <a name="parameters"></a>Parametri

*pDacl*<br/>
Puntatore per il [classe CDacl](../../atl/reference/cdacl-class.md) oggetto che riceverà il `CAccessToken` DACL predefiniti dell'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elenco DACL predefinito è stato ripristinato, FALSE in caso contrario.

##  <a name="geteffectivetoken"></a>  CAccessToken::GetEffectiveToken

Chiamare questo metodo per ottenere il `CAccessToken` oggetto uguale al token di accesso attivo per il thread corrente.

```
bool GetEffectiveToken(DWORD dwDesiredAccess) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="getgroups"></a>  CAccessToken::GetGroups

Chiamare questo metodo per restituire il `CAccessToken` gruppi token dell'oggetto.

```
bool GetGroups(CTokenGroups* pGroups) const throw(...);
```

### <a name="parameters"></a>Parametri

*pGroups*<br/>
Puntatore per il [classe CTokenGroups](../../atl/reference/ctokengroups-class.md) oggetto che riceverà le informazioni sul gruppo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="gethandle"></a>  CAccessToken::GetHandle

Chiamare questo metodo per recuperare un handle per il token di accesso.

```
HANDLE GetHandle() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle per il `CAccessToken` token di accesso dell'oggetto.

##  <a name="getimpersonationlevel"></a>  CAccessToken::GetImpersonationLevel

Chiamare questo metodo per ottenere il livello di rappresentazione dal token di accesso.

```
bool GetImpersonationLevel(
    SECURITY_IMPERSONATION_LEVEL* pImpersonationLevel) const throw(...);
```

### <a name="parameters"></a>Parametri

*pImpersonationLevel*<br/>
Puntatore a un [SECURITY_IMPERSONATION_LEVEL](/windows/desktop/api/winnt/ne-winnt-_security_impersonation_level) tipo di enumerazione che riceverà le informazioni a livello di rappresentazione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="getlogonsessionid"></a>  CAccessToken::GetLogonSessionId

Chiamare questo metodo per ottenere l'ID di sessione di accesso associato il `CAccessToken` oggetto.

```
bool GetLogonSessionId(LUID* pluid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pluid*<br/>
Puntatore a un [LUID](/windows/desktop/api/winnt/ns-winnt-_luid) che riceverà l'accesso ID della sessione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se *pluid* è un valore non valido.

##  <a name="getlogonsid"></a>  CAccessToken::GetLogonSid

Chiamare questo metodo per ottenere il SID di accesso associato il `CAccessToken` oggetto.

```
bool GetLogonSid(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un [classe CSid](../../atl/reference/csid-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se *pSid* è un valore non valido.

##  <a name="getowner"></a>  CAccessToken::GetOwner

Chiamare questo metodo per ottenere il proprietario associato il `CAccessToken` oggetto.

```
bool GetOwner(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un [classe CSid](../../atl/reference/csid-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il proprietario viene impostato per impostazione predefinita su tutti gli oggetti creati mentre questo token di accesso è attiva.

##  <a name="getprimarygroup"></a>  CAccessToken::GetPrimaryGroup

Chiamare questo metodo per ottenere il gruppo primario associato il `CAccessToken` oggetto.

```
bool GetPrimaryGroup(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un [classe CSid](../../atl/reference/csid-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il gruppo viene impostato per impostazione predefinita su tutti gli oggetti creati mentre questo token di accesso è attiva.

##  <a name="getprivileges"></a>  CAccessToken::GetPrivileges

Chiamare questo metodo per ottenere i privilegi associati il `CAccessToken` oggetto.

```
bool GetPrivileges(CTokenPrivileges* pPrivileges) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPrivileges*<br/>
Puntatore a un [classe CTokenPrivileges](../../atl/reference/ctokenprivileges-class.md) oggetto che riceverà i privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="getprocesstoken"></a>  CAccessToken::GetProcessToken

Chiamare questo metodo per inizializzare `CAccessToken` al token di accesso dal processo dato.

```
bool GetProcessToken(DWORD dwDesiredAccess, HANDLE hProcess = NULL) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*hProcess*<br/>
Gestisce il processo il cui il token di accesso è aperto. Se viene usato il valore predefinito null, viene utilizzato il processo corrente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Chiama il [OpenProcessToken](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-openprocesstoken) funzione Win32.

##  <a name="getprofile"></a>  CAccessToken::GetProfile

Chiamare questo metodo per ottenere l'handle che puntano al profilo utente associato il `CAccessToken` oggetto.

```
HANDLE GetProfile() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle che puntano al profilo utente, o NULL se è disponibile alcun profilo.

##  <a name="getsource"></a>  CAccessToken::GetSource

Chiamare questo metodo per ottenere il codice sorgente del `CAccessToken` oggetto.

```
bool GetSource(TOKEN_SOURCE* pSource) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSource*<br/>
Puntatore a un [TOKEN_SOURCE](/windows/desktop/api/winnt/ns-winnt-_token_source) struttura.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="getstatistics"></a>  CAccessToken::GetStatistics

Chiamare questo metodo per ottenere le informazioni associate di `CAccessToken` oggetto.

```
bool GetStatistics(TOKEN_STATISTICS* pStatistics) const throw(...);
```

### <a name="parameters"></a>Parametri

*pStatistics*<br/>
Puntatore a un [TOKEN_STATISTICS](/windows/desktop/api/winnt/ns-winnt-_token_statistics) struttura.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="getterminalservicessessionid"></a>  CAccessToken::GetTerminalServicesSessionId

Chiamare questo metodo per ottenere l'ID di sessione Servizi Terminal associato il `CAccessToken` oggetto.

```
bool GetTerminalServicesSessionId(DWORD* pdwSessionId) const throw(...);
```

### <a name="parameters"></a>Parametri

*pdwSessionId*<br/>
L'ID di sessione Servizi Terminal.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="getthreadtoken"></a>  CAccessToken::GetThreadToken

Chiamare questo metodo per inizializzare il `CAccessToken` con il token dal thread specificato.

```
bool GetThreadToken(
    DWORD dwDesiredAccess,
    HANDLE hThread = NULL,
    bool bOpenAsSelf = true) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*hThread*<br/>
Handle per il thread viene aperto il cui token di accesso.

*bOpenAsSelf*<br/>
Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza della chiamata al metodo thread di `GetThreadToken` metodo o rispetto al contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo dell'accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread è una rappresentazione di un client, il contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="gettokenid"></a>  CAccessToken::GetTokenId

Chiamare questo metodo per ottenere l'ID del Token associato il `CAccessToken` oggetto.

```
bool GetTokenId(LUID* pluid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pluid*<br/>
Puntatore a un [LUID](/windows/desktop/api/winnt/ns-winnt-_luid) che riceverà il Token ID.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="gettype"></a>  CAccessToken::GetType

Chiamare questo metodo per ottenere il tipo di token di `CAccessToken` oggetto.

```
bool GetType(TOKEN_TYPE* pType) const throw(...);
```

### <a name="parameters"></a>Parametri

*pType*<br/>
Indirizzo della [TOKEN_TYPE](/windows/desktop/api/winnt/ne-winnt-_token_type) variabile che, in caso di esito positivo riceve il tipo di token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il tipo di enumerazione TOKEN_TYPE contiene valori che distingue un token primario da un token di rappresentazione.

##  <a name="getuser"></a>  CAccessToken::GetUser

Chiamare questo metodo per identificare l'utente associato il `CAccessToken` oggetto.

```
bool GetUser(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un [classe CSid](../../atl/reference/csid-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="hkeycurrentuser"></a>  CAccessToken::HKeyCurrentUser

Chiamare questo metodo per ottenere l'handle che puntano al profilo utente associato il `CAccessToken` oggetto.

```
HKEY HKeyCurrentUser() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle che puntano al profilo utente, o NULL se è disponibile alcun profilo.

##  <a name="impersonate"></a>  CAccessToken::Impersonate

Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.

```
bool Impersonate(HANDLE hThread = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*hThread*<br/>
Handle per il thread per il token di rappresentazione per assegnare. Questo handle deve essere aperto con diritti di accesso TOKEN_IMPERSONATE. Se *hThread* è NULL, il metodo fa in modo che il thread interrompere l'uso di un token di rappresentazione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se `CAccessToken` non dispone di un puntatore valido a un token.

Il [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usata per ripristinare automaticamente i token di accesso rappresentato.

##  <a name="impersonateloggedonuser"></a>  CAccessToken::ImpersonateLoggedOnUser

Chiamare questo metodo per consentire al thread chiamante di rappresentare il contesto di sicurezza di un utente connesso.

```
bool ImpersonateLoggedOnUser() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

> [!IMPORTANT]
>  Se una chiamata a una funzione di rappresentazione non riesce per qualsiasi motivo, non è la rappresentazione del client e la richiesta del client viene eseguita nel contesto di sicurezza del processo da cui è stata effettuata la chiamata. Se il processo è in esecuzione come account con privilegi elevati, o come membro di un gruppo amministrativo, l'utente potrebbe essere in grado di eseguire azioni egli verrebbe in caso contrario, non consentita. Pertanto, il valore restituito per questa funzione deve sempre essere confermato.

##  <a name="istokenrestricted"></a>  CAccessToken::IsTokenRestricted

Chiamare questo metodo per verificare se il `CAccessToken` oggetto contiene un elenco di SID con restrizioni.

```
bool IsTokenRestricted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'oggetto contiene un elenco di limitare i SID, FALSE se non esistono Nessun SID con restrizioni o se il metodo ha esito negativo.

##  <a name="loaduserprofile"></a>  CAccessToken::LoadUserProfile

Chiamare questo metodo per caricare il profilo utente associato il `CAccessToken` oggetto.

```
bool LoadUserProfile() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se il `CAccessToken` non contiene un token valido, o se il profilo di un utente è già presente.

##  <a name="logonuser"></a>  CAccessToken::LogonUser

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

*pszUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome utente. Si tratta del nome dell'account utente per l'accesso a.

*pszDomain*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del dominio o del server di database il cui account contiene il *pszUserName* account.

*pszPassword*<br/>
Puntatore a una stringa con terminazione null che specifica la password crittografata per l'account utente specificato da *pszUserName*.

*dwLogonType*<br/>
Specifica il tipo di operazione di accesso da eseguire. Visualizzare [LogonUser](/windows/desktop/api/winbase/nf-winbase-logonusera) per altri dettagli.

*dwLogonProvider*<br/>
Specifica il provider di accesso. Visualizzare [LogonUser](/windows/desktop/api/winbase/nf-winbase-logonusera) per altri dettagli.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

L'accesso token risultante dall'account di accesso verrà associato il `CAccessToken`. Per questo metodo abbia esito positivo, il `CAccessToken` oggetto deve contenere privilegi SE_TCB_NAME, che identifica il contenitore come parte del computer attendibili base. Visualizzare [LogonUser](/windows/desktop/api/winbase/nf-winbase-logonusera) per altre informazioni sui privilegi necessari.

##  <a name="opencomclienttoken"></a>  CAccessToken::OpenCOMClientToken

Chiamare questo metodo all'interno di un server COM che gestisce una chiamata da un client per inizializzare il `CAccessToken` con il token di accesso dal client COM.

```
bool OpenCOMClientToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente rappresenterà il client COM chiamante se questa chiamata viene completata correttamente. Se FALSE, verrà aperto il token di accesso, ma il thread non avrà un token di rappresentazione al termine di questa chiamata.

*bOpenAsSelf*<br/>
Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza della chiamata al metodo thread di [GetThreadToken](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) metodo o rispetto al contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo dell'accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread è una rappresentazione di un client, il contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usato per ripristinare automaticamente i token di accesso rappresentato creati impostando la *bImpersonate* flag su TRUE.

##  <a name="opennamedpipeclienttoken"></a>  CAccessToken::OpenNamedPipeClientToken

Chiamare questo metodo all'interno di un server di richieste di creazione tramite una named pipe per inizializzare il `CAccessToken` con il token di accesso dal client.

```
bool OpenNamedPipeClientToken(
    HANDLE hPipe,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*hPipe*<br/>
Handle per una named pipe.

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente rappresenterà il client chiamante pipe se questa chiamata viene completata correttamente. Se FALSE, verrà aperto il token di accesso, ma il thread non avrà un token di rappresentazione al termine di questa chiamata.

*bOpenAsSelf*<br/>
Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza della chiamata al metodo thread di [GetThreadToken](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) metodo o rispetto al contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo dell'accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread è una rappresentazione di un client, il contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usato per ripristinare automaticamente i token di accesso rappresentato creati impostando la *bImpersonate* flag su TRUE.

##  <a name="openrpcclienttoken"></a>  CAccessToken::OpenRPCClientToken

Chiamare questo metodo all'interno di un server di gestione di una chiamata da un client RPC per inizializzare il `CAccessToken` con il token di accesso dal client.

```
bool OpenRPCClientToken(
    RPC_BINDING_HANDLE BindingHandle,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*BindingHandle*<br/>
Handle di binding nel server che rappresenta un'associazione a un client.

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente rappresenterà il client RPC chiamante se questa chiamata viene completata correttamente. Se FALSE, verrà aperto il token di accesso, ma il thread non avrà un token di rappresentazione al termine di questa chiamata.

*bOpenAsSelf*<br/>
Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza della chiamata al metodo thread di [GetThreadToken](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) metodo o rispetto al contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo dell'accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread è una rappresentazione di un client, il contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usato per ripristinare automaticamente i token di accesso rappresentato creati impostando la *bImpersonate* flag su TRUE.

##  <a name="openthreadtoken"></a>  CAccessToken::OpenThreadToken

Chiamare questo metodo per impostare il livello di rappresentazione e quindi inizializzare il `CAccessToken` con il token dal thread specificato.

```
bool OpenThreadToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true,
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) throw(...);
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread verrà lasciato a livello di rappresentazione richiesta dopo il completamento del metodo. Se FALSE, il thread consentirà di ripristinare il livello di rappresentazione originale.

*bOpenAsSelf*<br/>
Indica se il controllo di accesso deve essere eseguita rispetto al contesto di sicurezza della chiamata al metodo thread di [GetThreadToken](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) metodo o rispetto al contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo dell'accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread è una rappresentazione di un client, il contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

*sil*<br/>
Specifica un [SECURITY_IMPERSONATION_LEVEL](/windows/desktop/api/winnt/ne-winnt-_security_impersonation_level) tipo enumerato che specifica il livello di rappresentazione del token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

`OpenThreadToken` è simile a [CAccessToken::GetThreadToken](#getthreadtoken), ma imposta il livello di rappresentazione prima di inizializzare il `CAccessToken` dal token di accesso del thread.

Il [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usato per ripristinare automaticamente i token di accesso rappresentato creati impostando la *bImpersonate* flag su TRUE.

##  <a name="privilegecheck"></a>  CAccessToken::PrivilegeCheck

Chiamare questo metodo per determinare se un determinato set di privilegi siano abilitati nel `CAccessToken` oggetto.

```
bool PrivilegeCheck(
    PPRIVILEGE_SET RequiredPrivileges,
    bool* pbResult) const throw();
```

### <a name="parameters"></a>Parametri

*RequiredPrivileges*<br/>
Puntatore a un [PRIVILEGE_SET](/windows/desktop/api/winnt/ns-winnt-_privilege_set) struttura.

*pbResult*<br/>
Puntatore a un valore imposta il metodo per indicare se alcuni o tutti il privilegio specificato sono abilitati nel `CAccessToken` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Quando `PrivilegeCheck` viene restituito, il `Attributes` membro della ognuno [LUID_AND_ATTRIBUTES](/windows/desktop/api/winnt/ns-winnt-_luid_and_attributes) struttura è impostata su SE_PRIVILEGE_USED_FOR_ACCESS se è abilitato il privilegio corrispondente. Questo metodo chiama il [PrivilegeCheck](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-privilegecheck) funzione Win32.

##  <a name="revert"></a>  CAccessToken::Revert

Chiamare questo metodo per interrompere un thread da usando un token di rappresentazione.

```
bool Revert(HANDLE hThread = NULL) const throw();
```

### <a name="parameters"></a>Parametri

*hThread*<br/>
Handle per il thread per ripristinare dalla rappresentazione. Se *hThread* è NULL, si presuppone che il thread corrente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

L'annullamento dei token di rappresentazione può essere eseguita automaticamente con il [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md).

##  <a name="setdefaultdacl"></a>  CAccessToken::SetDefaultDacl

Chiamare questo metodo per impostare il valore predefinito elenco DACL del `CAccessToken` oggetto.

```
bool SetDefaultDacl(const CDacl& rDacl) throw(...);
```

### <a name="parameters"></a>Parametri

*rDacl*<br/>
Il nuovo valore predefinito [classe CDacl](../../atl/reference/cdacl-class.md) informazioni.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il valore predefinito DACL è il DACL viene usato per impostazione predefinita quando vengono creati nuovi oggetti con questo token di accesso attivo.

##  <a name="setowner"></a>  CAccessToken::SetOwner

Chiamare questo metodo per impostare il proprietario del `CAccessToken` oggetto.

```
bool SetOwner(const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Il [classe CSid](../../atl/reference/csid-class.md) contenente le informazioni del proprietario.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il proprietario è il proprietario predefinito che viene usato per i nuovi oggetti creati mentre questo token di accesso è attiva.

##  <a name="setprimarygroup"></a>  CAccessToken::SetPrimaryGroup

Chiamare questo metodo per impostare il gruppo primario del `CAccessToken` oggetto.

```
bool SetPrimaryGroup(const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Il [classe CSid](../../atl/reference/csid-class.md) contenente le informazioni di gruppo primario.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il gruppo primario è il gruppo predefinito per nuovi oggetti creati mentre questo token di accesso è attiva.

## <a name="see-also"></a>Vedere anche

[Esempio ATLSecurity](../../overview/visual-cpp-samples.md)<br/>
[Token di accesso](/windows/desktop/SecAuthZ/access-tokens)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
