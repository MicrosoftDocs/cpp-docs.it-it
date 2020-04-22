---
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
ms.openlocfilehash: f7a2ee2f9d633c1ed743621eec5b2f7cc04c0e0b
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748823"
---
# <a name="caccesstoken-class"></a>Classe CAccessToken

Questa classe è un wrapper per un token di accesso.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAccessToken
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccessToken::CAccessToken (Informazioni in sul segno di CAccessToken)](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccessToken::Attach](#attach)|Chiamare questo metodo per assumere la proprietà dell'handle del token di accesso specificato.|
|[CAccessToken::CheckTokenMembership](#checktokenmembership)|Chiamare questo metodo per determinare se un `CAccessToken` SID specificato è abilitato nell'oggetto.|
|[Token CAccessToken::CreateImpersonationTokenCAccessToken::CreateImpersonationToken](#createimpersonationtoken)|Chiamare questo metodo per creare un nuovo token di accesso di rappresentazione.|
|[Token di Accesso::CreatePrimaryTokenCAccessToken::CreatePrimaryToken](#createprimarytoken)|Chiamare questo metodo per creare un nuovo token primario.|
|[CAccessToken::CreateProcessAsUser](#createprocessasuser)|Chiamare questo metodo per creare un nuovo processo in esecuzione `CAccessToken` nel contesto di sicurezza dell'utente rappresentato dall'oggetto.|
|[CAccessToken::CreateRestrictedToken](#createrestrictedtoken)|Chiamare questo metodo per creare `CAccessToken` un nuovo oggetto con restrizioni.|
|[CAccessToken::Detach](#detach)|Chiamare questo metodo per revocare la proprietà del token di accesso.|
|[CAccessToken::DisablePrivilege](#disableprivilege)|Chiamare questo metodo per disabilitare un privilegio nell'oggetto. `CAccessToken`|
|[CAccessToken::DisablePrivileges](#disableprivileges)|Chiamare questo metodo per disabilitare uno `CAccessToken` o più privilegi nell'oggetto.|
|[CAccessToken::EnablePrivilege](#enableprivilege)|Chiamare questo metodo per abilitare un privilegio nell'oggetto. `CAccessToken`|
|[CAccessToken::EnablePrivileges](#enableprivileges)|Chiamare questo metodo per abilitare uno `CAccessToken` o più privilegi nell'oggetto.|
|[CAccessToken::GetDefaultDacl](#getdefaultdacl)|Chiamare questo metodo `CAccessToken` per restituire l'elenco DACL predefinito dell'oggetto.|
|[Token di Accesso::GetEffectiveTokenCAccessToken::GetEffectiveToken](#geteffectivetoken)|Chiamare questo metodo `CAccessToken` per ottenere l'oggetto uguale al token di accesso attivo per il thread corrente.|
|[CAccessToken::GetGroupsCAccessToken::GetGroups](#getgroups)|Chiamare questo metodo `CAccessToken` per restituire i gruppi di token dell'oggetto.|
|[CAccessToken::GetHandleCAccessToken::GetHandle](#gethandle)|Chiamare questo metodo per recuperare un handle per il token di accesso.|
|[CAccessToken::GetImpersonationLevelCAccessToken::GetImpersonationLevel](#getimpersonationlevel)|Chiamare questo metodo per ottenere il livello di rappresentazione dal token di accesso.|
|[CAccessToken::GetLogonSessionId](#getlogonsessionid)|Chiamare questo metodo per ottenere l'ID di sessione di accesso associato all'oggetto. `CAccessToken`|
|[CAccessToken::GetLogonSid](#getlogonsid)|Chiamare questo metodo per ottenere il `CAccessToken` SID di accesso associato all'oggetto.|
|[CAccessToken::GetOwner](#getowner)|Chiamare questo metodo per ottenere `CAccessToken` il proprietario associato all'oggetto.|
|[CAccessToken::GetPrimaryGroup](#getprimarygroup)|Chiamare questo metodo per ottenere il `CAccessToken` gruppo primario associato all'oggetto.|
|[CAccessToken::GetPrivileges](#getprivileges)|Chiamare questo metodo per ottenere i `CAccessToken` privilegi associati all'oggetto.|
|[CAccessToken::GetProcessToken](#getprocesstoken)|Chiamare questo metodo per inizializzare `CAccessToken` al token di accesso dal processo dato.|
|[CAccessToken::GetProfile](#getprofile)|Chiamare questo metodo per ottenere l'handle che `CAccessToken` punta al profilo utente associato all'oggetto.|
|[CAccessToken::GetSourceCAccessToken::GetSource](#getsource)|Chiamare questo metodo per ottenere `CAccessToken` l'origine dell'oggetto.|
|[CAccessToken::GetStatistics](#getstatistics)|Chiamare questo metodo per ottenere `CAccessToken` informazioni associate all'oggetto.|
|[CAccessToken::GetTerminalServicesSessionId](#getterminalservicessessionid)|Chiamare questo metodo per ottenere l'ID `CAccessToken` di sessione di Servizi terminal associato all'oggetto.|
|[CAccessToken::GetThreadToken](#getthreadtoken)|Chiamare questo metodo `CAccessToken` per inizializzare il con il token dal thread specificato.|
|[CAccessToken::GetTokenIdCAccessToken::GetTokenId](#gettokenid)|Chiamare questo metodo per ottenere l'ID token associato all'oggetto. `CAccessToken`|
|[CAccessToken::GetType](#gettype)|Chiamare questo metodo per ottenere `CAccessToken` il tipo di token dell'oggetto.|
|[CAccessToken::GetUser](#getuser)|Chiamare questo metodo per identificare `CAccessToken` l'utente associato all'oggetto.|
|[CAccessToken::HKeyCurrentUser](#hkeycurrentuser)|Chiamare questo metodo per ottenere l'handle che `CAccessToken` punta al profilo utente associato all'oggetto.|
|[CAccessToken::Rappresenta](#impersonate)|Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.|
|[CAccessToken::ImpersonateLoggedOnUser](#impersonateloggedonuser)|Chiamare questo metodo per consentire al thread chiamante di rappresentare il contesto di sicurezza di un utente connesso.|
|[CAccessToken::IsTokenRestricted](#istokenrestricted)|Chiamare questo metodo per `CAccessToken` verificare se l'oggetto contiene un elenco di SID con restrizioni.|
|[CAccessToken::LoadUserProfile](#loaduserprofile)|Chiamare questo metodo per caricare il `CAccessToken` profilo utente associato all'oggetto.|
|[CAccessToken::LogonUser](#logonuser)|Chiamare questo metodo per creare una sessione di accesso per l'utente associato alle credenziali specificate.|
|[CAccessToken::OpenCOMClientToken](#opencomclienttoken)|Chiamare questo metodo dall'interno di un server COM `CAccessToken` che gestisce una chiamata da un client per inizializzare il con il token di accesso dal client COM.|
|[CAccessToken::OpenNamedPipeClientToken](#opennamedpipeclienttoken)|Chiamare questo metodo dall'interno di un server `CAccessToken` che richiede su una named pipe per inizializzare il con il token di accesso dal client.|
|[CAccessToken::OpenRPCClientToken](#openrpcclienttoken)|Chiamare questo metodo dall'interno di un server che `CAccessToken` gestisce una chiamata da un client RPC per inizializzare il con il token di accesso dal client.|
|[CAccessToken::OpenThreadToken](#openthreadtoken)|Chiamare questo metodo per impostare il livello `CAccessToken` di rappresentazione e quindi inizializzare il con il token dal thread specificato.|
|[Token di accesso::PrivilegeCheck](#privilegecheck)|Chiamare questo metodo per determinare se un set `CAccessToken` specificato di privilegi è abilitato nell'oggetto.|
|[CAccessToken::Revert (Token di errore):Revert (Token di errore):Revert](#revert)|Chiamare questo metodo per arrestare un thread che utilizza un token di rappresentazione.|
|[CAccessToken::SetDefaultDacl](#setdefaultdacl)|Chiamare questo metodo per impostare l'elenco DACL predefinito dell'oggetto. `CAccessToken`|
|[CAccessToken::SetOwner](#setowner)|Chiamare questo metodo per impostare il proprietario dell'oggetto. `CAccessToken`|
|[CAccessToken::SetPrimaryGroup](#setprimarygroup)|Chiamare questo metodo per impostare `CAccessToken` il gruppo primario dell'oggetto.|

## <a name="remarks"></a>Osservazioni

Un token di accesso è un oggetto che descrive il contesto di sicurezza di un processo o di un thread e viene allocato a ogni utente connesso a un sistema Windows.An access [token](/windows/win32/SecAuthZ/access-tokens) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows system.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="caccesstokenattach"></a><a name="attach"></a>CAccessToken::Attach

Chiamare questo metodo per assumere la proprietà dell'handle del token di accesso specificato.

```cpp
void Attach(HANDLE hToken) throw();
```

### <a name="parameters"></a>Parametri

*hToken*<br/>
Handle per il token di accesso.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se l'oggetto `CAccessToken` è già proprietario di un token di accesso.

## <a name="caccesstokencaccesstoken"></a><a name="dtor"></a>CAccessToken::CAccessToken (Informazioni in sul segno di CAccessToken)

Distruttore.

```
virtual ~CAccessToken() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="caccesstokenchecktokenmembership"></a><a name="checktokenmembership"></a>CAccessToken::CheckTokenMembership

Chiamare questo metodo per determinare se un `CAccessToken` SID specificato è abilitato nell'oggetto.

```
bool CheckTokenMembership(
    const CSid& rSid,
    bool* pbIsMember) const throw(...);
```

### <a name="parameters"></a>Parametri

*rSid (in seguito al numero di*<br/>
Riferimento a un oggetto [CSid Class.](../../atl/reference/csid-class.md)

*pbIsMember (membro di pbIs)*<br/>
Puntatore a una variabile che riceve i risultati del controllo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Il `CheckTokenMembership` metodo verifica la presenza del SID nei SID utente e gruppo del token di accesso. Se il SID è presente e ha il SE_GROUP_ENABLED attributo, *pbIsMember* è impostato su TRUE; in caso contrario, è impostato su FALSE.

Nelle build di debug, si verificherà un errore di asserzione se *pbIsMember* non è un puntatore valido.

> [!NOTE]
> L'oggetto `CAccessToken` deve essere un token di rappresentazione e non un token primario.

## <a name="caccesstokencreateimpersonationtoken"></a><a name="createimpersonationtoken"></a>Token CAccessToken::CreateImpersonationTokenCAccessToken::CreateImpersonationToken

Chiamare questo metodo per creare un token di accesso di rappresentazione.

```
bool CreateImpersonationToken(
    CAccessToken* pImp,
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) const throw(...);
```

### <a name="parameters"></a>Parametri

*Sfruttatore*<br/>
Puntatore al `CAccessToken` nuovo oggetto.

*Sil*<br/>
Specifica un [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) tipo enumerato che fornisce il livello di rappresentazione del nuovo token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

`CreateImpersonationToken`chiama [DuplicateToken](/windows/win32/api/securitybaseapi/nf-securitybaseapi-duplicatetoken) per creare un nuovo token di rappresentazione.

## <a name="caccesstokencreateprimarytoken"></a><a name="createprimarytoken"></a>Token di Accesso::CreatePrimaryTokenCAccessToken::CreatePrimaryToken

Chiamare questo metodo per creare un nuovo token primario.

```
bool CreatePrimaryToken(
    CAccessToken* pPri,
    DWORD dwDesiredAccess = MAXIMUM_ALLOWED,
    const CSecurityAttributes* pTokenAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPri*<br/>
Puntatore al `CAccessToken` nuovo oggetto.

*dwDesiredAccess (Accesso desiderato)*<br/>
Specifica i diritti di accesso richiesti per il nuovo token. L'impostazione predefinita, MAXIMUM_ALLOWED, richiede tutti i diritti di accesso validi per il chiamante. Per ulteriori informazioni sui diritti di accesso, vedere [Diritti di accesso e maschere](/windows/win32/SecAuthZ/access-rights-and-access-masks) di accesso.

*pTokenAttributi*<br/>
Puntatore a una struttura [di SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica un descrittore di sicurezza per il nuovo token e determina se i processi figlio possono ereditare il token. Se *pTokenAttributes* è NULL, il token ottiene un descrittore di sicurezza predefinito e l'handle non può essere ereditato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

`CreatePrimaryToken`chiama [DuplicateTokenEx](/windows/win32/api/securitybaseapi/nf-securitybaseapi-duplicatetokenex) per creare un nuovo token primario.

## <a name="caccesstokencreateprocessasuser"></a><a name="createprocessasuser"></a>CAccessToken::CreateProcessAsUser

Chiamare questo metodo per creare un nuovo processo in esecuzione `CAccessToken` nel contesto di sicurezza dell'utente rappresentato dall'oggetto.

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

*pNomeApplicazione*<br/>
Puntatore a una stringa con terminazione null che specifica il modulo da eseguire. Questo parametro non può essere NULL.

*PCommandLine (Riga di comando)*<br/>
Puntatore a una stringa con terminazione null che specifica la riga di comando da eseguire.

*pProcessInformation*<br/>
Puntatore a una [struttura PROCESS_INFORMATION](/windows/win32/api/processthreadsapi/ns-processthreadsapi-process_information) che riceve informazioni di identificazione sul nuovo processo.

*pStartupInfo (informazioni in stato in stato in stato*<br/>
Puntatore a una struttura [STARTUPINFO](/windows/win32/api/processthreadsapi/ns-processthreadsapi-startupinfow) che specifica la modalità di visualizzazione della finestra principale per il nuovo processo.

*dwCreationFlags (flag dwCreation)*<br/>
Specifica flag aggiuntivi che controllano la classe di priorità e la creazione del processo. Vedere la funzione Win32 [CreateProcessAsUser](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessasuserw) per un elenco di flag.

*b*Profilo**<br/>
Se TRUE, il profilo dell'utente viene caricato con [LoadUserProfile](/windows/win32/api/userenv/nf-userenv-loaduserprofilew).

*pProcessAttributes (Attributi di processo)*<br/>
Puntatore a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica un descrittore di sicurezza per il nuovo processo e determina se i processi figlio possono ereditare l'handle restituito. Se *pProcessAttributes* è NULL, il processo ottiene un descrittore di sicurezza predefinito e l'handle non può essere ereditato.

*pThreadAttributi*<br/>
Puntatore a una struttura [di SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica un descrittore di sicurezza per il nuovo thread e determina se i processi figlio possono ereditare l'handle restituito. Se *pThreadAttributes* è NULL, il thread ottiene un descrittore di sicurezza predefinito e l'handle non può essere ereditato.

*bEredita*<br/>
Indica se il nuovo processo eredita gli handle dal processo chiamante. Se TRUE, ogni handle aperto ereditabile nel processo chiamante viene ereditato dal nuovo processo. Gli handle ereditati hanno lo stesso valore e gli stessi privilegi di accesso degli handle originali.

*pCurrentDirectory (informazioni in cui è incorso)*<br/>
Puntatore a una stringa con terminazione null che specifica l'unità e la directory correnti per il nuovo processo. La stringa deve essere un percorso completo che include una lettera di unità. Se questo parametro è NULL, il nuovo processo avrà la stessa unità e la stessa directory correnti del processo chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

`CreateProcessAsUser`utilizza `CreateProcessAsUser` la funzione Win32 per creare un nuovo processo che viene `CAccessToken` eseguito nel contesto di sicurezza dell'utente rappresentato dall'oggetto. Vedere la descrizione della funzione [CreateProcessAsUser](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessasuserw) per una descrizione completa dei parametri necessari.

Affinché questo metodo `CAccessToken` abbia esito positivo, l'oggetto deve contenere i privilegi AssignPrimaryToken (a meno che non si tratti di un token con restrizioni) e dei privilegi IncreaseQuota.For this method to succeed, the object must hold AssignPrimaryToken (unless it is a restricted token) and IncreaseQuota privileges.

## <a name="caccesstokencreaterestrictedtoken"></a><a name="createrestrictedtoken"></a>CAccessToken::CreateRestrictedToken

Chiamare questo metodo per creare `CAccessToken` un nuovo oggetto con restrizioni.

```
bool CreateRestrictedToken(
    CAccessToken* pRestrictedToken,
    const CTokenGroups& SidsToDisable,
    const CTokenGroups& SidsToRestrict,
    const CTokenPrivileges& PrivilegesToDelete = CTokenPrivileges()) const throw(...);
```

### <a name="parameters"></a>Parametri

*pRestrictedToken (in questo pRestrictedToken)*<br/>
Nuovo oggetto `CAccessToken` con restrizioni.

*SidsToDisable*<br/>
Oggetto `CTokenGroups` che specifica i SID di sola negazione.

*SidsToRestrict*<br/>
Oggetto `CTokenGroups` che specifica i SID di limitazione.

*PrivilegiToEliminare*<br/>
Oggetto `CTokenPrivileges` che specifica i privilegi da eliminare nel token con restrizioni. Il valore predefinito crea un oggetto vuoto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

`CreateRestrictedToken`utilizza la funzione [Win32 CreateRestrictedToken](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createrestrictedtoken) per creare un nuovo `CAccessToken` oggetto, con restrizioni.

> [!IMPORTANT]
> Quando `CreateRestrictedToken`si utilizza , verificare quanto segue: il token esistente è valido (e non immesso dall'utente) e *SidsToDisable* e *PrivilegesToDelete* sono entrambi validi (e non immessi dall'utente). Se il metodo restituisce FALSE, negare la funzionalità.

## <a name="caccesstokendetach"></a><a name="detach"></a>CAccessToken::Detach

Chiamare questo metodo per revocare la proprietà del token di accesso.

```
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle a `CAccessToken` cui è stato scollegato.

### <a name="remarks"></a>Osservazioni

Questo metodo revoca `CAccessToken`la proprietà del token di accesso.

## <a name="caccesstokendisableprivilege"></a><a name="disableprivilege"></a>CAccessToken::DisablePrivilege

Chiamare questo metodo per disabilitare un privilegio nell'oggetto. `CAccessToken`

```
bool DisablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege (informazioni in base al servizio di windows*<br/>
Puntatore a una stringa contenente `CAccessToken` il privilegio da disabilitare nell'oggetto.

*pPreviousState (informazioni in base a pPreviousState*<br/>
Puntatore `CTokenPrivileges` a un oggetto che conterrà lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokendisableprivileges"></a><a name="disableprivileges"></a>CAccessToken::DisablePrivileges

Chiamare questo metodo per disabilitare uno `CAccessToken` o più privilegi nell'oggetto.

```
bool DisablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivilegi*<br/>
Puntatore a una matrice di stringhe contenente `CAccessToken` i privilegi da disabilitare nell'oggetto.

*pPreviousState (informazioni in base a pPreviousState*<br/>
Puntatore `CTokenPrivileges` a un oggetto che conterrà lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokenenableprivilege"></a><a name="enableprivilege"></a>CAccessToken::EnablePrivilege

Chiamare questo metodo per abilitare un privilegio nell'oggetto. `CAccessToken`

```
bool EnablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege (informazioni in base al servizio di windows*<br/>
Puntatore a una stringa contenente `CAccessToken` il privilegio da abilitare nell'oggetto.

*pPreviousState (informazioni in base a pPreviousState*<br/>
Puntatore `CTokenPrivileges` a un oggetto che conterrà lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokenenableprivileges"></a><a name="enableprivileges"></a>CAccessToken::EnablePrivileges

Chiamare questo metodo per abilitare uno `CAccessToken` o più privilegi nell'oggetto.

```
bool EnablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivilegi*<br/>
Puntatore a una matrice di stringhe contenente `CAccessToken` i privilegi da abilitare nell'oggetto.

*pPreviousState (informazioni in base a pPreviousState*<br/>
Puntatore `CTokenPrivileges` a un oggetto che conterrà lo stato precedente dei privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetdefaultdacl"></a><a name="getdefaultdacl"></a>CAccessToken::GetDefaultDacl

Chiamare questo metodo `CAccessToken` per restituire l'elenco DACL predefinito dell'oggetto.

```
bool GetDefaultDacl(CDacl* pDacl) const throw(...);
```

### <a name="parameters"></a>Parametri

*pDacl*<br/>
Puntatore all'oggetto [CDacl](../../atl/reference/cdacl-class.md) Class `CAccessToken` che riceverà l'elenco DACL predefinito dell'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elenco DACL predefinito è stato recuperato, FALSE in caso contrario.

## <a name="caccesstokengeteffectivetoken"></a><a name="geteffectivetoken"></a>Token di Accesso::GetEffectiveTokenCAccessToken::GetEffectiveToken

Chiamare questo metodo `CAccessToken` per ottenere l'oggetto uguale al token di accesso attivo per il thread corrente.

```
bool GetEffectiveToken(DWORD dwDesiredAccess) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess (Accesso desiderato)*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetgroups"></a><a name="getgroups"></a>CAccessToken::GetGroupsCAccessToken::GetGroups

Chiamare questo metodo `CAccessToken` per restituire i gruppi di token dell'oggetto.

```
bool GetGroups(CTokenGroups* pGroups) const throw(...);
```

### <a name="parameters"></a>Parametri

*pGruppi*<br/>
Puntatore all'oggetto [Classe CTokenGroups](../../atl/reference/ctokengroups-class.md) che riceverà le informazioni sul gruppo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengethandle"></a><a name="gethandle"></a>CAccessToken::GetHandleCAccessToken::GetHandle

Chiamare questo metodo per recuperare un handle per il token di accesso.

```
HANDLE GetHandle() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `CAccessToken` handle per il token di accesso dell'oggetto.

## <a name="caccesstokengetimpersonationlevel"></a><a name="getimpersonationlevel"></a>CAccessToken::GetImpersonationLevelCAccessToken::GetImpersonationLevel

Chiamare questo metodo per ottenere il livello di rappresentazione dal token di accesso.

```
bool GetImpersonationLevel(
    SECURITY_IMPERSONATION_LEVEL* pImpersonationLevel) const throw(...);
```

### <a name="parameters"></a>Parametri

*pImpersonationLevel*<br/>
Puntatore a un tipo di enumerazione [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) che riceverà le informazioni sul livello di rappresentazione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetlogonsessionid"></a><a name="getlogonsessionid"></a>CAccessToken::GetLogonSessionId

Chiamare questo metodo per ottenere l'ID di sessione di accesso associato all'oggetto. `CAccessToken`

```
bool GetLogonSessionId(LUID* pluid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pluid*<br/>
Puntatore a un [LUID](/windows/win32/api/winnt/ns-winnt-luid) che riceverà l'ID di sessione di accesso.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se *pluid* è un valore non valido.

## <a name="caccesstokengetlogonsid"></a><a name="getlogonsid"></a>CAccessToken::GetLogonSid

Chiamare questo metodo per ottenere il `CAccessToken` SID di accesso associato all'oggetto.

```
bool GetLogonSid(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*Psid*<br/>
Puntatore a un [CSid Class](../../atl/reference/csid-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se *pSid* è un valore non valido.

## <a name="caccesstokengetowner"></a><a name="getowner"></a>CAccessToken::GetOwner

Chiamare questo metodo per ottenere `CAccessToken` il proprietario associato all'oggetto.

```
bool GetOwner(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*Psid*<br/>
Puntatore a un [CSid Class](../../atl/reference/csid-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Il proprietario è impostato per impostazione predefinita su tutti gli oggetti creati mentre questo token di accesso è attivo.

## <a name="caccesstokengetprimarygroup"></a><a name="getprimarygroup"></a>CAccessToken::GetPrimaryGroup

Chiamare questo metodo per ottenere il `CAccessToken` gruppo primario associato all'oggetto.

```
bool GetPrimaryGroup(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*Psid*<br/>
Puntatore a un [CSid Class](../../atl/reference/csid-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Il gruppo è impostato per impostazione predefinita su tutti gli oggetti creati mentre questo token di accesso è attivo.

## <a name="caccesstokengetprivileges"></a><a name="getprivileges"></a>CAccessToken::GetPrivileges

Chiamare questo metodo per ottenere i `CAccessToken` privilegi associati all'oggetto.

```
bool GetPrivileges(CTokenPrivileges* pPrivileges) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPrivilegi*<br/>
Puntatore a un [CTokenPrivileges Class](../../atl/reference/ctokenprivileges-class.md) oggetto che riceverà i privilegi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetprocesstoken"></a><a name="getprocesstoken"></a>CAccessToken::GetProcessToken

Chiamare questo metodo per inizializzare `CAccessToken` al token di accesso dal processo dato.

```
bool GetProcessToken(DWORD dwDesiredAccess, HANDLE hProcess = NULL) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess (Accesso desiderato)*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*hProcesso*<br/>
Gestisce il processo il cui il token di accesso è aperto. Se viene utilizzato il valore predefinito NULL, viene utilizzato il processo corrente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama la funzione Win32 [OpenProcessToken.](/windows/win32/api/processthreadsapi/nf-processthreadsapi-openprocesstoken)

## <a name="caccesstokengetprofile"></a><a name="getprofile"></a>CAccessToken::GetProfile

Chiamare questo metodo per ottenere l'handle che `CAccessToken` punta al profilo utente associato all'oggetto.

```
HANDLE GetProfile() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle che punta al profilo utente o NULL se non esiste alcun profilo.

## <a name="caccesstokengetsource"></a><a name="getsource"></a>CAccessToken::GetSourceCAccessToken::GetSource

Chiamare questo metodo per ottenere `CAccessToken` l'origine dell'oggetto.

```
bool GetSource(TOKEN_SOURCE* pSource) const throw(...);
```

### <a name="parameters"></a>Parametri

*pOrigine*<br/>
Puntatore a una struttura [TOKEN_SOURCE.](/windows/win32/api/winnt/ns-winnt-token_source)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetstatistics"></a><a name="getstatistics"></a>CAccessToken::GetStatistics

Chiamare questo metodo per ottenere `CAccessToken` informazioni associate all'oggetto.

```
bool GetStatistics(TOKEN_STATISTICS* pStatistics) const throw(...);
```

### <a name="parameters"></a>Parametri

*pStatistiche*<br/>
Puntatore a una struttura [TOKEN_STATISTICS.](/windows/win32/api/winnt/ns-winnt-token_statistics)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetterminalservicessessionid"></a><a name="getterminalservicessessionid"></a>CAccessToken::GetTerminalServicesSessionId

Chiamare questo metodo per ottenere l'ID `CAccessToken` di sessione di Servizi terminal associato all'oggetto.

```
bool GetTerminalServicesSessionId(DWORD* pdwSessionId) const throw(...);
```

### <a name="parameters"></a>Parametri

*pdwSessionId*<br/>
ID di sessione di Servizi terminal.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengetthreadtoken"></a><a name="getthreadtoken"></a>CAccessToken::GetThreadToken

Chiamare questo metodo `CAccessToken` per inizializzare il con il token dal thread specificato.

```
bool GetThreadToken(
    DWORD dwDesiredAccess,
    HANDLE hThread = NULL,
    bool bOpenAsSelf = true) throw();
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess (Accesso desiderato)*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*hThread (Thread)*<br/>
Gestire il thread il cui token di accesso viene aperto.

*bOpenAsSelf (in cui si è aperto)*<br/>
Indica se il controllo di accesso deve essere eseguito `GetThreadToken` sul contesto di sicurezza del thread che chiama il metodo o sul contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengettokenid"></a><a name="gettokenid"></a>CAccessToken::GetTokenIdCAccessToken::GetTokenId

Chiamare questo metodo per ottenere l'ID token associato all'oggetto. `CAccessToken`

```
bool GetTokenId(LUID* pluid) const throw(...);
```

### <a name="parameters"></a>Parametri

*pluid*<br/>
Puntatore a un [LUID](/windows/win32/api/winnt/ns-winnt-luid) che riceverà l'ID token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokengettype"></a><a name="gettype"></a>CAccessToken::GetType

Chiamare questo metodo per ottenere `CAccessToken` il tipo di token dell'oggetto.

```
bool GetType(TOKEN_TYPE* pType) const throw(...);
```

### <a name="parameters"></a>Parametri

*pTipo*<br/>
Indirizzo della variabile [TOKEN_TYPE](/windows/win32/api/winnt/ne-winnt-token_type) che, in caso di esito positivo, riceve il tipo di token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Il tipo di enumerazione TOKEN_TYPE contiene valori che distinguono tra un token primario e un token di rappresentazione.

## <a name="caccesstokengetuser"></a><a name="getuser"></a>CAccessToken::GetUser

Chiamare questo metodo per identificare `CAccessToken` l'utente associato all'oggetto.

```
bool GetUser(CSid* pSid) const throw(...);
```

### <a name="parameters"></a>Parametri

*Psid*<br/>
Puntatore a un [CSid Class](../../atl/reference/csid-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="caccesstokenhkeycurrentuser"></a><a name="hkeycurrentuser"></a>CAccessToken::HKeyCurrentUser

Chiamare questo metodo per ottenere l'handle che `CAccessToken` punta al profilo utente associato all'oggetto.

```
HKEY HKeyCurrentUser() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle che punta al profilo utente o NULL se non esiste alcun profilo.

## <a name="caccesstokenimpersonate"></a><a name="impersonate"></a>CAccessToken::Rappresenta

Chiamare questo metodo per assegnare una rappresentazione `CAccessToken` a un thread.

```
bool Impersonate(HANDLE hThread = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*hThread (Thread)*<br/>
Handle per il thread a cui assegnare il token di rappresentazione. Questo handle deve essere stato aperto con TOKEN_IMPERSONATE diritti di accesso. Se *hThread* è NULL, il metodo fa sì che il thread smetta di smettere di usare un token di rappresentazione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si `CAccessToken` verificherà un errore di asserzione se non dispone di un puntatore valido a un token.

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzata per ripristinare automaticamente i token di accesso rappresentati.

## <a name="caccesstokenimpersonateloggedonuser"></a><a name="impersonateloggedonuser"></a>CAccessToken::ImpersonateLoggedOnUser

Chiamare questo metodo per consentire al thread chiamante di rappresentare il contesto di sicurezza di un utente connesso.

```
bool ImpersonateLoggedOnUser() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

> [!IMPORTANT]
> Se una chiamata a una funzione di rappresentazione ha esito negativo per qualsiasi motivo, il client non viene rappresentato e la richiesta del client viene effettuata nel contesto di sicurezza del processo da cui è stata effettuata la chiamata. Se il processo viene eseguito come account con privilegi elevati o come membro di un gruppo amministrativo, l'utente potrebbe essere in grado di eseguire azioni che altrimenti non sarebbe consentito. Pertanto, il valore restituito per questa funzione deve sempre essere confermato.

## <a name="caccesstokenistokenrestricted"></a><a name="istokenrestricted"></a>CAccessToken::IsTokenRestricted

Chiamare questo metodo per `CAccessToken` verificare se l'oggetto contiene un elenco di SID con restrizioni.

```
bool IsTokenRestricted() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'oggetto contiene un elenco di SID di restrizione, FALSE se non sono presenti SID di restrizione o se il metodo ha esito negativo.

## <a name="caccesstokenloaduserprofile"></a><a name="loaduserprofile"></a>CAccessToken::LoadUserProfile

Chiamare questo metodo per caricare il `CAccessToken` profilo utente associato all'oggetto.

```
bool LoadUserProfile() throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se l'oggetto `CAccessToken` non contiene un token valido o se esiste già un profilo utente.

## <a name="caccesstokenlogonuser"></a><a name="logonuser"></a>CAccessToken::LogonUser

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

*pszUserName (nome utente)*<br/>
Puntatore a una stringa con terminazione null che specifica il nome utente. Questo è il nome dell'account utente a cui accedere.

*dominio psz*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del dominio o del server il cui database degli account contiene l'account *pszUserName.*

*pszPassword (informazioni in forma ppzPassword)*<br/>
Puntatore a una stringa con terminazione null che specifica la password non crittografata per l'account utente specificato da *pszUserName*.

*dwLogonType (tipo di accesso al sistema)*<br/>
Specifica il tipo di operazione di accesso da eseguire. Per ulteriori dettagli, vedere [LogonUser.](/windows/win32/api/winbase/nf-winbase-logonuserw)

*dwLogonProvider*<br/>
Specifica il provider di accesso. Per ulteriori dettagli, vedere [LogonUser.](/windows/win32/api/winbase/nf-winbase-logonuserw)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Il token di accesso risultante dall'accesso verrà associato all'oggetto `CAccessToken`. Affinché questo metodo `CAccessToken` abbia esito positivo, l'oggetto deve contenere privilegi SE_TCB_NAME, identificando il titolare come parte della base di computer attendibile. Vedere [LogonUser](/windows/win32/api/winbase/nf-winbase-logonuserw) per ulteriori informazioni sui privilegi necessari.

## <a name="caccesstokenopencomclienttoken"></a><a name="opencomclienttoken"></a>CAccessToken::OpenCOMClientToken

Chiamare questo metodo dall'interno di un server COM `CAccessToken` che gestisce una chiamata da un client per inizializzare il con il token di accesso dal client COM.

```
bool OpenCOMClientToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess (Accesso desiderato)*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente impersona il client COM chiamante se la chiamata viene completata correttamente. Se FALSE, il token di accesso verrà aperto, ma il thread non dirà un token di rappresentazione al completamento di questa chiamata.

*bOpenAsSelf (in cui si è aperto)*<br/>
Indica se il controllo di accesso deve essere eseguito sul contesto di sicurezza del thread che chiama il [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) metodo o sul contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzata per ripristinare automaticamente i token di accesso rappresentati creati impostando il flag *bImpersonate* su TRUE.

## <a name="caccesstokenopennamedpipeclienttoken"></a><a name="opennamedpipeclienttoken"></a>CAccessToken::OpenNamedPipeClientToken

Chiamare questo metodo dall'interno di un server `CAccessToken` che richiede su una named pipe per inizializzare il con il token di accesso dal client.

```
bool OpenNamedPipeClientToken(
    HANDLE hPipe,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*hPipe (tubo)*<br/>
Gestire una named pipe.

*dwDesiredAccess (Accesso desiderato)*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente impersona il client di pipe chiamante se la chiamata viene completata correttamente. Se FALSE, il token di accesso verrà aperto, ma il thread non dirà un token di rappresentazione al completamento di questa chiamata.

*bOpenAsSelf (in cui si è aperto)*<br/>
Indica se il controllo di accesso deve essere eseguito sul contesto di sicurezza del thread che chiama il [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) metodo o sul contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzata per ripristinare automaticamente i token di accesso rappresentati creati impostando il flag *bImpersonate* su TRUE.

## <a name="caccesstokenopenrpcclienttoken"></a><a name="openrpcclienttoken"></a>CAccessToken::OpenRPCClientToken

Chiamare questo metodo dall'interno di un server che `CAccessToken` gestisce una chiamata da un client RPC per inizializzare il con il token di accesso dal client.

```
bool OpenRPCClientToken(
    RPC_BINDING_HANDLE BindingHandle,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### <a name="parameters"></a>Parametri

*BindingHandle*<br/>
Handle di associazione sul server che rappresenta un'associazione a un client.

*dwDesiredAccess (Accesso desiderato)*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread corrente impersona il client RPC chiamante se la chiamata viene completata correttamente. Se FALSE, il token di accesso verrà aperto, ma il thread non dirà un token di rappresentazione al completamento di questa chiamata.

*bOpenAsSelf (in cui si è aperto)*<br/>
Indica se il controllo di accesso deve essere eseguito sul contesto di sicurezza del thread che chiama il [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) metodo o sul contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza del processo per il thread chiamante.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzata per ripristinare automaticamente i token di accesso rappresentati creati impostando il flag *bImpersonate* su TRUE.

## <a name="caccesstokenopenthreadtoken"></a><a name="openthreadtoken"></a>CAccessToken::OpenThreadToken

Chiamare questo metodo per impostare il livello `CAccessToken` di rappresentazione e quindi inizializzare il con il token dal thread specificato.

```
bool OpenThreadToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true,
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) throw(...);
```

### <a name="parameters"></a>Parametri

*dwDesiredAccess (Accesso desiderato)*<br/>
Specifica una maschera di accesso che specifica i tipi di accesso richiesti per il token di accesso. Questi tipi di accesso richiesti sono confrontati con il DACL del token per determinare quali accessi vengono concessi o negati.

*bImpersonate*<br/>
Se TRUE, il thread verrà lasciato al livello di rappresentazione richiesto dopo il completamento di questo metodo. Se FALSE, il thread tornerà al livello di rappresentazione originale.

*bOpenAsSelf (in cui si è aperto)*<br/>
Indica se il controllo di accesso deve essere eseguito sul contesto di sicurezza del thread che chiama il [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) metodo o sul contesto di sicurezza del processo per il thread chiamante.

Se questo parametro è FALSE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza per il thread chiamante. Se il thread rappresenta un client, questo contesto di sicurezza può essere quello di un processo client. Se questo parametro è TRUE, il controllo di accesso viene eseguito utilizzando il contesto di sicurezza del processo per il thread chiamante.

*Sil*<br/>
Specifica un [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) tipo enumerato che fornisce il livello di rappresentazione del token.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

`OpenThreadToken`è simile a [CAccessToken::GetThreadToken](#getthreadtoken), ma imposta il `CAccessToken` livello di rappresentazione prima di inizializzare il dal token di accesso del thread.

La [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) può essere utilizzata per ripristinare automaticamente i token di accesso rappresentati creati impostando il flag *bImpersonate* su TRUE.

## <a name="caccesstokenprivilegecheck"></a><a name="privilegecheck"></a>Token di accesso::PrivilegeCheck

Chiamare questo metodo per determinare se un set `CAccessToken` specificato di privilegi è abilitato nell'oggetto.

```
bool PrivilegeCheck(
    PPRIVILEGE_SET RequiredPrivileges,
    bool* pbResult) const throw();
```

### <a name="parameters"></a>Parametri

*RequiredPrivileges*<br/>
Puntatore a una struttura [PRIVILEGE_SET.](/windows/win32/api/winnt/ns-winnt-privilege_set)

*pbRisultato*<br/>
Puntatore a un valore impostato dal metodo per indicare se `CAccessToken` nell'oggetto è abilitato uno o tutti i privilegi specificati.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Quando `PrivilegeCheck` termina, `Attributes` il membro di [ogni](/windows/win32/api/winnt/ns-winnt-luid_and_attributes) LUID_AND_ATTRIBUTES struttura viene impostato su SE_PRIVILEGE_USED_FOR_ACCESS se il privilegio corrispondente è abilitato. Questo metodo chiama la funzione [Win32 PrivilegeCheck.](/windows/win32/api/securitybaseapi/nf-securitybaseapi-privilegecheck)

## <a name="caccesstokenrevert"></a><a name="revert"></a>CAccessToken::Revert (Token di errore):Revert (Token di errore):Revert

Chiamare questo metodo per interrompere un thread dall'utilizzo di un token di rappresentazione.

```
bool Revert(HANDLE hThread = NULL) const throw();
```

### <a name="parameters"></a>Parametri

*hThread (Thread)*<br/>
Handle al thread per ripristinare la rappresentazione. Se *hThread* è NULL, viene utilizzato il thread corrente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

La reversione dei token di rappresentazione può essere eseguita automaticamente con la [classe CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md).

## <a name="caccesstokensetdefaultdacl"></a><a name="setdefaultdacl"></a>CAccessToken::SetDefaultDacl

Chiamare questo metodo per impostare l'elenco DACL predefinito dell'oggetto. `CAccessToken`

```
bool SetDefaultDacl(const CDacl& rDacl) throw(...);
```

### <a name="parameters"></a>Parametri

*rDacl*<br/>
Le nuove informazioni predefinite [sulla classe CDacl.](../../atl/reference/cdacl-class.md)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

L'elenco DACL predefinito è l'elenco DACL utilizzato per impostazione predefinita quando vengono creati nuovi oggetti con questo token di accesso attivo.

## <a name="caccesstokensetowner"></a><a name="setowner"></a>CAccessToken::SetOwner

Chiamare questo metodo per impostare il proprietario dell'oggetto. `CAccessToken`

```
bool SetOwner(const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid (in seguito al numero di*<br/>
L'oggetto [CSid Class](../../atl/reference/csid-class.md) contenente le informazioni sul proprietario.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Il proprietario è il proprietario predefinito utilizzato per i nuovi oggetti creati mentre questo token di accesso è attivo.

## <a name="caccesstokensetprimarygroup"></a><a name="setprimarygroup"></a>CAccessToken::SetPrimaryGroup

Chiamare questo metodo per impostare `CAccessToken` il gruppo primario dell'oggetto.

```
bool SetPrimaryGroup(const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid (in seguito al numero di*<br/>
L'oggetto [CSid Class](../../atl/reference/csid-class.md) contenente le informazioni sul gruppo primario.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Il gruppo primario è il gruppo predefinito per i nuovi oggetti creati mentre questo token di accesso è attivo.

## <a name="see-also"></a>Vedere anche

[Esempio ATLSecurity](../../overview/visual-cpp-samples.md)<br/>
[Token di accesso](/windows/win32/SecAuthZ/access-tokens)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
