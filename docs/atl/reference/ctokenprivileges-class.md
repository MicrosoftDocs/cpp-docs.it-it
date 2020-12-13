---
description: 'Altre informazioni su: classe CTokenPrivileges'
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
ms.openlocfilehash: 22953c0d2aa8c4fa7dd0b79b001e46797bd3ca25
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140309"
---
# <a name="ctokenprivileges-class"></a>Classe CTokenPrivileges

Questa classe è un wrapper per la `TOKEN_PRIVILEGES` struttura.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CTokenPrivileges
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CTokenPrivileges:: CTokenPrivileges](#ctokenprivileges)|Costruttore.|
|[CTokenPrivileges:: ~ CTokenPrivileges](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTokenPrivileges:: Add](#add)|Aggiunge uno o più privilegi all' `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::D Elimina](#delete)|Elimina un privilegio dall' `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::D eleteAll](#deleteall)|Elimina tutti i privilegi dall' `CTokenPrivileges` oggetto.|
|[CTokenPrivileges:: GetCount](#getcount)|Restituisce il numero di voci di privilegi presenti nell' `CTokenPrivileges` oggetto.|
|[CTokenPrivileges:: GetDisplayNames](#getdisplaynames)|Recupera i nomi visualizzati per i privilegi contenuti nell' `CTokenPrivileges` oggetto.|
|[CTokenPrivileges:: GetLength](#getlength)|Restituisce la dimensione del buffer in byte necessaria per conservare la `TOKEN_PRIVILEGES` struttura rappresentata dall' `CTokenPrivileges` oggetto.|
|[CTokenPrivileges:: GetLuidsAndAttributes](#getluidsandattributes)|Recupera gli identificatori univoci (gli LUID) e i flag di attributo localmente dall' `CTokenPrivileges` oggetto.|
|[CTokenPrivileges:: GetNamesAndAttributes](#getnamesandattributes)|Recupera i nomi dei privilegi e i flag di attributo dall' `CTokenPrivileges` oggetto.|
|[CTokenPrivileges:: GetPTOKEN_PRIVILEGES](#getptoken_privileges)|Restituisce un puntatore alla `TOKEN_PRIVILEGES` struttura.|
|[CTokenPrivileges:: LookupPrivilege](#lookupprivilege)|Recupera l'attributo associato a un nome di privilegio specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CTokenPrivileges:: operator Const TOKEN_PRIVILEGES *](#operator_const_token_privileges__star)|Esegue il cast di un valore a un puntatore alla `TOKEN_PRIVILEGES` struttura.|
|[CTokenPrivileges:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Commenti

Un [token di accesso](/windows/win32/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di sicurezza di un processo o di un thread e viene allocato a ciascun utente connesso a un sistema Windows.

Il token di accesso viene usato per descrivere i vari privilegi di sicurezza concessi a ogni utente. Un privilegio è costituito da un numero a 64 bit denominato identificatore univoco locale ( [LUID](/windows/win32/api/winnt/ns-winnt-luid)) e da una stringa di descrittore.

La `CTokenPrivileges` classe è un wrapper per la struttura [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) e contiene 0 o più privilegi. I privilegi possono essere aggiunti, eliminati o sottoposti a query usando i metodi della classe forniti.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="ctokenprivilegesadd"></a><a name="add"></a> CTokenPrivileges:: Add

Aggiunge uno o più privilegi all' `CTokenPrivileges` oggetto token di accesso.

```
bool Add(LPCTSTR pszPrivilege, bool bEnable) throw(...);
void Add(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del privilegio, come definito in WINNT. File di intestazione H.

*bEnable*<br/>
Se true, il privilegio è abilitato. Se false, il privilegio è disabilitato.

*rPrivileges*<br/>
Riferimento a una struttura [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) . I privilegi e gli attributi vengono copiati da questa struttura e aggiunti all' `CTokenPrivileges` oggetto.

### <a name="return-value"></a>Valore restituito

Il primo form di questo metodo restituisce true se i privilegi vengono aggiunti correttamente; in caso contrario, false.

## <a name="ctokenprivilegesctokenprivileges"></a><a name="ctokenprivileges"></a> CTokenPrivileges:: CTokenPrivileges

Costruttore.

```
CTokenPrivileges() throw();
CTokenPrivileges(const CTokenPrivileges& rhs) throw(... );
CTokenPrivileges(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
`CTokenPrivileges`Oggetto da assegnare al nuovo oggetto.

*rPrivileges*<br/>
Struttura di [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) da assegnare al nuovo `CTokenPrivileges` oggetto.

### <a name="remarks"></a>Commenti

`CTokenPrivileges`È possibile creare facoltativamente l'oggetto utilizzando una `TOKEN_PRIVILEGES` struttura o un oggetto definito in precedenza `CTokenPrivileges` .

## <a name="ctokenprivilegesctokenprivileges"></a><a name="dtor"></a> CTokenPrivileges:: ~ CTokenPrivileges

Distruttore.

```
virtual ~CTokenPrivileges() throw();
```

### <a name="remarks"></a>Commenti

Il distruttore libera tutte le risorse allocate.

## <a name="ctokenprivilegesdelete"></a><a name="delete"></a> CTokenPrivileges::D Elimina

Elimina un privilegio dall' `CTokenPrivileges` oggetto token di accesso.

```
bool Delete(LPCTSTR pszPrivilege) throw();
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del privilegio, come definito in WINNT. File di intestazione H. Questo parametro, ad esempio, può specificare la costante SE_SECURITY_NAME o la relativa stringa corrispondente, ovvero "SeSecurityPrivilege".

### <a name="return-value"></a>Valore restituito

Restituisce true se il privilegio è stato eliminato correttamente; in caso contrario, false.

### <a name="remarks"></a>Commenti

Questo metodo è utile come strumento per la creazione di token con restrizioni.

## <a name="ctokenprivilegesdeleteall"></a><a name="deleteall"></a> CTokenPrivileges::D eleteAll

Elimina tutti i privilegi dall' `CTokenPrivileges` oggetto token di accesso.

```cpp
void DeleteAll() throw();
```

### <a name="remarks"></a>Commenti

Elimina tutti i privilegi contenuti nell' `CTokenPrivileges` oggetto token di accesso.

## <a name="ctokenprivilegesgetdisplaynames"></a><a name="getdisplaynames"></a> CTokenPrivileges:: GetDisplayNames

Recupera i nomi visualizzati per i privilegi contenuti nell' `CTokenPrivileges` oggetto token di accesso.

```cpp
void GetDisplayNames(CNames* pDisplayNames) const throw(...);
```

### <a name="parameters"></a>Parametri

*pDisplayNames*<br/>
Puntatore a una matrice di oggetti `CString`. `CNames` viene definito come typedef: `CTokenPrivileges::CAtlArray<CString>` .

### <a name="remarks"></a>Commenti

Il parametro `pDisplayNames` è un puntatore a una matrice di `CString` oggetti che riceveranno i nomi visualizzati corrispondenti ai privilegi contenuti nell' `CTokenPrivileges` oggetto. Questo metodo recupera i nomi visualizzati solo per i privilegi specificati nella sezione dei privilegi definiti di WINNT. H.

Questo metodo recupera un nome visualizzabile: ad esempio, se il nome dell'attributo è SE_REMOTE_SHUTDOWN_NAME, il nome visualizzabile è "forza arresto da un sistema remoto". Per ottenere il nome di sistema, utilizzare [CTokenPrivileges:: GetNamesAndAttributes](#getnamesandattributes).

## <a name="ctokenprivilegesgetcount"></a><a name="getcount"></a> CTokenPrivileges:: GetCount

Restituisce il numero di voci di privilegi presenti nell' `CTokenPrivileges` oggetto.

```
UINT GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di privilegi contenuti nell' `CTokenPrivileges` oggetto.

## <a name="ctokenprivilegesgetlength"></a><a name="getlength"></a> CTokenPrivileges:: GetLength

Restituisce la lunghezza dell' `CTokenPrivileges` oggetto.

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di byte necessari per contenere una `TOKEN_PRIVILEGES` struttura rappresentata dall' `CTokenPrivileges` oggetto, incluse tutte le voci di privilegio in esso contenute.

## <a name="ctokenprivilegesgetluidsandattributes"></a><a name="getluidsandattributes"></a> CTokenPrivileges:: GetLuidsAndAttributes

Recupera gli identificatori univoci (gli LUID) e i flag di attributo localmente dall' `CTokenPrivileges` oggetto.

```cpp
void GetLuidsAndAttributes(
    CLUIDArray* pPrivileges,
    CAttributes* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPrivileges*<br/>
Puntatore a una matrice di oggetti [LUID](/windows/win32/api/winnt/ns-winnt-luid) . `CLUIDArray` è un typedef definito come `CAtlArray<LUID> CLUIDArray` .

*pAttributes*<br/>
Puntatore a una matrice di oggetti DWORD. Se questo parametro viene omesso o NULL, gli attributi non vengono recuperati. `CAttributes` è un typedef definito come `CAtlArray <DWORD> CAttributes` .

### <a name="remarks"></a>Commenti

Questo metodo enumera tutti i privilegi contenuti nell' `CTokenPrivileges` oggetto token di accesso e inserisce i singoli gli LUID e, facoltativamente, i flag di attributo in oggetti Array.

## <a name="ctokenprivilegesgetnamesandattributes"></a><a name="getnamesandattributes"></a> CTokenPrivileges:: GetNamesAndAttributes

Recupera il nome e i flag di attributo dall' `CTokenPrivileges` oggetto.

```cpp
void GetNamesAndAttributes(
    CNames* pNames,
    CAttributes* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pNames*<br/>
Puntatore a una matrice di `CString` oggetti. `CNames` è un typedef definito come `CAtlArray <CString> CNames` .

*pAttributes*<br/>
Puntatore a una matrice di oggetti DWORD. Se questo parametro viene omesso o NULL, gli attributi non vengono recuperati. `CAttributes` è un typedef definito come `CAtlArray <DWORD> CAttributes` .

### <a name="remarks"></a>Commenti

Questo metodo enumera tutti i privilegi contenuti nell' `CTokenPrivileges` oggetto, inserendo il nome e, facoltativamente, i flag di attributo in oggetti Array.

Questo metodo recupera il nome dell'attributo, anziché il nome visualizzabile: ad esempio, se il nome dell'attributo è SE_REMOTE_SHUTDOWN_NAME, il nome del sistema è "SeRemoteShutdownPrivilege". Per ottenere il nome visualizzabile, utilizzare il metodo [CTokenPrivileges:: GetDisplayNames](#getdisplaynames).

## <a name="ctokenprivilegesgetptoken_privileges"></a><a name="getptoken_privileges"></a> CTokenPrivileges:: GetPTOKEN_PRIVILEGES

Restituisce un puntatore alla `TOKEN_PRIVILEGES` struttura.

```
const TOKEN_PRIVILEGES* GetPTOKEN_PRIVILEGES() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla struttura [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) .

## <a name="ctokenprivilegeslookupprivilege"></a><a name="lookupprivilege"></a> CTokenPrivileges:: LookupPrivilege

Recupera l'attributo associato a un nome di privilegio specificato.

```
bool LookupPrivilege(
    LPCTSTR pszPrivilege,
    DWORD* pdwAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del privilegio, come definito in WINNT. File di intestazione H. Questo parametro, ad esempio, può specificare la costante SE_SECURITY_NAME o la relativa stringa corrispondente, ovvero "SeSecurityPrivilege".

*pdwAttributes*<br/>
Puntatore a una variabile che riceve gli attributi.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'attributo viene recuperato correttamente; in caso contrario, false.

## <a name="ctokenprivilegesoperator-"></a><a name="operator_eq"></a> CTokenPrivileges:: operator =

Operatore di assegnazione.

```
CTokenPrivileges& operator= (const TOKEN_PRIVILEGES& rPrivileges) throw(...);
CTokenPrivileges& operator= (const CTokenPrivileges& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivileges*<br/>
Struttura di [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) da assegnare all' `CTokenPrivileges` oggetto.

*rhs*<br/>
`CTokenPrivileges`Oggetto da assegnare all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce l' `CTokenPrivileges` oggetto aggiornato.

## <a name="ctokenprivilegesoperator-const-token_privileges-"></a><a name="operator_const_token_privileges__star"></a> CTokenPrivileges:: operator Const TOKEN_PRIVILEGES \*

Esegue il cast di un valore a un puntatore alla `TOKEN_PRIVILEGES` struttura.

```
operator const TOKEN_PRIVILEGES *() const throw(...);
```

### <a name="remarks"></a>Commenti

Esegue il cast di un valore a un puntatore alla struttura [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) .

## <a name="see-also"></a>Vedi anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges)<br/>
[LUID](/windows/win32/api/winnt/ns-winnt-luid)<br/>
[LUID_AND_ATTRIBUTES](/windows/win32/api/winnt/ns-winnt-luid_and_attributes)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
