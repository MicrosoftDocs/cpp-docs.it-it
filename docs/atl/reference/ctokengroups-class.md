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
ms.openlocfilehash: 934d746dafafb39c2ffc3477c59c95914d270196
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62277357"
---
# <a name="ctokengroups-class"></a>Classe CTokenGroups

Questa classe è un wrapper per il `TOKEN_GROUPS` struttura.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CTokenGroups
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenGroups::CTokenGroups](#ctokengroups)|Costruttore.|
|[CTokenGroups:: ~ CTokenGroups](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenGroups::Add](#add)|Aggiunge un `CSid` o esistente `TOKEN_GROUPS` struttura per il `CTokenGroups` oggetto.|
|[CTokenGroups::Delete](#delete)|Elimina una `CSid` e i relativi attributi associati dal `CTokenGroups` oggetto.|
|[CTokenGroups::DeleteAll](#deleteall)|Elimina tutti `CSid` gli oggetti e i relativi attributi associati dal `CTokenGroups` oggetto.|
|[CTokenGroups::GetCount](#getcount)|Restituisce il numero di `CSid` gli oggetti e attributi associati contenuti nel `CTokenGroups` oggetto.|
|[CTokenGroups::GetLength](#getlength)|Restituisce la dimensione del `CTokenGroups` oggetto.|
|[CTokenGroups::GetPTOKEN_GROUPS](#getptoken_groups)|Recupera un puntatore al `TOKEN_GROUPS` struttura.|
|[CTokenGroups::GetSidsAndAttributes](#getsidsandattributes)|Recupera le `CSid` gli oggetti e attributi che appartengono al `CTokenGroups` oggetto.|
|[CTokenGroups::LookupSid](#lookupsid)|Recupera gli attributi associati un `CSid` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTokenGroups::operator TOKEN_GROUPS const *](#operator_const_token_groups__star)|Cast di `CTokenGroups` oggetti in un puntatore al `TOKEN_GROUPS` struttura.|
|[CTokenGroups::operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Note

Un' [token di accesso](/windows/desktop/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di sicurezza di un processo o thread e viene allocato a ogni utente connesso a un sistema di Windows.

Il `CTokenGroups` classe è un wrapper per il [TOKEN_GROUPS](/windows/desktop/api/winnt/ns-winnt-_token_groups) struttura, contenente informazioni sul gruppo gli ID di sicurezza (SID) in un token di accesso.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="add"></a>  CTokenGroups::Add

Aggiunge un `CSid` o esistente `TOKEN_GROUPS` struttura per il `CTokenGroups` oggetto.

```
void Add(const CSid& rSid, DWORD dwAttributes) throw(... );
void Add(const TOKEN_GROUPS& rTokenGroups) throw(...);
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Oggetto [IDSR](../../atl/reference/csid-class.md) oggetto.

*dwAttributes*<br/>
Gli attributi da associare il `CSid` oggetto.

*rTokenGroups*<br/>
Oggetto [TOKEN_GROUPS](/windows/desktop/api/winnt/ns-winnt-_token_groups) struttura.

### <a name="remarks"></a>Note

Questi metodi consentono di aggiungere uno o più `CSid` gli oggetti e i relativi attributi associati ai `CTokenGroups` oggetto.

##  <a name="ctokengroups"></a>  CTokenGroups::CTokenGroups

Costruttore.

```
CTokenGroups() throw();
CTokenGroups(const CTokenGroups& rhs) throw(... );
CTokenGroups(const TOKEN_GROUPS& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Il `CTokenGroups` oggetto oppure [TOKEN_GROUPS](/windows/desktop/api/winnt/ns-winnt-_token_groups) struttura con cui costruire la `CTokenGroups` oggetto.

### <a name="remarks"></a>Note

Il `CTokenGroups` oggetto può facoltativamente essere creato usando un' `TOKEN_GROUPS` struttura o un oggetto definito in precedenza `CTokenGroups` oggetto.

##  <a name="dtor"></a>  CTokenGroups::~CTokenGroups

Distruttore.

```
virtual ~CTokenGroups() throw();
```

### <a name="remarks"></a>Note

Il distruttore libera tutte le risorse allocate.

##  <a name="delete"></a>  CTokenGroups::Delete

Elimina una `CSid` e i relativi attributi associati dal `CTokenGroups` oggetto.

```
bool Delete(const CSid& rSid) throw();
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Il [IDSR](../../atl/reference/csid-class.md) oggetto per cui rimuovere gli ID di sicurezza (SID) e gli attributi.

### <a name="return-value"></a>Valore restituito

Restituisce true se il `CSid` viene rimosso, false in caso contrario.

##  <a name="deleteall"></a>  CTokenGroups::DeleteAll

Elimina tutti `CSid` gli oggetti e i relativi attributi associati dal `CTokenGroups` oggetto.

```
void DeleteAll() throw();
```

##  <a name="getcount"></a>  CTokenGroups::GetCount

Restituisce il numero di `CSid` gli oggetti contenuti `CTokenGroups`.

```
UINT GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di [IDSR](../../atl/reference/csid-class.md) gli oggetti e i relativi attributi associati contenuti nel `CTokenGroups` oggetto.

##  <a name="getlength"></a>  CTokenGroups::GetLength

Restituisce la dimensione del `CTokenGroup` oggetto.

```
UINT GetLength() const throw();
```

### <a name="remarks"></a>Note

Restituisce le dimensioni totali del `CTokenGroup` oggetto, in byte.

##  <a name="getptoken_groups"></a>  CTokenGroups::GetPTOKEN_GROUPS

Recupera un puntatore al `TOKEN_GROUPS` struttura.

```
const TOKEN_GROUPS* GetPTOKEN_GROUPS() const throw(...);
```

### <a name="return-value"></a>Valore restituito

Recupera un puntatore ai [TOKEN_GROUPS](/windows/desktop/api/winnt/ns-winnt-_token_groups) struttura appartenente al `CTokenGroups` oggetto token di accesso.

##  <a name="getsidsandattributes"></a>  CTokenGroups::GetSidsAndAttributes

Recupera le `CSid` gli oggetti e, facoltativamente, gli attributi che appartengono al `CTokenGroups` oggetto.

```
void GetSidsAndAttributes(
    CSid::CSidArray* pSids,
    CAtlArray<DWORD>* pAttributes = NULL) const throw(...);
```

### <a name="parameters"></a>Parametri

*pSids*<br/>
Puntatore a una matrice di [IDSR](../../atl/reference/csid-class.md) oggetti.

*pAttributes*<br/>
Puntatore a una matrice di valori DWORD. Se questo parametro viene omesso o è NULL, gli attributi non vengono recuperati.

### <a name="remarks"></a>Note

Questo metodo enumererà tutti i `CSid` gli oggetti contenuti nel `CTokenGroups` dell'oggetto e inserire tali e, facoltativamente, i flag di attributo in oggetti matrice.

##  <a name="lookupsid"></a>  CTokenGroups::LookupSid

Recupera gli attributi associati un `CSid` oggetto.

```
bool LookupSid(
    const CSid& rSid,
    DWORD* pdwAttributes = NULL) const throw();
```

### <a name="parameters"></a>Parametri

*rSid*<br/>
Il [IDSR](../../atl/reference/csid-class.md) oggetto.

*pdwAttributes*<br/>
Puntatore a un valore DWORD che accetterà le `CSid` attributo dell'oggetto. Se omesso o è NULL, l'attributo non essere recuperato.

### <a name="return-value"></a>Valore restituito

Restituisce true se il `CSid` viene trovato, false in caso contrario.

### <a name="remarks"></a>Note

L'impostazione *pdwAttributes* a NULL fornisce un modo per confermare l'esistenza del `CSid` senza accedere all'attributo. Si noti che questo metodo non deve essere utilizzato per controllare i diritti di accesso. Le applicazioni devono invece usare la [CAccessToken::CheckTokenMembership](../../atl/reference/caccesstoken-class.md#checktokenmembership) (metodo).

##  <a name="operator_eq"></a>  CTokenGroups::operator =

Operatore di assegnazione.

```
CTokenGroups& operator= (const TOKEN_GROUPS& rhs) throw(...);
CTokenGroups& operator= (const CTokenGroups& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Il `CTokenGroups` oggetto oppure [TOKEN_GROUPS](/windows/desktop/api/winnt/ns-winnt-_token_groups) struttura da assegnare al `CTokenGroups` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce l'aggiornato `CTokenGroups` oggetto.

##  <a name="operator_const_token_groups__star"></a>  CTokenGroups::operator TOKEN_GROUPS const *

Esegue il cast a un puntatore a un valore di `TOKEN_GROUPS` struttura.

```
operator const TOKEN_GROUPS *() const throw(...);
```

### <a name="remarks"></a>Note

Esegue il cast a un puntatore a un valore di [TOKEN_GROUPS](/windows/desktop/api/winnt/ns-winnt-_token_groups) struttura.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[Classe CSid](../../atl/reference/csid-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
