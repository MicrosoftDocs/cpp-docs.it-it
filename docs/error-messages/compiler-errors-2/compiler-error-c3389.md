---
title: Errore del compilatore C3389
ms.date: 11/04/2016
f1_keywords:
- C3389
helpviewer_keywords:
- C3389
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
ms.openlocfilehash: b166096390169939f01bcb976a57612f10f7df2e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201136"
---
# <a name="compiler-error-c3389"></a>Errore del compilatore C3389

> non è possibile usare __declspec (*parola chiave*) con/CLR: pure o/CLR: safe

## <a name="remarks"></a>Osservazioni

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Un modificatore [__declspec](../../cpp/declspec.md) usato implica uno stato per processo.  [/CLR: pure](../../build/reference/clr-common-language-runtime-compilation.md) implica uno stato per [AppDomain](../../cpp/appdomain.md) .  Quindi, non è consentito dichiarare una variabile con il modificatore `keyword` **__declspec** e la compilazione con **/CLR: pure** .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3389:

```cpp
// C3389.cpp
// compile with: /clr:pure /c
__declspec(dllexport) int g2 = 0;   // C3389
```
