---
title: CSimpleArrayEqualHelperFalse (classe)
ms.date: 11/04/2016
f1_keywords:
- CSimpleArrayEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse::IsEqual
helpviewer_keywords:
- CSimpleArrayEqualHelperFalse class
ms.assetid: 6918af6f-d23d-49eb-8482-c44272f5ffeb
ms.openlocfilehash: 5eca3145d64895e34b599fbf83834af142b65973
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330892"
---
# <a name="csimplearrayequalhelperfalse-class"></a>CSimpleArrayEqualHelperFalse (classe)

Questa classe è un helper per la classe [CSimpleArray.](../../atl/reference/csimplearray-class.md)

## <a name="syntax"></a>Sintassi

```
template <class T>
class CSimpleArrayEqualHelperFalse
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Una classe derivata.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleArrayEqualHelperFalse::IsEqual](#isequal)|(Statico) Restituisce false.|

## <a name="remarks"></a>Osservazioni

Questa classe di tratti è `CSimpleArray` un complemento alla classe. Restituisce sempre false e, inoltre, chiamerà `ATLASSERT` con un argomento false se vi viene mai fatto riferimento. Nelle situazioni in cui il test di uguaglianza non è sufficientemente definito, questa classe consente a una matrice contenente elementi di funzionare correttamente per la maggior parte dei metodi, ma ha esito negativo in modo ben definito per i metodi che dipendono da confronti quali [CSimpleArray::Find](../../atl/reference/csimplearray-class.md#find).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll.h

## <a name="csimplearrayequalhelperfalseisequal"></a><a name="isequal"></a>CSimpleArrayEqualHelperFalse::IsEqual

Restituisce false.

```
static bool IsEqual(const T&, const T&);
```

### <a name="return-value"></a>Valore restituito

Restituisce false.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce sempre `ATLASSERT` false e chiamerà con un argomento di false se viene fatto riferimento. Lo scopo `CSimpleArrayEqualHelperFalse::IsEqual` è quello di forzare i metodi utilizzando i confronti a fallire in modo ben definito quando i test di uguaglianza non sono stati adeguatamente definiti.

## <a name="see-also"></a>Vedere anche

[CSimpleArrayEqualHelper (classe)](../../atl/reference/csimplearrayequalhelper-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
