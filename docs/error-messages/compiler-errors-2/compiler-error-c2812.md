---
title: Errore del compilatore C2812
ms.date: 11/04/2016
f1_keywords:
- C2812
helpviewer_keywords:
- C2812
ms.assetid: 22aadb8c-7232-489d-a3ad-60662dda30a8
ms.openlocfilehash: cec92982646c64e6c5b669df328e4836d4f44df8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202101"
---
# <a name="compiler-error-c2812"></a>Errore del compilatore C2812

> \#importazione non è supportata con/CLR: pure e/CLR: safe

## <a name="remarks"></a>Osservazioni

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

[#import direttiva](../../preprocessor/hash-import-directive-cpp.md) non è supportata con **/CLR: pure** e **/CLR: safe** perché `#import` richiede l'uso di librerie di supporto del compilatore native.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2812.

```cpp
// C2812.cpp
// compile with: /clr:pure /c
#import "importlib.tlb"   // C2812
```
