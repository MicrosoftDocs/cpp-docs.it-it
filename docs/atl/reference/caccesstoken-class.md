---
description: 'Altre informazioni su: classe CAccessToken'
title: Classe CAccessToken
ms.date: 07/02/2019
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
ms.openlocfilehash: fdcef40948a19c5ffb69aa32b18566280d048697
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158543"
---
# <a name="caccesstoken-class"></a>Classe CAccessToken

Questa classe è un wrapper per un token di accesso.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class CAccessToken
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAccessToken:: ~ CAccessToken](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAccessToken:: Connetti](#attach)|Chiamare questo metodo per assumere la proprietà dell'handle del token di accesso specificato.|
|[CAccessToken:: CheckTokenMembership](#checktokenmembership)|Chiamare questo metodo per determinare se un SID specificato è abilitato nell' `CAccessToken` oggetto.|
|[CAccessToken:: CreateImpersonationToken](#createimpersonationtoken)|Chiamare questo metodo per creare un nuovo token di accesso di rappresentazione.|
|[CAccessToken:: CreatePrimaryToken](#createprimarytoken)|Chiamare questo metodo per creare un nuovo token primario.|
|[CAccessToken:: CreateProcessAsUser ha](#createprocessasuser)|Chiamare questo metodo per creare un nuovo processo in esecuzione nel contesto di sicurezza dell'utente rappresentato dall' `CAccessToken` oggetto.|
|[CAccessToken:: CreateRestrictedToken](#createrestrictedtoken)|Chiamare questo metodo per creare un nuovo oggetto con restrizioni `CAccessToken` .|
|[CAccessToken::D etach](#detach)|Chiamare questo metodo per revocare la proprietà del token di accesso.|
|[CAccessToken::D isablePrivilege](#disableprivilege)|Chiamare questo metodo per disabilitare un privilegio nell' `CAccessToken` oggetto.|
|[CAccessToken::D isablePrivileges](#disableprivileges)|Chiamare questo metodo per disabilitare uno o più privilegi nell' `CAccessToken` oggetto.|
|[CAccessToken:: EnablePrivilege](#enableprivilege)|Chiamare questo metodo per abilitare un privilegio nell' `CAccessToken` oggetto.|
|[CAccessToken:: EnablePrivileges](#enableprivileges)|Chiamare questo metodo per abilitare uno o più privilegi nell' `CAccessToken` oggetto.|
|[CAccessToken:: GetDefaultDacl](#getdefaultdacl)|Chiamare questo metodo per restituire l' `CAccessToken` elenco DACL predefinito dell'oggetto.|
|[CAccessToken:: GetEffectiveToken](#geteffectivetoken)|Chiamare questo metodo per ottenere l' `CAccessToken` oggetto uguale al token di accesso attivo per il thread corrente.|
|[CAccessToken:: GetGroups](#getgroups)|Chiamare questo metodo per restituire i `CAccessToken` gruppi di token dell'oggetto.|
|[CAccessToken:: GetHandle](#gethandle)|Chiamare questo metodo per recuperare un handle per il token di accesso.|
|[CAccessToken:: GetImpersonationLevel](#getimpersonationlevel)|Chiamare questo metodo per ottenere il livello di rappresentazione dal token di accesso.|
|[CAccessToken:: GetLogonSessionId](#getlogonsessionid)|Chiamare questo metodo per ottenere l'ID della sessione di accesso associato all' `CAccessToken` oggetto.|
|[CAccessToken:: GetLogonSid](#getlogonsid)|Chiamare questo metodo per ottenere il SID di accesso associato all' `CAccessToken` oggetto.|
|[CAccessToken:: GetOwner](#getowner)|Chiamare questo metodo per ottenere il proprietario associato all' `CAccessToken` oggetto.|
|[CAccessToken:: GetPrimaryGroup](#getprimarygroup)|Chiamare questo metodo per ottenere il gruppo primario associato all' `CAccessToken` oggetto.|
|[CAccessToken:: getprivileges](#getprivileges)|Chiamare questo metodo per ottenere i privilegi associati all' `CAccessToken` oggetto.|
|[CAccessToken:: GetProcessToken](#getprocesstoken)|Chiamare questo metodo per inizializzare `CAccessToken` al token di accesso dal processo dato.|
|[CAccessToken:: GetProfile](#getprofile)|Chiamare questo metodo per ottenere l'handle che punta al profilo utente associato all' `CAccessToken` oggetto.|
|[CAccessToken:: GetSource](#getsource)|Chiamare questo metodo per ottenere l'origine dell' `CAccessToken` oggetto.|
|[CAccessToken:: GetStatistics](#getstatistics)|Chiamare questo metodo per ottenere informazioni associate all' `CAccessToken` oggetto.|
|[CAccessToken:: GetTerminalServicesSessionId](#getterminalservicessessionid)|Chiamare questo metodo per ottenere l'ID di sessione di Servizi terminal associato all' `CAccessToken` oggetto.|
|[CAccessToken:: GetThreadToken](#getthreadtoken)|Chiamare questo metodo per inizializzare l'oggetto `CAccessToken` con il token dal thread specificato.|
|[CAccessToken:: GetTokenId](#gettokenid)|Chiamare questo metodo per ottenere l'ID del token associato all' `CAccessToken` oggetto.|
|[CAccessToken:: GetType](#gettype)|Chiamare questo metodo per ottenere il tipo di token dell' `CAccessToken` oggetto.|
|[CAccessToken:: GetUser](#getuser)|Chiamare questo metodo per identificare l'utente associato all' `CAccessToken` oggetto.|
|[CAccessToken:: HKeyCurrentUser](#hkeycurrentuser)|Chiamare questo metodo per ottenere l'handle che punta al profilo utente associato all' `CAccessToken` oggetto.|
|[CAccessToken:: Impersonate](#impersonate)|Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.|
|[CAccessToken:: ImpersonateLoggedOnUser](#impersonateloggedonuser)|Chiamare questo metodo per consentire al thread chiamante di rappresentare il contesto di sicurezza di un utente connesso.|
|[CAccessToken:: IsTokenRestricted](#istokenrestricted)|Chiamare questo metodo per verificare se l' `CAccessToken` oggetto contiene un elenco di SID limitati.|
|[CAccessToken:: LoadUserProfile](#loaduserprofile)|Chiamare questo metodo per caricare il profilo utente associato all' `CAccessToken` oggetto.|
|[CAccessToken:: LogonUser](#logonuser)|Chiamare questo metodo per creare una sessione di accesso per l'utente associato alle credenziali specificate.|
|[CAccessToken:: OpenCOMClientToken](#opencomclienttoken)|Chiamare questo metodo dall'interno di un server COM gestendo una chiamata da un client per inizializzare `CAccessToken` con il token di accesso dal client com.|
|[CAccessToken:: OpenNamedPipeClientToken](#opennamedpipeclienttoken)|Chiamare questo metodo da un server che accetta richieste su un named pipe per inizializzare `CAccessToken` con il token di accesso dal client.|
|[CAccessToken:: OpenRPCClientToken](#openrpcclienttoken)|Chiamare questo metodo dall'interno di un server che gestisce una chiamata da un client RPC per inizializzare `CAccessToken` con il token di accesso dal client.|
|[CAccessToken:: OpenThreadToken](#openthreadtoken)|Chiamare questo metodo per impostare il livello di rappresentazione e quindi inizializzare `CAccessToken` con il token dal thread specificato.|
|[CAccessToken::P rivilegeCheck](#privilegecheck)|Chiamare questo metodo per determinare se un set specificato di privilegi è abilitato nell' `CAccessToken` oggetto.|
|[CAccessToken:: Revert](#revert)|Chiamare questo metodo per arrestare un thread che utilizza un token di rappresentazione.|
|[CAccessToken:: SetDefaultDacl](#setdefaultdacl)|Chiamare questo metodo per impostare l'elenco DACL predefinito dell' `CAccessToken` oggetto.|
|[CAccessToken:: SetOwner](#setowner)|Chiamare questo metodo per impostare il proprietario dell' `CAccessToken` oggetto.|
|[CAccessToken:: SetPrimaryGroup](#setprimarygroup)|Chiamare questo metodo per impostare il gruppo primario dell' `CAccessToken` oggetto.|

## <a name="remarks"></a>Commenti

Un [token di accesso](/windows/win32/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di sicurezza di un processo o di un thread e viene allocato a ciascun utente connesso a un sistema Windows.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="caccesstokenattach"></a><a name="attach"></a> CAccessToken:: Connetti

Chiamare questo metodo per assumere la proprietà dell'handle del token di accesso specificato.

```cpp
void Attach(HANDLE hToken) throw();
```

### <a name="parameters"></a>Parametri

*hToken*<br/>
Handle per il token di accesso.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se l' `CAccessToken` oggetto ha già la proprietà di un token di accesso.

## <a name="caccesstokencaccesstoken"></a><a name="dtor"></a> CAccessToken:: ~ CAccessToken

Distruttore.

```cpp
virtual ~CAccessToken() throw();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

## <a name="caccesstokenchecktokenmembership"></a><a name="checktokenmembership"></a> CAccessToken:: CheckTokenMembership

Chiamare questo metodo per determinare se un SID specificato è abilitato nell' `CAccessToken` oggetto.

```cpp
bool CheckTokenMembership(
    const CSid& rSid,
    bool* pbIsMember) const throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Riferimento a un oggetto della [classe CSid](../../atl/reference/csid-class.md) .

*pbIsMember*<br/>
Puntatore a una variabile che riceve i risultati del controllo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Il `CheckTokenMembership` metodo verifica la presenza del SID nei SID di gruppo e utente del token di accesso. Se il SID è presente e ha l'attributo SE_GROUP_ENABLED, *pbIsMember* è impostato su true; in caso contrario, viene impostato su FALSE.

Nelle build di debug, si verificherà un errore di asserzione se *pbIsMember* non è un puntatore valido.

> [!NOTE]
> L' `CAccessToken` oggetto deve essere un token di rappresentazione e non un token primario.

## <a name="caccesstokencreateimpersonationtoken"></a><a name="createimpersonationtoken"></a> CAccessToken:: CreateImpersonationToken

Chiamare questo metodo per creare un token di accesso di rappresentazione.

```cpp
bool CreateImpersonationToken(
    CAccessToken* pImp,
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) const throw(...);
```

### <a name="parameters"></a>Parametri

*pImp*<br/>
Puntatore al nuovo `CAccessToken` oggetto.

*SIL*<br/>
Specifica un [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) tipo enumerato che fornisce il livello di rappresentazione del nuovo token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

`CreateImpersonationToken` chiama [DuplicateToken](/windows/win32/api/securitybaseapi/nf-securitybaseapi-duplicatetoken) per creare un nuovo token di rappresentazione.

## <a name="caccesstokencreateprimarytoken"></a><a name="createprimarytoken"></a> CAccessToken:: CreatePrimaryToken

Chiamare questo metodo per creare un nuovo token primario.

```cpp
bool CreatePrimaryToken(
    CAccessToken* pPri,
    DWORD dwDesiredAccess = MAXIMUM_ALLOWED,
    const CSecurityAttributes* pTokenAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPri*<br/>
Puntatore al nuovo `CAccessToken` oggetto.

*dwDesiredAccess*<br/>
Specifica i diritti di accesso richiesti per il nuovo token. Il valore predefinito, MAXIMUM_ALLOWED, richiede tutti i diritti di accesso validi per il chiamante. Per ulteriori informazioni sui diritti di accesso [, vedere Access Rights and Access Masks](/windows/win32/SecAuthZ/access-rights-and-access-masks) .

*pTokenAttributes*<br/>
Puntatore a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica un descrittore di sicurezza per il nuovo token e determina se i processi figlio possono ereditare il token. Se *pTokenAttributes* è null, il token ottiene un descrittore di sicurezza predefinito e l'handle non può essere ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

`CreatePrimaryToken` chiama [DuplicateTokenEx](/windows/win32/api/securitybaseapi/nf-securitybaseapi-duplicatetokenex) per creare un nuovo token primario.

## <a name="caccesstokencreateprocessasuser"></a><a name="createprocessasuser"></a> CAccessToken:: CreateProcessAsUser ha

Chiamare questo metodo per creare un nuovo processo in esecuzione nel contesto di sicurezza dell'utente rappresentato dall' `CAccessToken` oggetto.

```cpp
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
Puntatore a una stringa con terminazione null che specifica il modulo da eseguire. Questo parametro non può essere NULL.

*pCommandLine*<br/>
Puntatore a una stringa con terminazione null che specifica la riga di comando da eseguire.

*pProcessInformation*<br/>
Puntatore a una [struttura PROCESS_INFORMATION](/windows/win32/api/processthreadsapi/ns-processthreadsapi-process_information) che riceve informazioni di identificazione sul nuovo processo.

*pStartupInfo*<br/>
Puntatore a una struttura [STARTUPINFO](/windows/win32/api/processthreadsapi/ns-processthreadsapi-startupinfow) che specifica come deve essere visualizzata la finestra principale per il nuovo processo.

*dwCreationFlags*<br/>
Specifica flag aggiuntivi che controllano la classe di priorità e la creazione del processo. Per un elenco di flag, vedere la funzione Win32 [CreateProcessAsUser ha](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessasuserw) .

*bLoadProfile*<br/>
Se TRUE, il profilo dell'utente viene caricato con [LoadUserProfile](/windows/win32/api/userenv/nf-userenv-loaduserprofilew).

*pProcessAttributes*<br/>
Puntatore a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica un descrittore di sicurezza per il nuovo processo e determina se i processi figlio possono ereditare l'handle restituito. Se *pProcessAttributes* è null, il processo ottiene un descrittore di sicurezza predefinito e l'handle non può essere ereditato.

*pThreadAttributes*<br/>
Puntatore a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica un descrittore di sicurezza per il nuovo thread e determina se i processi figlio possono ereditare l'handle restituito. Se *pThreadAttributes* è null, il thread ottiene un descrittore di sicurezza predefinito e l'handle non può essere ereditato.

*bInherit*<br/>
Indica se il nuovo processo eredita gli handle dal processo chiamante. Se TRUE, ogni handle aperto ereditabile nel processo chiamante viene ereditato dal nuovo processo. Gli handle ereditati hanno lo stesso valore e i privilegi di accesso degli handle originali.

*pCurrentDirectory*<br/>
Puntatore a una stringa con terminazione null che specifica l'unità e la directory correnti per il nuovo processo. La stringa deve essere un percorso completo che include una lettera di unità. Se questo parametro è NULL, il nuovo processo avrà la stessa unità e la stessa directory correnti del processo chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

`CreateProcessAsUser` Usa la `CreateProcessAsUser` funzione Win32 per creare un nuovo processo che viene eseguito nel contesto di sicurezza dell'utente rappresentato dall' `CAccessToken` oggetto. Per una descrizione completa dei parametri necessari, vedere la descrizione della funzione [CreateProcessAsUser ha](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessasuserw) .

Affinché questo metodo abbia esito positivo, `CAccessToken` è necessario che l'oggetto contenga AssignPrimaryToken (a meno che non si tratti di un token con restrizioni) e IncreaseQuota privilegi.

## <a name="caccesstokencreaterestrictedtoken"></a><a name="createrestrictedtoken"></a> CAccessToken:: CreateRestrictedToken

Chiamare questo metodo per creare un nuovo oggetto con restrizioni `CAccessToken` .

```cpp
bool CreateRestrictedToken(
    CAccessToken* pRestrictedToken,
    const CTokenGroups& SidsToDisable,
    const CTokenGroups& SidsToRestrict,
    const CTokenPrivileges& PrivilegesToDelete = CTokenPrivileges()) const throw(...);
```

### <a name="parameters"></a>Parametri

*pRestrictedToken*<br/>
Nuovo oggetto con restrizioni `CAccessToken` .

*SidsToDisable*<br/>
`CTokenGroups`Oggetto che specifica i SID di sola negazione.

*SidsToRestrict*<br/>
`CTokenGroups`Oggetto che specifica i SID di restrizione.

*PrivilegesToDelete*<br/>
`CTokenPrivileges`Oggetto che specifica i privilegi da eliminare nel token con restrizioni. Il valore predefinito crea un oggetto vuoto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

`CreateRestrictedToken` Usa la funzione Win32 [CreateRestrictedToken](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createrestrictedtoken) per creare un nuovo `CAccessToken` oggetto con restrizioni.

> [!IMPORTANT]
> Quando `CreateRestrictedToken` si usa, verificare quanto segue: il token esistente è valido (e non è immesso dall'utente) e *SidsToDisable* e *PrivilegesToDelete* sono entrambi validi (e non sono immessi dall'utente). Se il metodo restituisce FALSE, negare la funzionalità.

## <a name="caccesstokendetach"></a><a name="detach"></a> CAccessToken::D etach

Chiamare questo metodo per revocare la proprietà del token di accesso.

```cpp
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per l'oggetto `CAccessToken` che è stato scollegato.

### <a name="remarks"></a>Commenti

Questo metodo revoca la `CAccessToken` proprietà del token di accesso.

## <a name="caccesstokendisableprivilege"></a><a name="disableprivilege"></a> CAccessToken::D isablePrivilege

Chiamare questo metodo per disabilitare un privilegio nell' `CAccessToken` oggetto.

```cpp
bool DisablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa contenente il privilegio da disabilitare nell' `CAccessToken` oggetto.

*pPreviousState*<br/>
Puntatore a un `CTokenPrivileges` oggetto che conterrà lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokendisableprivileges"></a><a name="disableprivileges"></a> CAccessToken::D isablePrivileges

Chiamare questo metodo per disabilitare uno o più privilegi nell' `CAccessToken` oggetto.

```cpp
bool DisablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivileges*<br/>
Puntatore a una matrice di stringhe contenente i privilegi da disabilitare nell' `CAccessToken` oggetto.

*pPreviousState*<br/>
Puntatore a un `CTokenPrivileges` oggetto che conterrà lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokenenableprivilege"></a><a name="enableprivilege"></a> CAccessToken:: EnablePrivilege

Chiamare questo metodo per abilitare un privilegio nell' `CAccessToken` oggetto.

```cpp
bool EnablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa contenente il privilegio da abilitare nell' `CAccessToken` oggetto.

*pPreviousState*<br/>
Puntatore a un `CTokenPrivileges` oggetto che conterrà lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokenenableprivileges"></a><a name="enableprivileges"></a> CAccessToken:: EnablePrivileges

Chiamare questo metodo per abilitare uno o più privilegi nell' `CAccessToken` oggetto.

```cpp
bool EnablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivileges*<br/>
Puntatore a una matrice di stringhe contenente i privilegi da abilitare nell' `CAccessToken` oggetto.

*pPreviousState*<br/>
Puntatore a un `CTokenPrivileges` oggetto che conterrà lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetdefaultdacl"></a><a name="getdefaultdacl"></a> CAccessToken:: GetDefaultDacl

Chiamare questo metodo per restituire l' `CAccessToken` elenco DACL predefinito dell'oggetto.

```cpp
bool GetDefaultDacl(CDacl* pDacl) const throw(...);
```

### <a name="parameters"></a>Parametri

*pDacl*<br/>
Puntatore all'oggetto della [classe CDacl](../../atl/reference/cdacl-class.md) che riceverà l' `CAccessToken` elenco DACL predefinito dell'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elenco DACL predefinito è stato recuperato. in caso contrario, FALSE.

## <a name="caccesstokengeteffectivetoken"></a><a name="geteffectivetoken"></a> CAccessToken:: GetEffectiveToken

Chiamare questo metodo per ottenere l' `CAccessToken` oggetto uguale al token di accesso attivo per il thread corrente.

```cpp
bool GetEffectiveToken(DWORD dwDesiredAccess) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetgroups"></a><a name="getgroups"></a> CAccessToken:: GetGroups

Chiamare questo metodo per restituire i `CAccessToken` gruppi di token dell'oggetto.

```cpp
bool GetGroups(CTokenGroups* pGroups) const throw(...);
```

### <a name="parameters"></a>Parametri

*pGroups*<br/>
Puntatore all'oggetto della [classe CTokenGroups](../../atl/reference/ctokengroups-class.md) che riceverà le informazioni sul gruppo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengethandle"></a><a name="gethandle"></a> CAccessToken:: GetHandle

Chiamare questo metodo per recuperare un handle per il token di accesso.

```cpp
HANDLE GetHandle() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle per il `CAccessToken` token di accesso dell'oggetto.

## <a name="caccesstokengetimpersonationlevel"></a><a name="getimpersonationlevel"></a> CAccessToken:: GetImpersonationLevel

Chiamare questo metodo per ottenere il livello di rappresentazione dal token di accesso.

```cpp
bool GetImpersonationLevel(
    SECURITY_IMPERSONATION_LEVEL* pImpersonationLevel) const throw(...);
```

### <a name="parameters"></a>Parametri

*pImpersonationLevel*<br/>
Puntatore a un tipo di enumerazione [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) che riceverà le informazioni sul livello di rappresentazione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetlogonsessionid"></a><a name="getlogonsessionid"></a> CAccessToken:: GetLogonSessionId

Chiamare questo metodo per ottenere l'ID della sessione di accesso associato all' `CAccessToken` oggetto.

```cpp
bool GetLogonSessionId(LUID* pluid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pluid*<br/>
Puntatore a un [LUID](/windows/win32/api/winnt/ns-winnt-luid) che riceverà l'ID della sessione di accesso.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se *pluid* è un valore non valido.

## <a name="caccesstokengetlogonsid"></a><a name="getlogonsid"></a> CAccessToken:: GetLogonSid

Chiamare questo metodo per ottenere il SID di accesso associato all' `CAccessToken` oggetto.

```cpp
bool GetLogonSid(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un oggetto della [classe CSid](../../atl/reference/csid-class.md) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se *PSID* è un valore non valido.

## <a name="caccesstokengetowner"></a><a name="getowner"></a> CAccessToken:: GetOwner

Chiamare questo metodo per ottenere il proprietario associato all' `CAccessToken` oggetto.

```cpp
bool GetOwner(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un oggetto della [classe CSid](../../atl/reference/csid-class.md) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, il proprietario viene impostato su tutti gli oggetti creati mentre è attivo il token di accesso.

## <a name="caccesstokengetprimarygroup"></a><a name="getprimarygroup"></a> CAccessToken:: GetPrimaryGroup

Chiamare questo metodo per ottenere il gruppo primario associato all' `CAccessToken` oggetto.

```cpp
bool GetPrimaryGroup(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un oggetto della [classe CSid](../../atl/reference/csid-class.md) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, il gruppo viene impostato su tutti gli oggetti creati mentre è attivo il token di accesso.

## <a name="caccesstokengetprivileges"></a><a name="getprivileges"></a> CAccessToken:: getprivileges

Chiamare questo metodo per ottenere i privilegi associati all' `CAccessToken` oggetto.

```cpp
bool GetPrivileges(CTokenPrivileges* pPrivileges) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPrivileges*<br/>
Puntatore a un oggetto della [classe CTokenPrivileges](../../atl/reference/ctokenprivileges-class.md) che riceverà i privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetprocesstoken"></a><a name="getprocesstoken"></a> CAccessToken:: GetProcessToken

Chiamare questo metodo per inizializzare `CAccessToken` al token di accesso dal processo dato.

```cpp
bool GetProcessToken(DWORD dwDesiredAccess, HANDLE hProcess = NULL) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*hProcess*<br/>
Gestisce il processo il cui il token di accesso è aperto. Se viene usato il valore predefinito NULL, viene usato il processo corrente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Chiama la funzione Win32 [OpenProcessToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-openprocesstoken) .

## <a name="caccesstokengetprofile"></a><a name="getprofile"></a> CAccessToken:: GetProfile

Chiamare questo metodo per ottenere l'handle che punta al profilo utente associato all' `CAccessToken` oggetto.

```cpp
HANDLE GetProfile() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle che punta al profilo utente oppure NULL se non esiste alcun profilo.

## <a name="caccesstokengetsource"></a><a name="getsource"></a> CAccessToken:: GetSource

Chiamare questo metodo per ottenere l'origine dell' `CAccessToken` oggetto.

```cpp
bool GetSource(TOKEN_SOURCE* pSource) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSource*<br/>
Puntatore a una struttura [TOKEN_SOURCE](/windows/win32/api/winnt/ns-winnt-token_source) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetstatistics"></a><a name="getstatistics"></a> CAccessToken:: GetStatistics

Chiamare questo metodo per ottenere informazioni associate all' `CAccessToken` oggetto.

```cpp
bool GetStatistics(TOKEN_STATISTICS* pStatistics) const throw(...);
```

### <a name="parameters"></a>Parametri

*pStatistics*<br/>
Puntatore a una struttura [TOKEN_STATISTICS](/windows/win32/api/winnt/ns-winnt-token_statistics) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetterminalservicessessionid"></a><a name="getterminalservicessessionid"></a> CAccessToken:: GetTerminalServicesSessionId

Chiamare questo metodo per ottenere l'ID di sessione di Servizi terminal associato all' `CAccessToken` oggetto.

```cpp
bool GetTerminalServicesSessionId(DWORD* pdwSessionId) const throw(...);
```

### <a name="parameters"></a>Parametri

*pdwSessionId*<br/>
ID di sessione di Servizi terminal.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetthreadtoken"></a><a name="getthreadtoken"></a> CAccessToken:: GetThreadToken

Chiamare questo metodo per inizializzare l'oggetto `CAccessToken` con il token dal thread specificato.

```cpp
bool GetThreadToken(
    DWORD dwDesiredAccess,
    HANDLE hThread = NULL,
    bool bOpenAsSelf = true) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*hThread*<br/>
Handle per il thread il cui token di accesso è aperto.

*bOpenAsSelf*<br/>
Indica se il controllo dell'accesso deve essere eseguito nel contesto di sicurezza del thread che chiama il `GetThreadToken` metodo o nel contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread sta rappresentando un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo dell'accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengettokenid"></a><a name="gettokenid"></a> CAccessToken:: GetTokenId

Chiamare questo metodo per ottenere l'ID del token associato all' `CAccessToken` oggetto.

```cpp
bool GetTokenId(LUID* pluid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pluid*<br/>
Puntatore a un [LUID](/windows/win32/api/winnt/ns-winnt-luid) che riceverà l'ID del token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengettype"></a><a name="gettype"></a> CAccessToken:: GetType

Chiamare questo metodo per ottenere il tipo di token dell' `CAccessToken` oggetto.

```cpp
bool GetType(TOKEN_TYPE* pType) const throw(...);
```

### <a name="parameters"></a>Parametri

*pType*<br/>
Indirizzo della variabile [TOKEN_TYPE](/windows/win32/api/winnt/ne-winnt-token_type) che, in esito positivo, riceve il tipo del token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Il TOKEN_TYPE tipo di enumerazione contiene valori che distinguono tra un token primario e un token di rappresentazione.

## <a name="caccesstokengetuser"></a><a name="getuser"></a> CAccessToken:: GetUser

Chiamare questo metodo per identificare l'utente associato all' `CAccessToken` oggetto.

```cpp
bool GetUser(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSid*<br/>
Puntatore a un oggetto della [classe CSid](../../atl/reference/csid-class.md) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokenhkeycurrentuser"></a><a name="hkeycurrentuser"></a> CAccessToken:: HKeyCurrentUser

Chiamare questo metodo per ottenere l'handle che punta al profilo utente associato all' `CAccessToken` oggetto.

```cpp
HKEY HKeyCurrentUser() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle che punta al profilo utente oppure NULL se non esiste alcun profilo.

## <a name="caccesstokenimpersonate"></a><a name="impersonate"></a> CAccessToken:: Impersonate

Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.

```cpp
bool Impersonate(HANDLE hThread = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*hThread*<br/>
Handle per il thread a cui assegnare il token di rappresentazione. È necessario che l'handle sia stato aperto con i diritti di accesso TOKEN_IMPERSONATE. Se *hThread* è null, il metodo impedisce al thread di utilizzare un token di rappresentazione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se non `CAccessToken` dispone di un puntatore valido a un token.

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usata per ripristinare automaticamente i token di accesso rappresentati.

## <a name="caccesstokenimpersonateloggedonuser"></a><a name="impersonateloggedonuser"></a> CAccessToken:: ImpersonateLoggedOnUser

Chiamare questo metodo per consentire al thread chiamante di rappresentare il contesto di sicurezza di un utente connesso.

```cpp
bool ImpersonateLoggedOnUser() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

> [!IMPORTANT]
> Se una chiamata a una funzione di rappresentazione ha esito negativo per qualsiasi motivo, il client non viene rappresentato e la richiesta del client viene eseguita nel contesto di sicurezza del processo da cui è stata effettuata la chiamata. Se il processo è in esecuzione come account con privilegi elevati o come membro di un gruppo amministrativo, l'utente potrebbe essere in grado di eseguire azioni che altrimenti non sarebbe consentito. Pertanto, il valore restituito per questa funzione deve essere sempre confermato.

## <a name="caccesstokenistokenrestricted"></a><a name="istokenrestricted"></a> CAccessToken:: IsTokenRestricted

Chiamare questo metodo per verificare se l' `CAccessToken` oggetto contiene un elenco di SID limitati.

```cpp
bool IsTokenRestricted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'oggetto contiene un elenco di SID di restrizione, FALSE se non ci sono SID restrittivi o se il metodo ha esito negativo.

## <a name="caccesstokenloaduserprofile"></a><a name="loaduserprofile"></a> CAccessToken:: LoadUserProfile

Chiamare questo metodo per caricare il profilo utente associato all' `CAccessToken` oggetto.

```cpp
bool LoadUserProfile() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Nelle compilazioni di debug, si verificherà un errore di asserzione se non `CAccessToken` contiene un token valido o se un profilo utente esiste già.

## <a name="caccesstokenlogonuser"></a><a name="logonuser"></a> CAccessToken:: LogonUser

Chiamare questo metodo per creare una sessione di accesso per l'utente associato alle credenziali specificate.

```cpp
bool LogonUser(
    LPCTSTR pszUserName,
    LPCTSTR pszDomain,
    LPCTSTR pszPassword,
    DWORD dwLogonType = LOGON32_LOGON_INTERACTIVE,
    DWORD dwLogonProvider = LOGON32_PROVIDER_DEFAULT) throw();
```

### <a name="parameters"></a>Parametri

*pszUserName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome utente. Si tratta del nome dell'account utente a cui accedere.

*pszDomain*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del dominio o del server il cui database di account contiene l'account *pszUserName* .

*pszPassword*<br/>
Puntatore a una stringa con terminazione null che specifica la password in testo non crittografato per l'account utente specificato da *pszUserName*.

*dwLogonType*<br/>
Specifica il tipo di operazione di accesso da eseguire. Per ulteriori informazioni, vedere [LogonUser](/windows/win32/api/winbase/nf-winbase-logonuserw) .

*dwLogonProvider*<br/>
Specifica il provider di accesso. Per ulteriori informazioni, vedere [LogonUser](/windows/win32/api/winbase/nf-winbase-logonuserw) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Il token di accesso risultante dall'accesso verrà associato a `CAccessToken` . Affinché questo metodo abbia esito positivo, è necessario che l' `CAccessToken` oggetto contenga SE_TCB_NAME privilegi, identificando il titolare come parte della base del computer attendibile. Per ulteriori informazioni sui privilegi necessari, vedere [LogonUser](/windows/win32/api/winbase/nf-winbase-logonuserw) .

## <a name="caccesstokenopencomclienttoken"></a><a name="opencomclienttoken"></a> CAccessToken:: OpenCOMClientToken

Chiamare questo metodo dall'interno di un server COM gestendo una chiamata da un client per inizializzare `CAccessToken` con il token di accesso dal client com.

```cpp
bool OpenCOMClientToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente rappresenta il client COM chiamante se la chiamata viene completata correttamente. Se FALSE, il token di accesso verrà aperto, ma al termine della chiamata il thread non avrà un token di rappresentazione.

*bOpenAsSelf*<br/>
Indica se il controllo dell'accesso deve essere eseguito nel contesto di sicurezza del thread che chiama il metodo [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) o nel contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread sta rappresentando un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo dell'accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usata per ripristinare automaticamente i token di accesso rappresentati creati impostando il flag *bImpersonate* su true.

## <a name="caccesstokenopennamedpipeclienttoken"></a><a name="opennamedpipeclienttoken"></a> CAccessToken:: OpenNamedPipeClientToken

Chiamare questo metodo da un server che accetta richieste su un named pipe per inizializzare `CAccessToken` con il token di accesso dal client.

```cpp
bool OpenNamedPipeClientToken(
    HANDLE hPipe,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*hPipe*<br/>
Handle per un named pipe.

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente rappresenta il client della pipe chiamante se la chiamata viene completata correttamente. Se FALSE, il token di accesso verrà aperto, ma al termine della chiamata il thread non avrà un token di rappresentazione.

*bOpenAsSelf*<br/>
Indica se il controllo dell'accesso deve essere eseguito nel contesto di sicurezza del thread che chiama il metodo [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) o nel contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread sta rappresentando un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo dell'accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usata per ripristinare automaticamente i token di accesso rappresentati creati impostando il flag *bImpersonate* su true.

## <a name="caccesstokenopenrpcclienttoken"></a><a name="openrpcclienttoken"></a> CAccessToken:: OpenRPCClientToken

Chiamare questo metodo dall'interno di un server che gestisce una chiamata da un client RPC per inizializzare `CAccessToken` con il token di accesso dal client.

```cpp
bool OpenRPCClientToken(
    RPC_BINDING_HANDLE BindingHandle,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*BindingHandle*<br/>
Handle di binding sul server che rappresenta un'associazione a un client.

*dwDesiredAccess*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente rappresenta il client RPC chiamante se la chiamata viene completata correttamente. Se FALSE, il token di accesso verrà aperto, ma al termine della chiamata il thread non avrà un token di rappresentazione.

*bOpenAsSelf*<br/>
Indica se il controllo dell'accesso deve essere eseguito nel contesto di sicurezza del thread che chiama il metodo [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) o nel contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread sta rappresentando un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo dell'accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usata per ripristinare automaticamente i token di accesso rappresentati creati impostando il flag *bImpersonate* su true.

## <a name="caccesstokenopenthreadtoken"></a><a name="openthreadtoken"></a> CAccessToken:: OpenThreadToken

Chiamare questo metodo per impostare il livello di rappresentazione e quindi inizializzare `CAccessToken` con il token dal thread specificato.

```cpp
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
Se TRUE, il thread verrà lasciato al livello di rappresentazione richiesto dopo il completamento di questo metodo. Se FALSE, verrà ripristinato il livello di rappresentazione originale del thread.

*bOpenAsSelf*<br/>
Indica se il controllo dell'accesso deve essere eseguito nel contesto di sicurezza del thread che chiama il metodo [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) o nel contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread sta rappresentando un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo dell'accesso viene effettuato utilizzando il contesto di sicurezza del processo per il thread chiamante.

*SIL*<br/>
Specifica un [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) tipo enumerato che fornisce il livello di rappresentazione del token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

`OpenThreadToken` è simile a [CAccessToken:: GetThreadToken](#getthreadtoken), ma imposta il livello di rappresentazione prima di inizializzare `CAccessToken` dal token di accesso del thread.

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere usata per ripristinare automaticamente i token di accesso rappresentati creati impostando il flag *bImpersonate* su true.

## <a name="caccesstokenprivilegecheck"></a><a name="privilegecheck"></a> CAccessToken::P rivilegeCheck

Chiamare questo metodo per determinare se un set specificato di privilegi è abilitato nell' `CAccessToken` oggetto.

```cpp
bool PrivilegeCheck(
    PPRIVILEGE_SET RequiredPrivileges,
    bool* pbResult) const throw();
```

### <a name="parameters"></a>Parametri

*RequiredPrivileges*<br/>
Puntatore a una struttura [PRIVILEGE_SET](/windows/win32/api/winnt/ns-winnt-privilege_set) .

*pbResult*<br/>
Puntatore a un valore impostato dal metodo per indicare se nell'oggetto sono abilitati uno o tutti i privilegi specificati `CAccessToken` .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Quando `PrivilegeCheck` restituisce, il `Attributes` membro di ogni struttura [LUID_AND_ATTRIBUTES](/windows/win32/api/winnt/ns-winnt-luid_and_attributes) viene impostato su SE_PRIVILEGE_USED_FOR_ACCESS se il privilegio corrispondente è abilitato. Questo metodo chiama la funzione Win32 [PrivilegeCheck](/windows/win32/api/securitybaseapi/nf-securitybaseapi-privilegecheck) .

## <a name="caccesstokenrevert"></a><a name="revert"></a> CAccessToken:: Revert

Chiamare questo metodo per arrestare un thread utilizzando un token di rappresentazione.

```cpp
bool Revert(HANDLE hThread = NULL) const throw();
```

### <a name="parameters"></a>Parametri

*hThread*<br/>
Handle per il thread per ripristinare la rappresentazione. Se *hThread* è null, viene utilizzato il thread corrente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

La riversione dei token di rappresentazione può essere eseguita automaticamente con la [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md).

## <a name="caccesstokensetdefaultdacl"></a><a name="setdefaultdacl"></a> CAccessToken:: SetDefaultDacl

Chiamare questo metodo per impostare l'elenco DACL predefinito dell' `CAccessToken` oggetto.

```cpp
bool SetDefaultDacl(const CDacl& rDacl) throw(...);
```

### <a name="parameters"></a>Parametri

*rDacl*<br/>
Nuove informazioni sulla [classe CDacl](../../atl/reference/cdacl-class.md) predefinita.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Il DACL predefinito è l'elenco DACL usato per impostazione predefinita quando vengono creati nuovi oggetti con questo token di accesso attivo.

## <a name="caccesstokensetowner"></a><a name="setowner"></a> CAccessToken:: SetOwner

Chiamare questo metodo per impostare il proprietario dell' `CAccessToken` oggetto.

```cpp
bool SetOwner(const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto della [classe CSid](../../atl/reference/csid-class.md) che contiene le informazioni sul proprietario.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Il proprietario è il proprietario predefinito usato per i nuovi oggetti creati mentre è attivo il token di accesso.

## <a name="caccesstokensetprimarygroup"></a><a name="setprimarygroup"></a> CAccessToken:: SetPrimaryGroup

Chiamare questo metodo per impostare il gruppo primario dell' `CAccessToken` oggetto.

```cpp
bool SetPrimaryGroup(const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto della [classe CSid](../../atl/reference/csid-class.md) che contiene le informazioni sul gruppo primario.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Il gruppo primario è il gruppo predefinito per i nuovi oggetti creati mentre è attivo il token di accesso.

## <a name="see-also"></a>Vedi anche

[Esempio ATLSecurity](../../overview/visual-cpp-samples.md)<br/>
[Token di accesso](/windows/win32/SecAuthZ/access-tokens)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
