---
title: Struttura space_info
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::tr2::sys::space_info
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
ms.openlocfilehash: 2a9856746a8bbc796871663a81bd8911d34dcd4a
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68457560"
---
# <a name="spaceinfo-structure"></a>Struttura space_info

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

|Name|Descrizione|
|----------|-----------------|
|`unsigned long long capacity`|Rappresenta il numero totale di byte che il volume può rappresentare.|
|`unsigned long long free`|Rappresenta il numero di byte che non vengono usati per rappresentare i dati nel volume.|
|`unsigned long long available`|Rappresenta il numero di byte disponibili per rappresentare i dati nel volume.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> filesystem

**Spazio nomi:** std::experimental::filesystem

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++))
