---
title: Avviso del compilatore (livello 1) C4329
ms.date: 11/04/2016
f1_keywords:
- C4329
helpviewer_keywords:
- C4329
ms.assetid: 4316f51a-2c56-4b3f-831e-65d24b83b65c
ms.openlocfilehash: e8ef8c75a5e065f4f1679219d0d5fe57e5cfe86c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80162959"
---
# <a name="compiler-warning-level-1-c4329"></a>Avviso del compilatore (livello 1) C4329

__declspec (align ()) viene ignorato nell'enumerazione

L'uso della parola chiave [align](../../cpp/align-cpp.md) del modificatore [__declspec](../../cpp/declspec.md) non è consentito in un `enum`. L'esempio seguente genera l'C4329:

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
