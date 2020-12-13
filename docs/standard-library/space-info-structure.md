---
description: 'Altre informazioni su: struttura space_info'
title: Struttura space_info
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::tr2::sys::space_info
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
ms.openlocfilehash: 254866a0eb225b4ed7bcfe4e06a734c5c9d0e3ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153876"
---
# <a name="space_info-structure"></a>Struttura space_info

Contiene informazioni su un volume.

## <a name="syntax"></a>Sintassi

```cpp
struct space_info
{
    uintmax_t capacity;
    uintmax_t free;
    uintmax_t available;
};
```

## <a name="members"></a>Members

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|`unsigned long long capacity`|Rappresenta il numero totale di byte che il volume può rappresentare.|
|`unsigned long long free`|Rappresenta il numero di byte che non vengono usati per rappresentare i dati nel volume.|
|`unsigned long long available`|Rappresenta il numero di byte disponibili per rappresentare i dati nel volume.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<filesystem>

**Spazio dei nomi:** std::experimental::filesystem

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++))
