---
title: CSimpleMapEqualHelperFalse (classe)
ms.date: 11/04/2016
f1_keywords:
- CSimpleMapEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse::IsEqualKey
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse::IsEqualValue
helpviewer_keywords:
- CSimpleMapEqualHelperFalse class
ms.assetid: a873eea3-e130-45cc-a476-61ee79511c3b
ms.openlocfilehash: b6bf1d4e3be849004e13e593fb5f4b5cb87f8123
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330736"
---
# <a name="csimplemapequalhelperfalse-class"></a>CSimpleMapEqualHelperFalse (classe)

Questa classe è un helper per la [classe CSimpleMap.This](../../atl/reference/csimplemap-class.md) class is a helper for the CSimpleMap class.

## <a name="syntax"></a>Sintassi

```
template <class TKey, class TVal>
class CSimpleMapEqualHelperFalse
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleMapEqualHelperFalse::IsEqualKey](#isequalkey)|(Statico) Verifica l'uguaglianza di due chiavi.|
|[CSimpleMapEqualHelperFalse::IsEqualValue](#isequalvalue)|(Statico) Restituisce false.|

## <a name="remarks"></a>Osservazioni

Questa classe di tratti è `CSimpleMap` un supplemento alla classe. Fornisce un metodo per confrontare `CSimpleMap` due elementi contenuti nell'oggetto, in particolare due elementi di valore o due elementi chiave.

Il confronto del valore restituirà sempre false `ATLASSERT` e, inoltre, chiamerà con un argomento false se viene mai fatto riferimento. Nelle situazioni in cui il test di uguaglianza non è sufficientemente definito, questa classe consente a una mappa contenente coppie chiave/valore di funzionare correttamente per la maggior parte dei metodi, ma ha esito negativo in modo ben definito per i metodi che dipendono da confronti come [CSimpleMap::FindVal](../../atl/reference/csimplemap-class.md#findval).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll.h

## <a name="csimplemapequalhelperfalseisequalkey"></a><a name="isequalkey"></a>CSimpleMapEqualHelperFalse::IsEqualKey

Verifica l'uguaglianza di due chiavi.

```
static bool IsEqualKey(const TKey& k1, const TKey& k2);
```

### <a name="parameters"></a>Parametri

*k1*<br/>
La prima chiave.

*k2*<br/>
La seconda chiave.

### <a name="return-value"></a>Valore restituito

Restituisce true se le chiavi sono uguali, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md).

## <a name="csimplemapequalhelperfalseisequalvalue"></a><a name="isequalvalue"></a>CSimpleMapEqualHelperFalse::IsEqualValue

Restituisce false.

```
static bool IsEqualValue(const TVal&, const TVal&);
```

### <a name="return-value"></a>Valore restituito

Restituisce false.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce sempre `ATLASSERT` false e chiamerà con un argomento false se viene mai fatto riferimento. Lo scopo `CSimpleMapEqualHelperFalse::IsEqualValue` è quello di forzare i metodi utilizzando i confronti a fallire in modo ben definito quando i test di uguaglianza non sono stati adeguatamente definiti.

## <a name="see-also"></a>Vedere anche

[CSimpleMapEqualHelper (classe)](../../atl/reference/csimplemapequalhelper-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
