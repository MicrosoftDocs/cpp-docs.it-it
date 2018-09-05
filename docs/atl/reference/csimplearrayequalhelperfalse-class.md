---
title: Classe CSimpleArrayEqualHelperFalse | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CSimpleArrayEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse::IsEqual
dev_langs:
- C++
helpviewer_keywords:
- CSimpleArrayEqualHelperFalse class
ms.assetid: 6918af6f-d23d-49eb-8482-c44272f5ffeb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 74bc3326c50f1b460fc212074b7ca34dec518c76
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43765635"
---
# <a name="csimplearrayequalhelperfalse-class"></a>Classe CSimpleArrayEqualHelperFalse

Questa classe è un supporto per la [CSimpleArray](../../atl/reference/csimplearray-class.md) classe.

## <a name="syntax"></a>Sintassi

```
template <class T>  
class CSimpleArrayEqualHelperFalse
```

#### <a name="parameters"></a>Parametri

*T*  
Una classe derivata.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleArrayEqualHelperFalse::IsEqual](#isequal)|(Statico) Restituisce false.|

## <a name="remarks"></a>Note

Questa classe traits è un complemento di `CSimpleArray` classe. IT sempre restituisce false e, inoltre, verranno chiamata `ATLASSERT` con un argomento di false se vi è mai fatto riferimento. In situazioni in cui il test di uguaglianza non è sufficientemente definito, questa classe consente a una matrice contenente gli elementi per funzionare correttamente per la maggior parte dei metodi, ma negativo in modo ben definito per i metodi che dipendono da confronti, ad esempio [CSimpleArray:: Trovare](../../atl/reference/csimplearray-class.md#find).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

##  <a name="isequal"></a>  CSimpleArrayEqualHelperFalse::IsEqual

Restituisce false.

```
static bool IsEqual(const T&, const T&);
```

### <a name="return-value"></a>Valore restituito

Restituisce false.

### <a name="remarks"></a>Note

Questo metodo sempre restituisce false e chiamerà `ATLASSERT` con un argomento di false se viene fatto riferimento. Lo scopo di `CSimpleArrayEqualHelperFalse::IsEqual` consiste nel forzare metodi mediante i confronti esito negativo in modalità ben definite quando i test di uguaglianza non sono stati definiti in modo adeguato.

## <a name="see-also"></a>Vedere anche

[Classe CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)
