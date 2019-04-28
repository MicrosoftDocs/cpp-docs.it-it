---
title: Errore del compilatore C3395
ms.date: 11/04/2016
f1_keywords:
- C3395
helpviewer_keywords:
- C3395
ms.assetid: 26a9ebc9-ed97-47ce-b436-19aa2bcf6e50
ms.openlocfilehash: 2e5234abcbe46e17035fd0b16e9816c879d86cfe
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62243050"
---
# <a name="compiler-error-c3395"></a>Errore del compilatore C3395

'function': dllexport non può essere applicato a una funzione con il \_clrcall convenzione di chiamata

`__declspec(dllexport)` e [clrcall](../../cpp/clrcall.md) non sono compatibili.  Per altre informazioni, vedere [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

L'esempio seguente genera l'errore C3395:

```
// C3395.cpp
// compile with: /clr /c

__declspec(dllexport) void __clrcall Test(){}   // C3395
void __clrcall Test2(){}   // OK
__declspec(dllexport) void Test3(){}   // OK
```