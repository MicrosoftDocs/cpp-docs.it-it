---
title: Costanti dello spazio dei nomi Concurrency (AMP)
ms.date: 11/04/2016
f1_keywords:
- amp/Concurrency::HLSL_MAX_NUM_BUFFERS
- amp/Concurrency::MODULENAME_MAX_LENGTH
ms.assetid: 13a8e8cd-2eec-4e60-a91d-5d271072747b
ms.openlocfilehash: 2d304728f5bdca8f4bfb39cdb26baad984e63097
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79419266"
---
# <a name="concurrency-namespace-constants-amp"></a>Costanti dello spazio dei nomi Concurrency (AMP)

|||
|-|-|
|[HLSL_MAX_NUM_BUFFERS](#hlsl_max_num_buffers)|[MODULENAME_MAX_LENGTH](#modulename_max_length)|

## <a name="hlsl_max_num_buffers"></a>Costante HLSL_MAX_NUM_BUFFERS

Numero massimo di buffer consentiti da DirectX.

```cpp
static const UINT HLSL_MAX_NUM_BUFFERS = 64 + 128;
```

## <a name="modulename_max_length"></a>Costante MODULENAME_MAX_LENGTH

Archivia la lunghezza massima del nome del modulo. Questo valore deve essere lo stesso per il compilatore e il Runtime.

```cpp
static const UINT MODULENAME_MAX_LENGTH = 1024;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
