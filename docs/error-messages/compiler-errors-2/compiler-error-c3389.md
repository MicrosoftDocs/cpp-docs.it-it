---
description: 'Altre informazioni su: errore del compilatore C3389'
title: Errore del compilatore C3389
ms.date: 11/04/2016
f1_keywords:
- C3389
helpviewer_keywords:
- C3389
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
ms.openlocfilehash: b9fedf0993738d054cd5ded605d96001b3db13eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285500"
---
# <a name="compiler-error-c3389"></a>Errore del compilatore C3389

> non è possibile usare __declspec (*parola chiave*) con/CLR: pure o/CLR: safe

## <a name="remarks"></a>Commenti

Le **`/clr:pure`** **`/clr:safe`** Opzioni del compilatore e sono deprecate in visual studio 2015 e non sono supportate in visual studio 2017.

Un [`__declspec`](../../cpp/declspec.md) modificatore usato implica uno stato per processo.  [`/clr:pure`](../../build/reference/clr-common-language-runtime-compilation.md) implica uno per [`appdomain`](../../cpp/appdomain.md) stato.  Quindi, la dichiarazione di una variabile con il modificatore di *parole chiave* **`__declspec`** e la compilazione con **`/clr:pure`** non è consentita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3389:

```cpp
// C3389.cpp
// compile with: /clr:pure /c
__declspec(dllexport) int g2 = 0;   // C3389
```
