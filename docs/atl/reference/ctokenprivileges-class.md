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
ms.openlocfilehash: 8bca3e1d45d0a85d1d4ceac4ffdf7b11091020f6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62277305"
---
# <a name="ctokenprivileges-class"></a>Classe CTokenPrivileges

Questa classe è un wrapper per il `TOKEN_PRIVILEGES` struttura.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CTokenPrivileges
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenPrivileges::CTokenPrivileges](#ctokenprivileges)|Costruttore.|
|[CTokenPrivileges:: ~ CTokenPrivileges](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenPrivileges::Add](#add)|Aggiunge uno o più privilegi per il `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::Delete](#delete)|Elimina un privilegio dal `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::DeleteAll](#deleteall)|Elimina tutti i privilegi dal `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::GetCount](#getcount)|Restituisce il numero di voci di privilegio nel `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::GetDisplayNames](#getdisplaynames)|Recupera i nomi visualizzati per i privilegi contenuti nel `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::GetLength](#getlength)|Restituisce le dimensioni del buffer in byte necessarie per contenere il `TOKEN_PRIVILEGES` struttura rappresentata dal `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::GetLuidsAndAttributes](#getluidsandattributes)|Recupera gli identificatori univoci locale (LUID) e i flag di attributi dal `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::GetNamesAndAttributes](#getnamesandattributes)|Recupera i nomi dei privilegi e i flag di attributi dal `CTokenPrivileges` oggetto.|
|[CTokenPrivileges::GetPTOKEN_PRIVILEGES](#getptoken_privileges)|Restituisce un puntatore al `TOKEN_PRIVILEGES` struttura.|
|[CTokenPrivileges::LookupPrivilege](#lookupprivilege)|Recupera l'attributo associato al nome di un determinato privilegio.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenPrivileges::operator TOKEN_PRIVILEGES const *](#operator_const_token_privileges__star)|Esegue il cast a un puntatore a un valore di `TOKEN_PRIVILEGES` struttura.|
|[CTokenPrivileges::operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Note

Un' [token di accesso](/windows/desktop/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di sicurezza di un processo o thread e viene allocato a ogni utente connesso a un sistema di Windows.

Il token di accesso viene usato per descrivere i vari privilegi di sicurezza concessi a ogni utente. Un privilegio è costituito da un numero a 64 bit, denominato identificatore univoco locale ( [LUID](/windows/desktop/api/winnt/ns-winnt-_luid)) e una stringa del descrittore.

Il `CTokenPrivileges` classe è un wrapper per il [TOKEN_PRIVILEGES](/windows/desktop/api/winnt/ns-winnt-_token_privileges) strutturare e contiene 0 o più privilegi. Possibile aggiungere i privilegi, eliminato o sottoposti a query usando i metodi di classe fornita.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="add"></a>  CTokenPrivileges::Add

Aggiunge uno o più privilegi per il `CTokenPrivileges` oggetto token di accesso.

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
Fare riferimento a un [TOKEN_PRIVILEGES](/windows/desktop/api/winnt/ns-winnt-_token_privileges) struttura. I privilegi e gli attributi vengono copiati da questa struttura e aggiunto al `CTokenPrivileges` oggetto.

### <a name="return-value"></a>Valore restituito

Il primo form di questo metodo restituisce true se i privilegi sono aggiunto correttamente, false in caso contrario.

##  <a name="ctokenprivileges"></a>  CTokenPrivileges::CTokenPrivileges

Costruttore.

```
CTokenPrivileges() throw();
CTokenPrivileges(const CTokenPrivileges& rhs) throw(... );
CTokenPrivileges(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Il `CTokenPrivileges` oggetto da assegnare al nuovo oggetto.

*rPrivileges*<br/>
Il [TOKEN_PRIVILEGES](/windows/desktop/api/winnt/ns-winnt-_token_privileges) struttura da assegnare al nuovo `CTokenPrivileges` oggetto.

### <a name="remarks"></a>Note

Il `CTokenPrivileges` oggetto può facoltativamente essere creato usando un' `TOKEN_PRIVILEGES` struttura o un oggetto definito in precedenza `CTokenPrivileges` oggetto.

##  <a name="dtor"></a>  CTokenPrivileges:: ~ CTokenPrivileges

Distruttore.

```
virtual ~CTokenPrivileges() throw();
```

### <a name="remarks"></a>Note

Il distruttore libera tutte le risorse allocate.

##  <a name="delete"></a>  CTokenPrivileges::Delete

Elimina un privilegio dal `CTokenPrivileges` oggetto token di accesso.

```
bool Delete(LPCTSTR pszPrivilege) throw();
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del privilegio, come definito in WINNT. File di intestazione H. Ad esempio, questo parametro è stato possibile specificare la costante SE_SECURITY_NAME, o la relativa stringa corrispondente, "SeSecurityPrivilege."

### <a name="return-value"></a>Valore restituito

Restituisce true se il privilegio è stata eliminata, false in caso contrario.

### <a name="remarks"></a>Note

Questo metodo è utile come strumento per la creazione dei token con restrizioni.

##  <a name="deleteall"></a>  CTokenPrivileges::DeleteAll

Elimina tutti i privilegi dal `CTokenPrivileges` oggetto token di accesso.

```
void DeleteAll() throw();
```

### <a name="remarks"></a>Note

Elimina contenuti in tutti i privilegi di `CTokenPrivileges` oggetto token di accesso.

##  <a name="getdisplaynames"></a>  CTokenPrivileges::GetDisplayNames

Recupera i nomi visualizzati per i privilegi contenuti nel `CTokenPrivileges` oggetto token di accesso.

```
void GetDisplayNames(CNames* pDisplayNames) const throw(...);
```

### <a name="parameters"></a>Parametri

*pDisplayNames*<br/>
Puntatore a una matrice di oggetti `CString`. `CNames` viene definito come un typedef: `CTokenPrivileges::CAtlArray<CString>`.

### <a name="remarks"></a>Note

Il parametro `pDisplayNames` è un puntatore a una matrice di `CString` gli oggetti che riceveranno i nomi corrispondenti ai privilegi contenuti nel `CTokenPrivileges` oggetto. Questo metodo recupera i nomi visualizzati solo per i privilegi specificati nella sezione dei privilegi definiti di WINNT. H.

Questo metodo recupera un nome visualizzabile: ad esempio, se il nome dell'attributo è SE_REMOTE_SHUTDOWN_NAME, il nome visualizzabile è "Arresto forzato da un sistema remoto." Per ottenere il nome del sistema, utilizzare [CTokenPrivileges::GetNamesAndAttributes](#getnamesandattributes).

##  <a name="getcount"></a>  CTokenPrivileges::GetCount

Restituisce il numero di voci di privilegio nel `CTokenPrivileges` oggetto.

```
UINT GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di privilegi contenuti nel `CTokenPrivileges` oggetto.

##  <a name="getlength"></a>  CTokenPrivileges::GetLength

Restituisce la lunghezza del `CTokenPrivileges` oggetto.

```
UINT GetLength() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di byte necessari per contenere una `TOKEN_PRIVILEGES` struttura rappresentata dal `CTokenPrivileges` oggetto, incluse tutte le voci di privilegio contiene.

##  <a name="getluidsandattributes"></a>  CTokenPrivileges::GetLuidsAndAttributes

Recupera gli identificatori univoci locale (LUID) e i flag di attributi dal `CTokenPrivileges` oggetto.

```
void GetLuidsAndAttributes(
    CLUIDArray* pPrivileges,
    CAttributes* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pPrivileges*<br/>
Puntatore a una matrice di [LUID](/windows/desktop/api/winnt/ns-winnt-_luid) oggetti. `CLUIDArray` è un typedef definito come `CAtlArray<LUID> CLUIDArray`.

*pAttributes*<br/>
Puntatore a una matrice di oggetti valore DWORD. Se questo parametro viene omesso o è NULL, gli attributi non vengono recuperati. `CAttributes` è un typedef definito come `CAtlArray <DWORD> CAttributes`.

### <a name="remarks"></a>Note

Questo metodo enumererà tutti i privilegi contenuti nel `CTokenPrivileges` oggetto del token di accesso e posizionare i LUID singoli e, facoltativamente, i flag di attributo in oggetti di matrice.

##  <a name="getnamesandattributes"></a>  CTokenPrivileges::GetNamesAndAttributes

Recupera i flag di attributi name e dal `CTokenPrivileges` oggetto.

```
void GetNamesAndAttributes(
    CNames* pNames,
    CAttributes* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pNames*<br/>
Puntatore a una matrice di `CString` oggetti. `CNames` è un typedef definito come `CAtlArray <CString> CNames`.

*pAttributes*<br/>
Puntatore a una matrice di oggetti valore DWORD. Se questo parametro viene omesso o è NULL, gli attributi non vengono recuperati. `CAttributes` è un typedef definito come `CAtlArray <DWORD> CAttributes`.

### <a name="remarks"></a>Note

Questo metodo enumererà tutti i privilegi contenuti nel `CTokenPrivileges` oggetto, inserire il nome e, facoltativamente, i flag di attributo in oggetti di matrice.

Questo metodo recupera il nome dell'attributo, anziché il nome visualizzabile: ad esempio, se il nome dell'attributo è SE_REMOTE_SHUTDOWN_NAME, il nome di sistema è "SeRemoteShutdownPrivilege". Per ottenere il nome visualizzabile, usare il metodo [CTokenPrivileges::GetDisplayNames](#getdisplaynames).

##  <a name="getptoken_privileges"></a>  CTokenPrivileges::GetPTOKEN_PRIVILEGES

Restituisce un puntatore al `TOKEN_PRIVILEGES` struttura.

```
const TOKEN_PRIVILEGES* GetPTOKEN_PRIVILEGES() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore per il [TOKEN_PRIVILEGES](/windows/desktop/api/winnt/ns-winnt-_token_privileges) struttura.

##  <a name="lookupprivilege"></a>  CTokenPrivileges::LookupPrivilege

Recupera l'attributo associato al nome di un determinato privilegio.

```
bool LookupPrivilege(
    LPCTSTR pszPrivilege,
    DWORD* pdwAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pszPrivilege*<br/>
Puntatore a una stringa con terminazione null che specifica il nome del privilegio, come definito in WINNT. File di intestazione H. Ad esempio, questo parametro è stato possibile specificare la costante SE_SECURITY_NAME, o la relativa stringa corrispondente, "SeSecurityPrivilege."

*pdwAttributes*<br/>
Puntatore a una variabile che riceve gli attributi.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'attributo viene recuperato correttamente, false in caso contrario.

##  <a name="operator_eq"></a>  CTokenPrivileges::operator =

Operatore di assegnazione.

```
CTokenPrivileges& operator= (const TOKEN_PRIVILEGES& rPrivileges) throw(...);
CTokenPrivileges& operator= (const CTokenPrivileges& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rPrivileges*<br/>
Il [TOKEN_PRIVILEGES](/windows/desktop/api/winnt/ns-winnt-_token_privileges) da assegnare alla struttura di `CTokenPrivileges` oggetto.

*rhs*<br/>
Il `CTokenPrivileges` oggetto da assegnare all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce l'aggiornato `CTokenPrivileges` oggetto.

##  <a name="operator_const_token_privileges__star"></a>  CTokenPrivileges::operator TOKEN_PRIVILEGES const \*

Esegue il cast a un puntatore a un valore di `TOKEN_PRIVILEGES` struttura.

```
operator const TOKEN_PRIVILEGES *() const throw(...);
```

### <a name="remarks"></a>Note

Esegue il cast a un puntatore a un valore di [TOKEN_PRIVILEGES](/windows/desktop/api/winnt/ns-winnt-_token_privileges) struttura.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[TOKEN_PRIVILEGES](/windows/desktop/api/winnt/ns-winnt-_token_privileges)<br/>
[LUID](/windows/desktop/api/winnt/ns-winnt-_luid)<br/>
[LUID_AND_ATTRIBUTES](/windows/desktop/api/winnt/ns-winnt-_luid_and_attributes)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
