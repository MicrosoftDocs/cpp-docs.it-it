---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4324'
title: Avviso del compilatore (livello 4) C4324
ms.date: 11/04/2016
f1_keywords:
- C4324
helpviewer_keywords:
- C4324
ms.assetid: 420fa929-d9c0-40b4-8808-2d8ad3ca8090
ms.openlocfilehash: 96554085fa63f4a4f91b954c1f32960b19f1dc6c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294548"
---
# <a name="compiler-warning-level-4-c4324"></a>Avviso del compilatore (livello 4) C4324

' struct_name ': la struttura è stata riempita a causa della __declspec (align ())

La spaziatura interna è stata aggiunta alla fine di una struttura perché è stato specificato un valore di [__declspec (Align)](../../cpp/align-cpp.md) .

Il codice seguente, ad esempio, genera C4324:

```cpp
// C4324.cpp
// compile with: /W4
struct __declspec(align(32)) A
{
   char a;
};   // C4324

int main()
{
}
```
