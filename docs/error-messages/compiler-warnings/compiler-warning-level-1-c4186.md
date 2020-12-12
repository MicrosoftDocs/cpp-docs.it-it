---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4186'
title: Avviso del compilatore (livello 1) C4186
ms.date: 11/04/2016
f1_keywords:
- C4186
helpviewer_keywords:
- C4186
ms.assetid: caf3f7d8-f305-426b-8d4e-2b96f5c269ea
ms.openlocfilehash: 08ab6c490c404d9dabef1d5222cd388b5db7a891
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266611"
---
# <a name="compiler-warning-level-1-c4186"></a>Avviso del compilatore (livello 1) C4186

\#per l'attributo di importazione ' attribute ' sono necessari gli argomenti count; ignorato

Un attributo `#import` ha un numero di argomenti errato.

## <a name="example"></a>Esempio

```cpp
// C4186.cpp
// compile with: /W1 /c
#import "stdole2.tlb" no_namespace("abc") rename("a","b","c")  // C4186
```

L'attributo `no_namespace` non accetta argomenti. L'attributo **rename** accetta solo due argomenti.
