---
title: Avviso del compilatore C4956 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4956
dev_langs:
- C++
helpviewer_keywords:
- C4956
ms.assetid: 9154f2d1-d49f-4e07-90d2-0e9bc028011a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: be92eb948e31a0a5367f92f5c2ed59baac2bd39b
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34703704"
---
# <a name="compiler-warning-c4956"></a>Avviso del compilatore C4956

> '*tipo*': questo tipo non verificabile

## <a name="remarks"></a>Note

Questo avviso viene generato quando viene specificato [/clr:safe](../../build/reference/clr-common-language-runtime-compilation.md) e il codice contiene un tipo che non è verificabile. Il **/CLR: safe** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [/wd](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4956:

```cpp
// C4956.cpp
// compile with: /clr:safe
int* p;   // C4956
```