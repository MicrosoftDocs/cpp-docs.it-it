---
title: Classe CPrivateObjectSecurityDesc
ms.date: 11/04/2016
f1_keywords:
- CPrivateObjectSecurityDesc
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::ConvertToAutoInherit
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Create
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Get
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Set
helpviewer_keywords:
- CPrivateObjectSecurityDesc class
ms.assetid: 2c4bbb13-bf99-4833-912a-197f6815bb5d
ms.openlocfilehash: 2fcfdfecab649b571047613ec0889b02d2c7a7a0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331412"
---
# <a name="cprivateobjectsecuritydesc-class"></a>Classe CPrivateObjectSecurityDesc

Questa classe rappresenta un oggetto descrittore di sicurezza dell'oggetto privato.

## <a name="syntax"></a>Sintassi

```
class CPrivateObjectSecurityDesc : public CSecurityDesc
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc](#cprivateobjectsecuritydesc)|Costruttore.|
|[CPrivateObjectSecurityDesc:: CPrivateObjectSecurityDesc](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrivateObjectSecurityDesc::ConvertToAutoInherit](#converttoautoinherit)|Chiamare questo metodo per convertire un descrittore di protezione e i relativi elenchi di controllo di accesso (ACL) in un formato che supporta la propagazione automatica delle voci di controllo di accesso ereditabili (ACE).|
|[CPrivateObjectSecurityDesc::Create](#create)|Chiamare questo metodo per allocare e inizializzare un descrittore di sicurezza relativo per l'oggetto privato creato dal gestore delle risorse chiamante.|
|[CPrivateObjectSecurityDesc::Get](#get)|Chiamare questo metodo per recuperare informazioni dal descrittore di sicurezza di un oggetto privato.|
|[CPrivateObjectSecurityDesc::Set](#set)|Chiamare questo metodo per modificare il descrittore di protezione di un oggetto privato.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore .](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

Questa classe, derivata da [CSecurityDesc](../../atl/reference/csecuritydesc-class.md), fornisce metodi per la creazione e la gestione del descrittore di protezione di un oggetto privato.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CSecurityDesc](../../atl/reference/csecuritydesc-class.md)

`CPrivateObjectSecurityDesc`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="cprivateobjectsecuritydescconverttoautoinherit"></a><a name="converttoautoinherit"></a>CPrivateObjectSecurityDesc::ConvertToAutoInherit

Chiamare questo metodo per convertire un descrittore di protezione e i relativi elenchi di controllo di accesso (ACL) in un formato che supporta la propagazione automatica delle voci di controllo di accesso ereditabili (ACE).

```
bool ConvertToAutoInherit(
    const CSecurityDesc* pParent,
    GUID* ObjectType,
    bool bIsDirectoryObject,
    PGENERIC_MAPPING GenericMapping) throw();
```

### <a name="parameters"></a>Parametri

*pPadre*<br/>
Puntatore a un oggetto [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) che fa riferimento al contenitore padre dell'oggetto. Se non è presente alcun contenitore padre, questo parametro è NULL.

*Objecttype*<br/>
Puntatore `GUID` a una struttura che identifica il tipo di oggetto associato all'oggetto corrente. Impostare *ObjectType su* NULL se l'oggetto non dispone di un GUID.

*bIsDirectoryObject (oggetto )P: Inc*<br/>
Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.

*GenericMapping*<br/>
Puntatore a una struttura [GENERIC_MAPPING](/windows/win32/api/winnt/ns-winnt-generic_mapping) che specifica il mapping da ogni diritto generico a diritti specifici per l'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo tenta di determinare se le voci di controllo di accesso nell'elenco di controllo di accesso discrezionale (DACL) e nell'elenco di controllo di accesso di sistema (SACL) del descrittore di protezione corrente sono state ereditate dal descrittore di protezione padre. Chiama la funzione [ConvertToAutoInheritPrivateObjectSecurity.](/windows/win32/api/securitybaseapi/nf-securitybaseapi-converttoautoinheritprivateobjectsecurity)

## <a name="cprivateobjectsecuritydesccprivateobjectsecuritydesc"></a><a name="cprivateobjectsecuritydesc"></a>CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc

Costruttore.

```
CPrivateObjectSecurityDesc() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza l'oggetto `CPrivateObjectSecurityDesc`.

## <a name="cprivateobjectsecuritydesccprivateobjectsecuritydesc"></a><a name="dtor"></a>CPrivateObjectSecurityDesc:: CPrivateObjectSecurityDesc

Distruttore.

```
~CPrivateObjectSecurityDesc() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore libera tutte le risorse allocate ed elimina il descrittore di sicurezza dell'oggetto privato.

## <a name="cprivateobjectsecuritydesccreate"></a><a name="create"></a>CPrivateObjectSecurityDesc::Create

Chiamare questo metodo per allocare e inizializzare un descrittore di sicurezza relativo per l'oggetto privato creato dal gestore delle risorse chiamante.

```
bool Create(
    const CSecurityDesc* pParent,
    const CSecurityDesc* pCreator,
    bool bIsDirectoryObject,
    const CAccessToken& Token,
    PGENERIC_MAPPING GenericMapping) throw();

bool Create(
    const CSecurityDesc* pParent,
    const CSecurityDesc* pCreator,
    GUID* ObjectType,
    bool bIsContainerObject,
    ULONG AutoInheritFlags,
    const CAccessToken& Token,
    PGENERIC_MAPPING GenericMapping) throw();
```

### <a name="parameters"></a>Parametri

*pPadre*<br/>
Puntatore a un oggetto [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) che fa riferimento alla directory padre in cui viene creato un nuovo oggetto. Impostare su NULL se non è presente alcuna directory padre.

*pCreatore*<br/>
Puntatore a un descrittore di sicurezza fornito dal creatore dell'oggetto. Se il creatore dell'oggetto non passa in modo esplicito le informazioni di sicurezza per il nuovo oggetto, impostare questo parametro su NULL.

*bIsDirectoryObject (oggetto )P: Inc*<br/>
Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.

*Token*<br/>
Riferimento all'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) per il processo client per conto del quale viene creato l'oggetto.

*GenericMapping*<br/>
Puntatore a una struttura [GENERIC_MAPPING](/windows/win32/api/winnt/ns-winnt-generic_mapping) che specifica il mapping da ogni diritto generico a diritti specifici per l'oggetto.

*Objecttype*<br/>
Puntatore `GUID` a una struttura che identifica il tipo di oggetto associato all'oggetto corrente. Impostare *ObjectType su* NULL se l'oggetto non dispone di un GUID.

*bIsContainerObject*<br/>
Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.

*AutoInheritFlags*<br/>
Set di flag di bit che controllano il modo in cui le voci di controllo di accesso (ACE) vengono ereditate da *pParent*. Per ulteriori informazioni, vedere [CreatePrivateObjectSecurityEx.](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurityex)

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [CreatePrivateObjectSercurity](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurity) o [CreatePrivateObjectSecurityEx](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurityex).

Il secondo metodo consente di specificare il tipo di oggetto GUID del nuovo oggetto o di controllare la modalità di ereditarietà delle voci di controllo di accesso.

> [!NOTE]
> Un descrittore di protezione relativo è un descrittore di sicurezza che archivia tutte le informazioni di sicurezza in un blocco di memoria contiguo.

## <a name="cprivateobjectsecuritydescget"></a><a name="get"></a>CPrivateObjectSecurityDesc::Get

Chiamare questo metodo per recuperare informazioni dal descrittore di sicurezza di un oggetto privato.

```
bool Get(
    SECURITY_INFORMATION si,
    CSecurityDesc* pResult) const throw();
```

### <a name="parameters"></a>Parametri

*si*<br/>
Set di flag di bit che indicano le parti del descrittore di sicurezza da recuperare. Questo valore può essere una combinazione dei flag di bit [SECURITY_INFORMATION.](/windows/win32/SecAuthZ/security-information)

*pRisultato*<br/>
Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto che riceve una copia delle informazioni richieste dal descrittore di protezione specificato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il descrittore di protezione è una struttura e dati associati che contiene le informazioni di sicurezza per un oggetto a protezione diretta.

## <a name="cprivateobjectsecuritydescoperator-"></a><a name="operator_eq"></a>CPrivateObjectSecurityDesc::operatore :

Operatore di assegnazione.

```
CPrivateObjectSecurityDesc& operator= (const CPrivateObjectSecurityDesc& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Oggetto `CPrivateObjectSecurityDesc` da assegnare all'oggetto corrente.

### <a name="return-value"></a>Valore restituito

Restituisce `CPrivateObjectSecurityDesc` l'oggetto aggiornato.

## <a name="cprivateobjectsecuritydescset"></a><a name="set"></a>CPrivateObjectSecurityDesc::Set

Chiamare questo metodo per modificare il descrittore di protezione di un oggetto privato.

```
bool Set(
    SECURITY_INFORMATION si,
    const CSecurityDesc& Modification,
    PGENERIC_MAPPING GenericMapping,
    const CAccessToken& Token) throw();

bool Set(
    SECURITY_INFORMATION si,
    const CSecurityDesc& Modification,
    ULONG AutoInheritFlags,
    PGENERIC_MAPPING GenericMapping,
    const CAccessToken& Token) throw();
```

### <a name="parameters"></a>Parametri

*si*<br/>
Set di flag di bit che indicano le parti del descrittore di sicurezza da impostare. Questo valore può essere una combinazione dei flag di bit [SECURITY_INFORMATION.](/windows/win32/SecAuthZ/security-information)

*Modifica*<br/>
Puntatore a un oggetto [CSecurityDesc.](../../atl/reference/csecuritydesc-class.md) Le parti di questo descrittore di protezione indicate dal parametro *si* vengono applicate al descrittore di protezione dell'oggetto.

*GenericMapping*<br/>
Puntatore a una struttura [GENERIC_MAPPING](/windows/win32/api/winnt/ns-winnt-generic_mapping) che specifica il mapping da ogni diritto generico a diritti specifici per l'oggetto.

*Token*<br/>
Riferimento all'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) per il processo client per conto del quale viene creato l'oggetto.

*AutoInheritFlags*<br/>
Set di flag di bit che controllano il modo in cui le voci di controllo di accesso (ACE) vengono ereditate da *pParent*. Per ulteriori informazioni, vedere [CreatePrivateObjectSecurityEx.](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurityex)

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il secondo metodo consente di specificare il tipo di oggetto GUID dell'oggetto o di controllare la modalità di ereditarietà delle voci di controllo di accesso.

## <a name="see-also"></a>Vedere anche

[SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)<br/>
[Classe CSecurityDesc](../../atl/reference/csecuritydesc-class.md)
