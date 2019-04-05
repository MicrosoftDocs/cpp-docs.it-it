---
title: no_auto_exclude
ms.date: 11/04/2016
f1_keywords:
- no_auto_exclude
helpviewer_keywords:
- no_auto_exclude attribute
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
ms.openlocfilehash: 06bde7535bd181057750ab9dd4c3999321b4990c
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038942"
---
# <a name="noautoexclude"></a>no_auto_exclude
**Sezione specifica C++**

Disabilita l'esclusione automatica.

## <a name="syntax"></a>Sintassi

```
no_auto_exclude
```

## <a name="remarks"></a>Note

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. `#import` tentativi di evitare più errori di definizione escludendo automaticamente tali elementi. Quando ciò avviene [avviso del compilatore (livello 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md) non venga generato per ogni elemento da escludere. È possibile disattivare questa esclusione automatica utilizzando questo attributo.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)