---
title: Classe sync_per_container
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::sync_per_container
- allocators/stdext::sync_per_container::equals
helpviewer_keywords:
- sync_per_container class
ms.assetid: 0b4b2904-b668-4d94-a422-d4f919cbffab
ms.openlocfilehash: 378451ac2643d62271fd9e7fa44706a84ee8bb83
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68450285"
---
# <a name="syncpercontainer-class"></a>Classe sync_per_container

Descrive un [filtro di sincronizzazione](../standard-library/allocators-header.md) che fornisce un oggetto cache separato per ogni oggetto allocatore.

## <a name="syntax"></a>Sintassi

```cpp
template <class Cache>
class sync_per_container
    : public Cache
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Cache*|Tipo di cache associato al filtro di sincronizzazione. Può essere [cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md) o [cache_suballoc](../standard-library/cache-suballoc-class.md).|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[equals](#equals)|Confronta due cache per stabilirne l'uguaglianza.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="equals"></a>  sync_per_container::equals

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync_per_container<Cache>& Other) const;
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*Cache*|Oggetto cache del filtro di sincronizzazione.|
|*Altro*|Oggetto cache da confrontare per verificarne l'uguaglianza.|

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce sempre **false**.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
