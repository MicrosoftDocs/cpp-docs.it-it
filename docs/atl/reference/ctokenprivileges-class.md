---
title: Classe CTokenPrivileges
ms.date: 11/04/2016
f1_keywords:
- CTokenPrivileges
- ATLSECURITY/ATL::CTokenPrivileges
- ATLSECURITY/ATL::CTokenPrivileges::CTokenPrivileges
- ATLSECURITY/ATL::CTokenPrivileges::Add
- ATLSECURITY/ATL::CTokenPrivileges::Delete
- ATLSECURITY/ATL::CTokenPrivileges::DeleteAll
- ATLSECURITY/ATL::CTokenPrivileges::GetCount
- ATLSECURITY/ATL::CTokenPrivileges::GetDisplayNames
- ATLSECURITY/ATL::CTokenPrivileges::GetLength
- ATLSECURITY/ATL::CTokenPrivileges::GetLuidsAndAttributes
- ATLSECURITY/ATL::CTokenPrivileges::GetNamesAndAttributes
- ATLSECURITY/ATL::CTokenPrivileges::GetPTOKEN_PRIVILEGES
- ATLSECURITY/ATL::CTokenPrivileges::LookupPrivilege
helpviewer_keywords:
- CTokenPrivileges class
ms.assetid: 89590105-f001-4014-870d-142926091231
ms.openlocfilehash: ceb9aeca6b99e7fc9d08625e11cbdb182fb3dc9e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330535"
---
# <a name="ctokenprivileges-class"></a>Classe CTokenPrivileges

Questa classe è un `TOKEN_PRIVILEGES` wrapper per la struttura.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CTokenPrivileges
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenPrivileges::CTokenPrivileges](#ctokenprivileges)|Costruttore.|
|[CTokenPrivileges:: CTokenPrivileges](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenPrivileges::Aggiungere](#add)|Aggiunge uno o più `CTokenPrivileges` privilegi all'oggetto.|
|[CTokenPrivileges::Delete](#delete)|Elimina un privilegio `CTokenPrivileges` dall'oggetto.|
|[CTokenPrivileges::DeleteAll](#deleteall)|Elimina tutti i privilegi `CTokenPrivileges` dall'oggetto.|
|[CTokenPrivileges::GetCount](#getcount)|Restituisce il numero di `CTokenPrivileges` voci di privilegio nell'oggetto.|
|[CTokenPrivileges::GetDisplayNames](#getdisplaynames)|Recupera i nomi visualizzati per `CTokenPrivileges` i privilegi contenuti nell'oggetto.|
|[CTokenPrivileges::GetLength](#getlength)|Restituisce la dimensione del buffer `TOKEN_PRIVILEGES` in byte `CTokenPrivileges` necessaria per contenere la struttura rappresentata dall'oggetto.|
|[CTokenPrivileges::GetLuidsAndAttributes](#getluidsandattributes)|Recupera gli identificatori univoci locali (LUID) e `CTokenPrivileges` i flag di attributo dall'oggetto.|
|[CTokenPrivileges::GetNamesAndAttributes](#getnamesandattributes)|Recupera i nomi dei privilegi `CTokenPrivileges` e i flag di attributo dall'oggetto.|
|[CTokenPrivileges::GetPTOKEN_PRIVILEGES](#getptoken_privileges)|Restituisce un `TOKEN_PRIVILEGES` puntatore alla struttura.|
|[CTokenPrivileges::LookupPrivilege](#lookupprivilege)|Recupera l'attributo associato a un nome di privilegio specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenPrivileges::operator const TOKEN_PRIVILEGES](#operator_const_token_privileges__star)|Esegue il cast di un `TOKEN_PRIVILEGES` valore a un puntatore alla struttura.|
|[CTokenPrivileges::operatore](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

Un token di accesso è un oggetto che descrive il contesto di sicurezza di un processo o di un thread e viene allocato a ogni utente connesso a un sistema Windows.An access [token](/windows/win32/SecAuthZ/access-tokens) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows system.

Il token di accesso viene utilizzato per descrivere i vari privilegi di sicurezza concessi a ogni utente. Un privilegio è costituito da un numero a 64 bit denominato identificatore univoco locale ( [LUID](/windows/win32/api/winnt/ns-winnt-luid)) e da una stringa del descrittore.

La `CTokenPrivileges` classe è un wrapper per la struttura [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) e contiene 0 o più privilegi. I privilegi possono essere aggiunti, eliminati o sottoposti a query utilizzando i metodi della classe fornita.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="ctokenprivilegesadd"></a><a name="add"></a>CTokenPrivileges::Aggiungere

Aggiunge uno o più `CTokenPrivileges` privilegi all'oggetto token di accesso.

```
bool Add(LPCTSTR pszPrivilege, bool bEnable) throw(...);
void Add(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege (informazioni in base al servizio di windows*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del privilegio, come definito in WINNT. File di intestazione H.

*bEnable*<br/>
Se true, il privilegio è abilitato. Se false, il privilegio è disabilitato.

*rPrivilegi*<br/>
Riferimento a una struttura [TOKEN_PRIVILEGES.](/windows/win32/api/winnt/ns-winnt-token_privileges) I privilegi e gli attributi vengono copiati `CTokenPrivileges` da questa struttura e aggiunti all'oggetto.

### <a name="return-value"></a>Valore restituito

La prima forma di questo metodo restituisce true se i privilegi vengono aggiunti correttamente, false in caso contrario.

## <a name="ctokenprivilegesctokenprivileges"></a><a name="ctokenprivileges"></a>CTokenPrivileges::CTokenPrivileges

Costruttore.

```
CTokenPrivileges() throw();
CTokenPrivileges(const CTokenPrivileges& rhs) throw(... );
CTokenPrivileges(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto `CTokenPrivileges` da assegnare al nuovo oggetto.

*rPrivilegi*<br/>
Struttura [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) da assegnare `CTokenPrivileges` al nuovo oggetto.

### <a name="remarks"></a>Osservazioni

L'oggetto `CTokenPrivileges` può essere creato `TOKEN_PRIVILEGES` facoltativamente utilizzando `CTokenPrivileges` una struttura o un oggetto definito in precedenza.

## <a name="ctokenprivilegesctokenprivileges"></a><a name="dtor"></a>CTokenPrivileges:: CTokenPrivileges

Distruttore.

```
virtual ~CTokenPrivileges() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse allocate.

## <a name="ctokenprivilegesdelete"></a><a name="delete"></a>CTokenPrivileges::Delete

Elimina un privilegio `CTokenPrivileges` dall'oggetto token di accesso.

```
bool Delete(LPCTSTR pszPrivilege) throw();
```

### <a name="parameters"></a>Parametri

*pszPrivilege (informazioni in base al servizio di windows*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del privilegio, come definito in WINNT. File di intestazione H. Ad esempio, questo parametro può specificare la costante SE_SECURITY_NAME o la stringa corrispondente "SeSecurityPrivilege".

### <a name="return-value"></a>Valore restituito

Restituisce true se il privilegio è stato eliminato correttamente, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo metodo è utile come strumento per la creazione di token con restrizioni.

## <a name="ctokenprivilegesdeleteall"></a><a name="deleteall"></a>CTokenPrivileges::DeleteAll

Elimina tutti i privilegi `CTokenPrivileges` dall'oggetto token di accesso.

```
void DeleteAll() throw();
```

### <a name="remarks"></a>Osservazioni

Elimina tutti i privilegi `CTokenPrivileges` contenuti nell'oggetto token di accesso.

## <a name="ctokenprivilegesgetdisplaynames"></a><a name="getdisplaynames"></a>CTokenPrivileges::GetDisplayNames

Recupera i nomi visualizzati per `CTokenPrivileges` i privilegi contenuti nell'oggetto token di accesso.

```
void GetDisplayNames(CNames* pDisplayNames) const throw(...);
```

### <a name="parameters"></a>Parametri

*pNomi visualizzati*<br/>
Puntatore a una matrice di oggetti `CString`. `CNames`è definito come typedef: `CTokenPrivileges::CAtlArray<CString>`.

### <a name="remarks"></a>Osservazioni

Il `pDisplayNames` parametro è un `CString` puntatore a una matrice di oggetti che `CTokenPrivileges` riceverà i nomi visualizzati corrispondenti ai privilegi contenuti nell'oggetto. Questo metodo recupera i nomi visualizzati solo per i privilegi specificati nella sezione Privilegi definiti di WINNT. H.

Questo metodo recupera un nome visualizzabile: ad esempio, se il nome dell'attributo è SE_REMOTE_SHUTDOWN_NAME, il nome visualizzabile è "Forza arresto da un sistema remoto". Per ottenere il nome del sistema, utilizzare [CTokenPrivileges::GetNamesAndAttributes](#getnamesandattributes).

## <a name="ctokenprivilegesgetcount"></a><a name="getcount"></a>CTokenPrivileges::GetCount

Restituisce il numero di `CTokenPrivileges` voci di privilegio nell'oggetto.

```
UINT GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di `CTokenPrivileges` privilegi contenuti nell'oggetto.

## <a name="ctokenprivilegesgetlength"></a><a name="getlength"></a>CTokenPrivileges::GetLength

Restituisce la `CTokenPrivileges` lunghezza dell'oggetto.

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di `TOKEN_PRIVILEGES` byte necessari `CTokenPrivileges` per contenere una struttura rappresentata dall'oggetto, incluse tutte le voci di privilegio in esso contenute.

## <a name="ctokenprivilegesgetluidsandattributes"></a><a name="getluidsandattributes"></a>CTokenPrivileges::GetLuidsAndAttributes

Recupera gli identificatori univoci locali (LUID) e `CTokenPrivileges` i flag di attributo dall'oggetto.

```
void GetLuidsAndAttributes(
    CLUIDArray* pPrivileges,
    CAttributes* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPrivilegi*<br/>
Puntatore a una matrice di oggetti [LUID.](/windows/win32/api/winnt/ns-winnt-luid) `CLUIDArray`è un typedef `CAtlArray<LUID> CLUIDArray`definito come .

*pAttributi*<br/>
Puntatore a una matrice di oggetti DWORD. Se questo parametro viene omesso o NULL, gli attributi non vengono recuperati. `CAttributes`è un typedef `CAtlArray <DWORD> CAttributes`definito come .

### <a name="remarks"></a>Osservazioni

Questo metodo enumera tutti i privilegi `CTokenPrivileges` contenuti nell'oggetto token di accesso e inserisce i singoli LUID e (facoltativamente) i flag di attributo in oggetti di matrice.

## <a name="ctokenprivilegesgetnamesandattributes"></a><a name="getnamesandattributes"></a>CTokenPrivileges::GetNamesAndAttributes

Recupera il nome e i `CTokenPrivileges` flag di attributo dall'oggetto.

```
void GetNamesAndAttributes(
    CNames* pNames,
    CAttributes* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pNomi*<br/>
Puntatore a `CString` una matrice di oggetti. `CNames`è un typedef `CAtlArray <CString> CNames`definito come .

*pAttributi*<br/>
Puntatore a una matrice di oggetti DWORD. Se questo parametro viene omesso o NULL, gli attributi non vengono recuperati. `CAttributes`è un typedef `CAtlArray <DWORD> CAttributes`definito come .

### <a name="remarks"></a>Osservazioni

Questo metodo enumera tutti i privilegi `CTokenPrivileges` contenuti nell'oggetto, inserendo il nome e (facoltativamente) i flag di attributo in oggetti di matrice.

Questo metodo recupera il nome dell'attributo, anziché il nome visualizzabile, ad esempio se il nome dell'attributo è SE_REMOTE_SHUTDOWN_NAME, il nome del sistema è "SeRemoteShutdownPrivilege". Per ottenere il nome visualizzabile, utilizzare il metodo [CTokenPrivileges::GetDisplayNames](#getdisplaynames).

## <a name="ctokenprivilegesgetptoken_privileges"></a><a name="getptoken_privileges"></a>CTokenPrivileges::GetPTOKEN_PRIVILEGES

Restituisce un `TOKEN_PRIVILEGES` puntatore alla struttura.

```
const TOKEN_PRIVILEGES* GetPTOKEN_PRIVILEGES() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla struttura [TOKEN_PRIVILEGES.](/windows/win32/api/winnt/ns-winnt-token_privileges)

## <a name="ctokenprivilegeslookupprivilege"></a><a name="lookupprivilege"></a>CTokenPrivileges::LookupPrivilege

Recupera l'attributo associato a un nome di privilegio specificato.

```
bool LookupPrivilege(
    LPCTSTR pszPrivilege,
    DWORD* pdwAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege (informazioni in base al servizio di windows*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del privilegio, come definito in WINNT. File di intestazione H. Ad esempio, questo parametro può specificare la costante SE_SECURITY_NAME o la stringa corrispondente "SeSecurityPrivilege".

*attributi pdw*<br/>
Puntatore a una variabile che riceve gli attributi.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'attributo viene recuperato correttamente, false in caso contrario.

## <a name="ctokenprivilegesoperator-"></a><a name="operator_eq"></a>CTokenPrivileges::operatore

Operatore di assegnazione.

```
CTokenPrivileges& operator= (const TOKEN_PRIVILEGES& rPrivileges) throw(...);
CTokenPrivileges& operator= (const CTokenPrivileges& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivilegi*<br/>
Struttura [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) da assegnare all'oggetto. `CTokenPrivileges`

*rhs*<br/>
Oggetto `CTokenPrivileges` da assegnare all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce `CTokenPrivileges` l'oggetto aggiornato.

## <a name="ctokenprivilegesoperator-const-token_privileges-"></a><a name="operator_const_token_privileges__star"></a>CTokenPrivileges::operator const TOKEN_PRIVILEGES\*

Esegue il cast di un `TOKEN_PRIVILEGES` valore a un puntatore alla struttura.

```
operator const TOKEN_PRIVILEGES *() const throw(...);
```

### <a name="remarks"></a>Osservazioni

Esegue il cast di un valore a un puntatore alla struttura [TOKEN_PRIVILEGES.](/windows/win32/api/winnt/ns-winnt-token_privileges)

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges)<br/>
[Luid](/windows/win32/api/winnt/ns-winnt-luid)<br/>
[LUID_AND_ATTRIBUTES](/windows/win32/api/winnt/ns-winnt-luid_and_attributes)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
