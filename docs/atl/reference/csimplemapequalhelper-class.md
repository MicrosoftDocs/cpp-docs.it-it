---
title: CSimpleMapEqualHelper (classe)
ms.date: 11/04/2016
f1_keywords:
- CSimpleMapEqualHelper
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualKey
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualValue
helpviewer_keywords:
- CSimpleMapEqualHelper class
ms.assetid: 9bb2968a-d609-405c-8272-ff3b42df6164
ms.openlocfilehash: d137a35a517ea93139f036f6e9a7a8de06d518a7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330749"
---
# <a name="csimplemapequalhelper-class"></a>CSimpleMapEqualHelper (classe)

Questa classe è un helper per la [classe CSimpleMap.This](../../atl/reference/csimplemap-class.md) class is a helper for the CSimpleMap class.

## <a name="syntax"></a>Sintassi

```
template <class TKey, class TVal>
class CSimpleMapEqualHelper
```

#### <a name="parameters"></a>Parametri

*TKey*<br/>
Elemento chiave.

*Valore TVal*<br/>
Elemento valore.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleMapEqualHelper::IsEqualKey](#isequalkey)|(Statico) Verifica l'uguaglianza di due chiavi.|
|[CSimpleMapEqualHelper::IsEqualValue](#isequalvalue)|(Statico) Verifica due valori per l'uguaglianza.|

## <a name="remarks"></a>Osservazioni

Questa classe di tratti è `CSimpleMap` un supplemento alla classe. Fornisce metodi per `CSimpleMap` confrontare due elementi oggetto (in particolare, i componenti chiave e valore) per l'uguaglianza. Per impostazione predefinita, le chiavi e i valori vengono confrontati utilizzando **operator**, ma se la mappa contiene tipi di dati complessi che non dispongono di un proprio operatore di uguaglianza, è possibile eseguire l'override di questa classe per fornire la funzionalità aggiuntiva richiesta.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll.h

## <a name="csimplemapequalhelperisequalkey"></a><a name="isequalkey"></a>CSimpleMapEqualHelper::IsEqualKey

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

## <a name="csimplemapequalhelperisequalvalue"></a><a name="isequalvalue"></a>CSimpleMapEqualHelper::IsEqualValue

Verifica due valori per l'uguaglianza.

```
static bool IsEqualValue(const TVal& v1, const TVal& v2);
```

### <a name="parameters"></a>Parametri

*v1*<br/>
Primo valore.

*v2*<br/>
Secondo valore.

### <a name="return-value"></a>Valore restituito

Restituisce true se i valori sono uguali, false in caso contrario.

## <a name="see-also"></a>Vedere anche

[CSimpleMapEqualHelperFalse (classe)](../../atl/reference/csimplemapequalhelperfalse-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
