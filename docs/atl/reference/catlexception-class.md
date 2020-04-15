---
title: Classe CAtlException
ms.date: 11/04/2016
f1_keywords:
- CAtlException
- ATLEXCEPT/ATL::CAtlException
- ATLEXCEPT/ATL::CAtlException::CAtlException
- ATLEXCEPT/ATL::CAtlException::m_hr
helpviewer_keywords:
- CAtlException class
ms.assetid: 3fd7b041-f70d-4292-b947-0d70781d95a8
ms.openlocfilehash: 6da56e4d6c443520eb6f857624a5923e71a1e580
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318999"
---
# <a name="catlexception-class"></a>Classe CAtlException

Questa classe definisce un'eccezione ATL.

## <a name="syntax"></a>Sintassi

```
class CAtlException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlException::CAtlException](#catlexception)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlException::operatorHRESULT](#operator_hresult)|Esegue il cast dell'oggetto corrente a un valore HRESULT.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlException::m_hr](#m_hr)|Variabile di tipo HRESULT creata dall'oggetto e utilizzata per archiviare la condizione di errore.|

## <a name="remarks"></a>Osservazioni

Un `CAtlException` oggetto rappresenta una condizione di eccezione correlata a un'operazione ATL. La `CAtlException` classe include un membro dati pubblico che archivia il codice di stato che indica il motivo dell'eccezione e un operatore cast che consente di considerare l'eccezione come se fosse un HRESULT.

In generale, si `AtlThrow` chiamerà `CAtlException` anziché creare direttamente un oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlexcept.h

## <a name="catlexceptioncatlexception"></a><a name="catlexception"></a>CAtlException::CAtlException

Costruttore.

```
CAtlException(HRESULT hr) throw();
CAtlException() throw();
```

### <a name="parameters"></a>Parametri

*hr*<br/>
Codice di errore HRESULT.

## <a name="catlexceptionoperator-hresult"></a><a name="operator_hresult"></a>CAtlException::operatorHRESULT

Esegue il cast dell'oggetto corrente a un valore HRESULT.

```
operator HRESULT() const throw ();
```

## <a name="catlexceptionm_hr"></a><a name="m_hr"></a>CAtlException::m_hr

Membro dati HRESULT.

```
HRESULT m_hr;
```

### <a name="remarks"></a>Osservazioni

Membro dati che archivia la condizione di errore. Il valore HRESULT viene impostato dal costruttore [CAtlException::CAtlException](#catlexception).

## <a name="see-also"></a>Vedere anche

[AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
