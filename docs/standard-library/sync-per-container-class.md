---
title: Classe sync_per_container
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::sync_per_container
- allocators/stdext::sync_per_container::equals
helpviewer_keywords:
- sync_per_container class
ms.assetid: 0b4b2904-b668-4d94-a422-d4f919cbffab
ms.openlocfilehash: 51a88e6ec4eca693c652635e1574e3611d7217cd
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88562103"
---
# <a name="sync_per_container-class"></a>Classe sync_per_container

Descrive un [filtro di sincronizzazione](../standard-library/allocators-header.md) che fornisce un oggetto cache separato per ogni oggetto allocatore.

## <a name="syntax"></a>Sintassi

```cpp
template <class Cache>
class sync_per_container
    : public Cache
```

### <a name="parameters"></a>Parametri

*Cache*\
Tipo di cache associato al filtro di sincronizzazione. Può essere [`cache_chunklist`](../standard-library/cache-chunklist-class.md) , [`cache_freelist`](../standard-library/cache-freelist-class.md) o [`cache_suballoc`](../standard-library/cache-suballoc-class.md) .

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[equals](#equals)|Confronta due cache per stabilirne l'uguaglianza.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="sync_per_containerequals"></a><a name="equals"></a> sync_per_container:: Equals

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync_per_container<Cache>& Other) const;
```

### <a name="parameters"></a>Parametri

*Cache*\
Oggetto cache del filtro di sincronizzazione.

*Altri*\
Oggetto cache da confrontare per verificarne l'uguaglianza.

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce sempre **`false`** .

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
