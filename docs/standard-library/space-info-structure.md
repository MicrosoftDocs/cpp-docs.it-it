---
title: Struttura space_info | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- filesystem/std::tr2::sys::space_info
dev_langs:
- C++
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3506572586f0dc8edc3f9e97955e7612bcea46ae
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33859186"
---
# <a name="spaceinfo-structure"></a>Struttura space_info

Contiene informazioni su un volume.

## <a name="syntax"></a>Sintassi

```cpp
struct space_info   {
    uintmax_t capacity;
    uintmax_t free;
    uintmax_t available;
    };
```

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|`unsigned long long available`|Rappresenta il numero di byte disponibili per rappresentare i dati nel volume.|
|`unsigned long long capacity`|Rappresenta il numero totale di byte che il volume può rappresentare.|
|`unsigned long long free`|Rappresenta il numero di byte che non vengono usati per rappresentare i dati nel volume.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio nomi:** std::experimental::filesystem

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
[space](http://msdn.microsoft.com/en-us/7fce0b0e-523b-4598-b218-47245d0204ca)<br/>
[Esplorazione del file system (C++)](../standard-library/file-system-navigation.md)<br/>
