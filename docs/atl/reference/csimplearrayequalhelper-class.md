---
title: CSimpleArrayEqualHelper (classe)
ms.date: 11/04/2016
f1_keywords:
- CSimpleArrayEqualHelper
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper::IsEqual
helpviewer_keywords:
- CSimpleArrayEqualHelper class
ms.assetid: a2b55d89-78c9-42ef-842c-5304c6d20ad6
ms.openlocfilehash: 386b005777b3e31dd74916a41bc5af2ab82df210
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330879"
---
# <a name="csimplearrayequalhelper-class"></a>CSimpleArrayEqualHelper (classe)

Questa classe è un helper per la classe [CSimpleArray.](../../atl/reference/csimplearray-class.md)

## <a name="syntax"></a>Sintassi

```
template <class T>
class CSimpleArrayEqualHelper
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Una classe derivata.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleArrayEqualHelper::IsEqual](#isequal)|(Statico) Verifica `CSimpleArray` l'uguaglianza di due elementi oggetto.|

## <a name="remarks"></a>Osservazioni

Questa classe di tratti è `CSimpleArray` un supplemento alla classe. Fornisce un metodo per confrontare `CSimpleArray` due elementi archiviati in un oggetto. Per impostazione predefinita, gli elementi vengono confrontati utilizzando **operator ,** ma se l'array contiene tipi di dati complessi che non dispongono di un proprio operatore di uguaglianza, sarà necessario eseguire l'override di questa classe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll.h

## <a name="csimplearrayequalhelperisequal"></a><a name="isequal"></a>CSimpleArrayEqualHelper::IsEqual

Verifica `CSimpleArray` l'uguaglianza di due elementi oggetto.

```
static bool IsEqual(
    const T& t1,
    const T& t2);
```

### <a name="parameters"></a>Parametri

*T1*<br/>
Oggetto di tipo T.

*t2*<br/>
Oggetto di tipo T.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali, false in caso contrario.

## <a name="see-also"></a>Vedere anche

[Classe CSimpleArray](../../atl/reference/csimplearray-class.md)<br/>
[CSimpleArrayEqualHelperFalse (classe)](../../atl/reference/csimplearrayequalhelperfalse-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
