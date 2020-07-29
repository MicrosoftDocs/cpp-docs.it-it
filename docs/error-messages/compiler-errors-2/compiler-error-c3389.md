---
title: Errore del compilatore C3389
ms.date: 11/04/2016
f1_keywords:
- C3389
helpviewer_keywords:
- C3389
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
ms.openlocfilehash: 823b28deae3e3cfc18cdad8d37007bf8e8cff494
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221055"
---
# <a name="compiler-error-c3389"></a>Errore del compilatore C3389

> non è possibile usare __declspec (*parola chiave*) con/CLR: pure o/CLR: safe

## <a name="remarks"></a>Osservazioni

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Un modificatore [__declspec](../../cpp/declspec.md) usato implica uno stato per processo.  [/CLR: pure](../../build/reference/clr-common-language-runtime-compilation.md) implica uno stato per [AppDomain](../../cpp/appdomain.md) .  Quindi, la dichiarazione di una variabile con il `keyword` **`__declspec`** modificatore e la compilazione con **/CLR: pure** non è consentita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3389:

```cpp
// C3389.cpp
// compile with: /clr:pure /c
__declspec(dllexport) int g2 = 0;   // C3389
```
