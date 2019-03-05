---
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
ms.openlocfilehash: c614cbb11376c5ae338762c0feaa54c8f1bb3e27
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57282773"
---
# <a name="csimplemapequalhelper-class"></a>Classe CSimpleMapEqualHelper

Questa classe è un supporto per la [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.

## <a name="syntax"></a>Sintassi

```
template <class TKey, class TVal>
class CSimpleMapEqualHelper
```

#### <a name="parameters"></a>Parametri

*TKey*<br/>
L'elemento principale.

*TVal*<br/>
L'elemento di valore.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleMapEqualHelper::IsEqualKey](#isequalkey)|(Statico) Verifica l'uguaglianza delle due chiavi.|
|[CSimpleMapEqualHelper::IsEqualValue](#isequalvalue)|(Statico) Verifica l'uguaglianza di due valori.|

## <a name="remarks"></a>Note

Questa classe traits costituisce un'integrazione di `CSimpleMap` classe. Fornisce metodi per confrontare due `CSimpleMap` eguaglianza degli elementi (in particolare, i componenti chiave / valore) dell'oggetto. Per impostazione predefinita, le chiavi e valori vengono confrontati usando **operator==()**, ma se la mappa contiene tipi di dati complessi che non dispongono di propri operatore di uguaglianza, è possibile eseguire l'override di questa classe per fornire le funzionalità aggiuntive richieste.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

##  <a name="isequalkey"></a>  CSimpleMapEqualHelper::IsEqualKey

Verifica l'uguaglianza delle due chiavi.

```
static bool IsEqualKey(const TKey& k1, const TKey& k2);
```

### <a name="parameters"></a>Parametri

*k1*<br/>
La prima chiave.

*k2*<br/>
La seconda chiave.

### <a name="return-value"></a>Valore restituito

Restituisce true se le chiavi sono uguali e false in caso contrario.

##  <a name="isequalvalue"></a>  CSimpleMapEqualHelper::IsEqualValue

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

Restituisce true se i valori sono uguali e false in caso contrario.

## <a name="see-also"></a>Vedere anche

[Classe CSimpleMapEqualHelperFalse](../../atl/reference/csimplemapequalhelperfalse-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
