---
description: 'Altre informazioni su: classe CSimpleArrayEqualHelper'
title: Classe CSimpleArrayEqualHelper
ms.date: 11/04/2016
f1_keywords:
- CSimpleArrayEqualHelper
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper::IsEqual
helpviewer_keywords:
- CSimpleArrayEqualHelper class
ms.assetid: a2b55d89-78c9-42ef-842c-5304c6d20ad6
ms.openlocfilehash: e1a5fd3eea5fd6ef7563febc662c5a7a1bc639c5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140764"
---
# <a name="csimplearrayequalhelper-class"></a>Classe CSimpleArrayEqualHelper

Questa classe è un helper per la classe [CSimpleArray](../../atl/reference/csimplearray-class.md) .

## <a name="syntax"></a>Sintassi

```
template <class T>
class CSimpleArrayEqualHelper
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleArrayEqualHelper:: EQUAL](#isequal)|Statico Verifica l' `CSimpleArray` uguaglianza di due elementi oggetto.|

## <a name="remarks"></a>Commenti

Questa classe di tratti è un supplemento alla `CSimpleArray` classe. Fornisce un metodo per confrontare due elementi archiviati in un `CSimpleArray` oggetto. Per impostazione predefinita, gli elementi vengono confrontati utilizzando **operator = ()**, ma se la matrice contiene tipi di dati complessi che non dispongono di un proprio operatore di uguaglianza, sarà necessario eseguire l'override di questa classe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

## <a name="csimplearrayequalhelperisequal"></a><a name="isequal"></a> CSimpleArrayEqualHelper:: EQUAL

Verifica l' `CSimpleArray` uguaglianza di due elementi oggetto.

```
static bool IsEqual(
    const T& t1,
    const T& t2);
```

### <a name="parameters"></a>Parametri

*T1*<br/>
Oggetto di tipo T.

*T2*<br/>
Oggetto di tipo T.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali; in caso contrario, false.

## <a name="see-also"></a>Vedi anche

[Classe CSimpleArray](../../atl/reference/csimplearray-class.md)<br/>
[Classe CSimpleArrayEqualHelperFalse](../../atl/reference/csimplearrayequalhelperfalse-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
