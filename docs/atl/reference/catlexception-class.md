---
description: 'Altre informazioni su: classe CAtlException'
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
ms.openlocfilehash: b6d788bc8d852fa0b8d091682ff7740aa4ebbbed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147472"
---
# <a name="catlexception-class"></a>Classe CAtlException

Questa classe definisce un'eccezione ATL.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlException:: CAtlException](#catlexception)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[HRESULT CAtlException:: operator](#operator_hresult)|Esegue il cast dell'oggetto corrente a un valore HRESULT.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlException:: m_hr](#m_hr)|Variabile di tipo HRESULT creata dall'oggetto e utilizzata per archiviare la condizione di errore.|

## <a name="remarks"></a>Commenti

Un `CAtlException` oggetto rappresenta una condizione di eccezione correlata a un'operazione ATL. La `CAtlException` classe include un membro dati pubblico che archivia il codice di stato che indica il motivo dell'eccezione e un operatore cast che consente di gestire l'eccezione come se si trattasse di un valore HRESULT.

In generale, si chiamerà `AtlThrow` anziché creare `CAtlException` direttamente un oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlexcept. h

## <a name="catlexceptioncatlexception"></a><a name="catlexception"></a> CAtlException:: CAtlException

Costruttore.

```cpp
CAtlException(HRESULT hr) throw();
CAtlException() throw();
```

### <a name="parameters"></a>Parametri

*h*<br/>
Codice di errore HRESULT.

## <a name="catlexceptionoperator-hresult"></a><a name="operator_hresult"></a> HRESULT CAtlException:: operator

Esegue il cast dell'oggetto corrente a un valore HRESULT.

```cpp
operator HRESULT() const throw ();
```

## <a name="catlexceptionm_hr"></a><a name="m_hr"></a> CAtlException:: m_hr

Membro dati HRESULT.

```cpp
HRESULT m_hr;
```

### <a name="remarks"></a>Commenti

Membro dati che archivia la condizione di errore. Il valore HRESULT viene impostato dal costruttore [CAtlException:: CAtlException](#catlexception).

## <a name="see-also"></a>Vedi anche

[AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
