---
title: Compilatore avviso (livello 3) C4359 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4359
dev_langs:
- C++
helpviewer_keywords:
- C4359
ms.assetid: d8fe993c-ef82-45a0-a43d-c29f9d1bacdb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e97d321b0df8856aadd58f7d27f6339a5776d0f8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084159"
---
# <a name="compiler-warning-level-3-c4359"></a>Avviso del compilatore (livello 3) C4359

'type': l'allineamento effettivo (8) è maggiore del valore specificato in __declspec(align())

L'allineamento specificato per un tipo è inferiore all'allineamento del tipo di uno dei relativi membri dati.  Per altre informazioni, vedere [allineare](../../cpp/align-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4359.

```
// C4359.cpp
// compile with: /W3 /c
struct __declspec(align(8)) C8 { __int64 i; };
struct __declspec(align(4)) C4  { C8 m8; };   // C4359
struct __declspec(align(8)) C8_b  { C8 m8; };   // OK
struct __declspec(align(16)) C16  { C8 m8; };   // OK
```