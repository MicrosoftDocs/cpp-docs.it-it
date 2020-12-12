---
description: 'Altre informazioni su: errore del compilatore C3395'
title: Errore del compilatore C3395
ms.date: 11/04/2016
f1_keywords:
- C3395
helpviewer_keywords:
- C3395
ms.assetid: 26a9ebc9-ed97-47ce-b436-19aa2bcf6e50
ms.openlocfilehash: 65db71a9dbc076b21d16f3f0c250c20a9b283daa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321969"
---
# <a name="compiler-error-c3395"></a>Errore del compilatore C3395

' Function ': non è possibile applicare __declspec (dllexport) a una funzione con la \_ convenzione di chiamata _clrcall

`__declspec(dllexport)` e [__clrcall](../../cpp/clrcall.md) non sono compatibili.  Per altre informazioni, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

L'esempio seguente genera l'C3395:

```cpp
// C3395.cpp
// compile with: /clr /c

__declspec(dllexport) void __clrcall Test(){}   // C3395
void __clrcall Test2(){}   // OK
__declspec(dllexport) void Test3(){}   // OK
```
