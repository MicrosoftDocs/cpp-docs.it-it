---
title: _SCL_SECURE_NO_WARNINGS
ms.date: 11/04/2016
f1_keywords:
- _SCL_SECURE_NO_DEPRECATE
- _SCL_SECURE_NO_WARNINGS
helpviewer_keywords:
- _SCL_SECURE_NO_DEPRECATE
- _SCL_SECURE_NO_WARNINGS
ms.assetid: ef0ddea9-7c62-4b53-8b64-5f4fd369776f
ms.openlocfilehash: d19d47fe7120301740e1431765fc6edbeaa48c60
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68448202"
---
# <a name="sclsecurenowarnings"></a>_SCL_SECURE_NO_WARNINGS

La C++ chiamata di uno dei metodi potenzialmente non sicuri nella libreria standard restituisce un [Avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Per disabilitare questo avviso, definire la macro _SCL_SECURE_NO_WARNINGS nel codice:

```cpp
#define _SCL_SECURE_NO_WARNINGS
```

Se si usano le intestazioni precompilate, inserire questa direttiva nel file di intestazione precompilata prima di includere qualsiasi libreria di runtime C o intestazioni della libreria standard. Se lo si inserisce in un singolo file di codice sorgente prima di includere il file di intestazione precompilata, questo viene ignorato dal compilatore.

## <a name="remarks"></a>Note

Gli altri modi per disabilitare l'avviso C4996 includono:

- L'uso dell'opzione del compilatore [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md):

   > CL/D_SCL_SECURE_NO_WARNINGS [altre opzioni del compilatore] MyFile. cpp

- L'uso dell'opzione del compilatore [/w](../build/reference/compiler-option-warning-level.md):

   > CL/wd4996 [altre opzioni del compilatore] MyFile. cpp

- L'uso di una direttiva [#pragma warning](../preprocessor/warning.md):

   ```cpp
   #pragma warning(disable:4996)
   ```

È anche possibile modificare manualmente il livello dell'avviso C4996 tramite l'opzione del compilatore **/w\<l >\<n >** . Ad esempio, per impostare l'avviso C4996 sul livello 4:

> CL/w44996 [altre opzioni del compilatore] MyFile. cpp

Per altre informazioni, vedere [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Livello di avviso)](../build/reference/compiler-option-warning-level.md).

## <a name="see-also"></a>Vedere anche

[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)
