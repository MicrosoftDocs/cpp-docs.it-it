---
description: 'Altre informazioni su: _SCL_SECURE_NO_WARNINGS'
title: _SCL_SECURE_NO_WARNINGS
ms.date: 11/04/2016
f1_keywords:
- _SCL_SECURE_NO_DEPRECATE
- _SCL_SECURE_NO_WARNINGS
helpviewer_keywords:
- _SCL_SECURE_NO_DEPRECATE
- _SCL_SECURE_NO_WARNINGS
ms.assetid: ef0ddea9-7c62-4b53-8b64-5f4fd369776f
ms.openlocfilehash: 383aeed0bdedc4830076248100c8cf0a1acf34b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187923"
---
# <a name="_scl_secure_no_warnings"></a>_SCL_SECURE_NO_WARNINGS

La chiamata di uno dei metodi potenzialmente non sicuri nella libreria standard C++ genera un [Avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Per disabilitare questo avviso, definire la macro _SCL_SECURE_NO_WARNINGS nel codice:

```cpp
#define _SCL_SECURE_NO_WARNINGS
```

Se si usano le intestazioni precompilate, inserire questa direttiva nel file di intestazione precompilata prima di includere qualsiasi libreria di runtime C o intestazioni della libreria standard. Se lo si inserisce in un singolo file di codice sorgente prima di includere il file di intestazione precompilata, questo viene ignorato dal compilatore.

## <a name="remarks"></a>Commenti

Gli altri modi per disabilitare l'avviso C4996 includono:

- L'uso dell'opzione del compilatore [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md):

   > CL/D_SCL_SECURE_NO_WARNINGS [altre opzioni del compilatore] MyFile. cpp

- L'uso dell'opzione del compilatore [/w](../build/reference/compiler-option-warning-level.md):

   > CL/wd4996 [altre opzioni del compilatore] MyFile. cpp

- L'uso di una direttiva [#pragma warning](../preprocessor/warning.md):

   ```cpp
   #pragma warning(disable:4996)
   ```

È anche possibile modificare manualmente il livello di avviso C4996 con l'opzione del compilatore **/w \<l> \<n>** . Ad esempio, per impostare l'avviso C4996 sul livello 4:

> CL/w44996 [altre opzioni del compilatore] MyFile. cpp

Per altre informazioni, vedere [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Livello di avviso)](../build/reference/compiler-option-warning-level.md).

## <a name="see-also"></a>Vedi anche

[Librerie sicure: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)
