---
title: Struttura space_info
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::tr2::sys::space_info
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
ms.openlocfilehash: b6998f4ac7ced2d85063186edbd47227b6d24ca5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399447"
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

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|`unsigned long long capacity`|Rappresenta il numero totale di byte che il volume può rappresentare.|
|`unsigned long long free`|Rappresenta il numero di byte che non vengono usati per rappresentare i dati nel volume.|
|`unsigned long long available`|Rappresenta il numero di byte disponibili per rappresentare i dati nel volume.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio nomi:** std::experimental::filesystem

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
[Esplorazione del file system (C++)](../standard-library/file-system-navigation.md)<br/>
