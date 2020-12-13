---
description: 'Altre informazioni su: classe CDefaultHashTraits'
title: Classe CDefaultHashTraits
ms.date: 11/04/2016
f1_keywords:
- CDefaultHashTraits
- ATLCOLL/ATL::CDefaultHashTraits
- ATLCOLL/ATL::CDefaultHashTraits::Hash
helpviewer_keywords:
- CDefaultHashTraits class
ms.assetid: d8ec4b37-6d58-447b-a0c1-8580c5b1ab85
ms.openlocfilehash: 85cc881466be03931d435d91a48548456d74305b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141882"
---
# <a name="cdefaulthashtraits-class"></a>Classe CDefaultHashTraits

Questa classe fornisce una funzione statica per il calcolo dei valori hash.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CDefaultHashTraits
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDefaultHashTraits:: hash](#hash)|Statico Chiamare questa funzione per calcolare un valore hash per un determinato elemento.|

## <a name="remarks"></a>Commenti

Questa classe contiene una singola funzione statica che restituisce un valore hash per un determinato elemento. Questa classe viene utilizzata dalla [classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md).

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cdefaulthashtraitshash"></a><a name="hash"></a> CDefaultHashTraits:: hash

Chiamare questa funzione per calcolare un valore hash per un determinato elemento.

```
static ULONG Hash(const T& element) throw();
```

### <a name="parameters"></a>Parametri

*elemento*<br/>
Elemento.

### <a name="return-value"></a>Valore restituito

Restituisce il valore hash.

### <a name="remarks"></a>Commenti

L'algoritmo hash predefinito è molto semplice: il valore restituito è il numero dell'elemento. Eseguire l'override di questa funzione se è necessario un algoritmo più complesso.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
