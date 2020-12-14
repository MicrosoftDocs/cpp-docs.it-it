---
description: 'Altre informazioni su: errore del compilatore C3641'
title: Errore del compilatore C3641
ms.date: 11/04/2016
f1_keywords:
- C3641
helpviewer_keywords:
- C3641
ms.assetid: e8d3613e-5e8d-46fe-a516-eb7d1de7cd21
ms.openlocfilehash: 391994a5207fe27cea0b33e6d03e5a1fdc30f6c0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239103"
---
# <a name="compiler-error-c3641"></a>Errore del compilatore C3641

> '*Function*': Convenzione di chiamata ' calling_convention ' non valida per la funzione compilata con/CLR: pure o/CLR: safe

## <a name="remarks"></a>Commenti

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Con [/CLR: pure](../../build/reference/clr-common-language-runtime-compilation.md)è consentita solo la convenzione di chiamata [__clrcall](../../cpp/clrcall.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3641:

```cpp
// C3641.cpp
// compile with: /clr:pure /c
void __cdecl f() {}   // C3641
```
