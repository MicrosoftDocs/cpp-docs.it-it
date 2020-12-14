---
description: 'Altre informazioni su: errore del compilatore C2495'
title: Errore del compilatore C2495
ms.date: 11/04/2016
f1_keywords:
- C2495
helpviewer_keywords:
- C2495
ms.assetid: bb7066fe-3549-4901-97e4-157f3c04dd57
ms.openlocfilehash: 03f7102cff8b41415c1d845595bb443717cffd43
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283629"
---
# <a name="compiler-error-c2495"></a>Errore del compilatore C2495

' Identifier ':' nothrow ' può essere applicato solo a dichiarazioni o definizioni di funzione

L'attributo esteso [nothrow](../../cpp/nothrow-cpp.md) può essere applicato solo a dichiarazioni o definizioni di funzione.

L'esempio seguente genera l'C2495:

```cpp
// C2495.cpp
// compile with: /c
__declspec(nothrow) class X {   // C2495
   int m_data;
} x;

__declspec(nothrow) void test();   // OK
```
