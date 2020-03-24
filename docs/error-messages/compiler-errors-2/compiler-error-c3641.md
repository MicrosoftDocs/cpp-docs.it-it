---
title: Errore del compilatore C3641
ms.date: 11/04/2016
f1_keywords:
- C3641
helpviewer_keywords:
- C3641
ms.assetid: e8d3613e-5e8d-46fe-a516-eb7d1de7cd21
ms.openlocfilehash: 44356fb1a1818a02102d23e6b308457f2f39506b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200512"
---
# <a name="compiler-error-c3641"></a>Errore del compilatore C3641

> '*Function*': Convenzione di chiamata ' calling_convention ' non valida per la funzione compilata con/CLR: pure o/CLR: safe

## <a name="remarks"></a>Osservazioni

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Con [/CLR: pure](../../build/reference/clr-common-language-runtime-compilation.md)è consentita solo la convenzione di chiamata [__clrcall](../../cpp/clrcall.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3641:

```cpp
// C3641.cpp
// compile with: /clr:pure /c
void __cdecl f() {}   // C3641
```
