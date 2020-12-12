---
description: 'Altre informazioni su: classe CSimpleArrayEqualHelperFalse'
title: Classe CSimpleArrayEqualHelperFalse
ms.date: 11/04/2016
f1_keywords:
- CSimpleArrayEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse::IsEqual
helpviewer_keywords:
- CSimpleArrayEqualHelperFalse class
ms.assetid: 6918af6f-d23d-49eb-8482-c44272f5ffeb
ms.openlocfilehash: 196f7873f72799408a629bc784cb343966801d79
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140725"
---
# <a name="csimplearrayequalhelperfalse-class"></a>Classe CSimpleArrayEqualHelperFalse

Questa classe è un helper per la classe [CSimpleArray](../../atl/reference/csimplearray-class.md) .

## <a name="syntax"></a>Sintassi

```
template <class T>
class CSimpleArrayEqualHelperFalse
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleArrayEqualHelperFalse:: EQUAL](#isequal)|Statico Restituisce false.|

## <a name="remarks"></a>Commenti

Questa classe di tratti è un complemento alla `CSimpleArray` classe. Restituisce sempre false e, inoltre, chiama `ATLASSERT` con un argomento di false se vi si fa riferimento. In situazioni in cui il test di uguaglianza non è sufficientemente definito, questa classe consente a una matrice contenente gli elementi di funzionare correttamente per la maggior parte dei metodi, ma ha esito negativo in modo ben definito per i metodi che dipendono da confronti come [CSimpleArray:: find](../../atl/reference/csimplearray-class.md#find).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

## <a name="csimplearrayequalhelperfalseisequal"></a><a name="isequal"></a> CSimpleArrayEqualHelperFalse:: EQUAL

Restituisce false.

```
static bool IsEqual(const T&, const T&);
```

### <a name="return-value"></a>Valore restituito

Restituisce false.

### <a name="remarks"></a>Commenti

Questo metodo restituisce sempre false e chiama `ATLASSERT` con un argomento false se si fa riferimento a. Lo scopo di `CSimpleArrayEqualHelperFalse::IsEqual` è forzare l'esecuzione di metodi che usano i confronti in modo ben definito quando i test di uguaglianza non sono stati definiti in modo adeguato.

## <a name="see-also"></a>Vedi anche

[Classe CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
