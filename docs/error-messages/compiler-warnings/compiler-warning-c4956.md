---
description: 'Altre informazioni su: avviso del compilatore C4956'
title: Avviso del compilatore C4956
ms.date: 11/04/2016
f1_keywords:
- C4956
helpviewer_keywords:
- C4956
ms.assetid: 9154f2d1-d49f-4e07-90d2-0e9bc028011a
ms.openlocfilehash: 4a92c6329bf4cdd764fd7f419d8011d4dfde0202
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314841"
---
# <a name="compiler-warning-c4956"></a>Avviso del compilatore C4956

> '*Type*': tipo non verificabile

## <a name="remarks"></a>Commenti

Questo avviso viene generato quando viene specificato [/clr:safe](../../build/reference/clr-common-language-runtime-compilation.md) e il codice contiene un tipo che non è verificabile. L'opzione del compilatore **/CLR: safe** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Per altre informazioni, vedere [codice pure e verificabile (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [/wd](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4956:

```cpp
// C4956.cpp
// compile with: /clr:safe
int* p;   // C4956
```
