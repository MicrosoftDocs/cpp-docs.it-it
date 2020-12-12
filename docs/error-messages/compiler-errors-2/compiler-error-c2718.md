---
description: 'Altre informazioni su: errore del compilatore C2718'
title: Errore del compilatore C2718
ms.date: 11/04/2016
f1_keywords:
- C2718
helpviewer_keywords:
- C2718
ms.assetid: 78cc71f8-c142-46fc-9aed-970635d74f0c
ms.openlocfilehash: ab0ddd8f5afa8cc72259f527d0bb8731fa4e9a5a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320785"
---
# <a name="compiler-error-c2718"></a>Errore del compilatore C2718

' parameter ': il parametro effettivo con __declspec (align (' #')) non verrà allineato

Il [](../../cpp/align-cpp.md) **`__declspec`** modificatore align non è consentito nei parametri della funzione.

L'esempio seguente genera l'C2718:

```cpp
// C2718.cpp
typedef struct __declspec(align(32)) AlignedStruct  {
   int i;
} AlignedStruct;

void f2(int i, ...);

void f4() {
   AlignedStruct as;

   f2(0, as);   // C2718, actual parameter is aligned
}
```
