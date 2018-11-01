---
title: Avviso del compilatore C4956
ms.date: 11/04/2016
f1_keywords:
- C4956
helpviewer_keywords:
- C4956
ms.assetid: 9154f2d1-d49f-4e07-90d2-0e9bc028011a
ms.openlocfilehash: c15de8b22f56a2555cc763a45153139b1df01a31
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50449101"
---
# <a name="compiler-warning-c4956"></a>Avviso del compilatore C4956

> «*tipo*': questo tipo non verificabile

## <a name="remarks"></a>Note

Questo avviso viene generato quando viene specificato [/clr:safe](../../build/reference/clr-common-language-runtime-compilation.md) e il codice contiene un tipo che non è verificabile. Il **/CLR: safe** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

Per altre informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [/wd](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4956:

```cpp
// C4956.cpp
// compile with: /clr:safe
int* p;   // C4956
```