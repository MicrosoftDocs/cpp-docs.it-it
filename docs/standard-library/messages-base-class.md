---
title: Classe messages_base
ms.date: 11/04/2016
f1_keywords:
- xlocmes/std::messages_base
helpviewer_keywords:
- messages_base class
ms.assetid: 9aad38c6-4c13-445d-b096-364bd0836efb
ms.openlocfilehash: 750c9f36ce7f96a065e0e29111ea379a48595328
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62167764"
---
# <a name="messagesbase-class"></a>Classe messages_base

La classe base descrive un **int** tipo per il catalogo dei messaggi.

## <a name="syntax"></a>Sintassi

```cpp
struct messages_base : locale::facet {
    typedef int catalog;
    explicit messages_base(size_t _Refs = 0)
};
```

## <a name="remarks"></a>Note

Il catalogo di tipo è sinonimo di tipo **int** che descrive i possibili valori restituiti da messages:: [do_open](../standard-library/messages-class.md#do_open).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
