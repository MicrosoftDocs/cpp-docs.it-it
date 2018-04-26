---
title: _SCL_SECURE_NO_WARNINGS | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- _SCL_SECURE_NO_DEPRECATE
- _SCL_SECURE_NO_WARNINGS
dev_langs:
- C++
helpviewer_keywords:
- _SCL_SECURE_NO_DEPRECATE
- _SCL_SECURE_NO_WARNINGS
ms.assetid: ef0ddea9-7c62-4b53-8b64-5f4fd369776f
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5dec19d4c7d6f1def451f7f11588f303961cc5c0
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="sclsecurenowarnings"></a>_SCL_SECURE_NO_WARNINGS

La chiamata a uno dei metodi potenzialmente non sicuri nella libreria Standard C++ determina [avviso del compilatore (livello 3) l'avviso C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Per disabilitare questo avviso, definire la macro **_SCL_SECURE_NO_WARNINGS** nel codice:

```cpp
#define _SCL_SECURE_NO_WARNINGS
```

Se si utilizzano le intestazioni precompilate, inserire questa direttiva nel file di intestazione precompilata prima di includere qualsiasi libreria di runtime C o delle intestazioni della libreria standard. Se viene inserita in un file del codice sorgente singoli prima di includere il file di intestazione precompilata, viene ignorato dal compilatore.

## <a name="remarks"></a>Note

Gli altri modi per disabilitare l'avviso C4996 includono:

- L'uso dell'opzione del compilatore [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md):

   > CL MyFile /D_SCL_SECURE_NO_WARNINGS [altre opzioni del compilatore]

- L'uso dell'opzione del compilatore [/w](../build/reference/compiler-option-warning-level.md):

   > CL /wd4996 [altre opzioni del compilatore] MyFile

- L'uso di una direttiva [#pragma warning](../preprocessor/warning.md):

   ```cpp
   #pragma warning(disable:4996)
   ```

È anche possibile modificare manualmente il livello dell'avviso C4996 tramite l'opzione del compilatore **/w\<l >\<n >**. Ad esempio, per impostare l'avviso C4996 sul livello 4:

> CL /w44996 [altre opzioni del compilatore] MyFile

Per altre informazioni, vedere [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Livello di avviso)](../build/reference/compiler-option-warning-level.md).

## <a name="see-also"></a>Vedere anche

[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)<br/>
