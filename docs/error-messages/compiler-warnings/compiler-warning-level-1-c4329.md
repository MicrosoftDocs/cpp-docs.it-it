---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4329'
title: Avviso del compilatore (livello 1) C4329
ms.date: 11/04/2016
f1_keywords:
- C4329
helpviewer_keywords:
- C4329
ms.assetid: 4316f51a-2c56-4b3f-831e-65d24b83b65c
ms.openlocfilehash: 210395694c581f7d37e1612bbdcb60e29f5e0bba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311565"
---
# <a name="compiler-warning-level-1-c4329"></a>Avviso del compilatore (livello 1) C4329

__declspec (align ()) viene ignorato nell'enumerazione

L'utilizzo della parola chiave [align](../../cpp/align-cpp.md) del modificatore [__declspec](../../cpp/declspec.md) non è consentito in un oggetto **`enum`** . L'esempio seguente genera l'C4329:

```cpp
// C4329.cpp
// compile with: /W1 /LD
enum __declspec(align(256)) TestEnum {   // C4329
   TESTVAL1,
   TESTVAL2,
   TESTVAL3
};
__declspec(align(256)) enum TestEnum1;
```
