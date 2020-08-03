---
title: Errore del compilatore C3389
ms.date: 11/04/2016
f1_keywords:
- C3389
helpviewer_keywords:
- C3389
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
ms.openlocfilehash: 8a040e649074e115b1b86ea56db6c9ef48f4c0d0
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520473"
---
# <a name="compiler-error-c3389"></a>Errore del compilatore C3389

> non è possibile usare __declspec (*parola chiave*) con/CLR: pure o/CLR: safe

## <a name="remarks"></a>Commenti

Le **`/clr:pure`** **`/clr:safe`** Opzioni del compilatore e sono deprecate in visual studio 2015 e non sono supportate in visual studio 2017.

Un [`__declspec`](../../cpp/declspec.md) modificatore usato implica uno stato per processo.  [`/clr:pure`](../../build/reference/clr-common-language-runtime-compilation.md)implica uno per [`appdomain`](../../cpp/appdomain.md) stato.  Quindi, la dichiarazione di una variabile con il modificatore di *parole chiave* **`__declspec`** e la compilazione con **`/clr:pure`** non è consentita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3389:

```cpp
// C3389.cpp
// compile with: /clr:pure /c
__declspec(dllexport) int g2 = 0;   // C3389
```
