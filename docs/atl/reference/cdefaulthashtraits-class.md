---
title: Classe CDefaultHashTraits
ms.date: 11/04/2016
f1_keywords:
- CDefaultHashTraits
- ATLCOLL/ATL::CDefaultHashTraits
- ATLCOLL/ATL::CDefaultHashTraits::Hash
helpviewer_keywords:
- CDefaultHashTraits class
ms.assetid: d8ec4b37-6d58-447b-a0c1-8580c5b1ab85
ms.openlocfilehash: c8896ce27afc40ad095e02a2453628ffc05900da
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466144"
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
Il tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDefaultHashTraits::Hash](#hash)|(Statico) Chiamare questa funzione per calcolare un valore hash per un determinato elemento.|

## <a name="remarks"></a>Note

Questa classe contiene una singola funzione statica che restituisce un valore hash per un determinato elemento. Questa classe viene utilizzata per la [classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md).

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="hash"></a>  CDefaultHashTraits::Hash

Chiamare questa funzione per calcolare un valore hash per un determinato elemento.

```
static ULONG Hash(const T& element) throw();
```

### <a name="parameters"></a>Parametri

*Elemento*<br/>
Elemento.

### <a name="return-value"></a>Valore restituito

Restituisce il valore hash.

### <a name="remarks"></a>Note

L'algoritmo hash predefinito è molto semplice: il valore restituito è il numero di elementi. Eseguire l'override di questa funzione se è richiesto un algoritmo più complesso.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
