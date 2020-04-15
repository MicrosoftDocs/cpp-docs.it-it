---
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
ms.openlocfilehash: 1e9d21c59eb5efabf036fbc938a40de2c4b7a0b7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330560"
---
# <a name="ctokengroups-class"></a>Classe CTokenGroups

Questa classe è un `TOKEN_GROUPS` wrapper per la struttura.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CTokenGroups
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenGroups::CTokenGroups](#ctokengroups)|Costruttore.|
|[Gruppi di simboli CToken:: : CTokenGruppi](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenGroups::Aggiungere](#add)|Aggiunge `CSid` una `TOKEN_GROUPS` struttura o `CTokenGroups` una struttura esistente all'oggetto.|
|[CTokenGroups::Delete](#delete)|Elimina un `CSid` e i relativi `CTokenGroups` attributi associati dall'oggetto.|
|[CTokenGroups::DeleteAll](#deleteall)|Elimina tutti `CSid` gli oggetti e `CTokenGroups` gli attributi associati dall'oggetto.|
|[CTokenGroups::GetCount](#getcount)|Restituisce il `CSid` numero di oggetti `CTokenGroups` e gli attributi associati contenuti nell'oggetto.|
|[CTokenGroups::GetLength](#getlength)|Restituisce la `CTokenGroups` dimensione dell'oggetto.|
|[CTokenGroups::GetPTOKEN_GROUPS](#getptoken_groups)|Recupera un puntatore `TOKEN_GROUPS` alla struttura.|
|[CTokenGroups::GetSidsAndAttributes](#getsidsandattributes)|Recupera gli `CSid` oggetti e gli `CTokenGroups` attributi appartenenti all'oggetto.|
|[CTokenGroups::LookupSid](#lookupsid)|Recupera gli attributi associati `CSid` a un oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenGroups::operator const TOKEN_GROUPS](#operator_const_token_groups__star)|Esegue il `CTokenGroups` cast dell'oggetto `TOKEN_GROUPS` a un puntatore alla struttura.|
|[CTokenGroups::operatore](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

Un token di accesso è un oggetto che descrive il contesto di sicurezza di un processo o di un thread e viene allocato a ogni utente connesso a un sistema Windows.An access [token](/windows/win32/SecAuthZ/access-tokens) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows system.

La `CTokenGroups` classe è un wrapper per la [struttura TOKEN_GROUPS,](/windows/win32/api/winnt/ns-winnt-token_groups) contenente informazioni sugli identificatori di sicurezza (SID) del gruppo in un token di accesso.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="ctokengroupsadd"></a><a name="add"></a>CTokenGroups::Aggiungere

Aggiunge `CSid` una `TOKEN_GROUPS` struttura o `CTokenGroups` una struttura esistente all'oggetto.

```
void Add(const CSid& rSid, DWORD dwAttributes) throw(... );
void Add(const TOKEN_GROUPS& rTokenGroups) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid (in seguito al numero di*<br/>
Oggetto [CSid.](../../atl/reference/csid-class.md)

*dwAttributi*<br/>
Attributi da associare `CSid` all'oggetto.

*rTokenGruppi*<br/>
Una struttura [TOKEN_GROUPS.](/windows/win32/api/winnt/ns-winnt-token_groups)

### <a name="remarks"></a>Osservazioni

Questi metodi aggiungono `CSid` uno o più oggetti `CTokenGroups` e i relativi attributi associati all'oggetto.

## <a name="ctokengroupsctokengroups"></a><a name="ctokengroups"></a>CTokenGroups::CTokenGroups

Costruttore.

```
CTokenGroups() throw();
CTokenGroups(const CTokenGroups& rhs) throw(... );
CTokenGroups(const TOKEN_GROUPS& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto `CTokenGroups` o [struttura TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) con `CTokenGroups` cui costruire l'oggetto.

### <a name="remarks"></a>Osservazioni

L'oggetto `CTokenGroups` può essere creato `TOKEN_GROUPS` facoltativamente utilizzando `CTokenGroups` una struttura o un oggetto definito in precedenza.

## <a name="ctokengroupsctokengroups"></a><a name="dtor"></a>Gruppi di simboli CToken:: : CTokenGruppi

Distruttore.

```
virtual ~CTokenGroups() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse allocate.

## <a name="ctokengroupsdelete"></a><a name="delete"></a>CTokenGroups::Delete

Elimina un `CSid` e i relativi `CTokenGroups` attributi associati dall'oggetto.

```
bool Delete(const CSid& rSid) throw();
```

### <a name="parameters"></a>Parametri

*rSid (in seguito al numero di*<br/>
Oggetto [CSid](../../atl/reference/csid-class.md) per il quale devono essere rimossi l'identificatore di protezione (SID) e gli attributi.

### <a name="return-value"></a>Valore restituito

Restituisce true `CSid` se l'oggetto viene rimosso, false in caso contrario.

## <a name="ctokengroupsdeleteall"></a><a name="deleteall"></a>CTokenGroups::DeleteAll

Elimina tutti `CSid` gli oggetti e `CTokenGroups` gli attributi associati dall'oggetto.

```
void DeleteAll() throw();
```

## <a name="ctokengroupsgetcount"></a><a name="getcount"></a>CTokenGroups::GetCount

Restituisce il `CSid` numero `CTokenGroups`di oggetti contenuti in .

```
UINT GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di [oggetti CSid](../../atl/reference/csid-class.md) `CTokenGroups` e i relativi attributi associati contenuti nell'oggetto.

## <a name="ctokengroupsgetlength"></a><a name="getlength"></a>CTokenGroups::GetLength

Restituisce la `CTokenGroup` dimensione dell'oggetto.

```
UINT GetLength() const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce la dimensione `CTokenGroup` totale dell'oggetto, in byte.

## <a name="ctokengroupsgetptoken_groups"></a><a name="getptoken_groups"></a>CTokenGroups::GetPTOKEN_GROUPS

Recupera un puntatore `TOKEN_GROUPS` alla struttura.

```
const TOKEN_GROUPS* GetPTOKEN_GROUPS() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Recupera un puntatore [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) alla struttura `CTokenGroups` TOKEN_GROUPS appartenente all'oggetto token di accesso.

## <a name="ctokengroupsgetsidsandattributes"></a><a name="getsidsandattributes"></a>CTokenGroups::GetSidsAndAttributes

Recupera gli `CSid` oggetti e (facoltativamente) gli `CTokenGroups` attributi appartenenti all'oggetto.

```
void GetSidsAndAttributes(
    CSid::CSidArray* pSids,
    CAtlArray<DWORD>* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSids (in stato di*<br/>
Puntatore a una matrice di [CSid](../../atl/reference/csid-class.md) oggetti.

*pAttributi*<br/>
Puntatore a una matrice di DWORD. Se questo parametro viene omesso o NULL, gli attributi non vengono recuperati.

### <a name="remarks"></a>Osservazioni

Questo metodo enumera tutti `CSid` gli oggetti `CTokenGroups` contenuti nell'oggetto e li inserirà e (facoltativamente) i flag di attributo in oggetti di matrice.

## <a name="ctokengroupslookupsid"></a><a name="lookupsid"></a>CTokenGroups::LookupSid

Recupera gli attributi associati `CSid` a un oggetto.

```
bool LookupSid(
    const CSid& rSid,
    DWORD* pdwAttributes = NULL) const throw();
```

### <a name="parameters"></a>Parametri

*rSid (in seguito al numero di*<br/>
Oggetto [CSid.](../../atl/reference/csid-class.md)

*attributi pdw*<br/>
Puntatore a un DWORD `CSid` che accetterà l'attributo dell'oggetto. Se omesso o NULL, l'attributo non verrà recuperato.

### <a name="return-value"></a>Valore restituito

Restituisce true `CSid` se l'oggetto viene trovato, false in caso contrario.

### <a name="remarks"></a>Osservazioni

L'impostazione di *pdwAttributes* su NULL consente `CSid` di confermare l'esistenza di senza accedere all'attributo. Si noti che questo metodo non deve essere utilizzato per controllare i diritti di accesso. Le applicazioni devono invece usare il metodo [CAccessToken::CheckTokenMembership.Applications](../../atl/reference/caccesstoken-class.md#checktokenmembership) should instead use the CAccessToken::CheckTokenMembership method.

## <a name="ctokengroupsoperator-"></a><a name="operator_eq"></a>CTokenGroups::operatore

Operatore di assegnazione.

```
CTokenGroups& operator= (const TOKEN_GROUPS& rhs) throw(...);
CTokenGroups& operator= (const CTokenGroups& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Struttura `CTokenGroups` dell'oggetto o del `CTokenGroups` [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) da assegnare all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce `CTokenGroups` l'oggetto aggiornato.

## <a name="ctokengroupsoperator-const-token_groups-"></a><a name="operator_const_token_groups__star"></a>CTokenGroups::operator const TOKEN_GROUPS

Esegue il cast di un `TOKEN_GROUPS` valore a un puntatore alla struttura.

```
operator const TOKEN_GROUPS *() const throw(...);
```

### <a name="remarks"></a>Osservazioni

Esegue il cast di un valore a un puntatore alla struttura [TOKEN_GROUPS.](/windows/win32/api/winnt/ns-winnt-token_groups)

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[Classe CSid](../../atl/reference/csid-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
