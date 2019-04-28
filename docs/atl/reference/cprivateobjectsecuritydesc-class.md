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
ms.openlocfilehash: 99b47c15af4cdb87fb35d5c7342ea2719d341868
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62278150"
---
# <a name="cprivateobjectsecuritydesc-class"></a>Classe CPrivateObjectSecurityDesc

Questa classe rappresenta un oggetto descrittore di sicurezza oggetto privato.

## <a name="syntax"></a>Sintassi

```
class CPrivateObjectSecurityDesc : public CSecurityDesc
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc](#cprivateobjectsecuritydesc)|Costruttore.|
|[CPrivateObjectSecurityDesc::~CPrivateObjectSecurityDesc](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrivateObjectSecurityDesc::ConvertToAutoInherit](#converttoautoinherit)|Chiamare questo metodo per convertire un descrittore di sicurezza e i relativi elenchi di controllo di accesso (ACL) in un formato che supporta la propagazione automatica delle voci di controllo di accesso ereditabile (ACE).|
|[CPrivateObjectSecurityDesc::Create](#create)|Chiamare questo metodo per allocare e inizializzare un descrittore di sicurezza relativo per l'oggetto privato creato da Gestione risorse chiamante.|
|[CPrivateObjectSecurityDesc::Get](#get)|Chiamare questo metodo per recuperare informazioni dal descrittore di sicurezza dell'oggetto privato.|
|[CPrivateObjectSecurityDesc::Set](#set)|Chiamare questo metodo per modificare il descrittore di sicurezza dell'oggetto privato.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Note

Questa classe, derivata da [CSecurityDesc](../../atl/reference/csecuritydesc-class.md), fornisce i metodi per creare e gestire il descrittore di sicurezza di un oggetto privato.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CSecurityDesc](../../atl/reference/csecuritydesc-class.md)

`CPrivateObjectSecurityDesc`

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="converttoautoinherit"></a>  CPrivateObjectSecurityDesc::ConvertToAutoInherit

Chiamare questo metodo per convertire un descrittore di sicurezza e i relativi elenchi di controllo di accesso (ACL) in un formato che supporta la propagazione automatica delle voci di controllo di accesso ereditabile (ACE).

```
bool ConvertToAutoInherit(
    const CSecurityDesc* pParent,
    GUID* ObjectType,
    bool bIsDirectoryObject,
    PGENERIC_MAPPING GenericMapping) throw();
```

### <a name="parameters"></a>Parametri

*pParent*<br/>
Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto che fa riferimento il contenitore padre dell'oggetto. Se non c'è alcun contenitore padre, questo parametro è NULL.

*ObjectType*<br/>
Puntatore a un `GUID` struttura che identifica il tipo di oggetto associato all'oggetto corrente. Impostare *ObjectType* su NULL se l'oggetto non ha un GUID.

*bIsDirectoryObject*<br/>
Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.

*GenericMapping*<br/>
Puntatore a un [GENERIC_MAPPING](/windows/desktop/api/winnt/ns-winnt-_generic_mapping) struttura che specifica il mapping tra ogni diritto a diritti specifici per l'oggetto generico.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Questo metodo tenta di determinare se le voci ACE nel controllo di accesso discrezionale (DACL) di elenco e un elenco di controllo di accesso di sistema (SACL) del descrittore di sicurezza corrente sono state ereditate dal descrittore di sicurezza dell'elemento padre. Chiama il [ConvertToAutoInheritPrivateObjectSecurity](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-converttoautoinheritprivateobjectsecurity) (funzione).

##  <a name="cprivateobjectsecuritydesc"></a>  CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc

Costruttore.

```
CPrivateObjectSecurityDesc() throw();
```

### <a name="remarks"></a>Note

Inizializza il `CPrivateObjectSecurityDesc` oggetto.

##  <a name="dtor"></a>  CPrivateObjectSecurityDesc::~CPrivateObjectSecurityDesc

Distruttore.

```
~CPrivateObjectSecurityDesc() throw();
```

### <a name="remarks"></a>Note

Il distruttore libera tutte le risorse allocate ed Elimina descrittore di sicurezza dell'oggetto privato.

##  <a name="create"></a>  CPrivateObjectSecurityDesc::Create

Chiamare questo metodo per allocare e inizializzare un descrittore di sicurezza relativo per l'oggetto privato creato da Gestione risorse chiamante.

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

*pParent*<br/>
Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto che fa riferimento la directory padre in cui viene creato un nuovo oggetto. Se non vi è alcuna directory padre, impostato su NULL.

*pCreator*<br/>
Puntatore a un descrittore di sicurezza fornito dall'autore dell'oggetto. Se il creatore dell'oggetto non viene passato in modo esplicito le informazioni di sicurezza per il nuovo oggetto, impostare questo parametro su NULL.

*bIsDirectoryObject*<br/>
Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.

*Token*<br/>
Riferimento per la [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto per conto del quale l'oggetto viene creato il processo di client.

*GenericMapping*<br/>
Puntatore a un [GENERIC_MAPPING](/windows/desktop/api/winnt/ns-winnt-_generic_mapping) struttura che specifica il mapping tra ogni diritto a diritti specifici per l'oggetto generico.

*ObjectType*<br/>
Puntatore a un `GUID` struttura che identifica il tipo di oggetto associato all'oggetto corrente. Impostare *ObjectType* su NULL se l'oggetto non ha un GUID.

*bIsContainerObject*<br/>
Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.

*AutoInheritFlags*<br/>
Un set di flag di bit che controllano il modo in cui le voci di controllo di accesso (ACE) ereditate da *pParent*. Visualizzare [CreatePrivateObjectSecurityEx](https://msdn.microsoft.com/library/windows/desktop/aa446581) per altri dettagli.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Questo metodo chiama [CreatePrivateObjectSercurity](/windows/desktop/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurity) oppure [CreatePrivateObjectSecurityEx](https://msdn.microsoft.com/library/windows/desktop/aa446581).

Il secondo metodo consente di specificare il tipo di oggetto GUID del nuovo oggetto o controllo del modo in cui le voci ACE vengono ereditate.

> [!NOTE]
>  Un descrittore di sicurezza relativo è un descrittore di sicurezza che archivia tutte le informazioni di sicurezza in un blocco di memoria contigue.

##  <a name="get"></a>  CPrivateObjectSecurityDesc::Get

Chiamare questo metodo per recuperare informazioni dal descrittore di sicurezza dell'oggetto privato.

```
bool Get(
    SECURITY_INFORMATION si,
    CSecurityDesc* pResult) const throw();
```

### <a name="parameters"></a>Parametri

*si*<br/>
Un set di flag di bit che indicano le parti del descrittore di sicurezza da recuperare. Questo valore può essere una combinazione dei [SECURITY_INFORMATION](/windows/desktop/SecAuthZ/security-information) flag di bit.

*pResult*<br/>
Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto che riceve una copia delle informazioni richieste dal descrittore di sicurezza specificato.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Il descrittore di sicurezza è una struttura e i dati associati che contiene le informazioni di sicurezza per un oggetto a protezione diretta.

##  <a name="operator_eq"></a>  CPrivateObjectSecurityDesc::operator =

Operatore di assegnazione.

```
CPrivateObjectSecurityDesc& operator= (const CPrivateObjectSecurityDesc& rhs) throw(...);
```

### <a name="parameters"></a>Parametri

*rhs*<br/>
Il `CPrivateObjectSecurityDesc` oggetto da assegnare all'oggetto corrente.

### <a name="return-value"></a>Valore restituito

Restituisce l'aggiornato `CPrivateObjectSecurityDesc` oggetto.

##  <a name="set"></a>  CPrivateObjectSecurityDesc::Set

Chiamare questo metodo per modificare il descrittore di sicurezza dell'oggetto privato.

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
Un set di flag di bit che indicano le parti del descrittore di sicurezza da impostare. Questo valore può essere una combinazione dei [SECURITY_INFORMATION](/windows/desktop/SecAuthZ/security-information) flag di bit.

*Modifica*<br/>
Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto. Le parti di questo descrittore di sicurezza indicato dal *sistema internazionale di misura* parametro vengono applicate al descrittore di sicurezza dell'oggetto.

*GenericMapping*<br/>
Puntatore a un [GENERIC_MAPPING](/windows/desktop/api/winnt/ns-winnt-_generic_mapping) struttura che specifica il mapping tra ogni diritto a diritti specifici per l'oggetto generico.

*Token*<br/>
Riferimento per la [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto per conto del quale l'oggetto viene creato il processo di client.

*AutoInheritFlags*<br/>
Un set di flag di bit che controllano il modo in cui le voci di controllo di accesso (ACE) ereditate da *pParent*. Visualizzare [CreatePrivateObjectSecurityEx](https://msdn.microsoft.com/library/windows/desktop/aa446581) per altri dettagli.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Il secondo metodo consente di specificare il tipo di oggetto GUID dell'oggetto o controllo del modo in cui le voci ACE vengono ereditate.

## <a name="see-also"></a>Vedere anche

[SECURITY_DESCRIPTOR](/windows/desktop/api/winnt/ns-winnt-_security_descriptor)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)<br/>
[Classe CSecurityDesc](../../atl/reference/csecuritydesc-class.md)
