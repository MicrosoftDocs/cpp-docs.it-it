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
ms.openlocfilehash: f09d9b2f46233cf356f5ade8a5b90e08a213d276
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168202"
---
# <a name="catlexception-class"></a>Classe CAtlException

Questa classe definisce un'eccezione ATL.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlException:: CAtlException](#catlexception)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[HRESULT CAtlException:: operator](#operator_hresult)|Esegue il cast dell'oggetto corrente a un valore HRESULT.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlException:: m_hr](#m_hr)|Variabile di tipo HRESULT creata dall'oggetto e utilizzata per archiviare la condizione di errore.|

## <a name="remarks"></a>Osservazioni

Un `CAtlException` oggetto rappresenta una condizione di eccezione correlata a un'operazione ATL. La `CAtlException` classe include un membro dati pubblico che archivia il codice di stato che indica il motivo dell'eccezione e un operatore cast che consente di gestire l'eccezione come se si trattasse di un valore HRESULT.

In generale, si chiamerà `AtlThrow` anziché creare direttamente un `CAtlException` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlexcept. h

## <a name="catlexceptioncatlexception"></a><a name="catlexception"></a>CAtlException:: CAtlException

Costruttore.

```cpp
CAtlException(HRESULT hr) throw();
CAtlException() throw();
```

### <a name="parameters"></a>Parametri

*hr*<br/>
Codice di errore HRESULT.

## <a name="catlexceptionoperator-hresult"></a><a name="operator_hresult"></a>HRESULT CAtlException:: operator

Esegue il cast dell'oggetto corrente a un valore HRESULT.

```cpp
operator HRESULT() const throw ();
```

## <a name="catlexceptionm_hr"></a><a name="m_hr"></a>CAtlException:: m_hr

Membro dati HRESULT.

```cpp
HRESULT m_hr;
```

### <a name="remarks"></a>Osservazioni

Membro dati che archivia la condizione di errore. Il valore HRESULT viene impostato dal costruttore [CAtlException:: CAtlException](#catlexception).

## <a name="see-also"></a>Vedere anche

[AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
