---
description: 'Altre informazioni su: classe CTokenGroups'
title: Classe CTokenGroups
ms.date: 11/04/2016
f1_keywords:
- CTokenGroups
- ATLSECURITY/ATL::CTokenGroups
- ATLSECURITY/ATL::CTokenGroups::CTokenGroups
- ATLSECURITY/ATL::CTokenGroups::Add
- ATLSECURITY/ATL::CTokenGroups::Delete
- ATLSECURITY/ATL::CTokenGroups::DeleteAll
- ATLSECURITY/ATL::CTokenGroups::GetCount
- ATLSECURITY/ATL::CTokenGroups::GetLength
- ATLSECURITY/ATL::CTokenGroups::GetPTOKEN_GROUPS
- ATLSECURITY/ATL::CTokenGroups::GetSidsAndAttributes
- ATLSECURITY/ATL::CTokenGroups::LookupSid
helpviewer_keywords:
- CTokenGroups class
ms.assetid: 2ab08076-4b08-4487-bc70-ec6dee304190
ms.openlocfilehash: 3d6633afbd649aa175196f1fae8e62afdf784f99
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140348"
---
# <a name="ctokengroups-class"></a>Classe CTokenGroups

Questa classe è un wrapper per la `TOKEN_GROUPS` struttura.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CTokenGroups
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CTokenGroups:: CTokenGroups](#ctokengroups)|Costruttore.|
|[CTokenGroups:: ~ CTokenGroups](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTokenGroups:: Add](#add)|Aggiunge una `CSid` struttura o esistente `TOKEN_GROUPS` all' `CTokenGroups` oggetto.|
|[CTokenGroups::D Elimina](#delete)|Elimina un `CSid` oggetto e i relativi attributi associati dall' `CTokenGroups` oggetto.|
|[CTokenGroups::D eleteAll](#deleteall)|Elimina tutti `CSid` gli oggetti e i relativi attributi associati dall' `CTokenGroups` oggetto.|
|[CTokenGroups:: GetCount](#getcount)|Restituisce il numero di `CSid` oggetti e gli attributi associati contenuti nell' `CTokenGroups` oggetto.|
|[CTokenGroups:: GetLength](#getlength)|Restituisce la dimensione dell' `CTokenGroups` oggetto.|
|[CTokenGroups:: GetPTOKEN_GROUPS](#getptoken_groups)|Recupera un puntatore alla `TOKEN_GROUPS` struttura.|
|[CTokenGroups:: GetSidsAndAttributes](#getsidsandattributes)|Recupera gli `CSid` oggetti e gli attributi appartenenti all' `CTokenGroups` oggetto.|
|[CTokenGroups:: LookupSid](#lookupsid)|Recupera gli attributi associati a un `CSid` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CTokenGroups:: operator const TOKEN_GROUPS *](#operator_const_token_groups__star)|Esegue il cast dell' `CTokenGroups` oggetto a un puntatore alla `TOKEN_GROUPS` struttura.|
|[CTokenGroups:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Commenti

Un [token di accesso](/windows/win32/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di sicurezza di un processo o di un thread e viene allocato a ciascun utente connesso a un sistema Windows.

La `CTokenGroups` classe è un wrapper per la struttura di [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) , che contiene informazioni sugli identificatori di sicurezza (SID) del gruppo in un token di accesso.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="ctokengroupsadd"></a><a name="add"></a> CTokenGroups:: Add

Aggiunge una `CSid` struttura o esistente `TOKEN_GROUPS` all' `CTokenGroups` oggetto.

```cpp
void Add(const CSid& rSid, DWORD dwAttributes) throw(... );
void Add(const TOKEN_GROUPS& rTokenGroups) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) .

*dwAttributes*<br/>
Attributi da associare all' `CSid` oggetto.

*rTokenGroups*<br/>
Struttura [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) .

### <a name="remarks"></a>Commenti

Questi metodi aggiungono uno o più `CSid` oggetti e i relativi attributi associati all' `CTokenGroups` oggetto.

## <a name="ctokengroupsctokengroups"></a><a name="ctokengroups"></a> CTokenGroups:: CTokenGroups

Costruttore.

```
CTokenGroups() throw();
CTokenGroups(const CTokenGroups& rhs) throw(... );
CTokenGroups(const TOKEN_GROUPS& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
`CTokenGroups`Oggetto o struttura [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) con cui costruire l' `CTokenGroups` oggetto.

### <a name="remarks"></a>Commenti

`CTokenGroups`È possibile creare facoltativamente l'oggetto utilizzando una `TOKEN_GROUPS` struttura o un oggetto definito in precedenza `CTokenGroups` .

## <a name="ctokengroupsctokengroups"></a><a name="dtor"></a> CTokenGroups:: ~ CTokenGroups

Distruttore.

```
virtual ~CTokenGroups() throw();
```

### <a name="remarks"></a>Commenti

Il distruttore libera tutte le risorse allocate.

## <a name="ctokengroupsdelete"></a><a name="delete"></a> CTokenGroups::D Elimina

Elimina un `CSid` oggetto e i relativi attributi associati dall' `CTokenGroups` oggetto.

```
bool Delete(const CSid& rSid) throw();
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) per il quale è necessario rimuovere l'ID di sicurezza (SID) e gli attributi.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'oggetto `CSid` è stato rimosso; in caso contrario, false.

## <a name="ctokengroupsdeleteall"></a><a name="deleteall"></a> CTokenGroups::D eleteAll

Elimina tutti `CSid` gli oggetti e i relativi attributi associati dall' `CTokenGroups` oggetto.

```cpp
void DeleteAll() throw();
```

## <a name="ctokengroupsgetcount"></a><a name="getcount"></a> CTokenGroups:: GetCount

Restituisce il numero di `CSid` oggetti contenuti in `CTokenGroups` .

```
UINT GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di oggetti [CSid](../../atl/reference/csid-class.md) e i relativi attributi associati contenuti nell' `CTokenGroups` oggetto.

## <a name="ctokengroupsgetlength"></a><a name="getlength"></a> CTokenGroups:: GetLength

Restituisce la dimensione dell' `CTokenGroup` oggetto.

```
UINT GetLength() const throw();
```

### <a name="remarks"></a>Commenti

Restituisce la dimensione totale `CTokenGroup` , in byte, dell'oggetto.

## <a name="ctokengroupsgetptoken_groups"></a><a name="getptoken_groups"></a> CTokenGroups:: GetPTOKEN_GROUPS

Recupera un puntatore alla `TOKEN_GROUPS` struttura.

```
const TOKEN_GROUPS* GetPTOKEN_GROUPS() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Recupera un puntatore alla struttura [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) appartenente all' `CTokenGroups` oggetto token di accesso.

## <a name="ctokengroupsgetsidsandattributes"></a><a name="getsidsandattributes"></a> CTokenGroups:: GetSidsAndAttributes

Recupera gli `CSid` oggetti e, facoltativamente, gli attributi appartenenti all' `CTokenGroups` oggetto.

```cpp
void GetSidsAndAttributes(
    CSid::CSidArray* pSids,
    CAtlArray<DWORD>* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSids*<br/>
Puntatore a una matrice di oggetti [CSid](../../atl/reference/csid-class.md) .

*pAttributes*<br/>
Puntatore a una matrice di DWORD. Se questo parametro viene omesso o NULL, gli attributi non vengono recuperati.

### <a name="remarks"></a>Commenti

Questo metodo enumera tutti gli `CSid` oggetti contenuti nell' `CTokenGroups` oggetto e li inserisce e, facoltativamente, i flag di attributo in oggetti Array.

## <a name="ctokengroupslookupsid"></a><a name="lookupsid"></a> CTokenGroups:: LookupSid

Recupera gli attributi associati a un `CSid` oggetto.

```
bool LookupSid(
    const CSid& rSid,
    DWORD* pdwAttributes = NULL) const throw();
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) .

*pdwAttributes*<br/>
Puntatore a un valore DWORD che accetterà l' `CSid` attributo dell'oggetto. Se omesso o NULL, l'attributo non verrà recuperato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'oggetto `CSid` viene trovato; in caso contrario, false.

### <a name="remarks"></a>Commenti

L'impostazione di *pdwAttributes* su null fornisce un modo per confermare l'esistenza di `CSid` senza accedere all'attributo. Si noti che questo metodo non deve essere usato per verificare i diritti di accesso. Le applicazioni devono invece usare il metodo [CAccessToken:: CheckTokenMembership](../../atl/reference/caccesstoken-class.md#checktokenmembership) .

## <a name="ctokengroupsoperator-"></a><a name="operator_eq"></a> CTokenGroups:: operator =

Operatore di assegnazione.

```
CTokenGroups& operator= (const TOKEN_GROUPS& rhs) throw(...);
CTokenGroups& operator= (const CTokenGroups& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
`CTokenGroups`Oggetto o struttura [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) da assegnare all' `CTokenGroups` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce l' `CTokenGroups` oggetto aggiornato.

## <a name="ctokengroupsoperator-const-token_groups-"></a><a name="operator_const_token_groups__star"></a> CTokenGroups:: operator const TOKEN_GROUPS *

Esegue il cast di un valore a un puntatore alla `TOKEN_GROUPS` struttura.

```
operator const TOKEN_GROUPS *() const throw(...);
```

### <a name="remarks"></a>Commenti

Esegue il cast di un valore a un puntatore alla struttura [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) .

## <a name="see-also"></a>Vedi anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[Classe CSid](../../atl/reference/csid-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
