---
description: 'Altre informazioni su: errore del compilatore C2812'
title: Errore del compilatore C2812
ms.date: 11/04/2016
f1_keywords:
- C2812
helpviewer_keywords:
- C2812
ms.assetid: 22aadb8c-7232-489d-a3ad-60662dda30a8
ms.openlocfilehash: d59105397ae773c2a46b04a64eb50da3055c3a4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278422"
---
# <a name="compiler-error-c2812"></a>Errore del compilatore C2812

> \#l'importazione non è supportata con/CLR: pure e/CLR: safe

## <a name="remarks"></a>Commenti

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

[#import direttiva](../../preprocessor/hash-import-directive-cpp.md) non è supportata con **/CLR: pure** e **/CLR: safe** perché `#import` richiede l'uso di librerie di supporto del compilatore native.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2812.

```cpp
// C2812.cpp
// compile with: /clr:pure /c
#import "importlib.tlb"   // C2812
```
