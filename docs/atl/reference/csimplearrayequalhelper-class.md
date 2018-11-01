---
title: Classe CSimpleArrayEqualHelper
ms.date: 11/04/2016
f1_keywords:
- CSimpleArrayEqualHelper
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper::IsEqual
helpviewer_keywords:
- CSimpleArrayEqualHelper class
ms.assetid: a2b55d89-78c9-42ef-842c-5304c6d20ad6
ms.openlocfilehash: e677a5d12918649597db9614b965118f8d6b7da6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50656223"
---
# <a name="csimplearrayequalhelper-class"></a>Classe CSimpleArrayEqualHelper

Questa classe è un supporto per la [CSimpleArray](../../atl/reference/csimplearray-class.md) classe.

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
|[CSimpleArrayEqualHelper::IsEqual](#isequal)|(Statico) Verifica due `CSimpleArray` l'uguaglianza degli elementi dell'oggetto.|

## <a name="remarks"></a>Note

Questa classe traits costituisce un'integrazione di `CSimpleArray` classe. Fornisce un metodo per confrontare due elementi archiviati in un `CSimpleArray` oggetto. Per impostazione predefinita, gli elementi vengono confrontati utilizzando **operator=()**, ma se la matrice contiene tipi di dati complessi che non dispongono di propri operatore di uguaglianza, è necessario eseguire l'override di questa classe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

##  <a name="isequal"></a>  CSimpleArrayEqualHelper::IsEqual

Verifica due `CSimpleArray` l'uguaglianza degli elementi dell'oggetto.

```
static bool IsEqual(
    const T& t1,
    const T& t2);
```

### <a name="parameters"></a>Parametri

*T1*<br/>
Un oggetto di tipo T.

*T2*<br/>
Un oggetto di tipo T.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali e false in caso contrario.

## <a name="see-also"></a>Vedere anche

[Classe CSimpleArray](../../atl/reference/csimplearray-class.md)<br/>
[Classe CSimpleArrayEqualHelperFalse](../../atl/reference/csimplearrayequalhelperfalse-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
