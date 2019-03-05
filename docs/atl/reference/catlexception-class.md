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
ms.openlocfilehash: a6ed6062be02fddc111e4eda4d26226b7a7a0c63
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57296085"
---
# <a name="catlexception-class"></a>Classe CAtlException

Questa classe definisce un'eccezione di ATL.

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
|[CAtlException::operator HRESULT](#operator_hresult)|Esegue il cast l'oggetto corrente e un valore HRESULT.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlException::m_hr](#m_hr)|La variabile di tipo HRESULT creato dall'oggetto e usato per archiviare la condizione di errore.|

## <a name="remarks"></a>Note

Oggetto `CAtlException` oggetto rappresenta una condizione di eccezione correlata a un'operazione di ATL. Il `CAtlException` classe include un membro dati pubblico che archivia il codice di stato che indica il motivo dell'eccezione e un operatore di cast che consente di trattare l'eccezione come se fosse un HRESULT.

In generale, si chiamerà `AtlThrow` invece di creare un `CAtlException` direttamente l'oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlexcept.h

##  <a name="catlexception"></a>  CAtlException::CAtlException

Costruttore.

```
CAtlException(HRESULT hr) throw();
CAtlException() throw();
```

### <a name="parameters"></a>Parametri

*hr*<br/>
Il codice di errore HRESULT.

##  <a name="operator_hresult"></a>  CAtlException::operator HRESULT

Esegue il cast l'oggetto corrente e un valore HRESULT.

```
operator HRESULT() const throw ();
```

##  <a name="m_hr"></a>  CAtlException::m_hr

Membro dati HRESULT.

```
HRESULT m_hr;
```

### <a name="remarks"></a>Note

Membro dati che archivia la condizione di errore. Il valore HRESULT è impostato dal costruttore [CAtlException::CAtlException](#catlexception).

## <a name="see-also"></a>Vedere anche

[AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
