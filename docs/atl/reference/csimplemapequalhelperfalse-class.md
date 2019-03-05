---
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
ms.openlocfilehash: 9c4241049ad323047f06c0b29f946521f2c02167
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57268902"
---
# <a name="csimplemapequalhelperfalse-class"></a>Classe CSimpleMapEqualHelperFalse

Questa classe è un supporto per la [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.

## <a name="syntax"></a>Sintassi

```
template <class TKey, class TVal>
class CSimpleMapEqualHelperFalse
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleMapEqualHelperFalse::IsEqualKey](#isequalkey)|(Statico) Verifica l'uguaglianza delle due chiavi.|
|[CSimpleMapEqualHelperFalse::IsEqualValue](#isequalvalue)|(Statico) Restituisce false.|

## <a name="remarks"></a>Note

Questa classe traits costituisce un'integrazione di `CSimpleMap` classe. Fornisce un metodo per il confronto di due elementi contenuti nel `CSimpleMap` oggetto, in particolare due elementi di valore o due elementi principali.

Restituisce sempre false, il confronto dei valori e, inoltre, chiamerà `ATLASSERT` con un argomento di false se vi è mai fatto riferimento. In situazioni in cui il test di uguaglianza non è sufficientemente definito, questa classe consente a una mappa contenente le coppie chiave/valore per funzionare correttamente per la maggior parte dei metodi, ma negativo in modo ben definito per i metodi che dipendono da confronti, ad esempio [CSimpleMap:: FindVal](../../atl/reference/csimplemap-class.md#findval).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

##  <a name="isequalkey"></a>  CSimpleMapEqualHelperFalse::IsEqualKey

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

### <a name="remarks"></a>Note

Questo metodo chiama [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md).

##  <a name="isequalvalue"></a>  CSimpleMapEqualHelperFalse::IsEqualValue

Restituisce false.

```
static bool IsEqualValue(const TVal&, const TVal&);
```

### <a name="return-value"></a>Valore restituito

Restituisce false.

### <a name="remarks"></a>Note

Questo metodo sempre restituisce false e chiamerà `ATLASSERT` con un argomento di false se vi è mai fatto riferimento. Lo scopo di `CSimpleMapEqualHelperFalse::IsEqualValue` consiste nel forzare metodi mediante i confronti esito negativo in modalità ben definite quando i test di uguaglianza non sono stati definiti in modo adeguato.

## <a name="see-also"></a>Vedere anche

[Classe CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
