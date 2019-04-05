---
title: no_implementation
ms.date: 11/04/2016
f1_keywords:
- no_implementation
helpviewer_keywords:
- no_implementation attribute
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
ms.openlocfilehash: 26527ca69c66c73f5d41084dc42df5faa34481d3
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030541"
---
# <a name="noimplementation"></a>no_implementation
**Sezione specifica C++**

Elimina la generazione dell'intestazione con estensione tli, contenente implementazioni delle funzioni membro wrapper.

## <a name="syntax"></a>Sintassi

```
no_implementation
```

## <a name="remarks"></a>Note

Se viene specificato questo attributo, l'intestazione con estensione tlh, con le dichiarazioni per esporre gli elementi libreria-tipo, verrà generata senza un'istruzione `#include` per includere il file di intestazione con estensione tli.

Questo attributo viene usato in combinazione con [implementation_only](../preprocessor/implementation-only.md).

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)