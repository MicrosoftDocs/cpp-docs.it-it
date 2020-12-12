---
description: 'Altre informazioni su: classe CSimpleMapEqualHelper'
title: Classe CSimpleMapEqualHelper
ms.date: 11/04/2016
f1_keywords:
- CSimpleMapEqualHelper
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualKey
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualValue
helpviewer_keywords:
- CSimpleMapEqualHelper class
ms.assetid: 9bb2968a-d609-405c-8272-ff3b42df6164
ms.openlocfilehash: 2b8ff742bf24b6c6c4354cef652e3fc697ffb1d9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140608"
---
# <a name="csimplemapequalhelper-class"></a>Classe CSimpleMapEqualHelper

Questa classe è un helper per la classe [CSimpleMap](../../atl/reference/csimplemap-class.md) .

## <a name="syntax"></a>Sintassi

```
template <class TKey, class TVal>
class CSimpleMapEqualHelper
```

#### <a name="parameters"></a>Parametri

*TKey*<br/>
Elemento chiave.

*TVal*<br/>
Elemento valore.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleMapEqualHelper:: IsEqualKey](#isequalkey)|Statico Verifica l'uguaglianza di due chiavi.|
|[CSimpleMapEqualHelper:: IsEqualValue](#isequalvalue)|Statico Verifica l'uguaglianza di due valori.|

## <a name="remarks"></a>Commenti

Questa classe di tratti è un supplemento alla `CSimpleMap` classe. Fornisce metodi per confrontare due `CSimpleMap` elementi oggetto (in particolare i componenti chiave e valore) per verificarne l'uguaglianza. Per impostazione predefinita, le chiavi e i valori vengono confrontati utilizzando **operator = = ()**, ma se la mappa contiene tipi di dati complessi che non dispongono di un proprio operatore di uguaglianza, è possibile eseguire l'override di questa classe per fornire la funzionalità aggiuntiva necessaria.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

## <a name="csimplemapequalhelperisequalkey"></a><a name="isequalkey"></a> CSimpleMapEqualHelper:: IsEqualKey

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

## <a name="csimplemapequalhelperisequalvalue"></a><a name="isequalvalue"></a> CSimpleMapEqualHelper:: IsEqualValue

Verifica l'uguaglianza di due valori.

```
static bool IsEqualValue(const TVal& v1, const TVal& v2);
```

### <a name="parameters"></a>Parametri

*v1*<br/>
Primo valore.

*v2*<br/>
Secondo valore.

### <a name="return-value"></a>Valore restituito

Restituisce true se i valori sono uguali; in caso contrario, false.

## <a name="see-also"></a>Vedi anche

[Classe CSimpleMapEqualHelperFalse](../../atl/reference/csimplemapequalhelperfalse-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
