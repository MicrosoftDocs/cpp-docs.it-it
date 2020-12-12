---
description: 'Altre informazioni su: classe CSimpleMapEqualHelperFalse'
title: Classe CSimpleMapEqualHelperFalse
ms.date: 11/04/2016
f1_keywords:
- CSimpleMapEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse::IsEqualKey
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse::IsEqualValue
helpviewer_keywords:
- CSimpleMapEqualHelperFalse class
ms.assetid: a873eea3-e130-45cc-a476-61ee79511c3b
ms.openlocfilehash: 5bad8232dc1a96fc743a3526acdb86b839601d9a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140582"
---
# <a name="csimplemapequalhelperfalse-class"></a>Classe CSimpleMapEqualHelperFalse

Questa classe è un helper per la classe [CSimpleMap](../../atl/reference/csimplemap-class.md) .

## <a name="syntax"></a>Sintassi

```
template <class TKey, class TVal>
class CSimpleMapEqualHelperFalse
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleMapEqualHelperFalse:: IsEqualKey](#isequalkey)|Statico Verifica l'uguaglianza di due chiavi.|
|[CSimpleMapEqualHelperFalse:: IsEqualValue](#isequalvalue)|Statico Restituisce false.|

## <a name="remarks"></a>Commenti

Questa classe di tratti è un supplemento alla `CSimpleMap` classe. Fornisce un metodo per confrontare due elementi contenuti nell' `CSimpleMap` oggetto, in particolare due elementi di valore o due elementi chiave.

Il confronto dei valori restituirà sempre false e, in più, chiamerà `ATLASSERT` con un argomento false se si fa riferimento a essa. Nelle situazioni in cui il test di uguaglianza non è sufficientemente definito, questa classe consente a una mappa che contiene coppie chiave/valore di funzionare correttamente per la maggior parte dei metodi, ma ha esito negativo in modo ben definito per i metodi che dipendono da confronti come [CSimpleMap:: FindVal](../../atl/reference/csimplemap-class.md#findval).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

## <a name="csimplemapequalhelperfalseisequalkey"></a><a name="isequalkey"></a> CSimpleMapEqualHelperFalse:: IsEqualKey

Verifica l'uguaglianza di due chiavi.

```
static bool IsEqualKey(const TKey& k1, const TKey& k2);
```

### <a name="parameters"></a>Parametri

*k1*<br/>
Prima chiave.

*k2*<br/>
Seconda chiave.

### <a name="return-value"></a>Valore restituito

Restituisce true se le chiavi sono uguali; in caso contrario, false.

### <a name="remarks"></a>Commenti

Questo metodo chiama [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md).

## <a name="csimplemapequalhelperfalseisequalvalue"></a><a name="isequalvalue"></a> CSimpleMapEqualHelperFalse:: IsEqualValue

Restituisce false.

```
static bool IsEqualValue(const TVal&, const TVal&);
```

### <a name="return-value"></a>Valore restituito

Restituisce false.

### <a name="remarks"></a>Commenti

Questo metodo restituisce sempre false e chiama `ATLASSERT` con un argomento false se vi si fa riferimento. Lo scopo di `CSimpleMapEqualHelperFalse::IsEqualValue` è forzare l'esecuzione di metodi che usano i confronti in modo ben definito quando i test di uguaglianza non sono stati definiti in modo adeguato.

## <a name="see-also"></a>Vedi anche

[Classe CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
