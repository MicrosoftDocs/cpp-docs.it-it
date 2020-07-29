---
title: Classe messages_base
ms.date: 11/04/2016
f1_keywords:
- xlocmes/std::messages_base
helpviewer_keywords:
- messages_base class
ms.assetid: 9aad38c6-4c13-445d-b096-364bd0836efb
ms.openlocfilehash: b0fe7d66842fb77c6fd03f62b012babcbc9f7f3a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215647"
---
# <a name="messages_base-class"></a>Classe messages_base

La classe base descrive un **`int`** tipo per il catalogo dei messaggi.

## <a name="syntax"></a>Sintassi

```cpp
struct messages_base : locale::facet {
    typedef int catalog;
    explicit messages_base(size_t _Refs = 0)
};
```

## <a name="remarks"></a>Osservazioni

Il catalogo dei tipi è un sinonimo del tipo **`int`** che descrive i possibili valori restituiti da messages:: [do_open](../standard-library/messages-class.md#do_open).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
