---
title: no_implementation
ms.date: 11/04/2016
f1_keywords:
- no_implementation
helpviewer_keywords:
- no_implementation attribute
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
ms.openlocfilehash: 26527ca69c66c73f5d41084dc42df5faa34481d3
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
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

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)