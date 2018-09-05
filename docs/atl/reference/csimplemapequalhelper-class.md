---
title: Classe CSimpleMapEqualHelper | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CSimpleMapEqualHelper
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualKey
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualValue
dev_langs:
- C++
helpviewer_keywords:
- CSimpleMapEqualHelper class
ms.assetid: 9bb2968a-d609-405c-8272-ff3b42df6164
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1670ff7ed53d05b1dfc09e6953650892b0335f61
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43761469"
---
# <a name="csimplemapequalhelper-class"></a>Classe CSimpleMapEqualHelper

Questa classe è un supporto per la [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.

## <a name="syntax"></a>Sintassi

```
template <class TKey, class TVal>  
class CSimpleMapEqualHelper
```

#### <a name="parameters"></a>Parametri

*TKey*  
L'elemento principale.

*TVal*  
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

*K1*  
La prima chiave.

*K2*  
La seconda chiave.

### <a name="return-value"></a>Valore restituito

Restituisce true se le chiavi sono uguali e false in caso contrario.

##  <a name="isequalvalue"></a>  CSimpleMapEqualHelper::IsEqualValue

Verifica l'uguaglianza di due valori.

```
static bool IsEqualValue(const TVal& v1, const TVal& v2);
```

### <a name="parameters"></a>Parametri

*V1*  
Primo valore.

*v2*  
Secondo valore.

### <a name="return-value"></a>Valore restituito

Restituisce true se i valori sono uguali e false in caso contrario.

## <a name="see-also"></a>Vedere anche

[Classe CSimpleMapEqualHelperFalse](../../atl/reference/csimplemapequalhelperfalse-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)
