---
title: Errore del compilatore C2812
ms.date: 11/04/2016
f1_keywords:
- C2812
helpviewer_keywords:
- C2812
ms.assetid: 22aadb8c-7232-489d-a3ad-60662dda30a8
ms.openlocfilehash: 88b071f38cf41db9c929d25ffd526b3f2b7ca468
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50531820"
---
# <a name="compiler-error-c2812"></a>Errore del compilatore C2812

> \#importazione non è supportata con /clr: pure e /CLR: safe

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

[direttiva #import](../../preprocessor/hash-import-directive-cpp.md) non è supportato con **/clr: pure** e **/CLR: safe** perché `#import` richiede l'uso di librerie di supporto del compilatore nativo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2812.

```cpp
// C2812.cpp
// compile with: /clr:pure /c
#import "importlib.tlb"   // C2812
```